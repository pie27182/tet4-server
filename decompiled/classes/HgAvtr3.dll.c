// Module: HgAvtr3.dll
// ImageBase: 60500000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- CAvtrIdConv @ 60501000 size=16 ---- */

/* public: __thiscall CAvtrIdConv::CAvtrIdConv(void) */

CAvtrIdConv * __thiscall CAvtrIdConv::CAvtrIdConv(CAvtrIdConv *this)

{
                    /* 0x1000  6  ??0CAvtrIdConv@@QAE@XZ */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20));
  return this;
}



/* ---- ~CAvtrIdConv @ 60501010 size=9 ---- */

/* public: __thiscall CAvtrIdConv::~CAvtrIdConv(void) */

void __thiscall CAvtrIdConv::~CAvtrIdConv(CAvtrIdConv *this)

{
                    /* 0x1010  27  ??1CAvtrIdConv@@QAE@XZ */
                    /* WARNING: Could not recover jumptable at 0x60501013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20));
  return;
}



/* ---- CAvtrIdConv @ 60501020 size=43 ---- */

/* public: __thiscall CAvtrIdConv::CAvtrIdConv(class CAvtrIdConv const &) */

CAvtrIdConv * __thiscall CAvtrIdConv::CAvtrIdConv(CAvtrIdConv *this,CAvtrIdConv *param_1)

{
  int iVar1;
  CAvtrIdConv *pCVar2;
  CAvtrIdConv *pCVar3;
  
  pCVar2 = param_1;
  pCVar3 = this;
                    /* 0x1020  5  ??0CAvtrIdConv@@QAE@ABV0@@Z */
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined2 *)pCVar3 = *(undefined2 *)pCVar2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x20));
  return this;
}



/* ---- operator= @ 60501050 size=52 ---- */

/* public: class CAvtrIdConv & __thiscall CAvtrIdConv::operator=(class CAvtrIdConv const &) */

CAvtrIdConv * __thiscall CAvtrIdConv::operator=(CAvtrIdConv *this,CAvtrIdConv *param_1)

{
  CAvtrIdConv *pCVar1;
  int iVar2;
  
                    /* 0x1050  40  ??4CAvtrIdConv@@QAEAAV0@ABV0@@Z */
  iVar2 = 0x1e;
  pCVar1 = this;
  do {
    *pCVar1 = pCVar1[(int)param_1 - (int)this];
    pCVar1 = pCVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x20));
  return this;
}



/* ---- Conv @ 60501090 size=712 ---- */

/* public: bool __thiscall CAvtrIdConv::Conv(void) */

bool __thiscall CAvtrIdConv::Conv(CAvtrIdConv *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  int local_50 [2];
  vector<char,std::allocator<char>_> local_48 [12];
  int local_3c;
  int local_38;
  undefined4 local_30 [7];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x1090  66  ?Conv@CAvtrIdConv@@QAE_NXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_605175c4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_60508380((int *)local_48);
  local_c = 0;
  if (*this == (CAvtrIdConv)0x4e) {
    iVar1 = LC(this);
    local_c._0_1_ = 1;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    Append(this,local_48);
    iVar1 = HC(this);
    local_c._0_1_ = 2;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    Append(this,local_48);
    iVar1 = Face(this);
    local_c._0_1_ = 3;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    Append(this,local_48);
    iVar1 = Hair(this);
    local_c._0_1_ = 4;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    Append(this,local_48);
    iVar1 = AC(this,(int)local_30);
    local_c._0_1_ = 5;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    if (local_38 != local_3c) {
      Append(this,local_48);
    }
    iVar1 = AC(this,(int)local_30);
    local_c._0_1_ = 6;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    if (local_38 != local_3c) {
      Append(this,local_48);
    }
    iVar1 = AC(this,(int)local_30);
    local_c._0_1_ = 7;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    if (local_38 != local_3c) {
      Append(this,local_48);
    }
    iVar1 = AC(this,(int)local_30);
    local_c._0_1_ = 8;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
    if (local_38 == local_3c) goto LAB_605012da;
  }
  else {
    iVar1 = Set(this);
    local_c._0_1_ = 9;
    FUN_60501ab0(iVar1);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_60501a40(local_30);
  }
  Append(this,local_48);
LAB_605012da:
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20);
  puVar2 = (undefined4 *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(this_00);
  puVar3 = (undefined4 *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(this_00);
  puVar4 = (undefined4 *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(this_00);
  FUN_605020f0(local_50,tolower_exref,*puVar4,(char *)puVar4[1],*puVar3,(char *)puVar3[1],*puVar2,
               puVar2[1]);
  local_c = 0xffffffff;
  FUN_60501a40((undefined4 *)local_48);
  ExceptionList = local_14;
  return true;
}



/* ---- Append @ 60501360 size=168 ---- */

/* protected: void __thiscall CAvtrIdConv::Append(class std::vector<char,class std::allocator<char>
   > &) */

void __thiscall CAvtrIdConv::Append(CAvtrIdConv *this,vector<char,std::allocator<char>_> *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
                    /* 0x1360  58
                       ?Append@CAvtrIdConv@@IAEXAAV?$vector@DV?$allocator@D@std@@@std@@@Z */
  pcVar4 = *(char **)(param_1 + 0xc);
  if (*(char **)(param_1 + 0x10) < pcVar4) {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)param_1;
  while( true ) {
    pcVar2 = *(char **)(param_1 + 0x10);
    if (pcVar2 < *(char **)(param_1 + 0xc)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)param_1)) {
      _invalid_parameter_noinfo();
    }
    if (pcVar4 == pcVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(char **)(iVar3 + 0x10) <= pcVar4) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20),1,
               *pcVar4);
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(char **)(iVar3 + 0x10) <= pcVar4) {
      _invalid_parameter_noinfo();
    }
    pcVar4 = pcVar4 + 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20),1,'_')
  ;
  return;
}



/* ---- Hair @ 60501410 size=226 ---- */

/* protected: class std::vector<char,class std::allocator<char> > __thiscall CAvtrIdConv::Hair(void)
    */

int * __thiscall CAvtrIdConv::Hair(CAvtrIdConv *this)

{
  int *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1410  164  ?Hair@CAvtrIdConv@@IAE?AV?$vector@DV?$allocator@D@std@@@std@@XZ
                        */
  puStack_8 = &LAB_6051753a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60508380(in_stack_00000004);
  local_4 = 0;
  FUN_60501bb0(5);
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- Face @ 60501500 size=220 ---- */

/* protected: class std::vector<char,class std::allocator<char> > __thiscall CAvtrIdConv::Face(void)
    */

int * __thiscall CAvtrIdConv::Face(CAvtrIdConv *this)

{
  int *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1500  130  ?Face@CAvtrIdConv@@IAE?AV?$vector@DV?$allocator@D@std@@@std@@XZ
                        */
  puStack_8 = &LAB_6051753a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60508380(in_stack_00000004);
  local_4 = 0;
  FUN_60501bb0(7);
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- HC @ 605015e0 size=210 ---- */

/* protected: class std::vector<char,class std::allocator<char> > __thiscall CAvtrIdConv::HC(void)
    */

int * __thiscall CAvtrIdConv::HC(CAvtrIdConv *this)

{
  int *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15e0  163  ?HC@CAvtrIdConv@@IAE?AV?$vector@DV?$allocator@D@std@@@std@@XZ */
  puStack_8 = &LAB_6051753a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60508380(in_stack_00000004);
  local_4 = 0;
  FUN_60501bb0(6);
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- LC @ 605016c0 size=210 ---- */

/* protected: class std::vector<char,class std::allocator<char> > __thiscall CAvtrIdConv::LC(void)
    */

int * __thiscall CAvtrIdConv::LC(CAvtrIdConv *this)

{
  int *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x16c0  184  ?LC@CAvtrIdConv@@IAE?AV?$vector@DV?$allocator@D@std@@@std@@XZ */
  puStack_8 = &LAB_6051753a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60508380(in_stack_00000004);
  local_4 = 0;
  FUN_60501bb0(6);
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- AC @ 605017a0 size=318 ---- */

/* protected: class std::vector<char,class std::allocator<char> > __thiscall CAvtrIdConv::AC(int) */

int __thiscall CAvtrIdConv::AC(CAvtrIdConv *this,int param_1)

{
  int in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x17a0  52  ?AC@CAvtrIdConv@@IAE?AV?$vector@DV?$allocator@D@std@@@std@@H@Z */
  puStack_8 = &LAB_605174fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60508380((int *)param_1);
  local_4 = 0;
  FUN_60501bb0(5);
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  if (in_stack_00000008 == 3) {
    FUN_60501c60();
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- Set @ 605018e0 size=226 ---- */

/* protected: class std::vector<char,class std::allocator<char> > __thiscall CAvtrIdConv::Set(void)
    */

int * __thiscall CAvtrIdConv::Set(CAvtrIdConv *this)

{
  int *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x18e0  196  ?Set@CAvtrIdConv@@IAE?AV?$vector@DV?$allocator@D@std@@@std@@XZ
                        */
  puStack_8 = &LAB_6051753a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_60508380(in_stack_00000004);
  local_4 = 0;
  FUN_60501bb0(5);
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  FUN_60501c60();
  ExceptionList = local_c;
  return in_stack_00000004;
}



/* ---- SetOrgAvtrId @ 605019d0 size=20 ---- */

/* public: void __thiscall CAvtrIdConv::SetOrgAvtrId(char const *) */

void __thiscall CAvtrIdConv::SetOrgAvtrId(CAvtrIdConv *this,char *param_1)

{
                    /* 0x19d0  210  ?SetOrgAvtrId@CAvtrIdConv@@QAEXPBD@Z */
  strcpy_s((char *)this,0x1e,param_1);
  return;
}



/* ---- GetAvtrId @ 605019f0 size=4 ---- */

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __thiscall CAvtrIdConv::GetAvtrId(void) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
CAvtrIdConv::GetAvtrId(CAvtrIdConv *this)

{
                    /* 0x19f0  142
                       ?GetAvtrId@CAvtrIdConv@@QAEAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
                        */
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0x20);
}



/* ---- AvtCode @ 60501a00 size=31 ---- */

/* protected: char __thiscall CAvtrIdConv::AvtCode(int) */

char __thiscall CAvtrIdConv::AvtCode(CAvtrIdConv *this,int param_1)

{
                    /* 0x1a00  60  ?AvtCode@CAvtrIdConv@@IAEDH@Z */
  if (param_1 == 6) {
    return (-(this[6] != (CAvtrIdConv)0x1) & 0xf9U) + 0x6d;
  }
  return (char)this[param_1];
}



/* ---- IsMatch @ 60501a20 size=19 ---- */

/* protected: bool __thiscall CAvtrIdConv::IsMatch(int,char) */

bool __thiscall CAvtrIdConv::IsMatch(CAvtrIdConv *this,int param_1,char param_2)

{
                    /* 0x1a20  179  ?IsMatch@CAvtrIdConv@@IAE_NHD@Z */
  return this[param_1] == (CAvtrIdConv)param_2;
}



/* ---- FUN_60501a40 @ 60501a40 size=107 ---- */

void FUN_60501a40(undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_605179c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pcVar1 = (char *)param_1[3];
  if (pcVar1 != (char *)0x0) {
    std::allocator<char>::deallocate
              ((allocator<char> *)(param_1 + 2),pcVar1,param_1[5] - (int)pcVar1);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60501ab0 @ 60501ab0 size=253 ---- */

void FUN_60501ab0(int param_1)

{
  void *pvVar1;
  char *_Dst;
  int iVar2;
  int in_EAX;
  rsize_t rVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  
  if (in_EAX != param_1) {
    pvVar7 = *(void **)(param_1 + 0x10);
    pvVar1 = *(void **)(param_1 + 0xc);
    if (pvVar7 == pvVar1) {
      FUN_60501d70();
      return;
    }
    _Dst = *(char **)(in_EAX + 0xc);
    if ((uint)((int)pvVar7 - (int)pvVar1) <= (uint)(*(int *)(in_EAX + 0x10) - (int)_Dst)) {
      rVar3 = (int)pvVar7 - (int)pvVar1;
      if (0 < (int)rVar3) {
        memmove_s(_Dst,rVar3,pvVar1,rVar3);
      }
      *(int *)(in_EAX + 0x10) =
           (*(int *)(in_EAX + 0xc) - *(int *)(param_1 + 0xc)) + *(int *)(param_1 + 0x10);
      return;
    }
    if (_Dst == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(in_EAX + 0x14) - (int)_Dst;
    }
    if ((uint)((int)pvVar7 - (int)pvVar1) <= uVar4) {
      pvVar7 = (void *)((int)pvVar1 + (*(int *)(in_EAX + 0x10) - (int)_Dst));
      rVar3 = (int)pvVar7 - (int)pvVar1;
      if (0 < (int)rVar3) {
        memmove_s(_Dst,rVar3,pvVar1,rVar3);
      }
      pvVar1 = *(void **)(in_EAX + 0x10);
      rVar3 = *(int *)(param_1 + 0x10) - (int)pvVar7;
      if (rVar3 != 0) {
        memmove_s(pvVar1,rVar3,pvVar7,rVar3);
      }
      *(rsize_t *)(in_EAX + 0x10) = rVar3 + (int)pvVar1;
      return;
    }
    if (_Dst != (char *)0x0) {
      std::allocator<char>::deallocate
                ((allocator<char> *)(in_EAX + 8),_Dst,*(int *)(in_EAX + 0x14) - (int)_Dst);
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    if ((iVar6 != iVar2) && (uVar5 = FUN_60501db0(), (char)uVar5 != '\0')) {
      iVar6 = FUN_60502150(*(void **)(in_EAX + 0xc),*(void **)(param_1 + 0xc));
      *(int *)(in_EAX + 0x10) = iVar6;
    }
  }
  return;
}



/* ---- FUN_60501bb0 @ 60501bb0 size=162 ---- */

/* WARNING: Removing unreachable block (ram,0x60501bc3) */

void FUN_60501bb0(uint param_1)

{
  void *_Src;
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *_Dst;
  int unaff_ESI;
  rsize_t _DstSize;
  
  if (*(int *)(unaff_ESI + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0xc);
  }
  if (uVar3 < param_1) {
    _Dst = std::allocator<char>::allocate((allocator<char> *)(unaff_ESI + 8),param_1);
    uVar3 = *(uint *)(unaff_ESI + 0x10);
    if (uVar3 < *(uint *)(unaff_ESI + 0xc)) {
      _invalid_parameter_noinfo();
    }
    _Src = *(void **)(unaff_ESI + 0xc);
    if (*(void **)(unaff_ESI + 0x10) < _Src) {
      _invalid_parameter_noinfo();
    }
    _DstSize = uVar3 - (int)_Src;
    if (_DstSize != 0) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    pcVar1 = *(char **)(unaff_ESI + 0xc);
    iVar2 = *(int *)(unaff_ESI + 0x10);
    if (pcVar1 != (char *)0x0) {
      std::allocator<char>::deallocate
                ((allocator<char> *)(unaff_ESI + 8),pcVar1,*(int *)(unaff_ESI + 0x14) - (int)pcVar1)
      ;
    }
    *(char **)(unaff_ESI + 0x14) = _Dst + param_1;
    *(char **)(unaff_ESI + 0x10) = _Dst + (iVar2 - (int)pcVar1);
    *(char **)(unaff_ESI + 0xc) = _Dst;
  }
  return;
}



/* ---- FUN_60501c60 @ 60501c60 size=82 ---- */

void FUN_60501c60(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *unaff_EBX;
  int *unaff_EDI;
  int local_10 [3];
  
  puVar1 = (undefined1 *)unaff_EDI[3];
  if (puVar1 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_EDI[5] - (int)puVar1;
  }
  puVar2 = (undefined1 *)unaff_EDI[4];
  if ((uint)((int)puVar2 - (int)puVar1) < uVar3) {
    *puVar2 = *unaff_EBX;
    unaff_EDI[4] = (int)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_60501cc0(local_10,unaff_EBX,*unaff_EDI,puVar2);
  return;
}



/* ---- FUN_60501cc0 @ 60501cc0 size=167 ---- */

void FUN_60501cc0(int *param_1,undefined4 param_2,int param_3,void *param_4)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = in_EAX[3];
  if (in_EAX[4] == uVar4) {
    iVar3 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar3 = (int)param_4 - uVar4;
  }
  FUN_60501f20(in_EAX,param_3,param_4);
  uVar4 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)*in_EAX;
  if (piVar1 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  uVar4 = uVar4 + iVar3;
  if (uVar4 <= *(uint *)(iVar2 + 0x10)) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar4) goto LAB_60501d54;
  }
  _invalid_parameter_noinfo();
LAB_60501d54:
  param_1[1] = uVar4;
  *param_1 = (int)piVar1;
  return;
}



/* ---- FUN_60501d70 @ 60501d70 size=62 ---- */

void FUN_60501d70(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  
  pvVar1 = (void *)in_EAX[4];
  if (pvVar1 < (void *)in_EAX[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = in_EAX[3];
  uVar3 = *in_EAX;
  if ((uint)in_EAX[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_60501ea0(*in_EAX,uVar2,uVar3,pvVar1);
  return;
}



/* ---- FUN_60501db0 @ 60501db0 size=34 ---- */

/* WARNING: Removing unreachable block (ram,0x60501db5) */

undefined4 FUN_60501db0(void)

{
  char *pcVar1;
  int unaff_ESI;
  uint unaff_EDI;
  
  pcVar1 = std::allocator<char>::allocate((allocator<char> *)(unaff_ESI + 8),unaff_EDI);
  *(char **)(unaff_ESI + 0xc) = pcVar1;
  *(char **)(unaff_ESI + 0x10) = pcVar1;
  *(char **)(unaff_ESI + 0x14) = pcVar1 + unaff_EDI;
  return CONCAT31((int3)((uint)(pcVar1 + unaff_EDI) >> 8),1);
}



/* ---- FUN_60501de0 @ 60501de0 size=33 ---- */

undefined1 * FUN_60501de0(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  
  if (unaff_ESI != 0) {
    iVar1 = unaff_ESI;
    puVar2 = param_1;
    do {
      *puVar2 = *unaff_EDI;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar1 != 0);
  }
  return param_1 + unaff_ESI;
}



/* ---- length_error @ 60501e10 size=102 ---- */

void __thiscall std::length_error::length_error(length_error *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [28];
  logic_error local_40 [2];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_605171a9;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_5c,"vector<T> too long");
  local_c = 0;
  logic_error::logic_error
            (local_40,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_40);
  local_40[0].vftablePtr = (logic_error_vftable *)&vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_40,(ThrowInfo *)&DAT_6051a1d8);
}



/* ---- FUN_60501e80 @ 60501e80 size=25 ---- */

logic_error * __thiscall FUN_60501e80(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
  return param_1;
}



/* ---- FUN_60501ea0 @ 60501ea0 size=121 ---- */

void FUN_60501ea0(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4)

{
  void *_Dst;
  rsize_t _DstSize;
  int *unaff_EBX;
  int *unaff_ESI;
  
  *unaff_EBX = 0;
  if (((unaff_ESI == (int *)0x0) || (param_2 < (uint)unaff_ESI[3])) ||
     ((uint)unaff_ESI[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  *unaff_EBX = *unaff_ESI;
  unaff_EBX[1] = param_2;
  if ((param_4 < (void *)unaff_ESI[3]) || ((void *)unaff_ESI[4] < param_4)) {
    _invalid_parameter_noinfo();
  }
  if ((*unaff_EBX == 0) || (*unaff_EBX != *unaff_ESI)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)unaff_EBX[1];
  if (_Dst != param_4) {
    _DstSize = unaff_ESI[4] - (int)param_4;
    if (0 < (int)_DstSize) {
      memmove_s(_Dst,_DstSize,param_4,_DstSize);
    }
    unaff_ESI[4] = _DstSize + (int)_Dst;
  }
  return;
}



/* ---- FUN_60501f20 @ 60501f20 size=449 ---- */

/* WARNING: Removing unreachable block (ram,0x60502031) */

void __thiscall FUN_60501f20(void *this,int param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *in_EAX;
  uint uVar5;
  uint extraout_EAX;
  char *_Dst;
  rsize_t rVar6;
  rsize_t _DstSize;
  length_error *extraout_ECX;
  length_error *this_00;
  uint local_8;
  int iStack_4;
  
  this_00 = *(length_error **)((int)this + 0xc);
  if (this_00 == (length_error *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)((int)this + 0x14) - (int)this_00;
  }
  pvVar2 = *(void **)((int)this + 0x10);
  if ((int)this_00 - (int)pvVar2 == 1) {
    std::length_error::length_error(this_00);
    uVar5 = extraout_EAX;
    this_00 = extraout_ECX;
  }
  uVar1 = (int)pvVar2 + (1 - (int)this_00);
  if (uVar1 <= uVar5) {
    if (pvVar2 == param_2) {
      local_8 = CONCAT31(local_8._1_3_,*in_EAX);
      FUN_60501de0(*(undefined1 **)((int)this + 0x10));
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      pvVar2 = (void *)(*(int *)((int)this + 0x10) + -1);
      if (param_2 != pvVar2) {
        memset(param_2,local_8,(int)pvVar2 - (int)param_2);
        return;
      }
    }
    else {
      iStack_4 = CONCAT31(iStack_4._1_3_,*in_EAX);
      rVar6 = (int)pvVar2 - ((int)pvVar2 + -1);
      if (rVar6 != 0) {
        memmove_s(pvVar2,rVar6,(void *)((int)pvVar2 + -1),rVar6);
      }
      _DstSize = (int)pvVar2 + (-1 - (int)param_2);
      *(rsize_t *)((int)this + 0x10) = rVar6 + (int)pvVar2;
      if (0 < (int)_DstSize) {
        memmove_s((void *)((int)pvVar2 - _DstSize),_DstSize,param_2,_DstSize);
      }
      if (param_2 != (void *)((int)param_2 + 1)) {
        memset(param_2,iStack_4,((int)param_2 + 1) - (int)param_2);
      }
    }
    return;
  }
  if (-(uVar5 >> 1) - 1 < uVar5) {
    local_8 = 0;
  }
  else {
    local_8 = uVar5 + (uVar5 >> 1);
  }
  if (local_8 < uVar1) {
    local_8 = uVar1;
  }
  _Dst = std::allocator<char>::allocate((allocator<char> *)((int)this + 8),local_8);
  iVar3 = *(int *)((int)this + 0xc);
  FUN_60501de0(_Dst + ((int)param_2 - iVar3));
  rVar6 = (int)param_2 - (int)*(void **)((int)this + 0xc);
  if (rVar6 != 0) {
    memmove_s(_Dst,rVar6,*(void **)((int)this + 0xc),rVar6);
  }
  rVar6 = *(int *)((int)this + 0x10) - (int)param_2;
  if (rVar6 != 0) {
    memmove_s(_Dst + ((int)param_2 - iVar3) + 1,rVar6,param_2,rVar6);
  }
  pcVar4 = *(char **)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 0x10);
  if (pcVar4 != (char *)0x0) {
    std::allocator<char>::deallocate
              ((allocator<char> *)((int)this + 8),pcVar4,*(int *)((int)this + 0x14) - (int)pcVar4);
  }
  *(char **)((int)this + 0x14) = _Dst + local_8;
  *(char **)((int)this + 0x10) = _Dst + (iVar3 - (int)pcVar4) + 1;
  *(char **)((int)this + 0xc) = _Dst;
  return;
}



/* ---- FUN_605020f0 @ 605020f0 size=84 ---- */

int * __cdecl
FUN_605020f0(int *param_1,undefined *param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            char *param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  
  FUN_605021c0(param_1,(int)param_6 - (int)param_4);
  if (param_4 != param_6) {
    iVar2 = param_8 - (int)param_4;
    do {
      cVar1 = (*(code *)param_2)((int)*param_4);
      param_4[iVar2] = cVar1;
      param_4 = param_4 + 1;
    } while (param_4 != param_6);
  }
  return param_1;
}



/* ---- FUN_60502150 @ 60502150 size=25 ---- */

int __fastcall FUN_60502150(void *param_1,void *param_2)

{
  int in_EAX;
  rsize_t _DstSize;
  
  _DstSize = in_EAX - (int)param_2;
  if (_DstSize != 0) {
    memmove_s(param_1,_DstSize,param_2,_DstSize);
  }
  return _DstSize + (int)param_1;
}



/* ---- bad_alloc_Constructor_or_Destructor @ 60502170 size=80 ---- */

void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1)

{
  char *local_10;
  exception local_c [3];
  
  if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    local_10 = (char *)0x0;
    std::exception::exception(local_c,&local_10);
    local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_6051a210);
  }
  operator_new(param_1 * 4);
  return;
}



/* ---- FUN_605021c0 @ 605021c0 size=99 ---- */

int * FUN_605021c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *in_EAX;
  iVar2 = in_EAX[1];
  if (iVar1 != -4) {
    if (iVar1 == 0) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined4 *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 0x18) < 0x10) {
      puVar4 = puVar3;
    }
    else {
      puVar4 = (undefined4 *)*puVar3;
    }
    puVar5 = (undefined4 *)(param_2 + iVar2);
    if (puVar5 <= (undefined4 *)(*(int *)(iVar1 + 0x14) + (int)puVar4)) {
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      if (puVar3 <= puVar5) goto LAB_60502211;
    }
    _invalid_parameter_noinfo();
  }
LAB_60502211:
  *param_1 = iVar1;
  param_1[1] = iVar2 + param_2;
  return param_1;
}



/* ---- ReNameAvatarFile @ 60502230 size=1 ---- */

/* protected: void __thiscall CHgAniAvatar::ReNameAvatarFile(void) */

void __thiscall CHgAniAvatar::ReNameAvatarFile(CHgAniAvatar *this)

{
                    /* 0x2230  193  ?ReNameAvatarFile@CHgAniAvatar@@IAEXXZ */
  return;
}



/* ---- logic_error @ 60502240 size=101 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517039;
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



/* ---- logic_error @ 605022b0 size=94 ---- */

logic_error * __thiscall
std::logic_error::logic_error
          (logic_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517009;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception((exception *)param_1);
  local_4 = 0;
  *(logic_error_vftable **)param_1 = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xc),
             in_stack_00000008);
  ExceptionList = local_c;
  return (logic_error *)param_1;
}



/* ---- scalar_deleting_destructor @ 60502310 size=48 ---- */

exception * __thiscall
std::length_error::scalar_deleting_destructor(length_error *this,byte param_1)

{
                    /* inlined destructor: std::logic_error::~logic_error */
  this->vftablePtr = (length_error_vftable *)&logic_error::vftable;
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



/* ---- vfunction2 @ 60502340 size=14 ---- */

/* std::logic_error member function inherited by std::out_of_range
   std::logic_error member function inherited by std::length_error */

int __thiscall std::logic_error::vfunction2(logic_error *this)

{
  if (*(uint *)&this[2].logic_error_data < 0x10) {
    return (int)(this + 1);
  }
  return (int)this[1].vftablePtr;
}



/* ---- FUN_60502350 @ 60502350 size=12 ---- */

void __fastcall FUN_60502350(exception *param_1)

{
  *param_1 = (exception)&std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x60502356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}



/* ---- scalar_deleting_destructor @ 60502360 size=37 ---- */

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



/* ---- FUN_60502390 @ 60502390 size=26 ---- */

exception * __thiscall FUN_60502390(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *param_1 = (exception)&std::bad_alloc::vftable;
  return param_1;
}



/* ---- GetWidth @ 605023b0 size=4 ---- */

/* public: int __thiscall CHgAImage::GetWidth(void) */

int __thiscall CHgAImage::GetWidth(CHgAImage *this)

{
                    /* 0x23b0  161  ?GetWidth@CHgAImage@@QAEHXZ */
  return (this->CHgAImage_data).offset_0x4;
}



/* ---- GetHeight @ 605023c0 size=4 ---- */

/* public: int __thiscall CHgAImage::GetHeight(void) */

int __thiscall CHgAImage::GetHeight(CHgAImage *this)

{
                    /* 0x23c0  150  ?GetHeight@CHgAImage@@QAEHXZ */
  return (this->CHgAImage_data).offset_0x8;
}



/* ---- GetBits @ 605023d0 size=13 ---- */

/* public: unsigned char * __thiscall CHgAImage::GetBits(int) */

uchar * __thiscall CHgAImage::GetBits(CHgAImage *this,int param_1)

{
                    /* 0x23d0  143  ?GetBits@CHgAImage@@QAEPAEH@Z */
  return *(uchar **)((this->CHgAImage_data).offset_0x0 + param_1 * 4);
}



/* ---- SetTileNum @ 605023e0 size=10 ---- */

/* public: void __thiscall CHgAImage::SetTileNum(int) */

void __thiscall CHgAImage::SetTileNum(CHgAImage *this,int param_1)

{
                    /* 0x23e0  213  ?SetTileNum@CHgAImage@@QAEXH@Z */
  (this->CHgAImage_data).offset_0x14 = param_1;
  return;
}



/* ---- GetTileNum @ 605023f0 size=4 ---- */

/* public: int __thiscall CHgAImage::GetTileNum(void)const  */

int __thiscall CHgAImage::GetTileNum(CHgAImage *this)

{
                    /* 0x23f0  158  ?GetTileNum@CHgAImage@@QBEHXZ */
  return (this->CHgAImage_data).offset_0x14;
}



/* ---- GetVHeads @ 60502400 size=4 ---- */

/* protected: unsigned char * * __thiscall CHgAImage::GetVHeads(void) */

uchar ** __thiscall CHgAImage::GetVHeads(CHgAImage *this)

{
                    /* 0x2400  160  ?GetVHeads@CHgAImage@@IAEPAPAEXZ */
  return (uchar **)(this->CHgAImage_data).offset_0x0;
}



/* ---- CHgAImage @ 60502410 size=57 ---- */

/* public: __thiscall CHgAImage::CHgAImage(class CHgAImage const &) */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this,CHgAImage *param_1)

{
                    /* 0x2410  13  ??0CHgAImage@@QAE@ABV0@@Z */
  this->vftablePtr = &_vftable_;
  (this->CHgAImage_data).offset_0x0 = *(int *)(param_1 + 4);
  (this->CHgAImage_data).offset_0x4 = *(int *)(param_1 + 8);
  (this->CHgAImage_data).offset_0x8 = *(int *)(param_1 + 0xc);
  (this->CHgAImage_data).offset_0xc = param_1[0x10];
  (this->CHgAImage_data).offset_0x10 = *(int *)(param_1 + 0x14);
  (this->CHgAImage_data).offset_0x14 = *(int *)(param_1 + 0x18);
  (this->CHgAImage_data).offset_0x18 = *(int *)(param_1 + 0x1c);
  return;
}



/* ---- scalar_deleting_destructor @ 60502450 size=141 ---- */

undefined4 * __thiscall CHgAImage::scalar_deleting_destructor(CHgAImage *this,byte param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((param_1 & 2) != 0) {
    puVar1 = &this[-1].CHgAImage_data.offset_0x334;
    _eh_vector_destructor_iterator_(this,0x20,this[-1].CHgAImage_data.offset_0x334,~CHgAImage);
    if ((param_1 & 1) != 0) {
      operator_delete__(puVar1);
    }
    return puVar1;
  }
  pvVar2 = (void *)(this->CHgAImage_data).offset_0x18;
                    /* inlined destructor: CHgAImage::~CHgAImage */
  this->vftablePtr = &_vftable_;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->CHgAImage_data).offset_0x18 = 0;
  }
  pvVar2 = (void *)(this->CHgAImage_data).offset_0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->CHgAImage_data).offset_0x0 = 0;
  }
  (this->CHgAImage_data).offset_0x4 = 0;
  (this->CHgAImage_data).offset_0x8 = 0;
  (this->CHgAImage_data).offset_0xc = 1;
  (this->CHgAImage_data).offset_0x10 = -1;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- CHgAImage @ 605024e0 size=37 ---- */

/* public: __thiscall CHgAImage::CHgAImage(void) */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this)

{
                    /* 0x24e0  14  ??0CHgAImage@@QAE@XZ */
  this->vftablePtr = &_vftable_;
  (this->CHgAImage_data).offset_0x0 = 0;
  (this->CHgAImage_data).offset_0x18 = 0;
  (this->CHgAImage_data).offset_0x4 = 0;
  (this->CHgAImage_data).offset_0x8 = 0;
  (this->CHgAImage_data).offset_0x14 = 0;
  (this->CHgAImage_data).offset_0xc = 1;
  (this->CHgAImage_data).offset_0x10 = -1;
  return;
}



/* ---- ~CHgAImage @ 60502510 size=70 ---- */

/* public: virtual __thiscall CHgAImage::~CHgAImage(void) */

void __thiscall CHgAImage::~CHgAImage(CHgAImage *this)

{
  void *pvVar1;
  
                    /* 0x2510  31  ??1CHgAImage@@UAE@XZ */
  pvVar1 = (void *)(this->CHgAImage_data).offset_0x18;
  this->vftablePtr = &_vftable_;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CHgAImage_data).offset_0x18 = 0;
  }
  pvVar1 = (void *)(this->CHgAImage_data).offset_0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CHgAImage_data).offset_0x0 = 0;
  }
  (this->CHgAImage_data).offset_0x4 = 0;
  (this->CHgAImage_data).offset_0x8 = 0;
  (this->CHgAImage_data).offset_0xc = 1;
  (this->CHgAImage_data).offset_0x10 = -1;
  return;
}



/* ---- CHgAImage::Create @ 60502560 size=168 ---- */

/* public: virtual bool __thiscall CHgAImage::Create(int,int) */

bool __thiscall CHgAImage::CHgAImage__Create(CHgAImage *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *unaff_EBP;
  ulong unaff_ESI;
  char *unaff_EDI;
  uint uVar4;
  ulong unaff_retaddr;
  
                    /* 0x2560  71  ?Create@CHgAImage@@UAE_NHH@Z */
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  (*this->vftablePtr[2].Create)(this,unaff_EDI,unaff_ESI);
  iVar1 = FUN_605162b0(-(uint)((int)((ulonglong)(uint)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_2 * 4));
  (this->CHgAImage_data).offset_0x0 = iVar1;
  if (iVar1 != 0) {
    (this->CHgAImage_data).offset_0x4 = param_1;
    uVar4 = param_1 * 0x10 + 0x1f >> 3 & 0xfffffffc;
    (this->CHgAImage_data).offset_0x8 = param_2;
    iVar1 = FUN_605162b0(uVar4 * param_2);
    (this->CHgAImage_data).offset_0x18 = iVar1;
    if (iVar1 != 0) {
      iVar1 = (this->CHgAImage_data).offset_0x0;
      iVar2 = 0;
      if (0 < param_2) {
        iVar3 = 0;
        do {
          *(int *)(iVar1 + iVar2 * 4) = (this->CHgAImage_data).offset_0x18 + iVar3;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + uVar4;
        } while (iVar2 < param_2);
      }
      return true;
    }
    (*this->vftablePtr[2].Create)(this,unaff_EBP,unaff_retaddr);
  }
  return false;
}



/* ---- CHgAImage::Create @ 60502610 size=52 ---- */

/* public: virtual bool __thiscall CHgAImage::Create(int,int,unsigned long) */

bool __thiscall CHgAImage::CHgAImage__Create(CHgAImage *this,int param_1,int param_2,ulong param_3)

{
  undefined4 *puVar1;
  
                    /* 0x2610  72  ?Create@CHgAImage@@UAE_NHHK@Z */
  puVar1 = (*this->vftablePtr[2].deleting_destructor)(this,(byte)param_1);
  if ((char)puVar1 == '\0') {
    return false;
  }
  (this->CHgAImage_data).offset_0x10 = param_2;
  (this->CHgAImage_data).offset_0xc = param_2 != -1;
  return true;
}



/* ---- CHgAImage::Create @ 60502650 size=178 ---- */

/* public: virtual bool __thiscall CHgAImage::Create(char const *) */

bool __thiscall CHgAImage::CHgAImage__Create(CHgAImage *this,char *param_1)

{
  char *lpFileName;
  undefined1 uVar1;
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  short *lpBuffer;
  ulong unaff_ESI;
  char *unaff_EDI;
  undefined1 uStack0000000c;
  
                    /* 0x2650  73  ?Create@CHgAImage@@UAE_NPBD@Z */
  lpFileName = param_1;
  if (param_1 == (char *)0x0) {
    return false;
  }
  (*this->vftablePtr[2].Create)(this,unaff_EDI,unaff_ESI);
  hFile = CreateFileA(lpFileName,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    uStack0000000c = 0;
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    if (nNumberOfBytesToRead != 0xffffffff) {
      lpBuffer = (short *)FUN_605162b0(nNumberOfBytesToRead);
      ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if ((nNumberOfBytesToRead < 0x37) || (*lpBuffer != 0x4d42)) {
        uVar1 = uStack0000000c;
      }
      else {
        uVar1 = __CreateFromBitmap(this,(uchar *)lpBuffer,nNumberOfBytesToRead);
      }
      operator_delete__(lpBuffer);
      CloseHandle(hFile);
      return (bool)uVar1;
    }
  }
  return false;
}



/* ---- CHgAImage::Create @ 60502710 size=47 ---- */

/* public: virtual bool __thiscall CHgAImage::Create(char const *,unsigned long) */

bool __thiscall CHgAImage::CHgAImage__Create(CHgAImage *this,char *param_1,ulong param_2)

{
  undefined4 *puVar1;
  
                    /* 0x2710  74  ?Create@CHgAImage@@UAE_NPBDK@Z */
  puVar1 = (*this->vftablePtr[1].deleting_destructor)(this,(byte)param_1);
  if ((char)puVar1 == '\0') {
    return false;
  }
  (this->CHgAImage_data).offset_0x10 = param_2;
  (this->CHgAImage_data).offset_0xc = param_2 != 0xffffffff;
  return true;
}



/* ---- CHgAImage::Destroy @ 60502740 size=64 ---- */

/* public: virtual void __thiscall CHgAImage::Destroy(void) */

void __thiscall CHgAImage::CHgAImage__Destroy(CHgAImage *this)

{
  void *pvVar1;
  
                    /* 0x2740  89  ?Destroy@CHgAImage@@UAEXXZ */
  pvVar1 = (void *)(this->CHgAImage_data).offset_0x18;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CHgAImage_data).offset_0x18 = 0;
  }
  pvVar1 = (void *)(this->CHgAImage_data).offset_0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CHgAImage_data).offset_0x0 = 0;
  }
  (this->CHgAImage_data).offset_0x4 = 0;
  (this->CHgAImage_data).offset_0x8 = 0;
  (this->CHgAImage_data).offset_0xc = 1;
  (this->CHgAImage_data).offset_0x10 = -1;
  return;
}



/* ---- HasTransparentColor @ 60502780 size=4 ---- */

/* public: bool __thiscall CHgAImage::HasTransparentColor(void) */

bool __thiscall CHgAImage::HasTransparentColor(CHgAImage *this)

{
                    /* 0x2780  167  ?HasTransparentColor@CHgAImage@@QAE_NXZ */
  return (bool)(this->CHgAImage_data).offset_0xc;
}



/* ---- SetTransparentColor @ 60502790 size=19 ---- */

/* public: void __thiscall CHgAImage::SetTransparentColor(unsigned long) */

void __thiscall CHgAImage::SetTransparentColor(CHgAImage *this,ulong param_1)

{
                    /* 0x2790  214  ?SetTransparentColor@CHgAImage@@QAEXK@Z */
  (this->CHgAImage_data).offset_0x10 = param_1;
  (this->CHgAImage_data).offset_0xc = param_1 != 0xffffffff;
  return;
}



/* ---- GetTransparentColor @ 605027b0 size=4 ---- */

/* public: unsigned long __thiscall CHgAImage::GetTransparentColor(void) */

ulong __thiscall CHgAImage::GetTransparentColor(CHgAImage *this)

{
                    /* 0x27b0  159  ?GetTransparentColor@CHgAImage@@QAEKXZ */
  return (this->CHgAImage_data).offset_0x10;
}



/* ---- Draw @ 605027c0 size=40 ---- */

/* public: void __thiscall CHgAImage::Draw(int,int,class CHgAImage &,int) */

void __thiscall
CHgAImage::Draw(CHgAImage *this,int param_1,int param_2,CHgAImage *param_3,int param_4)

{
                    /* 0x27c0  102  ?Draw@CHgAImage@@QAEXHHAAV1@H@Z */
  DrawUnSafe(this,param_1,param_2,param_3,0,0,*(int *)(param_3 + 8),*(int *)(param_3 + 0xc),param_4)
  ;
  return;
}



/* ---- DrawTile @ 605027f0 size=104 ---- */

/* public: void __thiscall CHgAImage::DrawTile(int,int,class CHgAImage &,int,int) */

void __thiscall
CHgAImage::DrawTile(CHgAImage *this,int param_1,int param_2,CHgAImage *param_3,int param_4,
                   int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x27f0  128  ?DrawTile@CHgAImage@@QAEXHHAAV1@HH@Z */
  iVar1 = *(int *)(param_3 + 0x18);
  if ((0 < iVar1) && (param_4 < iVar1)) {
    if ((param_5 < 0) || (0xff < param_5)) {
      param_5 = 0xff;
    }
    if (iVar1 < 2) {
      iVar3 = *(int *)(param_3 + 0xc);
      iVar1 = *(int *)(param_3 + 8);
      iVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_3 + 8) / iVar1;
      iVar3 = *(int *)(param_3 + 0xc);
      iVar2 = iVar1 * param_4;
    }
    DrawUnSafe(this,param_1,param_2,param_3,iVar2,0,iVar1,iVar3,param_5);
  }
  return;
}



/* ---- DrawUnSafe @ 60502860 size=251 ---- */

/* public: void __thiscall CHgAImage::DrawUnSafe(int,int,class CHgAImage &,int,int,int,int,int) */

void __thiscall
CHgAImage::DrawUnSafe
          (CHgAImage *this,int param_1,int param_2,CHgAImage *param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
                    /* 0x2860  129  ?DrawUnSafe@CHgAImage@@QAEXHHAAV1@HHHHH@Z */
  if ((this->CHgAImage_data).offset_0xc != '\0') {
    local_4 = (CHgAImage *)CONCAT22((short)((uint)this >> 0x10),0x1f);
    FUN_60502e00(param_7,param_6,(short *)&local_4,(int)this,param_1,(int)param_3,param_4,param_5);
    return;
  }
  if (*(int *)(param_3 + 0xc) < param_5 + param_7) {
    param_7 = *(int *)(param_3 + 0xc) - param_5;
  }
  iVar2 = (this->CHgAImage_data).offset_0x8;
  if (iVar2 < param_7 + param_2) {
    param_7 = iVar2 - param_2;
  }
  if (*(int *)(param_3 + 8) < param_4 + param_6) {
    param_6 = *(int *)(param_3 + 8) - param_4;
  }
  iVar2 = (this->CHgAImage_data).offset_0x4;
  if (iVar2 < param_6 + param_1) {
    param_6 = iVar2 - param_1;
  }
  if (0 < param_7) {
    iVar2 = param_2 * 4;
    iVar1 = param_5 * 4;
    local_4 = this;
    do {
      memcpy((void *)(*(int *)((local_4->CHgAImage_data).offset_0x0 + iVar2) + param_1 * 2),
             (void *)(*(int *)(iVar1 + *(int *)(param_3 + 4)) + param_4 * 2),param_6 * 2);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 4;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  return;
}



/* ---- FillRect @ 60502960 size=216 ---- */

/* public: void __thiscall CHgAImage::FillRect(struct tagRECT const &,unsigned long,int) */

void __thiscall CHgAImage::FillRect(CHgAImage *this,tagRECT *param_1,ulong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
                    /* 0x2960  133  ?FillRect@CHgAImage@@QAEXABUtagRECT@@KH@Z */
  iVar3 = param_1->right - param_1->left;
  iVar7 = param_1->top;
  iVar5 = param_1->bottom - iVar7;
  if ((0 < iVar3) && (0 < iVar5)) {
    iVar1 = (this->CHgAImage_data).offset_0x4;
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar1 = (this->CHgAImage_data).offset_0x8;
    if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
    uVar2 = iVar3 * 0x10 + 0x1f >> 3 & 0xfffffffc;
    for (; iVar7 < iVar5; iVar7 = iVar7 + 1) {
      puVar6 = *(ushort **)((this->CHgAImage_data).offset_0x0 + iVar7 * 4);
      for (uVar4 = param_1->left; (int)uVar4 < (int)uVar2; uVar4 = uVar4 + 2) {
        if (iVar3 * 2 < (int)(uVar4 + 2)) {
          uVar4 = uVar2;
        }
        else {
          *puVar6 = ((ushort)((byte)(param_2 >> 8) & 0xf8) | (ushort)((byte)param_2 & 0xf8) << 5) *
                    4 | (ushort)((byte)(param_2 >> 0x13) & 0x1f);
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  return;
}



/* ---- FillRect @ 60502a40 size=26 ---- */

/* public: void __thiscall CHgAImage::FillRect(unsigned long,int) */

void __thiscall CHgAImage::FillRect(CHgAImage *this,ulong param_1,int param_2)

{
                    /* 0x2a40  134  ?FillRect@CHgAImage@@QAEXKH@Z */
  FUN_60502ee0((void *)(this->CHgAImage_data).offset_0x8,(this->CHgAImage_data).offset_0x4);
  return;
}



/* ---- __CreateFromBitmap @ 60502a60 size=96 ---- */

/* protected: bool __thiscall CHgAImage::__CreateFromBitmap(unsigned char const *,unsigned long) */

bool __thiscall CHgAImage::__CreateFromBitmap(CHgAImage *this,uchar *param_1,ulong param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
                    /* 0x2a60  242  ?__CreateFromBitmap@CHgAImage@@IAE_NPBEK@Z */
  puVar2 = (*this->vftablePtr[2].deleting_destructor)(this,(byte)*(undefined4 *)(param_1 + 0x12));
  if ((char)puVar2 != '\0') {
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    case 1:
    case 4:
    case 8:
      bVar1 = __CreateFromBitmapWithColorTable(this,param_1,(ulong)param_1);
      return bVar1;
    case 0x18:
      bVar1 = __CreateFromBitmapWithoutColorTable(this,param_1,(ulong)param_1);
      return bVar1;
    }
  }
  return false;
}



/* ---- __CreateFromBitmapWithColorTable @ 60502af0 size=540 ---- */

/* protected: bool __thiscall CHgAImage::__CreateFromBitmapWithColorTable(unsigned char const
   *,unsigned long) */

bool __thiscall
CHgAImage::__CreateFromBitmapWithColorTable(CHgAImage *this,uchar *param_1,ulong param_2)

{
  short sVar1;
  uchar *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
                    /* 0x2af0  243  ?__CreateFromBitmapWithColorTable@CHgAImage@@IAE_NPBEK@Z */
  puVar2 = param_1;
  uVar10 = (uint)*(ushort *)(param_1 + 0x1c);
  if (uVar10 == 1) {
    iVar7 = 2;
  }
  else if (uVar10 == 4) {
    iVar7 = 0x10;
  }
  else {
    if (uVar10 != 8) {
      return false;
    }
    iVar7 = *(int *)(param_1 + 0x2e);
    if (iVar7 == 0) {
      iVar7 = 0x100;
    }
  }
  iVar6 = *(int *)(param_1 + 0x12);
  iVar8 = *(int *)(param_1 + 0x16);
  uVar10 = (int)(iVar6 * uVar10 + 0x1f) >> 3 & 0xfffffffc;
  if (param_2 < iVar8 * uVar10 + 0x36 + iVar7 * 4) {
    return false;
  }
  param_2 = 0;
  if (0 < iVar8) {
    do {
      pbVar3 = puVar2 + ((iVar8 - param_2) + -1) * uVar10 + iVar7 * 4 + 0x36;
      pbVar4 = *(byte **)((this->CHgAImage_data).offset_0x0 + param_2 * 4);
      param_1 = (uchar *)0x0;
      if (0 < iVar6) {
        do {
          sVar1 = *(short *)(puVar2 + 0x1c);
          if (sVar1 == 1) {
            iVar8 = 7;
            pbVar5 = pbVar4;
            do {
              pbVar4 = pbVar5 + 2;
              uVar9 = *pbVar3 >> ((byte)iVar8 & 0x1f) & 1;
              sVar1 = ((ushort)((puVar2 + uVar9 * 4 + 0x36)[2] & 0xf8) << 5 |
                      (ushort)(puVar2[uVar9 * 4 + 0x37] & 0xf8)) * 4;
              *pbVar5 = (byte)sVar1 | puVar2[uVar9 * 4 + 0x36] >> 3;
              iVar8 = iVar8 + -1;
              pbVar5[1] = (byte)((ushort)sVar1 >> 8);
              pbVar5 = pbVar4;
            } while (-1 < iVar8);
            param_1 = param_1 + 7;
          }
          else if (sVar1 == 4) {
            iVar8 = 4;
            pbVar5 = pbVar4;
            do {
              pbVar4 = pbVar5 + 2;
              uVar9 = *pbVar3 >> ((byte)iVar8 & 0x1f) & 0xf;
              sVar1 = ((ushort)((puVar2 + uVar9 * 4 + 0x36)[2] & 0xf8) << 5 |
                      (ushort)(puVar2[uVar9 * 4 + 0x37] & 0xf8)) * 4;
              *pbVar5 = (byte)sVar1 | puVar2[uVar9 * 4 + 0x36] >> 3;
              iVar8 = iVar8 + -4;
              pbVar5[1] = (byte)((ushort)sVar1 >> 8);
              pbVar5 = pbVar4;
            } while (-1 < iVar8);
            param_1 = param_1 + 1;
          }
          else if (sVar1 == 8) {
            sVar1 = ((ushort)((puVar2 + (uint)*pbVar3 * 4 + 0x36)[2] & 0xf8) << 5 |
                    (ushort)(puVar2[(uint)*pbVar3 * 4 + 0x37] & 0xf8)) * 4;
            *pbVar4 = (byte)sVar1 | puVar2[(uint)*pbVar3 * 4 + 0x36] >> 3;
            pbVar4[1] = (byte)((ushort)sVar1 >> 8);
            pbVar4 = pbVar4 + 2;
          }
          iVar6 = *(int *)(puVar2 + 0x12);
          param_1 = param_1 + 1;
          pbVar3 = pbVar3 + 1;
        } while ((int)param_1 < iVar6);
      }
      iVar8 = *(int *)(puVar2 + 0x16);
      param_2 = param_2 + 1;
    } while ((int)param_2 < iVar8);
  }
  return true;
}



/* ---- __CreateFromBitmapWithoutColorTable @ 60502d20 size=216 ---- */

/* protected: bool __thiscall CHgAImage::__CreateFromBitmapWithoutColorTable(unsigned char const
   *,unsigned long) */

bool __thiscall
CHgAImage::__CreateFromBitmapWithoutColorTable(CHgAImage *this,uchar *param_1,ulong param_2)

{
  uchar *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
                    /* 0x2d20  244  ?__CreateFromBitmapWithoutColorTable@CHgAImage@@IAE_NPBEK@Z */
  puVar1 = param_1;
  if (*(short *)(param_1 + 0x1c) != 0x18) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0x12);
  iVar5 = *(int *)(param_1 + 0x16);
  uVar4 = iVar2 * 0x18 + 0x1f >> 3 & 0xfffffffc;
  if (param_2 < iVar5 * uVar4 + 0x36) {
    return false;
  }
  param_1 = (uchar *)0x0;
  if (0 < iVar5) {
    do {
      pbVar3 = puVar1 + ((iVar5 - (int)param_1) + -1) * uVar4 + 0x36;
      pbVar6 = *(byte **)((this->CHgAImage_data).offset_0x0 + (int)param_1 * 4);
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          iVar2 = ((pbVar3[2] & 0xf8) << 5 | pbVar3[1] & 0xf8) * 4;
          *pbVar6 = (byte)iVar2 | *pbVar3 >> 3;
          pbVar6[1] = (byte)((uint)iVar2 >> 8);
          iVar2 = *(int *)(puVar1 + 0x12);
          iVar5 = iVar5 + 1;
          pbVar3 = pbVar3 + 3;
          pbVar6 = pbVar6 + 2;
        } while (iVar5 < iVar2);
      }
      iVar5 = *(int *)(puVar1 + 0x16);
      param_1 = param_1 + 1;
    } while ((int)param_1 < iVar5);
  }
  return true;
}



/* ---- FUN_60502e00 @ 60502e00 size=214 ---- */

void __fastcall
FUN_60502e00(int param_1,int param_2,short *param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  short *psVar1;
  int in_EAX;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_8;
  
  if (*(int *)(param_6 + 0xc) < param_8 + param_1) {
    param_1 = *(int *)(param_6 + 0xc) - param_8;
  }
  if (*(int *)(param_4 + 0xc) < param_1 + in_EAX) {
    param_1 = *(int *)(param_4 + 0xc) - in_EAX;
  }
  local_8 = param_2;
  if (*(int *)(param_6 + 8) < param_7 + param_2) {
    local_8 = *(int *)(param_6 + 8) - param_7;
  }
  if (*(int *)(param_4 + 8) < local_8 + param_5) {
    local_8 = *(int *)(param_4 + 8) - param_5;
  }
  iVar3 = param_1 + in_EAX;
  iVar5 = param_8 * 4;
  do {
    psVar4 = (short *)(*(int *)(iVar5 + *(int *)(param_6 + 4)) + param_7 * 2);
    psVar2 = (short *)(*(int *)(*(int *)(param_4 + 4) + in_EAX * 4) + param_5 * 2);
    psVar1 = psVar2 + local_8;
    do {
      if (*param_3 != *psVar4) {
        *psVar2 = *psVar4;
      }
      psVar2 = psVar2 + 1;
      psVar4 = psVar4 + 1;
    } while (psVar2 < psVar1);
    in_EAX = in_EAX + 1;
    iVar5 = iVar5 + 4;
  } while (in_EAX < iVar3);
  return;
}



/* ---- FUN_60502ee0 @ 60502ee0 size=115 ---- */

void __thiscall FUN_60502ee0(void *this,int param_1)

{
  ushort *puVar1;
  void *pvVar2;
  uint in_EAX;
  ushort *puVar3;
  int iVar4;
  int unaff_EBX;
  
  pvVar2 = *(void **)(unaff_EBX + 0xc);
  iVar4 = 0;
  if ((int)pvVar2 < (int)this) {
    this = pvVar2;
  }
  if ((int)pvVar2 < (int)this) {
    this = pvVar2;
  }
  if (*(int *)(unaff_EBX + 8) < param_1) {
    param_1 = *(int *)(unaff_EBX + 8);
  }
  do {
    puVar3 = *(ushort **)(*(int *)(unaff_EBX + 4) + iVar4 * 4);
    puVar1 = puVar3 + param_1;
    do {
      *puVar3 = (ushort)(in_EAX >> 6) & 0x3e0 | (ushort)(in_EAX >> 0x13) & 0x1f |
                (ushort)((in_EAX & 0xf8) << 7);
      puVar3 = puVar3 + 1;
    } while (puVar3 < puVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < (int)this);
  return;
}



/* ---- FUN_60502f60 @ 60502f60 size=331 ---- */

int * __cdecl FUN_60502f60(int param_1,int param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  int local_c;
  
  iVar3 = param_1;
  iVar7 = 0;
  if (0 < param_2) {
    local_c = param_2;
    do {
      iVar1 = 0;
      if (0 < unaff_EDI) {
        if (unaff_EDI < 1) goto LAB_60502f99;
LAB_60502f82:
        do {
          if (*(short *)(param_1 + iVar1 * 2) == param_3) {
            iVar1 = iVar1 + 1;
            if (iVar1 < unaff_EDI) goto LAB_60502f82;
          }
LAB_60502f99:
          iVar5 = 0;
          for (; (iVar1 < unaff_EDI && (*(short *)(param_1 + iVar1 * 2) != param_3));
              iVar1 = iVar1 + 1) {
            iVar5 = iVar5 + 1;
          }
          iVar7 = iVar7 + 4 + iVar5 * 2;
        } while (iVar1 < unaff_EDI);
      }
      param_1 = param_1 + unaff_EDI * 2;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  piVar2 = (int *)FUN_605162b0(iVar7 + 0xc + param_2 * 4);
  piVar2[2] = (int)(piVar2 + 3);
  iVar7 = param_2 * 4;
  iVar1 = 0;
  *piVar2 = unaff_EDI;
  piVar2[1] = param_2;
  param_1 = 0;
  if (param_2 < 1) {
    return piVar2;
  }
  do {
    *(int *)(piVar2[2] + param_1 * 4) = (int)piVar2 + iVar1 + iVar7 + 0xc;
    iVar5 = 0;
    if (0 < unaff_EDI) {
      do {
        sVar4 = 0;
        for (; (iVar5 < unaff_EDI && (*(short *)(iVar3 + iVar5 * 2) == param_3)); iVar5 = iVar5 + 1)
        {
          sVar4 = sVar4 + 1;
        }
        iVar6 = 0;
        for (; (iVar5 < unaff_EDI && (*(short *)(iVar3 + iVar5 * 2) != param_3)); iVar5 = iVar5 + 1)
        {
          iVar6 = iVar6 + 1;
        }
        *(short *)((int)piVar2 + iVar1 + iVar7 + 0xc) = sVar4;
        *(short *)((int)piVar2 + iVar1 + iVar7 + 0xe) = (short)iVar6;
        if (iVar6 != 0) {
          memcpy((void *)((int)piVar2 + iVar1 + iVar7 + 0x10),(void *)(iVar3 + (iVar5 - iVar6) * 2),
                 iVar6 * 2);
        }
        iVar1 = iVar1 + 4 + iVar6 * 2;
      } while (iVar5 < unaff_EDI);
    }
    param_1 = param_1 + 1;
    iVar3 = iVar3 + unaff_EDI * 2;
  } while (param_1 < param_2);
  return piVar2;
}



/* ---- cHgAnigifList @ 605030c0 size=252 ---- */

/* public: __thiscall cHgAnigifList::cHgAnigifList(class cHgAnigifList const &) */

cHgAnigifList * __thiscall cHgAnigifList::cHgAnigifList(cHgAnigifList *this,cHgAnigifList *param_1)

{
  int iVar1;
  cHgAnigifList *pcVar2;
  cHgAnigifList *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x30c0  23  ??0cHgAnigifList@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605174bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = param_1;
  pcVar3 = this;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  FUN_605055e0(param_1 + 0x2c,(int *)(this + 0x2c));
  local_4 = 0;
  FUN_605055e0(param_1 + 0x44,(int *)(this + 0x44));
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
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



/* ---- operator= @ 605031c0 size=192 ---- */

/* public: class cHgAnigifList & __thiscall cHgAnigifList::operator=(class cHgAnigifList const &) */

cHgAnigifList * __thiscall cHgAnigifList::operator=(cHgAnigifList *this,cHgAnigifList *param_1)

{
  int iVar1;
  cHgAnigifList *pcVar2;
  cHgAnigifList *pcVar3;
  
                    /* 0x31c0  46  ??4cHgAnigifList@@QAEAAV0@ABV0@@Z */
  pcVar2 = param_1;
  pcVar3 = this;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  FUN_605054e0((int)(param_1 + 0x2c));
  FUN_605054e0((int)(param_1 + 0x44));
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
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



/* ---- getFrameCount @ 60503280 size=10 ---- */

/* public: int __thiscall cHgAnigifList::getFrameCount(void) */

int __thiscall cHgAnigifList::getFrameCount(cHgAnigifList *this)

{
                    /* 0x3280  252  ?getFrameCount@cHgAnigifList@@QAEHXZ */
  return *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2;
}



/* ---- getNowFrameNum @ 60503290 size=4 ---- */

/* public: int __thiscall cHgAnigifList::getNowFrameNum(void) */

int __thiscall cHgAnigifList::getNowFrameNum(cHgAnigifList *this)

{
                    /* 0x3290  254  ?getNowFrameNum@cHgAnigifList@@QAEHXZ */
  return *(int *)(this + 0x68);
}



/* ---- GetSize @ 605032a0 size=18 ---- */

/* public: struct tagSIZE __thiscall cHgAnigifList::GetSize(void) */

void __thiscall cHgAnigifList::GetSize(cHgAnigifList *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x32a0  157  ?GetSize@cHgAnigifList@@QAE?AUtagSIZE@@XZ */
  uVar1 = *(undefined4 *)(this + 100);
  *in_stack_00000004 = *(undefined4 *)(this + 0x60);
  in_stack_00000004[1] = uVar1;
  return;
}



/* ---- cHgAniDIBList @ 605032c0 size=435 ---- */

/* public: __thiscall cHgAniDIBList::cHgAniDIBList(class cHgAniDIBList const &) */

cHgAniDIBList * __thiscall cHgAniDIBList::cHgAniDIBList(cHgAniDIBList *this,cHgAniDIBList *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x32c0  21  ??0cHgAniDIBList@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517a3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->cHgAniDIBList_data).offset_0x0 = param_1[4];
  (this->cHgAniDIBList_data).offset_0x1 = param_1[5];
  (this->cHgAniDIBList_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->cHgAniDIBList_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->cHgAniDIBList_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->cHgAniDIBList_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->cHgAniDIBList_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  (this->cHgAniDIBList_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->cHgAniDIBList_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->cHgAniDIBList_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  (this->cHgAniDIBList_data).offset_0x24 = *(undefined4 *)(param_1 + 0x28);
  (this->cHgAniDIBList_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  (this->cHgAniDIBList_data).offset_0x2c = *(undefined4 *)(param_1 + 0x30);
  (this->cHgAniDIBList_data).offset_0x30 = *(undefined4 *)(param_1 + 0x34);
  (this->cHgAniDIBList_data).offset_0x34 = *(undefined4 *)(param_1 + 0x38);
  (this->cHgAniDIBList_data).offset_0x38 = *(undefined4 *)(param_1 + 0x3c);
  (this->cHgAniDIBList_data).offset_0x3c = *(undefined4 *)(param_1 + 0x40);
  (this->cHgAniDIBList_data).offset_0x40 = *(undefined4 *)(param_1 + 0x44);
  (this->cHgAniDIBList_data).offset_0x44 = *(undefined4 *)(param_1 + 0x48);
  (this->cHgAniDIBList_data).offset_0x48 = *(undefined4 *)(param_1 + 0x4c);
  (this->cHgAniDIBList_data).offset_0x4c = *(undefined4 *)(param_1 + 0x50);
  (this->cHgAniDIBList_data).offset_0x50 = *(undefined4 *)(param_1 + 0x54);
  (this->cHgAniDIBList_data).offset_0x54 = *(undefined4 *)(param_1 + 0x58);
  FUN_605055e0(param_1 + 0x5c,&(this->cHgAniDIBList_data).offset_0x58);
  local_4 = 0;
  (this->cHgAniDIBList_data).offset_0x70 = *(undefined4 *)(param_1 + 0x74);
  (this->cHgAniDIBList_data).offset_0x74 = *(undefined4 *)(param_1 + 0x78);
  (this->cHgAniDIBList_data).offset_0x78 = *(undefined4 *)(param_1 + 0x7c);
  (this->cHgAniDIBList_data).offset_0x7c = *(void **)(param_1 + 0x80);
  (this->cHgAniDIBList_data).offset_0x80 = *(undefined4 *)(param_1 + 0x84);
  (this->cHgAniDIBList_data).offset_0x84 = *(void **)(param_1 + 0x88);
  (this->cHgAniDIBList_data).offset_0x88 = *(undefined4 *)(param_1 + 0x8c);
  (this->cHgAniDIBList_data).offset_0x8c = *(undefined4 *)(param_1 + 0x90);
  (this->cHgAniDIBList_data).offset_0x90 = *(undefined4 *)(param_1 + 0x94);
  FUN_605055e0(param_1 + 0x98,&(this->cHgAniDIBList_data).offset_0x94);
  (this->cHgAniDIBList_data).offset_0xac = *(undefined4 *)(param_1 + 0xb0);
  (this->cHgAniDIBList_data).offset_0xb0 = *(undefined4 *)(param_1 + 0xb4);
  (this->cHgAniDIBList_data).offset_0xb4 = *(undefined4 *)(param_1 + 0xb8);
  (this->cHgAniDIBList_data).offset_0xb8 = *(undefined4 *)(param_1 + 0xbc);
  (this->cHgAniDIBList_data).offset_0xbc = *(undefined4 *)(param_1 + 0xc0);
  (this->cHgAniDIBList_data).offset_0xc0 = *(undefined4 *)(param_1 + 0xc4);
  (this->cHgAniDIBList_data).offset_0xc4 = *(undefined4 *)(param_1 + 200);
  (this->cHgAniDIBList_data).offset_0xc8 = (char)param_1[0xcc];
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 60503480 size=369 ---- */

/* public: class cHgAniDIBList & __thiscall cHgAniDIBList::operator=(class cHgAniDIBList const &) */

cHgAniDIBList * __thiscall cHgAniDIBList::operator=(cHgAniDIBList *this,cHgAniDIBList *param_1)

{
                    /* 0x3480  45  ??4cHgAniDIBList@@QAEAAV0@ABV0@@Z */
  (this->cHgAniDIBList_data).offset_0x0 = param_1[4];
  (this->cHgAniDIBList_data).offset_0x1 = param_1[5];
  (this->cHgAniDIBList_data).offset_0x4 = *(undefined4 *)(param_1 + 8);
  (this->cHgAniDIBList_data).offset_0x8 = *(undefined4 *)(param_1 + 0xc);
  (this->cHgAniDIBList_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  (this->cHgAniDIBList_data).offset_0x10 = *(undefined4 *)(param_1 + 0x14);
  (this->cHgAniDIBList_data).offset_0x14 = *(undefined4 *)(param_1 + 0x18);
  (this->cHgAniDIBList_data).offset_0x18 = *(undefined4 *)(param_1 + 0x1c);
  (this->cHgAniDIBList_data).offset_0x1c = *(undefined4 *)(param_1 + 0x20);
  (this->cHgAniDIBList_data).offset_0x20 = *(undefined4 *)(param_1 + 0x24);
  (this->cHgAniDIBList_data).offset_0x24 = *(undefined4 *)(param_1 + 0x28);
  (this->cHgAniDIBList_data).offset_0x28 = *(undefined4 *)(param_1 + 0x2c);
  (this->cHgAniDIBList_data).offset_0x2c = *(undefined4 *)(param_1 + 0x30);
  (this->cHgAniDIBList_data).offset_0x30 = *(undefined4 *)(param_1 + 0x34);
  (this->cHgAniDIBList_data).offset_0x34 = *(undefined4 *)(param_1 + 0x38);
  (this->cHgAniDIBList_data).offset_0x38 = *(undefined4 *)(param_1 + 0x3c);
  (this->cHgAniDIBList_data).offset_0x3c = *(undefined4 *)(param_1 + 0x40);
  (this->cHgAniDIBList_data).offset_0x40 = *(undefined4 *)(param_1 + 0x44);
  (this->cHgAniDIBList_data).offset_0x44 = *(undefined4 *)(param_1 + 0x48);
  (this->cHgAniDIBList_data).offset_0x48 = *(undefined4 *)(param_1 + 0x4c);
  (this->cHgAniDIBList_data).offset_0x4c = *(undefined4 *)(param_1 + 0x50);
  (this->cHgAniDIBList_data).offset_0x50 = *(undefined4 *)(param_1 + 0x54);
  (this->cHgAniDIBList_data).offset_0x54 = *(undefined4 *)(param_1 + 0x58);
  FUN_605054e0((int)(param_1 + 0x5c));
  (this->cHgAniDIBList_data).offset_0x70 = *(undefined4 *)(param_1 + 0x74);
  (this->cHgAniDIBList_data).offset_0x74 = *(undefined4 *)(param_1 + 0x78);
  (this->cHgAniDIBList_data).offset_0x78 = *(undefined4 *)(param_1 + 0x7c);
  (this->cHgAniDIBList_data).offset_0x7c = *(void **)(param_1 + 0x80);
  (this->cHgAniDIBList_data).offset_0x80 = *(undefined4 *)(param_1 + 0x84);
  (this->cHgAniDIBList_data).offset_0x84 = *(void **)(param_1 + 0x88);
  (this->cHgAniDIBList_data).offset_0x88 = *(undefined4 *)(param_1 + 0x8c);
  (this->cHgAniDIBList_data).offset_0x8c = *(undefined4 *)(param_1 + 0x90);
  (this->cHgAniDIBList_data).offset_0x90 = *(undefined4 *)(param_1 + 0x94);
  FUN_605054e0((int)(param_1 + 0x98));
  (this->cHgAniDIBList_data).offset_0xac = *(undefined4 *)(param_1 + 0xb0);
  (this->cHgAniDIBList_data).offset_0xb0 = *(undefined4 *)(param_1 + 0xb4);
  (this->cHgAniDIBList_data).offset_0xb4 = *(undefined4 *)(param_1 + 0xb8);
  (this->cHgAniDIBList_data).offset_0xb8 = *(undefined4 *)(param_1 + 0xbc);
  (this->cHgAniDIBList_data).offset_0xbc = *(undefined4 *)(param_1 + 0xc0);
  (this->cHgAniDIBList_data).offset_0xc0 = *(undefined4 *)(param_1 + 0xc4);
  (this->cHgAniDIBList_data).offset_0xc4 = *(undefined4 *)(param_1 + 200);
  (this->cHgAniDIBList_data).offset_0xc8 = (char)param_1[0xcc];
  return (cHgAniDIBList *)this;
}



/* ---- scalar_deleting_destructor @ 60503600 size=85 ---- */

cHgAniDIBList * __thiscall
cHgAniDIBList::scalar_deleting_destructor(cHgAniDIBList *this,byte param_1)

{
  char *pcVar1;
  
  if ((param_1 & 2) == 0) {
    ~cHgAniDIBList(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (cHgAniDIBList *)this;
  }
  pcVar1 = &this[-1].cHgAniDIBList_data.offset_0xc8;
  _eh_vector_destructor_iterator_
            (this,0xd0,*(int *)&this[-1].cHgAniDIBList_data.offset_0xc8,~cHgAniDIBList);
  if ((param_1 & 1) != 0) {
    operator_delete__(pcVar1);
  }
  return (cHgAniDIBList *)pcVar1;
}



/* ---- exportImageList @ 60503660 size=36 ---- */

/* public: void __thiscall cHgAniDIBList::exportImageList(class std::vector<class CHgAImage *,class
   std::allocator<class CHgAImage *> > &,class std::vector<unsigned long,class
   std::allocator<unsigned long> > &) */

void __thiscall
cHgAniDIBList::exportImageList
          (cHgAniDIBList *this,vector<CHgAImage*,std::allocator<CHgAImage*>_> *param_1,
          vector<unsigned_long,std::allocator<unsigned_long>_> *param_2)

{
                    /* 0x3660  249
                       ?exportImageList@cHgAniDIBList@@QAEXAAV?$vector@PAVCHgAImage@@V?$allocator@PAVCHgAImage@@@std@@@std@@AAV?$vector@KV?$allocator@K@std@@@3@@Z
                        */
  FUN_605054e0((int)&(this->cHgAniDIBList_data).offset_0x94);
  FUN_605054e0((int)&(this->cHgAniDIBList_data).offset_0x58);
  return;
}



/* ---- exportImageList @ 60503690 size=335 ---- */

/* public: void __thiscall cHgAniDIBList::exportImageList(class std::vector<struct lsp::SPRITE
   *,class std::allocator<struct lsp::SPRITE *> > &,class std::vector<unsigned long,class
   std::allocator<unsigned long> > &) */

void __thiscall
cHgAniDIBList::exportImageList
          (cHgAniDIBList *this,vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> *param_1,
          vector<unsigned_long,std::allocator<unsigned_long>_> *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10 [3];
  
                    /* 0x3690  248
                       ?exportImageList@cHgAniDIBList@@QAEXAAV?$vector@PAUSPRITE@lsp@@V?$allocator@PAUSPRITE@lsp@@@std@@@std@@AAV?$vector@KV?$allocator@K@std@@@3@@Z
                        */
  FUN_605054e0((int)&(this->cHgAniDIBList_data).offset_0x58);
  local_1c = 0;
  if ((int)(this->cHgAniDIBList_data).offset_0xa4 - (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2
      != 0) {
    do {
      if ((uint)((int)(this->cHgAniDIBList_data).offset_0xa4 -
                 (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) <= local_1c) {
        _invalid_parameter_noinfo();
      }
      iVar3 = local_1c * 4;
      local_18 = *(int **)(*(int *)((int)(this->cHgAniDIBList_data).offset_0xa0 + iVar3) + 0xc);
      if ((uint)((int)(this->cHgAniDIBList_data).offset_0xa4 -
                 (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) <= local_1c) {
        _invalid_parameter_noinfo();
      }
      local_14 = *(undefined4 *)(*(int *)((int)(this->cHgAniDIBList_data).offset_0xa0 + iVar3) + 8);
      if ((uint)((int)(this->cHgAniDIBList_data).offset_0xa4 -
                 (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) <= local_1c) {
        _invalid_parameter_noinfo();
      }
      local_18 = FUN_60502f60(*(int *)(*(int *)((int)(this->cHgAniDIBList_data).offset_0xa0 + iVar3)
                                      + 0x1c),(int)local_18,0x1f);
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      if (puVar1 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 0x14) - (int)puVar1 >> 2;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      if ((uint)((int)puVar2 - (int)puVar1 >> 2) < uVar4) {
        *puVar2 = local_18;
        *(undefined4 **)(param_1 + 0x10) = puVar2 + 1;
      }
      else {
        if (puVar2 < puVar1) {
          _invalid_parameter_noinfo();
        }
        FUN_60505720(local_10,&local_18,*(int *)param_1,puVar2);
      }
      local_1c = local_1c + 1;
    } while (local_1c <
             (uint)((int)(this->cHgAniDIBList_data).offset_0xa4 -
                    (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2));
  }
  return;
}



/* ---- SetHWND @ 605037f0 size=13 ---- */

/* public: void __thiscall CHgAniAvatar::SetHWND(struct HWND__ *) */

void __thiscall CHgAniAvatar::SetHWND(CHgAniAvatar *this,HWND__ *param_1)

{
                    /* 0x37f0  209  ?SetHWND@CHgAniAvatar@@QAEXPAUHWND__@@@Z */
  *(HWND__ **)(this + 0x238) = param_1;
  return;
}



/* ---- CHgAImage @ 60503800 size=292 ---- */

/* public: __thiscall CHgAniAvatar::CHgAniAvatar(class CHgAniAvatar const &) */

CHgAImage * __thiscall CHgAImage::CHgAImage(CHgAImage *this,CHgAniAvatar *param_1)

{
  int iVar1;
  CHgAniAvatar *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  
                    /* 0x3800  15  ??0CHgAniAvatar@@QAE@ABV0@@Z */
  this->vftablePtr = *(CHgAImage_vftable **)param_1;
  (this->CHgAImage_data).offset_0x0 = *(int *)(param_1 + 4);
  (this->CHgAImage_data).offset_0x4 = *(int *)(param_1 + 8);
  (this->CHgAImage_data).offset_0x8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  pCVar2 = param_1 + 0x14;
  piVar3 = &(this->CHgAImage_data).offset_0x10;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *(int *)pCVar2;
    pCVar2 = pCVar2 + 4;
    piVar3 = piVar3 + 1;
  }
  *(undefined2 *)piVar3 = *(undefined2 *)pCVar2;
  *(CHgAniAvatar *)((int)piVar3 + 2) = pCVar2[2];
  pCVar2 = param_1 + 0x2f;
  puVar4 = &(this->CHgAImage_data).offset_0x2b;
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  (this->CHgAImage_data).offset_0x234 = *(HWND__ **)(param_1 + 0x238);
  (this->CHgAImage_data).offset_0x238 = *(int *)(param_1 + 0x23c);
  cHgAnigifList::cHgAnigifList
            ((cHgAnigifList *)&(this->CHgAImage_data).field_0x23c,(cHgAnigifList *)(param_1 + 0x240)
            );
  (this->CHgAImage_data).offset_0x2d8 = &_vftable_.deleting_destructor;
  (this->CHgAImage_data).offset_0x2dc = *(void **)(param_1 + 0x2e0);
  (this->CHgAImage_data).offset_0x2e0 = *(undefined4 *)(param_1 + 0x2e4);
  (this->CHgAImage_data).offset_0x2e4 = *(undefined4 *)(param_1 + 0x2e8);
  (this->CHgAImage_data).offset_0x2e8 = param_1[0x2ec];
  (this->CHgAImage_data).offset_0x2ec = *(undefined4 *)(param_1 + 0x2f0);
  (this->CHgAImage_data).offset_0x2f0 = *(undefined4 *)(param_1 + 0x2f4);
  (this->CHgAImage_data).offset_0x2f4 = *(void **)(param_1 + 0x2f8);
  pCVar2 = param_1 + 0x2fc;
  puVar4 = &(this->CHgAImage_data).offset_0x2f8;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar4 = puVar4 + 1;
  }
  (this->CHgAImage_data).offset_0x324 = *(undefined4 *)(param_1 + 0x328);
  (this->CHgAImage_data).offset_0x328 = *(undefined4 *)(param_1 + 0x32c);
  (this->CHgAImage_data).offset_0x32c = *(undefined4 *)(param_1 + 0x330);
  (this->CHgAImage_data).offset_0x330 = *(undefined4 *)(param_1 + 0x334);
  (this->CHgAImage_data).offset_0x334 = *(undefined4 *)(param_1 + 0x338);
  return this;
}



/* ---- FUN_60503930 @ 60503930 size=502 ---- */

void __thiscall FUN_60503930(void *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  char *pcStack_670;
  char *pcStack_66c;
  undefined1 *puStack_668;
  undefined1 *puStack_65c;
  void *pvStack_658;
  char *pcStack_654;
  char *pcStack_650;
  char *pcStack_64c;
  char *pcStack_648;
  undefined1 auStack_620 [2];
  undefined1 auStack_61e [6];
  undefined4 local_618;
  undefined4 local_614;
  char local_60c [440];
  undefined1 auStack_454 [1044];
  uint uStack_40;
  uint uStack_18;
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)auStack_620;
  local_618 = 4;
  local_614 = 0x5dc;
  strcpy_s(local_60c,0x208,param_1);
  pcVar1 = (char *)InternetOpenA();
  if (pcVar1 == (char *)0x0) {
    pcStack_654 = "HanGameAvatar";
    pvStack_658 = (void *)0x6050399a;
    pcStack_650 = pcVar1;
    pcStack_64c = pcVar1;
    pcStack_648 = pcVar1;
    pcVar1 = (char *)InternetOpenA();
    if (pcVar1 == (char *)0x0) {
      pcStack_654 = "HanGameAvatar";
      pvStack_658 = (void *)0x605039ab;
      pcStack_650 = pcVar1;
      pcStack_64c = pcVar1;
      pcStack_648 = pcVar1;
      pcVar1 = (char *)InternetOpenA();
      if (pcVar1 == (char *)0x0) {
        __security_check_cookie(uStack_18 ^ (uint)(auStack_620 + -0x14));
        return;
      }
    }
  }
  pcStack_648 = (char *)0x4;
  pcStack_64c = auStack_620 + -8;
  pcStack_650 = (char *)0x6;
  pvStack_658 = (void *)0x605039da;
  pcStack_654 = pcVar1;
  InternetSetOptionA();
  puStack_65c = auStack_620 + -0x10;
  puStack_668 = (undefined1 *)0x605039ec;
  pvStack_658 = this;
  FUN_6050d860("HGAVTR:: downloadFile() :: %d times [ %s ]->[ %s ]\n",'\0');
  pvStack_658 = (void *)0x0;
  puStack_65c = (undefined1 *)0x84400000;
  puStack_668 = auStack_620 + -0x10;
  pcStack_670 = (char *)0x60503a06;
  pcStack_66c = pcVar1;
  iVar2 = InternetOpenUrlA();
  if (iVar2 != 0) {
    pcStack_670 = (char *)0x0;
    HttpQueryInfoA(iVar2,0x20000013,&pvStack_658,&pcStack_654);
    if (pcStack_66c == (char *)0xc8) {
      hFile = CreateFileA(this,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80000080,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffff) {
        iVar3 = InternetReadFile(iVar2,auStack_454,0x400,&pcStack_670);
        while ((iVar3 != 0 && (pcStack_670 != (char *)0x0))) {
          BVar4 = WriteFile(hFile,auStack_454,(DWORD)pcStack_670,(LPDWORD)(auStack_620 + -0x40),
                            (LPOVERLAPPED)0x0);
          if (BVar4 == 0) goto LAB_60503b05;
          iVar3 = InternetReadFile(iVar2,auStack_454,0x400,&pcStack_670);
        }
        if (hFile != (HANDLE)0x0) {
          CloseHandle(hFile);
        }
        InternetCloseHandle(iVar2);
        if (pcVar1 != (char *)0x0) {
          pcStack_670 = pcVar1;
          InternetCloseHandle();
        }
        goto LAB_60503aec;
      }
LAB_60503b05:
      if (hFile != (HANDLE)0x0) {
        CloseHandle(hFile);
      }
    }
    else {
      FUN_6050d860("HGAVTR:: DownloadFile():: HttpQueryInfo() failed [FnRet:%u]\n",(char)pcStack_66c
                  );
    }
    InternetCloseHandle(iVar2);
  }
  if (pcVar1 != (char *)0x0) {
    pcStack_670 = pcVar1;
    InternetCloseHandle();
  }
LAB_60503aec:
  __security_check_cookie(uStack_40 ^ (uint)&puStack_65c);
  return;
}



/* ---- FUN_60503b30 @ 60503b30 size=160 ---- */

void __cdecl FUN_60503b30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  DWORD DVar3;
  char local_10c [264];
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)local_10c;
  strcpy_s(local_10c,0x105,param_1);
  pcVar2 = local_10c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2[(int)(local_10c + (-1 - (int)(local_10c + 1)))] == '\\') {
    pcVar2[(int)(local_10c + (-1 - (int)(local_10c + 1)))] = '\0';
  }
  DVar3 = GetFileAttributesA(local_10c);
  if (DVar3 == 0xffffffff) {
    pcVar2 = strrchr(local_10c,0x5c);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    FUN_60503b30(local_10c);
    CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  __security_check_cookie(local_4 ^ (uint)local_10c);
  return;
}



/* ---- CHgAImage @ 60503bd0 size=426 ---- */

/* public: __thiscall CHgAniAvatar::CHgAniAvatar(void) */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this)

{
  undefined4 *_Dst;
  uint uVar1;
  int iVar2;
  undefined4 local_11c;
  char local_118 [264];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3bd0  17  ??0CHgAniAvatar@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517b32;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)&local_11c;
  uVar1 = DAT_6052101c ^ (uint)(local_118 + -0x10);
  ExceptionList = &local_c;
  local_11c = this;
  cHgAnigifList::cHgAnigifList((cHgAnigifList *)&(this->CHgAImage_data).field_0x23c);
  (this->CHgAImage_data).offset_0x2d8 = &_vftable_.deleting_destructor;
  (this->CHgAImage_data).offset_0x2dc = (void *)0x0;
  (this->CHgAImage_data).offset_0x2f4 = (void *)0x0;
  (this->CHgAImage_data).offset_0x2e0 = 0;
  (this->CHgAImage_data).offset_0x2e4 = 0;
  (this->CHgAImage_data).offset_0x2f0 = 0;
  (this->CHgAImage_data).offset_0x2e8 = 1;
  (this->CHgAImage_data).offset_0x2ec = 0xffffffff;
  local_4 = 1;
  if ((char)CHgAniAvatar::s_HGAvatarPath == '\0') {
    iVar2 = GetHangameDirectory(local_118);
    if (iVar2 == 0) {
      GetTempPathA(0x105,local_118);
    }
    wsprintfA((LPSTR)&CHgAniAvatar::s_HGAvatarPath,"%s\\%s",local_118,"Avatar",uVar1);
    FUN_60503b30((char *)&CHgAniAvatar::s_HGAvatarPath);
  }
  _Dst = &(this->CHgAImage_data).offset_0x2f8;
  (this->CHgAImage_data).offset_0x238 = 0;
  (this->CHgAImage_data).offset_0x32c = 0;
  (this->CHgAImage_data).offset_0x328 = 1;
  (this->CHgAImage_data).offset_0x234 = (HWND__ *)0x0;
  (this->CHgAImage_data).offset_0x330 = 0;
  (this->CHgAImage_data).offset_0x334 = 0;
  (this->CHgAImage_data).offset_0x2d4 = 0;
  (this->CHgAImage_data).offset_0x4 = 0;
  (this->CHgAImage_data).offset_0x0 = 0;
  this->vftablePtr = (CHgAImage_vftable *)0x0;
  (this->CHgAImage_data).offset_0x8 = 0;
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = 0;
  (this->CHgAImage_data).offset_0x324 = 0;
  memset(_Dst,0,0x2c);
  (this->CHgAImage_data).offset_0x304 = 1;
  *_Dst = 0x28;
  (this->CHgAImage_data).offset_0x306 = 0x10;
  (this->CHgAImage_data).offset_0x308 = 0;
  (this->CHgAImage_data).offset_0x310 = 0;
  (this->CHgAImage_data).offset_0x318 = 0;
  (this->CHgAImage_data).offset_0x31c = 0;
  (this->CHgAImage_data).offset_0x2fc = 0;
  (this->CHgAImage_data).offset_0x300 = 0;
  (this->CHgAImage_data).offset_0x30c = 0;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_11c);
  return;
}



/* ---- CHgAImage @ 60503d80 size=340 ---- */

/* public: __thiscall CHgAniAvatar::CHgAniAvatar(struct HWND__ *) */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this,HWND__ *param_1)

{
  undefined4 *_Dst;
  int iVar1;
  char local_10c [264];
  uint local_4;
  
                    /* 0x3d80  16  ??0CHgAniAvatar@@QAE@PAUHWND__@@@Z */
  local_4 = DAT_6052101c ^ (uint)local_10c;
  cHgAnigifList::cHgAnigifList((cHgAnigifList *)&(this->CHgAImage_data).field_0x23c);
  (this->CHgAImage_data).offset_0x2d8 = &_vftable_.deleting_destructor;
  (this->CHgAImage_data).offset_0x2dc = (void *)0x0;
  (this->CHgAImage_data).offset_0x2f4 = (void *)0x0;
  (this->CHgAImage_data).offset_0x2e0 = 0;
  (this->CHgAImage_data).offset_0x2e4 = 0;
  (this->CHgAImage_data).offset_0x2f0 = 0;
  (this->CHgAImage_data).offset_0x2e8 = 1;
  (this->CHgAImage_data).offset_0x2ec = 0xffffffff;
  if ((char)CHgAniAvatar::s_HGAvatarPath == '\0') {
    iVar1 = GetHangameDirectory(local_10c);
    if (iVar1 != 0) {
      wsprintfA((LPSTR)&CHgAniAvatar::s_HGAvatarPath,"%s\\%s",local_10c,"Avatar");
    }
  }
  _Dst = &(this->CHgAImage_data).offset_0x2f8;
  (this->CHgAImage_data).offset_0x238 = 0;
  (this->CHgAImage_data).offset_0x32c = 0;
  (this->CHgAImage_data).offset_0x328 = 1;
  (this->CHgAImage_data).offset_0x234 = param_1;
  (this->CHgAImage_data).offset_0x330 = 0;
  (this->CHgAImage_data).offset_0x334 = 0;
  (this->CHgAImage_data).offset_0x2d4 = 0;
  (this->CHgAImage_data).offset_0x4 = 0;
  (this->CHgAImage_data).offset_0x0 = 0;
  this->vftablePtr = (CHgAImage_vftable *)0x0;
  (this->CHgAImage_data).offset_0x8 = 0;
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = 0;
  (this->CHgAImage_data).offset_0x324 = 0;
  memset(_Dst,0,0x2c);
  *_Dst = 0x28;
  (this->CHgAImage_data).offset_0x304 = 1;
  (this->CHgAImage_data).offset_0x306 = 0x10;
  (this->CHgAImage_data).offset_0x308 = 0;
  (this->CHgAImage_data).offset_0x310 = 0;
  (this->CHgAImage_data).offset_0x318 = 0;
  (this->CHgAImage_data).offset_0x31c = 0;
  (this->CHgAImage_data).offset_0x2fc = 0;
  (this->CHgAImage_data).offset_0x300 = 0;
  (this->CHgAImage_data).offset_0x30c = 0;
  __security_check_cookie(local_4 ^ (uint)local_10c);
  return;
}



/* ---- ~CHgAniAvatar @ 60503ee0 size=231 ---- */

/* public: __thiscall CHgAniAvatar::~CHgAniAvatar(void) */

void __thiscall CHgAniAvatar::~CHgAniAvatar(CHgAniAvatar *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3ee0  32  ??1CHgAniAvatar@@QAE@XZ */
  puStack_8 = &LAB_60517aec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if (*(int *)(this + 0x23c) != 0) {
    cHgAnigifList::Destroy((cHgAnigifList *)(this + 0x240));
  }
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x32c) = 1;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x334) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(CHgAImage_vftable **)(this + 0x2dc) = &CHgAImage::_vftable_;
  if (*(void **)(this + 0x2f8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2f8));
    *(undefined4 *)(this + 0x2f8) = 0;
  }
  if (*(void **)(this + 0x2e0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2e0));
    *(undefined4 *)(this + 0x2e0) = 0;
  }
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  this[0x2ec] = (CHgAniAvatar)0x1;
  *(undefined4 *)(this + 0x2f0) = 0xffffffff;
  local_4 = 0xffffffff;
  cHgAnigifList::~cHgAnigifList((cHgAnigifList *)(this + 0x240));
  ExceptionList = local_c;
  return;
}



/* ---- getAvatarFileName @ 60503fd0 size=273 ---- */

/* protected: int __thiscall CHgAniAvatar::getAvatarFileName(char *,char *,int,int,int,int) */

int __thiscall
CHgAniAvatar::getAvatarFileName
          (CHgAniAvatar *this,char *param_1,char *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  LPCSTR pCVar1;
  
                    /* 0x3fd0  251  ?getAvatarFileName@CHgAniAvatar@@IAEHPAD0HHHH@Z */
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  if (param_3 == 1) {
    if (param_4 == 4) {
      pCVar1 = "AW";
    }
    else if (param_4 == 8) {
      pCVar1 = "AG";
    }
    else {
      if (param_4 != 0x10) {
        return 0;
      }
      pCVar1 = "AC";
    }
    lstrcpyA(param_1,pCVar1);
    if (param_5 == 0x20) {
      pCVar1 = "F";
    }
    else {
      if (param_5 != 0x40) {
        return 0;
      }
      pCVar1 = "H";
    }
    lstrcatA(param_1,pCVar1);
    if (param_6 == 0x80) {
      pCVar1 = "A";
    }
    else {
      if (param_6 != 0x100) {
        return 0;
      }
      pCVar1 = "S";
    }
    lstrcatA(param_1,pCVar1);
    lstrcatA(param_1,"_");
    lstrcatA(param_1,param_2);
    lstrcatA(param_1,".GIF");
    return 1;
  }
  if (param_3 != 2) {
    return 0;
  }
  if (param_4 == 0x200) {
    pCVar1 = "BB";
  }
  else {
    if (param_4 != 0x400) {
      return 0;
    }
    pCVar1 = "BS";
  }
  lstrcpyA(param_1,pCVar1);
  lstrcatA(param_1,"_");
  lstrcatA(param_1,param_2);
  lstrcatA(param_1,".BMP");
  return 1;
}



/* ---- makeAvatarURL @ 605040f0 size=61 ---- */

/* protected: int __thiscall CHgAniAvatar::makeAvatarURL(char *,char *,char *) */

int __thiscall
CHgAniAvatar::makeAvatarURL(CHgAniAvatar *this,char *param_1,char *param_2,char *param_3)

{
                    /* 0x40f0  260  ?makeAvatarURL@CHgAniAvatar@@IAEHPAD00@Z */
  *param_1 = '\0';
  lstrcpyA(param_1,"http://");
  lstrcatA(param_1,param_3);
  lstrcatA(param_1,"/IMG_AVTR/");
  lstrcatA(param_1,param_2);
  return 1;
}



/* ---- FUN_60504130 @ 60504130 size=57 ---- */

undefined4 FUN_60504130(CHgAniAvatar *param_1)

{
  int iVar1;
  HANDLE hObject;
  
  iVar1 = CHgAniAvatar::checkSavedAvatarFile(param_1);
  if ((iVar1 == 0) && (iVar1 = CHgAniAvatar::downloadNewAvatar(param_1), iVar1 == 0)) {
    return 0;
  }
  iVar1 = CHgAniAvatar::loadAvatar(param_1);
  if (iVar1 != 0) {
    hObject = GetCurrentThread();
    CloseHandle(hObject);
  }
  return 0;
}



/* ---- Create @ 60504170 size=235 ---- */

/* public: int __thiscall CHgAniAvatar::Create(char const *,int,int,int,int,int,int) */

int __thiscall
CHgAniAvatar::Create
          (CHgAniAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  HANDLE pvVar2;
  CHgAniAvatar *local_4;
  
                    /* 0x4170  75  ?Create@CHgAniAvatar@@QAEHPBDHHHHHH@Z */
  local_4 = this;
  if (*(int *)(this + 0x23c) != 0) {
    cHgAnigifList::Destroy((cHgAnigifList *)(this + 0x240));
    *(undefined4 *)(this + 0x23c) = 0;
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined4 *)(this + 0x32c) = 1;
    *(undefined4 *)(this + 0x238) = 0;
    *(undefined4 *)(this + 0x334) = 0;
    *(undefined4 *)(this + 0x338) = 0;
  }
  *(int *)this = param_2;
  *(int *)(this + 4) = param_5;
  *(int *)(this + 8) = param_6;
  strcpy_s((char *)(this + 0x14),0x1b,param_1);
  *(undefined4 *)(this + 0x328) = 0;
  if (param_7 == 0) {
    iVar1 = (uint)(param_2 != 0) * 8 + 8;
  }
  else {
    iVar1 = 4;
  }
  iVar1 = getAvatarFileName(this,(char *)(this + 0x2f),(char *)(this + 0x14),1,iVar1,
                            (-(uint)(param_5 != 0) & 0xffffffe0) + 0x40,
                            (-(uint)(param_6 != 0) & 0xffffff80) + 0x100);
  if (iVar1 == 0) {
    return 0;
  }
  pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_60504130,this,0,(LPDWORD)&local_4);
  return (uint)(pvVar2 != (HANDLE)0x0);
}



/* ---- CreateEx @ 60504260 size=240 ---- */

/* public: int __thiscall CHgAniAvatar::CreateEx(char const *,int,int,int,int,int,int) */

int __thiscall
CHgAniAvatar::CreateEx
          (CHgAniAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  
                    /* 0x4260  83  ?CreateEx@CHgAniAvatar@@QAEHPBDHHHHHH@Z */
  if (*(int *)(this + 0x23c) != 0) {
    cHgAnigifList::Destroy((cHgAnigifList *)(this + 0x240));
    *(undefined4 *)(this + 0x23c) = 0;
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined4 *)(this + 0x32c) = 1;
    *(undefined4 *)(this + 0x238) = 0;
    *(undefined4 *)(this + 0x334) = 0;
    *(undefined4 *)(this + 0x338) = 0;
  }
  *(int *)this = param_2;
  *(int *)(this + 4) = param_5;
  *(int *)(this + 8) = param_6;
  strcpy_s((char *)(this + 0x14),0x1b,param_1);
  *(undefined4 *)(this + 0x328) = 0;
  if (param_7 == 0) {
    iVar1 = (uint)(param_2 != 0) * 8 + 8;
  }
  else {
    iVar1 = 4;
  }
  iVar1 = getAvatarFileName(this,(char *)(this + 0x2f),(char *)(this + 0x14),1,iVar1,
                            (-(uint)(param_5 != 0) & 0xffffffe0) + 0x40,
                            (-(uint)(param_6 != 0) & 0xffffff80) + 0x100);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = checkSavedAvatarFile(this);
  if ((iVar1 == 0) && (iVar1 = downloadNewAvatar(this), iVar1 == 0)) {
    return 0;
  }
  iVar1 = loadAvatar(this);
  return (uint)(iVar1 != 0);
}



/* ---- checkSavedAvatarFile @ 60504350 size=218 ---- */

/* protected: int __thiscall CHgAniAvatar::checkSavedAvatarFile(void) */

int __thiscall CHgAniAvatar::checkSavedAvatarFile(CHgAniAvatar *this)

{
  errno_t eVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  CHAR local_10c [264];
  uint local_4;
  
                    /* 0x4350  245  ?checkSavedAvatarFile@CHgAniAvatar@@IAEHXZ */
  local_4 = DAT_6052101c ^ (uint)local_10c;
  wsprintfA(local_10c,"%s\\%s",&s_HGAvatarPath,this + 0x2f);
  eVar1 = _access_s(local_10c,0);
  if (eVar1 != 0) {
    FUN_6050d860("HGAVTR:: CHgAniAvatar.checkSavedAvatarFile() :: No Avatar File : %s \n",
                 (char)local_10c);
    iVar2 = __security_check_cookie(local_4 ^ (uint)local_10c);
    return iVar2;
  }
  hFile = CreateFileA(local_10c,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
    CloseHandle(hFile);
    if (DVar3 != 0xffffffff) {
      iVar2 = __security_check_cookie(local_4 ^ (uint)local_10c);
      return iVar2;
    }
  }
  iVar2 = __security_check_cookie(local_4 ^ (uint)local_10c);
  return iVar2;
}



/* ---- downloadNewAvatar @ 60504430 size=183 ---- */

/* protected: int __thiscall CHgAniAvatar::downloadNewAvatar(void) */

int __thiscall CHgAniAvatar::downloadNewAvatar(CHgAniAvatar *this)

{
  BOOL BVar1;
  int iVar2;
  CHAR local_414 [520];
  CHAR local_20c [520];
  uint local_4;
  
                    /* 0x4430  247  ?downloadNewAvatar@CHgAniAvatar@@IAEHXZ */
  local_4 = DAT_6052101c ^ (uint)local_414;
  local_414[0] = '\0';
  lstrcpyA(local_414,"http://");
  lstrcatA(local_414,"avtsvr.hangame.com");
  lstrcatA(local_414,"/IMG_AVTR/");
  lstrcatA(local_414,(LPCSTR)(this + 0x2f));
  wsprintfA(local_20c,"%s\\%s",&s_HGAvatarPath,this + 0x2f);
  BVar1 = PathIsDirectoryA((LPCSTR)&s_HGAvatarPath);
  if (BVar1 == 0) {
    CreateDirectoryA((LPCSTR)&s_HGAvatarPath,(LPSECURITY_ATTRIBUTES)0x0);
  }
  FUN_60503930(local_20c,local_414);
  iVar2 = __security_check_cookie(local_4 ^ (uint)local_414);
  return iVar2;
}



/* ---- loadAvatar @ 605044f0 size=861 ---- */

/* protected: int __thiscall CHgAniAvatar::loadAvatar(void) */

int __thiscall CHgAniAvatar::loadAvatar(CHgAniAvatar *this)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  HWND hWnd;
  char cVar6;
  HWND__ *pHStack_254;
  CHgAImage_vftable *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined1 *local_220;
  void *local_21c;
  undefined1 *puStack_218;
  undefined4 local_214;
  CHAR local_210 [520];
  HWND__ *local_8;
  
                    /* 0x44f0  256  ?loadAvatar@CHgAniAvatar@@IAEHXZ */
  local_214 = 0xffffffff;
  puStack_218 = &LAB_60517cd8;
  local_21c = ExceptionList;
  pHStack_254 = (HWND__ *)(DAT_6052101c ^ (uint)local_210);
  local_220 = (undefined1 *)&pHStack_254;
  ExceptionList = &local_21c;
  local_8 = pHStack_254;
  wsprintfA(local_210,"%s\\%s",&s_HGAvatarPath,this + 0x2f);
  *(undefined4 *)(this + 0x23c) = 0;
  pcVar2 = strrchr(local_210,0x2e);
  cVar6 = (char)local_210;
  if (pcVar2 == (char *)0x0) {
    if ((*(int *)(this + 0x23c) != 0) && (*(int *)(this + 0x328) == 0)) {
      iVar3 = *(int *)(this + 0x2ac);
      goto joined_r0x60504684;
    }
  }
  else {
    iVar3 = strncmp(pcVar2 + 1,"BMP",3);
joined_r0x60504684:
    if (iVar3 != 0) {
      local_214 = 0;
      iVar3 = cHgAnigifList::Load((cHgAnigifList *)(this + 0x240),local_210,(HWND__ *)0x0);
      if (iVar3 == 0) {
        DeleteFileA(local_210);
        FUN_6050d860("HGAVTR:: CHgAniAvatar.loadAvatar :: delete loading failed file [ %s ]\n",cVar6
                    );
        if ((*(HWND *)(this + 0x238) != (HWND)0x0) &&
           (BVar5 = IsWindow(*(HWND *)(this + 0x238)), BVar5 != 0)) {
          PostMessageA(*(HWND *)(this + 0x238),0x424,2,0);
        }
      }
      else {
        *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x2a0);
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x2a4);
        *(undefined4 *)(this + 0x23c) = 1;
        if ((*(HWND *)(this + 0x238) != (HWND)0x0) &&
           (BVar5 = IsWindow(*(HWND *)(this + 0x238)), BVar5 != 0)) {
          PostMessageA(*(HWND *)(this + 0x238),0x424,1,*(LPARAM *)(this + 0x2d8));
        }
      }
      goto LAB_60504833;
    }
  }
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  local_240 = &CHgAImage::_vftable_;
  local_23c = 0;
  local_224 = 0;
  local_238 = 0;
  local_234 = 0;
  local_228 = 0;
  local_230 = 1;
  local_22c = -1;
  local_214 = 2;
  cVar1 = (*(code *)PTR_CHgAImage__Create_60519324)(local_210);
  if (cVar1 == '\0') {
    DeleteFileA(local_210);
    FUN_6050d860("HGAVTR:: CHgAniAvatar.loadAvatar :: delete loading failed file [ %s ]\n",cVar6);
    if ((*(HWND *)(this + 0x238) != (HWND)0x0) &&
       (BVar5 = IsWindow(*(HWND *)(this + 0x238)), BVar5 != 0)) {
      hWnd = *(HWND *)(this + 0x238);
LAB_60504792:
      PostMessageA(hWnd,0x424,2,0);
    }
  }
  else {
    local_22c = 0xff0000;
    local_230 = 1;
    iVar3 = local_234;
    if ((*(int *)(this + 4) == 0) && (*(int *)this == 0)) {
      iVar3 = 0x40;
    }
    iVar4 = local_238 * 0x10 + 0x1f;
    iVar4 = (int)((iVar4 >> 3 & 0xfffffffcU) - (iVar4 >> 0x1f)) >> 1;
    *(int *)(this + 0x10) = iVar3;
    *(int *)(this + 0xc) = iVar4;
    cVar1 = (**(code **)(*(int *)(this + 0x2dc) + 0xc))(iVar4,iVar3,0xff0000);
    if (cVar1 != '\0') {
      FUN_60502ee0(*(void **)(this + 0x2e8),*(int *)(this + 0x2e4));
      CHgAImage::DrawUnSafe
                ((CHgAImage *)(this + 0x2dc),0,0,(CHgAImage *)&local_240,0,0,local_238,local_234,
                 0xff);
      *(int *)(this + 0x304) = -*(int *)(this + 0x10);
      *(undefined4 *)(this + 0x300) = *(undefined4 *)(this + 0xc);
      *(undefined4 *)(this + 0x23c) = 1;
      if ((*(HWND *)(this + 0x238) != (HWND)0x0) &&
         (BVar5 = IsWindow(*(HWND *)(this + 0x238)), BVar5 != 0)) {
        PostMessageA(*(HWND *)(this + 0x238),0x424,1,*(LPARAM *)(this + 0x2d8));
      }
      CHgAImage::~CHgAImage((CHgAImage *)&local_240);
      goto LAB_60504833;
    }
    DeleteFileA(local_210);
    FUN_6050d860("HGAVTR:: CHgAniAvatar.loadAvatar :: delete loading failed file [ %s ]\n",cVar6);
    if ((*(HWND *)(this + 0x238) != (HWND)0x0) &&
       (BVar5 = IsWindow(*(HWND *)(this + 0x238)), BVar5 != 0)) {
      hWnd = *(HWND *)(this + 0x238);
      goto LAB_60504792;
    }
  }
  CHgAImage::~CHgAImage((CHgAImage *)&local_240);
LAB_60504833:
  ExceptionList = local_21c;
  iVar3 = __security_check_cookie((uint)local_8 ^ (uint)local_210);
  return iVar3;
}



/* ---- Catch_All@605046fc @ 605046fc size=6 ---- */

undefined * Catch_All_605046fc(void)

{
  return &DAT_60504702;
}



/* ---- Draw @ 60504860 size=889 ---- */

/* public: int __thiscall CHgAniAvatar::Draw(struct HDC__ *,int,int,int) */

int __thiscall
CHgAniAvatar::Draw(CHgAniAvatar *this,HDC__ *param_1,int param_2,int param_3,int param_4)

{
  HDC hdc;
  int iVar1;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  uint local_24;
  
                    /* 0x4860  104  ?Draw@CHgAniAvatar@@QAEHPAUHDC__@@HHH@Z */
  *(int *)(this + 0x334) = param_2;
  *(int *)(this + 0x338) = param_3;
  if (*(int *)(this + 0x23c) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x32c) != 0) {
    if ((*(int *)(this + 0x328) == 0) && (*(int *)(this + 0x2ac) != 0)) {
      SetAutoDraw(this,1,param_2,param_3);
    }
    *(undefined4 *)(this + 0x32c) = 0;
  }
  if (*(int *)(this + 0x328) == 0) {
    cHgAnigifList::Draw((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3);
    return 1;
  }
  local_24 = 0;
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iVar1 = GetMapMode(param_1);
    SetMapMode(hdc,iVar1);
    h = CreateCompatibleBitmap(param_1,*(int *)(this + 0xc),*(int *)(this + 0x10));
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      StretchDIBits(hdc,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),0,0,*(int *)(this + 0xc),
                    *(int *)(this + 0x10),*(void **)(this + 0x2f8),(BITMAPINFO *)(this + 0x2fc),0,
                    0xcc0020);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar1 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar1);
        h_01 = CreateBitmap(*(int *)(this + 0xc),*(int *)(this + 0x10),1,1,(void *)0x0);
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          SetBkColor(hdc,0xff0000);
          StretchBlt(hdc_00,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc,0,0,
                     *(int *)(this + 0xc),*(int *)(this + 0x10),0xcc0020);
          hdc_01 = CreateCompatibleDC(param_1);
          if (hdc_01 != (HDC)0x0) {
            iVar1 = GetMapMode(param_1);
            SetMapMode(hdc_01,iVar1);
            h_03 = CreateCompatibleBitmap(param_1,*(int *)(this + 0xc),*(int *)(this + 0x10));
            if (h_03 != (HBITMAP)0x0) {
              h_04 = SelectObject(hdc_01,h_03);
              StretchBlt(hdc_01,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc,0,0,
                         *(int *)(this + 0xc),*(int *)(this + 0x10),0xcc0020);
              StretchBlt(hdc_01,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_00,0,0,
                         *(int *)(this + 0xc),*(int *)(this + 0x10),0x220326);
              hdc_02 = CreateCompatibleDC(param_1);
              if (hdc_02 != (HDC)0x0) {
                iVar1 = GetMapMode(param_1);
                SetMapMode(hdc_02,iVar1);
                h_05 = CreateCompatibleBitmap(param_1,*(int *)(this + 0xc),*(int *)(this + 0x10));
                if (h_05 != (HBITMAP)0x0) {
                  h_06 = SelectObject(hdc_02,h_05);
                  StretchBlt(hdc_02,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),param_1,param_2,
                             param_3,*(int *)(this + 0xc),*(int *)(this + 0x10),0xcc0020);
                  StretchBlt(hdc_02,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_00,0,0,
                             *(int *)(this + 0xc),*(int *)(this + 0x10),0x8800c6);
                  StretchBlt(hdc_02,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_01,0,0,
                             *(int *)(this + 0xc),*(int *)(this + 0x10),0xee0086);
                  StretchBlt(param_1,param_2,param_3,*(int *)(this + 0xc),*(int *)(this + 0x10),
                             hdc_02,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),0xcc0020);
                  SelectObject(hdc_02,h_06);
                  DeleteObject(h_05);
                }
                local_24 = (uint)(h_05 != (HBITMAP)0x0);
                DeleteDC(hdc_02);
              }
              SelectObject(hdc_01,h_04);
              DeleteObject(h_03);
            }
            DeleteDC(hdc_01);
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return local_24;
}



/* ---- DirectDraw @ 60504be0 size=104 ---- */

/* public: int __thiscall CHgAniAvatar::DirectDraw(struct HDC__ *,int,int) */

int __thiscall CHgAniAvatar::DirectDraw(CHgAniAvatar *this,HDC__ *param_1,int param_2,int param_3)

{
                    /* 0x4be0  98  ?DirectDraw@CHgAniAvatar@@QAEHPAUHDC__@@HH@Z */
  *(int *)(this + 0x334) = param_2;
  *(int *)(this + 0x338) = param_3;
  if (*(int *)(this + 0x23c) == 0) {
    return 0;
  }
  if ((*(int *)(this + 0x328) == 0) && (*(int *)(this + 0x2ac) != 0)) {
    cHgAnigifList::Flip((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3);
    return 1;
  }
  cHgAnigifList::Draw((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3);
  return 1;
}



/* ---- DrawSelected @ 60504c50 size=1079 ---- */

/* public: int __thiscall CHgAniAvatar::DrawSelected(struct HDC__ *,int,int,unsigned long,int) */

int __thiscall
CHgAniAvatar::DrawSelected
          (CHgAniAvatar *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  HDC hdc;
  int iVar1;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HBRUSH hbr;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  HDC hdc_03;
  HBITMAP h_07;
  HGDIOBJ h_08;
  uint local_3c;
  tagRECT local_10;
  
                    /* 0x4c50  121  ?DrawSelected@CHgAniAvatar@@QAEHPAUHDC__@@HHKH@Z */
  *(int *)(this + 0x334) = param_2;
  *(int *)(this + 0x338) = param_3;
  if (*(int *)(this + 0x23c) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x328) == 0) {
    cHgAnigifList::Draw((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3);
    return 1;
  }
  local_3c = 0;
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iVar1 = GetMapMode(param_1);
    SetMapMode(hdc,iVar1);
    h = CreateCompatibleBitmap(param_1,*(int *)(this + 0xc),*(int *)(this + 0x10));
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      StretchDIBits(hdc,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),0,0,*(int *)(this + 0xc),
                    *(int *)(this + 0x10),*(void **)(this + 0x2f8),(BITMAPINFO *)(this + 0x2fc),0,
                    0xcc0020);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar1 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar1);
        h_01 = CreateCompatibleBitmap(param_1,*(int *)(this + 0xc),*(int *)(this + 0x10));
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          hbr = CreateSolidBrush(0x5050);
          if (hbr != (HBRUSH)0x0) {
            SetRect(&local_10,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10));
            FillRect(hdc_00,&local_10,hbr);
            DeleteObject(hbr);
            hdc_01 = CreateCompatibleDC(param_1);
            if (hdc_01 != (HDC)0x0) {
              iVar1 = GetMapMode(param_1);
              SetMapMode(hdc_01,iVar1);
              h_03 = CreateBitmap(*(int *)(this + 0xc),*(int *)(this + 0x10),1,1,(void *)0x0);
              if (h_03 != (HBITMAP)0x0) {
                h_04 = SelectObject(hdc_01,h_03);
                SetBkColor(hdc,0xff0000);
                StretchBlt(hdc_01,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc,0,0,
                           *(int *)(this + 0xc),*(int *)(this + 0x10),0xcc0020);
                StretchBlt(hdc_00,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_01,0,0,
                           *(int *)(this + 0xc),*(int *)(this + 0x10),0xee0086);
                hdc_02 = CreateCompatibleDC(param_1);
                if (hdc_02 != (HDC)0x0) {
                  iVar1 = GetMapMode(param_1);
                  SetMapMode(hdc_02,iVar1);
                  h_05 = CreateCompatibleBitmap(hdc,*(int *)(this + 0xc),*(int *)(this + 0x10));
                  if (h_05 != (HBITMAP)0x0) {
                    h_06 = SelectObject(hdc_02,h_05);
                    StretchBlt(hdc_02,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc,0,0,
                               *(int *)(this + 0xc),*(int *)(this + 0x10),0xcc0020);
                    StretchBlt(hdc_02,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_00,0,0,
                               *(int *)(this + 0xc),*(int *)(this + 0x10),0x220326);
                    hdc_03 = CreateCompatibleDC(param_1);
                    if (hdc_03 != (HDC)0x0) {
                      iVar1 = GetMapMode(param_1);
                      SetMapMode(hdc_03,iVar1);
                      h_07 = CreateCompatibleBitmap(hdc,*(int *)(this + 0xc),*(int *)(this + 0x10));
                      if (h_07 != (HBITMAP)0x0) {
                        h_08 = SelectObject(hdc_03,h_07);
                        StretchBlt(hdc_03,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),param_1,
                                   param_2,param_3,*(int *)(this + 0xc),*(int *)(this + 0x10),
                                   0xcc0020);
                        StretchBlt(hdc_03,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_01,0,0,
                                   *(int *)(this + 0xc),*(int *)(this + 0x10),0x8800c6);
                        StretchBlt(hdc_03,0,0,*(int *)(this + 0xc),*(int *)(this + 0x10),hdc_02,0,0,
                                   *(int *)(this + 0xc),*(int *)(this + 0x10),0xee0086);
                        StretchBlt(param_1,param_2,param_3,*(int *)(this + 0xc),
                                   *(int *)(this + 0x10),hdc_03,0,0,*(int *)(this + 0xc),
                                   *(int *)(this + 0x10),0xcc0020);
                        SelectObject(hdc_03,h_08);
                        DeleteObject(h_07);
                      }
                      local_3c = (uint)(h_07 != (HBITMAP)0x0);
                      DeleteDC(hdc_03);
                    }
                    SelectObject(hdc_02,h_06);
                    DeleteObject(h_05);
                  }
                  DeleteDC(hdc_02);
                }
                SelectObject(hdc_01,h_04);
                DeleteObject(h_03);
              }
              DeleteDC(hdc_01);
            }
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return local_3c;
}



/* ---- Draw @ 60505090 size=154 ---- */

/* public: int __thiscall CHgAniAvatar::Draw(unsigned char * *,int,int,int,int,int) */

int __thiscall
CHgAniAvatar::Draw(CHgAniAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,
                  int param_5,int param_6)

{
                    /* 0x5090  103  ?Draw@CHgAniAvatar@@QAEHPAPAEHHHHH@Z */
  *(int *)(this + 0x334) = param_2;
  *(int *)(this + 0x338) = param_3;
  if (*(int *)(this + 0x23c) != 0) {
    if (*(int *)(this + 0x32c) != 0) {
      if ((*(int *)(this + 0x328) == 0) && (*(int *)(this + 0x2ac) != 0)) {
        SetAutoDraw(this,1,param_2,param_3);
        cHgAnigifList::DrawAnimation
                  ((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3,param_4,param_5);
      }
      *(undefined4 *)(this + 0x32c) = 0;
    }
    if (*(int *)(this + 0x328) == 0) {
      cHgAnigifList::Draw((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3,param_4,param_5);
    }
  }
  return 1;
}



/* ---- DirectDraw @ 60505130 size=122 ---- */

/* public: int __thiscall CHgAniAvatar::DirectDraw(unsigned char * *,int,int,int,int,int) */

int __thiscall
CHgAniAvatar::DirectDraw
          (CHgAniAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
                    /* 0x5130  97  ?DirectDraw@CHgAniAvatar@@QAEHPAPAEHHHHH@Z */
  *(int *)(this + 0x334) = param_2;
  *(int *)(this + 0x338) = param_3;
  if (*(int *)(this + 0x23c) != 0) {
    if ((*(int *)(this + 0x328) == 0) && (*(int *)(this + 0x2ac) != 0)) {
      cHgAnigifList::Flip((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3,param_4,param_5);
      return 1;
    }
    cHgAnigifList::Draw((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3,param_4,param_5);
  }
  return 1;
}



/* ---- DrawSelected @ 605051b0 size=89 ---- */

/* public: int __thiscall CHgAniAvatar::DrawSelected(unsigned char * *,int,int,int,int,unsigned
   long,int) */

int __thiscall
CHgAniAvatar::DrawSelected
          (CHgAniAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,
          ulong param_6,int param_7)

{
                    /* 0x51b0  120  ?DrawSelected@CHgAniAvatar@@QAEHPAPAEHHHHKH@Z */
  *(int *)(this + 0x334) = param_2;
  *(int *)(this + 0x338) = param_3;
  if (*(int *)(this + 0x23c) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x328) == 0) {
    cHgAnigifList::Draw((cHgAnigifList *)(this + 0x240),param_1,param_2,param_3,param_4,param_5);
    return 1;
  }
  return 1;
}



/* ---- SetAutoDraw @ 60505210 size=154 ---- */

/* public: int __thiscall CHgAniAvatar::SetAutoDraw(int,int,int) */

int __thiscall CHgAniAvatar::SetAutoDraw(CHgAniAvatar *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* 0x5210  198  ?SetAutoDraw@CHgAniAvatar@@QAEHHHH@Z */
  if (*(int *)(this + 0x238) != 0) {
    if (((*(int *)(this + 0x23c) != 0) && (*(int *)(this + 0x328) == 0)) &&
       (*(int *)(this + 0x2ac) != 0)) {
      iVar1 = 1;
      if (*(int *)(this + 0x330) != 0) {
        cHgAnigifList::Stop((cHgAnigifList *)(this + 0x240));
      }
      *(int *)(this + 0x330) = param_1;
      if (param_1 != 0) {
        if (param_2 == -1) {
          param_2 = *(int *)(this + 0x334);
        }
        if (param_3 == -1) {
          param_3 = *(int *)(this + 0x338);
        }
        iVar1 = cHgAnigifList::Start
                          ((cHgAnigifList *)(this + 0x240),*(undefined4 *)(this + 0x238),param_2,
                           param_3);
      }
      return iVar1;
    }
    *(undefined4 *)(this + 0x330) = 0;
  }
  return 0;
}



/* ---- SetAutoDraw @ 605052b0 size=123 ---- */

/* public: int __thiscall CHgAniAvatar::SetAutoDraw(int,struct HDC__ *,int,int) */

int __thiscall
CHgAniAvatar::SetAutoDraw(CHgAniAvatar *this,int param_1,HDC__ *param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0x52b0  199  ?SetAutoDraw@CHgAniAvatar@@QAEHHPAUHDC__@@HH@Z */
  if (((*(int *)(this + 0x23c) == 0) || (*(int *)(this + 0x328) != 0)) ||
     (*(int *)(this + 0x2ac) == 0)) {
    *(undefined4 *)(this + 0x330) = 0;
    return 0;
  }
  iVar1 = 1;
  if (*(int *)(this + 0x330) != 0) {
    cHgAnigifList::Stop((cHgAnigifList *)(this + 0x240));
  }
  *(int *)(this + 0x330) = param_1;
  if (param_1 != 0) {
    iVar1 = cHgAnigifList::Start
                      ((cHgAnigifList *)(this + 0x240),*(undefined4 *)(this + 0x238),param_3,param_4
                      );
  }
  return iVar1;
}



/* ---- IsAniAvatar @ 60505330 size=28 ---- */

/* public: int __thiscall CHgAniAvatar::IsAniAvatar(void) */

int __thiscall CHgAniAvatar::IsAniAvatar(CHgAniAvatar *this)

{
                    /* 0x5330  173  ?IsAniAvatar@CHgAniAvatar@@QAEHXZ */
  if ((*(int *)(this + 0x23c) == 0) || (*(int *)(this + 0x328) != 0)) {
    return 0;
  }
  return *(int *)(this + 0x2ac);
}



/* ---- IsReady @ 60505350 size=7 ---- */

/* public: int __thiscall CHgAniAvatar::IsReady(void) */

int __thiscall CHgAniAvatar::IsReady(CHgAniAvatar *this)

{
                    /* 0x5350  182  ?IsReady@CHgAniAvatar@@QAEHXZ */
  return *(int *)(this + 0x23c);
}



/* ---- Destroy @ 60505360 size=68 ---- */

/* public: void __thiscall CHgAniAvatar::Destroy(void) */

void __thiscall CHgAniAvatar::Destroy(CHgAniAvatar *this)

{
                    /* 0x5360  90  ?Destroy@CHgAniAvatar@@QAEXXZ */
  if (*(int *)(this + 0x23c) != 0) {
    cHgAnigifList::Destroy((cHgAnigifList *)(this + 0x240));
  }
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x334) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  *(undefined4 *)(this + 0x32c) = 1;
  return;
}



/* ---- AddFileName @ 605053b0 size=3 ---- */

/* protected: void __thiscall CHgAniAvatar::AddFileName(int) */

void __thiscall CHgAniAvatar::AddFileName(CHgAniAvatar *this,int param_1)

{
                    /* 0x53b0  55  ?AddFileName@CHgAniAvatar@@IAEXH@Z */
  return;
}



/* ---- CheckFolder @ 605053c0 size=253 ---- */

/* protected: void __thiscall CHgAniAvatar::CheckFolder(void) */

void __thiscall CHgAniAvatar::CheckFolder(CHgAniAvatar *this)

{
  char cVar1;
  undefined4 uVar2;
  char **ppcVar3;
  HANDLE hFindFile;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 auStack_364 [4];
  _WIN32_FIND_DATAA local_360;
  CHAR local_220 [264];
  char local_118 [268];
  uint local_c;
  
                    /* 0x53c0  64  ?CheckFolder@CHgAniAvatar@@IAEXXZ */
  local_c = DAT_6052101c ^ (uint)auStack_364;
  ppcVar3 = &s_HGAvatarPath;
  do {
    cVar1 = *(char *)ppcVar3;
    ppcVar3 = (char **)((int)ppcVar3 + 1);
  } while (cVar1 != '\0');
  if (ppcVar3 != (char **)((int)&s_HGAvatarPath + 1)) {
    memset(local_220,0,0x105);
    FUN_60516290(local_220,0x105,local_220,"%s\\*.*",-0x10);
    hFindFile = FindFirstFileA(local_220,&local_360);
    if (hFindFile != (HANDLE)0xffffffff) {
      iVar4 = FindNextFileA(hFindFile,&local_360);
      uVar2 = extraout_ECX;
      while (iVar4 != 0) {
        if (local_360.dwFileAttributes != 0x10) {
          FUN_60516290(uVar2,0x105,local_118,"%s\\%s",-0x10);
          DeleteFileA(local_118);
        }
        iVar4 = FindNextFileA(hFindFile,&local_360);
        uVar2 = extraout_ECX_00;
      }
      FindClose(hFindFile);
    }
  }
  __security_check_cookie(local_c ^ (uint)auStack_364);
  return;
}



/* ---- GetOldestAvatarFile @ 605054c0 size=3 ---- */

/* private: void __thiscall CHgAniAvatar::GetOldestAvatarFile(char *,char *,int) */

void __thiscall
CHgAniAvatar::GetOldestAvatarFile(CHgAniAvatar *this,char *param_1,char *param_2,int param_3)

{
                    /* 0x54c0  155  ?GetOldestAvatarFile@CHgAniAvatar@@AAEXPAD0H@Z */
  return;
}



/* ---- DeleteAvatarFile @ 605054d0 size=3 ---- */

/* private: void __thiscall CHgAniAvatar::DeleteAvatarFile(unsigned long,char *) */

void __thiscall CHgAniAvatar::DeleteAvatarFile(CHgAniAvatar *this,ulong param_1,char *param_2)

{
                    /* 0x54d0  86  ?DeleteAvatarFile@CHgAniAvatar@@AAEXKPAD@Z
                       0x54d0  87  ?DeleteAvatarFileBMP@CHgAniAvatar@@AAEXKPAD@Z */
  return;
}



/* ---- FUN_605054e0 @ 605054e0 size=254 ---- */

void FUN_605054e0(int param_1)

{
  rsize_t _DstSize;
  void *_Dst;
  int iVar1;
  int in_EAX;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (in_EAX != param_1) {
    pvVar3 = *(void **)(param_1 + 0xc);
    uVar2 = *(int *)(param_1 + 0x10) - (int)pvVar3 >> 2;
    if (uVar2 == 0) {
      FUN_6050cc60();
      return;
    }
    _Dst = *(void **)(in_EAX + 0xc);
    if (uVar2 <= (uint)(*(int *)(in_EAX + 0x10) - (int)_Dst >> 2)) {
      iVar5 = *(int *)(param_1 + 0x10) - (int)pvVar3 >> 2;
      if (0 < iVar5) {
        _DstSize = iVar5 * 4;
        memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
      }
      *(int *)(in_EAX + 0x10) =
           *(int *)(in_EAX + 0xc) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2) * 4;
      return;
    }
    if (_Dst == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(in_EAX + 0x14) - (int)_Dst >> 2;
    }
    if (uVar2 <= uVar6) {
      FUN_60505a70(*(undefined4 *)(param_1 + 0xc),_Dst);
      pvVar3 = FUN_605086f0(extraout_ECX,*(void **)(in_EAX + 0x10));
      *(void **)(in_EAX + 0x10) = pvVar3;
      return;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    if ((iVar5 - iVar1 >> 2 != 0) && (uVar4 = FUN_605056f0(), (char)uVar4 != '\0')) {
      pvVar3 = FUN_605086f0(extraout_ECX_00,*(void **)(in_EAX + 0xc));
      *(void **)(in_EAX + 0x10) = pvVar3;
    }
  }
  return;
}



/* ---- FUN_605055e0 @ 605055e0 size=214 ---- */

int * __thiscall FUN_605055e0(void *this,int *param_1)

{
  rsize_t _DstSize;
  int iVar1;
  void *_Src;
  void *_Dst;
  undefined4 *extraout_EAX;
  undefined4 *puVar2;
  int extraout_EAX_00;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *extraout_EAX = param_1;
    puVar2 = extraout_EAX;
  }
  *param_1 = (int)puVar2;
  local_4 = 0;
  iVar4 = *(int *)((int)this + 0x10);
  iVar1 = *(int *)((int)this + 0xc);
  param_1[3] = 0;
  uVar3 = iVar4 - iVar1 >> 2;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar3 != 0) {
    if (0x3fffffff < uVar3) {
      std::length_error::length_error((length_error *)0x0);
    }
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar3);
    param_1[3] = extraout_EAX_00;
    param_1[4] = extraout_EAX_00;
    param_1[5] = extraout_EAX_00 + uVar3 * 4;
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
    param_1[4] = (int)(_DstSize + (int)_Dst);
  }
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_605056c0 @ 605056c0 size=47 ---- */

void FUN_605056c0(void)

{
  undefined4 *unaff_ESI;
  
  if ((void *)unaff_ESI[3] != (void *)0x0) {
    operator_delete((void *)unaff_ESI[3]);
  }
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  operator_delete((void *)*unaff_ESI);
  return;
}



/* ---- FUN_605056f0 @ 605056f0 size=35 ---- */

undefined4 FUN_605056f0(void)

{
  int iVar1;
  undefined4 extraout_EAX;
  int extraout_EAX_00;
  length_error *in_ECX;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (unaff_EDI < 0x40000000) {
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(unaff_EDI);
    *(int *)(unaff_ESI + 0xc) = extraout_EAX_00;
    *(int *)(unaff_ESI + 0x10) = extraout_EAX_00;
    iVar1 = extraout_EAX_00 + unaff_EDI * 4;
    *(int *)(unaff_ESI + 0x14) = iVar1;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  std::length_error::length_error(in_ECX);
  return extraout_EAX;
}



/* ---- FUN_60505720 @ 60505720 size=178 ---- */

void FUN_60505720(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  
  uVar1 = in_EAX[3];
  if ((in_EAX[4] - uVar1 & 0xfffffffc) == 0) {
    iVar4 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar4 = (int)((int)param_4 - uVar1) >> 2;
  }
  FUN_605058d0(param_2,param_3,param_4);
  uVar1 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)*in_EAX;
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  uVar1 = uVar1 + iVar4 * 4;
  if (uVar1 <= *(uint *)(iVar3 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_605057bf;
  }
  _invalid_parameter_noinfo();
LAB_605057bf:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- FUN_605057e0 @ 605057e0 size=131 ---- */

void FUN_605057e0(undefined4 param_1,uint param_2,undefined4 param_3,void *param_4)

{
  rsize_t _DstSize;
  void *_Dst;
  int iVar1;
  int *unaff_EBX;
  int *unaff_ESI;
  
  *unaff_EBX = 0;
  if (((unaff_ESI == (int *)0x0) || (param_2 < (uint)unaff_ESI[3])) ||
     ((uint)unaff_ESI[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  *unaff_EBX = *unaff_ESI;
  unaff_EBX[1] = param_2;
  if ((param_4 < (void *)unaff_ESI[3]) || ((void *)unaff_ESI[4] < param_4)) {
    _invalid_parameter_noinfo();
  }
  if ((*unaff_EBX == 0) || (*unaff_EBX != *unaff_ESI)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)unaff_EBX[1];
  if (_Dst != param_4) {
    iVar1 = unaff_ESI[4] - (int)param_4 >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      memmove_s(_Dst,_DstSize,param_4,_DstSize);
    }
    unaff_ESI[4] = (int)(_DstSize + (int)_Dst);
  }
  return;
}



/* ---- bad_alloc_Constructor_or_Destructor @ 60505870 size=86 ---- */

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
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_6051a210);
  }
  operator_new(param_1 * 4);
  return;
}



/* ---- FUN_605058d0 @ 605058d0 size=403 ---- */

void FUN_605058d0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  rsize_t rVar3;
  int in_EAX;
  int iVar4;
  int extraout_EAX;
  uint uVar5;
  void *_Dst;
  void *pvVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar4 = *(int *)(in_EAX + 0xc);
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(int *)(in_EAX + 0x14) - iVar4 >> 2;
  }
  pvVar1 = *(void **)(in_EAX + 0x10);
  iVar4 = (int)pvVar1 - iVar4 >> 2;
  iVar7 = 0x3fffffff - iVar4;
  if (iVar7 == 0) {
    std::length_error::length_error((length_error *)0x0);
    iVar4 = extraout_EAX;
    iVar7 = extraout_ECX;
  }
  uVar5 = iVar4 + 1;
  if (uVar8 < uVar5) {
    if (0x3fffffff - (uVar8 >> 1) < uVar8) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar8 + (uVar8 >> 1);
    }
    if (uVar8 < uVar5) {
      uVar8 = uVar5;
    }
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar8);
    iVar7 = (int)param_3 - *(int *)(in_EAX + 0xc) >> 2;
    *(undefined4 *)((int)_Dst + iVar7 * 4) = *param_1;
    iVar4 = (int)param_3 - (int)*(void **)(in_EAX + 0xc) >> 2;
    if (iVar4 != 0) {
      rVar3 = iVar4 * 4;
      memmove_s(_Dst,rVar3,*(void **)(in_EAX + 0xc),rVar3);
    }
    iVar4 = *(int *)(in_EAX + 0x10) - (int)param_3 >> 2;
    if (iVar4 != 0) {
      rVar3 = iVar4 * 4;
      memmove_s((void *)((int)_Dst + iVar7 * 4 + 4),rVar3,param_3,rVar3);
    }
    pvVar1 = *(void **)(in_EAX + 0xc);
    iVar4 = *(int *)(in_EAX + 0x10);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    *(void **)(in_EAX + 0x14) = (void *)((int)_Dst + uVar8 * 4);
    *(void **)(in_EAX + 0x10) = (void *)((int)_Dst + ((iVar4 - (int)pvVar1 >> 2) + 1) * 4);
    *(void **)(in_EAX + 0xc) = _Dst;
    return;
  }
  uVar2 = *param_1;
  if ((int)pvVar1 - (int)param_3 >> 2 == 0) {
    FUN_605086f0(iVar7,param_3 + 1);
    puVar9 = *(undefined4 **)(in_EAX + 0x10);
    iVar4 = 1 - ((int)puVar9 - (int)param_3 >> 2);
    if (iVar4 != 0) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      }
    }
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 4;
    puVar9 = (undefined4 *)(*(int *)(in_EAX + 0x10) + -4);
    if (param_3 != puVar9) {
      do {
        *param_3 = uVar2;
        param_3 = param_3 + 1;
      } while (param_3 != puVar9);
      return;
    }
  }
  else {
    pvVar6 = FUN_605086f0(iVar7,pvVar1);
    *(void **)(in_EAX + 0x10) = pvVar6;
    iVar4 = (int)pvVar1 + (-4 - (int)param_3) >> 2;
    if (0 < iVar4) {
      memmove_s((void *)((int)pvVar1 + iVar4 * -4),iVar4 * 4,param_3,iVar4 * 4);
    }
    puVar9 = param_3 + 1;
    for (; param_3 != puVar9; param_3 = param_3 + 1) {
      *param_3 = uVar2;
    }
  }
  return;
}



/* ---- FUN_60505a70 @ 60505a70 size=37 ---- */

void * __fastcall FUN_60505a70(undefined4 param_1,void *param_2)

{
  rsize_t _DstSize;
  int in_EAX;
  int iVar1;
  void *unaff_EDI;
  
  iVar1 = in_EAX - (int)unaff_EDI >> 2;
  _DstSize = iVar1 * 4;
  if (0 < iVar1) {
    memmove_s(param_2,_DstSize,unaff_EDI,_DstSize);
  }
  return (void *)(_DstSize + (int)param_2);
}



/* ---- cHgAnigifList @ 60505aa0 size=211 ---- */

/* public: __thiscall cHgAnigifList::cHgAnigifList(void) */

cHgAnigifList * __thiscall cHgAnigifList::cHgAnigifList(cHgAnigifList *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5aa0  24  ??0cHgAnigifList@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517aab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_60508380((int *)(this + 0x2c));
  local_4 = 0;
  FUN_60508380((int *)(this + 0x44));
  memset(this,0,0x2c);
  *(undefined2 *)(this + 0xe) = 0x10;
  *(undefined4 *)this = 0x28;
  *(undefined2 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- ~cHgAnigifList @ 60505b80 size=148 ---- */

/* public: __thiscall cHgAnigifList::~cHgAnigifList(void) */

void __thiscall cHgAnigifList::~cHgAnigifList(cHgAnigifList *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x5b80  36  ??1cHgAnigifList@@QAE@XZ */
  puStack_8 = &LAB_60517a76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  Destroy(this);
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  operator_delete(*(void **)(this + 0x44));
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x38));
  }
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  operator_delete(*(void **)(this + 0x2c));
  ExceptionList = local_c;
  return;
}



/* ---- Load @ 60505c20 size=330 ---- */

/* public: int __thiscall cHgAnigifList::Load(char const *,struct HWND__ *) */

int __thiscall cHgAnigifList::Load(cHgAnigifList *this,char *param_1,HWND__ *param_2)

{
  int iVar1;
  DWORD DVar2;
  cHgAniDIBList local_e8;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x5c20  186  ?Load@cHgAnigifList@@QAEHPBDPAUHWND__@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517cab;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cHgAniDIBList::cHgAniDIBList(&local_e8);
  local_c = 0;
  local_e8.cHgAniDIBList_data.offset_0xc8 = '\0';
  iVar1 = cHgAniDIBList::Load(&local_e8,param_1);
  if (iVar1 == 0) {
    local_c = 0xffffffff;
    cHgAniDIBList::~cHgAniDIBList(&local_e8);
    ExceptionList = local_14;
    return 0;
  }
  FUN_605054e0((int)&local_e8.cHgAniDIBList_data.offset_0x94);
  FUN_605054e0((int)&local_e8.cHgAniDIBList_data.offset_0x58);
  *(undefined4 *)(this + 0x90) = local_e8.cHgAniDIBList_data.offset_0xb0;
  *(undefined4 *)(this + 0x8c) = 0;
  DVar2 = GetTickCount();
  *(DWORD *)(this + 0x94) = DVar2;
  *(undefined4 *)(this + 0x6c) = 1;
  if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) < 2) {
    *(undefined4 *)(this + 0x6c) = 0;
  }
  iVar1 = local_e8.cHgAniDIBList_data.offset_0x8c * 0x10 + 0x1f;
  *(int *)(this + 100) = local_e8.cHgAniDIBList_data.offset_0x90;
  iVar1 = (int)((iVar1 >> 3 & 0xfffffffcU) - (iVar1 >> 0x1f)) >> 1;
  *(int *)(this + 8) = -local_e8.cHgAniDIBList_data.offset_0x90;
  *(int *)(this + 0x60) = iVar1;
  *(int *)(this + 4) = iVar1;
  *(undefined4 *)(this + 0x5c) = local_e8.cHgAniDIBList_data.offset_0x54;
  *(undefined4 *)(this + 0x68) = 0;
  local_c = 0xffffffff;
  cHgAniDIBList::~cHgAniDIBList(&local_e8);
  ExceptionList = local_14;
  return 1;
}



/* ---- Draw @ 60505d70 size=900 ---- */

/* public: int __thiscall cHgAnigifList::Draw(struct HDC__ *,int,int) */

int __thiscall cHgAnigifList::Draw(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3)

{
  uint uVar1;
  HDC hdc;
  int iMode;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  int iVar2;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x5d70  110  ?Draw@cHgAnigifList@@QAEHPAUHDC__@@HH@Z */
  puStack_c = &LAB_60517460;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
    (*(code *)PTR_ReNameAvatarFile_605210f4)("HGAVTR:: [avtr] No Image to draw\n !!\n");
  }
  else {
    if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 <= *(int *)(this + 0x68)) ||
       (*(int *)(this + 0x68) < 0)) {
      *(undefined4 *)(this + 0x68) = 0;
    }
    uVar1 = *(uint *)(this + 0x68);
    if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) <= uVar1) {
      _invalid_parameter_noinfo();
    }
    iVar2 = *(int *)(*(int *)(this + 0x38) + uVar1 * 4);
    if (iVar2 != 0) {
      local_20 = 0;
      hdc = CreateCompatibleDC(param_1);
      if (hdc != (HDC)0x0) {
        iMode = GetMapMode(param_1);
        SetMapMode(hdc,iMode);
        h = CreateCompatibleBitmap(param_1,*(int *)(this + 0x60),*(int *)(this + 100));
        if (h != (HBITMAP)0x0) {
          h_00 = SelectObject(hdc,h);
          StretchDIBits(hdc,0,0,*(int *)(this + 0x60),*(int *)(this + 100),0,0,*(int *)(this + 0x60)
                        ,*(int *)(this + 100),*(void **)(iVar2 + 0x1c),(BITMAPINFO *)this,0,0xcc0020
                       );
          hdc_00 = CreateCompatibleDC(param_1);
          if (hdc_00 != (HDC)0x0) {
            iVar2 = GetMapMode(param_1);
            SetMapMode(hdc_00,iVar2);
            h_01 = CreateBitmap(*(int *)(this + 0x60),*(int *)(this + 100),1,1,(void *)0x0);
            if (h_01 != (HBITMAP)0x0) {
              h_02 = SelectObject(hdc_00,h_01);
              SetBkColor(hdc,0xff0000);
              StretchBlt(hdc_00,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc,0,0,
                         *(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
              hdc_01 = CreateCompatibleDC(param_1);
              if (hdc_01 != (HDC)0x0) {
                iVar2 = GetMapMode(param_1);
                SetMapMode(hdc_01,iVar2);
                h_03 = CreateCompatibleBitmap(param_1,*(int *)(this + 0x60),*(int *)(this + 100));
                if (h_03 != (HBITMAP)0x0) {
                  h_04 = SelectObject(hdc_01,h_03);
                  StretchBlt(hdc_01,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc,0,0,
                             *(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
                  StretchBlt(hdc_01,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_00,0,0,
                             *(int *)(this + 0x60),*(int *)(this + 100),0x220326);
                  hdc_02 = CreateCompatibleDC(param_1);
                  if (hdc_02 != (HDC)0x0) {
                    iVar2 = GetMapMode(param_1);
                    SetMapMode(hdc_02,iVar2);
                    h_05 = CreateCompatibleBitmap
                                     (param_1,*(int *)(this + 0x60),*(int *)(this + 100));
                    if (h_05 != (HBITMAP)0x0) {
                      h_06 = SelectObject(hdc_02,h_05);
                      StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),param_1,
                                 param_2,param_3,*(int *)(this + 0x60),*(int *)(this + 100),0xcc0020
                                );
                      StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_00,0,0,
                                 *(int *)(this + 0x60),*(int *)(this + 100),0x8800c6);
                      StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_01,0,0,
                                 *(int *)(this + 0x60),*(int *)(this + 100),0xee0086);
                      StretchBlt(param_1,param_2,param_3,*(int *)(this + 0x60),*(int *)(this + 100),
                                 hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
                      SelectObject(hdc_02,h_06);
                      DeleteObject(hdc_02);
                    }
                    local_20 = (uint)(h_05 != (HBITMAP)0x0);
                    DeleteDC(hdc_02);
                  }
                  SelectObject(hdc_01,h_04);
                  DeleteObject(h_03);
                }
                DeleteDC(hdc_01);
              }
              SelectObject(hdc_00,h_02);
              DeleteObject(h_01);
            }
            DeleteDC(hdc_00);
          }
          SelectObject(hdc,h_00);
          DeleteObject(h);
        }
        DeleteDC(hdc);
      }
      ExceptionList = local_10;
      return local_20;
    }
  }
  ExceptionList = local_10;
  return 0;
}



/* ---- Catch_All@60505dd3 @ 60505dd3 size=6 ---- */

undefined4 Catch_All_60505dd3(void)

{
  return 0x60505dbd;
}



/* ---- DrawSelected @ 60506100 size=1064 ---- */

/* public: int __thiscall cHgAnigifList::DrawSelected(struct HDC__ *,int,int) */

int __thiscall
cHgAnigifList::DrawSelected(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3)

{
  uint uVar1;
  HDC hdc;
  int iMode;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  int iVar2;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HBRUSH hbr;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  HDC hdc_03;
  HBITMAP h_07;
  HGDIOBJ h_08;
  uint local_3c;
  tagRECT local_10;
  
                    /* 0x6100  126  ?DrawSelected@cHgAnigifList@@QAEHPAUHDC__@@HH@Z */
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
    return 0;
  }
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 <= *(int *)(this + 0x68)) ||
     (*(int *)(this + 0x68) < 0)) {
    *(undefined4 *)(this + 0x68) = 0;
  }
  uVar1 = *(uint *)(this + 0x68);
  if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  iVar2 = *(int *)(*(int *)(this + 0x38) + uVar1 * 4);
  if (iVar2 == 0) {
    return 0;
  }
  local_3c = 0;
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iMode = GetMapMode(param_1);
    SetMapMode(hdc,iMode);
    h = CreateCompatibleBitmap(param_1,*(int *)(this + 0x60),*(int *)(this + 100));
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      StretchDIBits(hdc,0,0,*(int *)(this + 0x60),*(int *)(this + 100),0,0,*(int *)(this + 0x60),
                    *(int *)(this + 100),*(void **)(iVar2 + 0x1c),(BITMAPINFO *)this,0,0xcc0020);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar2 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar2);
        h_01 = CreateCompatibleBitmap(param_1,*(int *)(this + 0x60),*(int *)(this + 100));
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          hbr = CreateSolidBrush(0x5050);
          if (hbr != (HBRUSH)0x0) {
            SetRect(&local_10,0,0,*(int *)(this + 0x60),*(int *)(this + 100));
            FillRect(hdc_00,&local_10,hbr);
            DeleteObject(hbr);
            hdc_01 = CreateCompatibleDC(param_1);
            if (hdc_01 != (HDC)0x0) {
              iVar2 = GetMapMode(param_1);
              SetMapMode(hdc_01,iVar2);
              h_03 = CreateBitmap(*(int *)(this + 0x60),*(int *)(this + 100),1,1,(void *)0x0);
              if (h_03 != (HBITMAP)0x0) {
                h_04 = SelectObject(hdc_01,h_03);
                SetBkColor(hdc,0xff0000);
                StretchBlt(hdc_01,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc,0,0,
                           *(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
                StretchBlt(hdc_00,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_01,0,0,
                           *(int *)(this + 0x60),*(int *)(this + 100),0xee0086);
                hdc_02 = CreateCompatibleDC(param_1);
                if (hdc_02 != (HDC)0x0) {
                  iVar2 = GetMapMode(param_1);
                  SetMapMode(hdc_02,iVar2);
                  h_05 = CreateCompatibleBitmap(param_1,*(int *)(this + 0x60),*(int *)(this + 100));
                  if (h_05 != (HBITMAP)0x0) {
                    h_06 = SelectObject(hdc_02,h_05);
                    StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc,0,0,
                               *(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
                    StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_00,0,0,
                               *(int *)(this + 0x60),*(int *)(this + 100),0x220326);
                    hdc_03 = CreateCompatibleDC(param_1);
                    if (hdc_03 != (HDC)0x0) {
                      iVar2 = GetMapMode(param_1);
                      SetMapMode(hdc_03,iVar2);
                      h_07 = CreateCompatibleBitmap
                                       (param_1,*(int *)(this + 0x60),*(int *)(this + 100));
                      if (h_07 != (HBITMAP)0x0) {
                        h_08 = SelectObject(hdc_03,h_07);
                        StretchBlt(hdc_03,0,0,*(int *)(this + 0x60),*(int *)(this + 100),param_1,
                                   param_2,param_3,*(int *)(this + 0x60),*(int *)(this + 100),
                                   0xcc0020);
                        StretchBlt(hdc_03,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_01,0,0,
                                   *(int *)(this + 0x60),*(int *)(this + 100),0x8800c6);
                        StretchBlt(hdc_03,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_02,0,0,
                                   *(int *)(this + 0x60),*(int *)(this + 100),0xee0086);
                        StretchBlt(param_1,param_2,param_3,*(int *)(this + 0x60),
                                   *(int *)(this + 100),hdc_03,0,0,*(int *)(this + 0x60),
                                   *(int *)(this + 100),0xcc0020);
                        SelectObject(hdc_03,h_08);
                        DeleteObject(h_07);
                      }
                      local_3c = (uint)(h_07 != (HBITMAP)0x0);
                      DeleteDC(hdc_03);
                    }
                    SelectObject(hdc_02,h_06);
                    DeleteObject(h_05);
                  }
                  DeleteDC(hdc_02);
                }
                SelectObject(hdc_01,h_04);
                DeleteObject(h_03);
              }
              DeleteDC(hdc_01);
            }
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return local_3c;
}



/* ---- Draw @ 60506530 size=850 ---- */

/* public: int __thiscall cHgAnigifList::Draw(int,struct HDC__ *,int,int) */

int __thiscall
cHgAnigifList::Draw(cHgAnigifList *this,int param_1,HDC__ *param_2,int param_3,int param_4)

{
  HDC hdc;
  int iMode;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  int iVar1;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  uint local_24;
  
                    /* 0x6530  108  ?Draw@cHgAnigifList@@QAEHHPAUHDC__@@HH@Z */
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
    return 0;
  }
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2)) {
    if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) <= (uint)param_1) {
      _invalid_parameter_noinfo();
    }
    iVar1 = *(int *)(*(int *)(this + 0x38) + param_1 * 4);
    if (iVar1 != 0) {
      local_24 = 0;
      hdc = CreateCompatibleDC(param_2);
      if (hdc != (HDC)0x0) {
        iMode = GetMapMode(param_2);
        SetMapMode(hdc,iMode);
        h = CreateCompatibleBitmap(param_2,*(int *)(this + 0x60),*(int *)(this + 100));
        if (h != (HBITMAP)0x0) {
          h_00 = SelectObject(hdc,h);
          StretchDIBits(hdc,0,0,*(int *)(this + 0x60),*(int *)(this + 100),0,0,*(int *)(this + 0x60)
                        ,*(int *)(this + 100),*(void **)(iVar1 + 0x1c),(BITMAPINFO *)this,0,0xcc0020
                       );
          hdc_00 = CreateCompatibleDC(param_2);
          if (hdc_00 != (HDC)0x0) {
            iVar1 = GetMapMode(param_2);
            SetMapMode(hdc_00,iVar1);
            h_01 = CreateBitmap(*(int *)(this + 0x60),*(int *)(this + 100),1,1,(void *)0x0);
            if (h_01 != (HBITMAP)0x0) {
              h_02 = SelectObject(hdc_00,h_01);
              SetBkColor(hdc,0xff0000);
              StretchBlt(hdc_00,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc,0,0,
                         *(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
              hdc_01 = CreateCompatibleDC(param_2);
              if (hdc_01 != (HDC)0x0) {
                iVar1 = GetMapMode(param_2);
                SetMapMode(hdc_01,iVar1);
                h_03 = CreateCompatibleBitmap(param_2,*(int *)(this + 0x60),*(int *)(this + 100));
                if (h_03 != (HBITMAP)0x0) {
                  h_04 = SelectObject(hdc_01,h_03);
                  StretchBlt(hdc_01,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc,0,0,
                             *(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
                  StretchBlt(hdc_01,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_00,0,0,
                             *(int *)(this + 0x60),*(int *)(this + 100),0x220326);
                  hdc_02 = CreateCompatibleDC(param_2);
                  if (hdc_02 != (HDC)0x0) {
                    iVar1 = GetMapMode(param_2);
                    SetMapMode(hdc_02,iVar1);
                    h_05 = CreateCompatibleBitmap
                                     (param_2,*(int *)(this + 0x60),*(int *)(this + 100));
                    if (h_05 != (HBITMAP)0x0) {
                      h_06 = SelectObject(hdc_02,h_05);
                      StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),param_2,
                                 param_3,param_4,*(int *)(this + 0x60),*(int *)(this + 100),0xcc0020
                                );
                      StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_00,0,0,
                                 *(int *)(this + 0x60),*(int *)(this + 100),0x8800c6);
                      StretchBlt(hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),hdc_01,0,0,
                                 *(int *)(this + 0x60),*(int *)(this + 100),0xee0086);
                      StretchBlt(param_2,param_3,param_4,*(int *)(this + 0x60),*(int *)(this + 100),
                                 hdc_02,0,0,*(int *)(this + 0x60),*(int *)(this + 100),0xcc0020);
                      SelectObject(hdc_02,h_06);
                      DeleteObject(h_05);
                    }
                    local_24 = (uint)(h_05 != (HBITMAP)0x0);
                    DeleteDC(hdc_02);
                  }
                  SelectObject(hdc_01,h_04);
                  DeleteObject(h_03);
                }
                DeleteDC(hdc_01);
              }
              SelectObject(hdc_00,h_02);
              DeleteObject(h_01);
            }
            DeleteDC(hdc_00);
          }
          SelectObject(hdc,h_00);
          DeleteObject(h);
        }
        DeleteDC(hdc);
      }
      return local_24;
    }
  }
  return 0;
}



/* ---- DrawAnimation @ 60506890 size=8 ---- */

/* public: int __thiscall cHgAnigifList::DrawAnimation(struct HDC__ *,int,int) */

int __thiscall
cHgAnigifList::DrawAnimation(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3)

{
                    /* 0x6890  112  ?DrawAnimation@cHgAnigifList@@QAEHPAUHDC__@@HH@Z */
  return 1;
}



/* ---- Flip @ 605068a0 size=289 ---- */

/* public: int __thiscall cHgAnigifList::Flip(struct HDC__ *,int,int) */

int __thiscall cHgAnigifList::Flip(cHgAnigifList *this,HDC__ *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
                    /* 0x68a0  137  ?Flip@cHgAnigifList@@QAEHPAUHDC__@@HH@Z */
  iVar2 = Draw(this,param_1,param_2,param_3);
  DVar3 = GetTickCount();
  uVar4 = GetDelay(this,*(int *)(this + 0x68));
  if (uVar4 < 5) {
    uVar6 = 100;
  }
  else {
    uVar6 = uVar4 * 10;
  }
  iVar1 = *(int *)(this + 0x90);
  if (iVar1 == -1) {
    if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
      *(undefined4 *)(this + 0x68) = 0;
      return iVar2;
    }
    *(int *)(this + 0x68) = (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) + -1;
    return iVar2;
  }
  iVar5 = 0;
  if (iVar1 == 0) {
    if (uVar6 < DVar3 - *(int *)(this + 0x94)) {
      *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
      if (*(int *)(this + 0x68) == *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) {
        *(undefined4 *)(this + 0x68) = 0;
      }
      DVar3 = GetTickCount();
      *(DWORD *)(this + 0x94) = DVar3;
      return iVar2;
    }
  }
  else if (uVar6 < DVar3 - *(int *)(this + 0x94)) {
    *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
    if (*(int *)(this + 0x68) == *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) {
      *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
      if ((iVar1 <= *(int *)(this + 0x8c)) &&
         (*(undefined4 *)(this + 0x90) = 0xffffffff,
         (*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) != 0)) {
        iVar5 = (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) + -1;
      }
      *(int *)(this + 0x68) = iVar5;
    }
    DVar3 = GetTickCount();
    *(DWORD *)(this + 0x94) = DVar3;
  }
  return iVar2;
}



/* ---- Draw @ 605069d0 size=307 ---- */

/* public: int __thiscall cHgAnigifList::Draw(unsigned char * *,int,int,int,int) */

int __thiscall
cHgAnigifList::Draw(cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,
                   int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  
                    /* 0x69d0  109  ?Draw@cHgAnigifList@@QAEHPAPAEHHHH@Z */
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
    (*(code *)PTR_ReNameAvatarFile_605210f4)("HGAVTR:: [avtr] No Image to draw !!\n");
    return 0;
  }
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 <= *(int *)(this + 0x68)) ||
     (*(int *)(this + 0x68) < 0)) {
    *(undefined4 *)(this + 0x68) = 0;
  }
  uVar2 = *(uint *)(this + 0x68);
  if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) <= uVar2) {
    _invalid_parameter_noinfo();
  }
  iVar3 = *(int *)(*(int *)(this + 0x38) + uVar2 * 4);
  iVar6 = *(int *)(iVar3 + 0xc);
  if ((param_5 < 1) || (iVar6 < param_5)) {
    param_5 = iVar6;
  }
  if ((param_4 < 1) || (*(int *)(iVar3 + 8) < param_4)) {
    param_4 = *(int *)(iVar3 + 8);
  }
  iVar1 = param_3 + -1 + param_5;
  if (param_3 < iVar1) {
    param_5 = (int)(param_1 + param_3 * 4);
    iVar6 = iVar6 * 4;
    do {
      puVar7 = *(uchar **)(iVar6 + -4 + *(int *)(iVar3 + 4));
      iVar6 = iVar6 + -4;
      (*(code *)PTR_ReNameAvatarFile_605210f4)
                ("DRAWING AVATAR DIB:: ( %d )  des:%x(%x), src:%x \n",param_3,param_1[param_3],
                 param_5,puVar7);
      puVar4 = param_1[param_3];
      if (param_2 < param_2 + param_4) {
        iVar5 = param_2;
        do {
          if ((*puVar7 != '\x1f') || (puVar7[1] != '\0')) {
            puVar4[iVar5 * 2] = *puVar7;
            puVar4[iVar5 * 2 + 1] = puVar7[1];
          }
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 2;
        } while (iVar5 < param_2 + param_4);
      }
      param_5 = param_5 + 0x10;
      param_3 = param_3 + 1;
    } while (param_3 < iVar1);
  }
  return 1;
}



/* ---- DrawAnimation @ 60506b10 size=87 ---- */

/* public: int __thiscall cHgAnigifList::DrawAnimation(unsigned char * *,int,int,int,int) */

int __thiscall
cHgAnigifList::DrawAnimation
          (cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* 0x6b10  111  ?DrawAnimation@cHgAnigifList@@QAEHPAPAEHHHH@Z */
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
    (*(code *)PTR_ReNameAvatarFile_605210f4)("HGAVTR:: [avtr] No Image to draw !!\n");
    return 0;
  }
  if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 <= *(int *)(this + 0x68)) ||
     (*(int *)(this + 0x68) < 0)) {
    *(undefined4 *)(this + 0x68) = 0;
  }
  if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) <= *(uint *)(this + 0x68)) {
    _invalid_parameter_noinfo();
  }
  return 1;
}



/* ---- Flip @ 60506b70 size=267 ---- */

/* public: int __thiscall cHgAnigifList::Flip(unsigned char * *,int,int,int,int) */

int __thiscall
cHgAnigifList::Flip(cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,
                   int param_5)

{
  int iVar1;
  DWORD DVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  
                    /* 0x6b70  136  ?Flip@cHgAnigifList@@QAEHPAPAEHHHH@Z */
  Draw(this,param_1,param_2,param_3,param_4,param_5);
  DVar2 = GetTickCount();
  uVar3 = GetDelay(this,*(int *)(this + 0x68));
  if (uVar3 < 5) {
    uVar5 = 100;
  }
  else {
    uVar5 = uVar3 * 10;
  }
  iVar1 = *(int *)(this + 0x90);
  if (iVar1 == -1) {
    if ((*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) == 0) {
      *(undefined4 *)(this + 0x68) = 0;
      return 1;
    }
    *(int *)(this + 0x68) = (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) + -1;
    return 1;
  }
  iVar4 = 0;
  if (iVar1 == 0) {
    if (DVar2 - *(int *)(this + 0x94) <= uVar5) {
      return 1;
    }
    *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
    if (*(int *)(this + 0x68) != *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2)
    goto LAB_60506c68;
  }
  else {
    if (DVar2 - *(int *)(this + 0x94) <= uVar5) {
      return 1;
    }
    *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
    if (*(int *)(this + 0x68) != *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2)
    goto LAB_60506c68;
    *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
    if ((iVar1 <= *(int *)(this + 0x8c)) &&
       (*(undefined4 *)(this + 0x90) = 0xffffffff,
       (*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU) != 0)) {
      iVar4 = (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) + -1;
    }
  }
  *(int *)(this + 0x68) = iVar4;
LAB_60506c68:
  DVar2 = GetTickCount();
  *(DWORD *)(this + 0x94) = DVar2;
  return 1;
}



/* ---- DrawSelected @ 60506c80 size=8 ---- */

/* public: int __thiscall cHgAnigifList::DrawSelected(unsigned char * *,int,int,int,int) */

int __thiscall
cHgAnigifList::DrawSelected
          (cHgAnigifList *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* 0x6c80  125  ?DrawSelected@cHgAnigifList@@QAEHPAPAEHHHH@Z */
  return 1;
}



/* ---- ThreadAnimation @ 60506cb0 size=264 ---- */

/* public: int __thiscall cHgAnigifList::ThreadAnimation(struct HWND__ *,int,int) */

int __thiscall
cHgAnigifList::ThreadAnimation(cHgAnigifList *this,HWND__ *param_1,int param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  ulong uVar3;
  uint uVar4;
  HANDLE hHandle;
  DWORD dwMilliseconds;
  
                    /* 0x6cb0  223  ?ThreadAnimation@cHgAnigifList@@QAEHPAUHWND__@@HH@Z */
  *(undefined4 *)(this + 0x68) = 0;
  if (*(int *)(this + 0x70) != 0) {
    return 1;
  }
  do {
    if ((param_1 != (HWND__ *)0x0) && (BVar2 = IsWindow(param_1), BVar2 != 0)) {
      PostMessageA(param_1,0x424,0,*(LPARAM *)(this + 0x98));
    }
    uVar3 = GetDelay(this,*(int *)(this + 0x68));
    if (uVar3 < 5) {
      hHandle = *(HANDLE *)(this + 0x78);
      dwMilliseconds = 100;
    }
    else {
      hHandle = *(HANDLE *)(this + 0x78);
      dwMilliseconds = uVar3 * 10;
    }
    WaitForSingleObject(hHandle,dwMilliseconds);
    if (*(int *)(this + 0x70) != 0) {
      return 1;
    }
    iVar1 = *(int *)(this + 0x90);
    if (iVar1 == -1) {
      uVar4 = *(int *)(this + 0x3c) - *(int *)(this + 0x38);
LAB_60506d98:
      if ((uVar4 & 0xfffffffc) == 0) {
        *(undefined4 *)(this + 0x68) = 0;
      }
      else {
        *(int *)(this + 0x68) = (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) + -1;
      }
    }
    else {
      *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
      if (iVar1 == 0) {
        if (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 <= *(int *)(this + 0x68)) {
LAB_60506d50:
          *(undefined4 *)(this + 0x68) = 0;
        }
      }
      else if (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 <= *(int *)(this + 0x68)) {
        *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
        if (*(int *)(this + 0x8c) < iVar1) goto LAB_60506d50;
        *(undefined4 *)(this + 0x90) = 0xffffffff;
        uVar4 = *(int *)(this + 0x3c) - *(int *)(this + 0x38);
        goto LAB_60506d98;
      }
    }
    if (*(int *)(this + 0x70) != 0) {
      return 1;
    }
  } while( true );
}



/* ---- Start @ 60506dc0 size=184 ---- */

/* public: int __thiscall cHgAnigifList::Start(union HWNDORHDC,int,int) */

int __thiscall cHgAnigifList::Start(cHgAnigifList *this,HDC__ *param_2,int param_3,int param_4)

{
  HANDLE pvVar1;
  cHgAnigifList *local_4;
  
                    /* 0x6dc0  217  ?Start@cHgAnigifList@@QAEHTHWNDORHDC@@HH@Z */
  local_4 = this;
  if (*(int *)(this + 0x6c) == 0) {
    Draw(this,0,param_2,param_3,param_4);
    return 1;
  }
  if (*(int *)(this + 0x78) != 0) {
    Stop(this);
    CloseHandle(*(HANDLE *)(this + 0x78));
    *(undefined4 *)(this + 0x78) = 0;
  }
  *(HDC__ **)(this + 0x7c) = param_2;
  *(int *)(this + 0x80) = param_3;
  *(int *)(this + 0x84) = param_4;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0x78) = pvVar1;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_60506c90,this,4,
                        (LPDWORD)&local_4);
  *(HANDLE *)(this + 0x74) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  SetThreadPriority(pvVar1,-1);
  ResumeThread(*(HANDLE *)(this + 0x74));
  return 1;
}



/* ---- Stop @ 60506e80 size=96 ---- */

/* public: void __thiscall cHgAnigifList::Stop(void) */

void __thiscall cHgAnigifList::Stop(cHgAnigifList *this)

{
                    /* 0x6e80  218  ?Stop@cHgAnigifList@@QAEXXZ */
  *(undefined4 *)(this + 0x70) = 1;
  if (*(HANDLE *)(this + 0x78) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(this + 0x78));
  }
  if (*(HANDLE *)(this + 0x74) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(this + 0x74),5000);
    CloseHandle(*(HANDLE *)(this + 0x74));
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(HANDLE *)(this + 0x78) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(this + 0x78));
  }
  if (*(HANDLE *)(this + 0x78) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 0x78));
    *(undefined4 *)(this + 0x78) = 0;
  }
  *(undefined4 *)(this + 0x70) = 0;
  return;
}



/* ---- Destroy @ 60506ee0 size=101 ---- */

/* public: void __thiscall cHgAnigifList::Destroy(void) */

void __thiscall cHgAnigifList::Destroy(cHgAnigifList *this)

{
  undefined4 *puVar1;
  uint uVar2;
  
                    /* 0x6ee0  92  ?Destroy@cHgAnigifList@@QAEXXZ */
  Stop(this);
  uVar2 = 0;
  if (0 < (int)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) & 0xfffffffcU)) {
    do {
      if ((uint)(*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2) <= uVar2) {
        _invalid_parameter_noinfo();
      }
      puVar1 = *(undefined4 **)(*(int *)(this + 0x38) + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2);
  }
  FUN_6050cc60();
  FUN_6050cc60();
  return;
}



/* ---- GetDelay @ 60506f50 size=173 ---- */

/* public: unsigned long __thiscall cHgAnigifList::GetDelay(int) */

ulong __thiscall cHgAnigifList::GetDelay(cHgAnigifList *this,int param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  int extraout_ECX;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x6f50  146  ?GetDelay@cHgAnigifList@@QAEKH@Z */
  pcStack_10 = FUN_60516a31;
  local_14 = ExceptionList;
  local_c = DAT_6052101c ^ 0x6051a738;
  uVar2 = DAT_6052101c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_14;
  local_8 = 0;
  if (((*(int *)(this + 0x54) - *(int *)(this + 0x50) & 0xfffffffcU) == 0) ||
     (*(int *)(this + 0x54) - *(int *)(this + 0x50) >> 2 <= param_1)) {
    local_8 = 0xfffffffe;
    FUN_60507000();
    ExceptionList = local_14;
    return *(ulong *)(extraout_ECX + 0x5c);
  }
  puVar3 = (ulong *)FUN_605083e0();
  uVar1 = *puVar3;
  local_unwind4(&DAT_6052101c,&local_14,0xfffffffe,uVar2);
  ExceptionList = local_14;
  return uVar1;
}



/* ---- FUN_60507000 @ 60507000 size=1 ---- */

void FUN_60507000(void)

{
  return;
}



/* ---- cHgAniDIBList @ 60507010 size=241 ---- */

/* public: __thiscall cHgAniDIBList::cHgAniDIBList(void) */

cHgAniDIBList * __thiscall cHgAniDIBList::cHgAniDIBList(cHgAniDIBList *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7010  22  ??0cHgAniDIBList@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517a3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  FUN_60508380(&(this->cHgAniDIBList_data).offset_0x58);
  local_4 = 0;
  FUN_60508380(&(this->cHgAniDIBList_data).offset_0x94);
  (this->cHgAniDIBList_data).offset_0xb0 = 1;
  (this->cHgAniDIBList_data).offset_0xc8 = '\x01';
  (this->cHgAniDIBList_data).offset_0x7c = (void *)0x0;
  (this->cHgAniDIBList_data).offset_0x84 = (void *)0x0;
  (this->cHgAniDIBList_data).offset_0x38 = 0;
  (this->cHgAniDIBList_data).offset_0x44 = 0;
  (this->cHgAniDIBList_data).offset_0x4c = 0;
  (this->cHgAniDIBList_data).offset_0x54 = 0;
  (this->cHgAniDIBList_data).offset_0xac = 0;
  (this->cHgAniDIBList_data).offset_0xb4 = 0;
  (this->cHgAniDIBList_data).offset_0x78 = 0xff0000;
  (this->cHgAniDIBList_data).offset_0x50 = 0;
  (this->cHgAniDIBList_data).offset_0x0 = 0;
  (this->cHgAniDIBList_data).offset_0x1 = 0;
  (this->cHgAniDIBList_data).offset_0x34 = 0;
  (this->cHgAniDIBList_data).offset_0x48 = 0;
  (this->cHgAniDIBList_data).offset_0x90 = 0;
  (this->cHgAniDIBList_data).offset_0x8c = 0;
  (this->cHgAniDIBList_data).offset_0x1c = 0;
  (this->cHgAniDIBList_data).offset_0x18 = 0;
  (this->cHgAniDIBList_data).offset_0x30 = 0;
  (this->cHgAniDIBList_data).offset_0x3c = 0;
  (this->cHgAniDIBList_data).offset_0x40 = 0;
  (this->cHgAniDIBList_data).offset_0x24 = 0;
  (this->cHgAniDIBList_data).offset_0x20 = 0;
  (this->cHgAniDIBList_data).offset_0x28 = 0;
  (this->cHgAniDIBList_data).offset_0x2c = 0;
  (this->cHgAniDIBList_data).offset_0x74 = 0;
  (this->cHgAniDIBList_data).offset_0x70 = 0;
  (this->cHgAniDIBList_data).offset_0x4 = 0;
  (this->cHgAniDIBList_data).offset_0x14 = 0;
  (this->cHgAniDIBList_data).offset_0x8 = 0;
  (this->cHgAniDIBList_data).offset_0x10 = 0;
  (this->cHgAniDIBList_data).offset_0xc = 0;
  (this->cHgAniDIBList_data).offset_0x80 = 0;
  (this->cHgAniDIBList_data).offset_0x88 = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- ~cHgAniDIBList @ 60507110 size=388 ---- */

/* public: virtual __thiscall cHgAniDIBList::~cHgAniDIBList(void) */

void __thiscall cHgAniDIBList::~cHgAniDIBList(cHgAniDIBList *this)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7110  35  ??1cHgAniDIBList@@UAE@XZ */
  puStack_8 = &LAB_60517a09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 1;
  (this->cHgAniDIBList_data).offset_0xb0 = 1;
  pvVar1 = (this->cHgAniDIBList_data).offset_0x7c;
  (this->cHgAniDIBList_data).offset_0xac = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->cHgAniDIBList_data).offset_0x7c = (void *)0x0;
  }
  pvVar1 = (this->cHgAniDIBList_data).offset_0x84;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->cHgAniDIBList_data).offset_0x84 = (void *)0x0;
  }
  if ((this->cHgAniDIBList_data).offset_0xc8 != '\0') {
    piVar5 = (this->cHgAniDIBList_data).offset_0xa0;
    if ((this->cHgAniDIBList_data).offset_0xa4 < piVar5) {
      _invalid_parameter_noinfo();
    }
    piVar2 = (int *)(this->cHgAniDIBList_data).offset_0x94;
    while( true ) {
      piVar3 = (this->cHgAniDIBList_data).offset_0xa4;
      if (piVar3 < (this->cHgAniDIBList_data).offset_0xa0) {
        _invalid_parameter_noinfo();
      }
      if ((piVar2 == (int *)0x0) || (piVar2 != (int *)(this->cHgAniDIBList_data).offset_0x94)) {
        _invalid_parameter_noinfo();
      }
      if (piVar5 == piVar3) break;
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if (*(int **)(iVar4 + 0x10) <= piVar5) {
        _invalid_parameter_noinfo();
      }
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
      if (piVar2 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if (*(int **)(iVar4 + 0x10) <= piVar5) {
        _invalid_parameter_noinfo();
      }
      piVar5 = piVar5 + 1;
    }
  }
  FUN_6050cc60();
  FUN_6050cc60();
  pvVar1 = (this->cHgAniDIBList_data).offset_0xa0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  (this->cHgAniDIBList_data).offset_0xa0 = (void *)0x0;
  (this->cHgAniDIBList_data).offset_0xa4 = (int *)0x0;
  (this->cHgAniDIBList_data).offset_0xa8 = 0;
  operator_delete((void *)(this->cHgAniDIBList_data).offset_0x94);
  pvVar1 = (this->cHgAniDIBList_data).offset_0x64;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  (this->cHgAniDIBList_data).offset_0x64 = (void *)0x0;
  (this->cHgAniDIBList_data).offset_0x68 = 0;
  (this->cHgAniDIBList_data).offset_0x6c = 0;
  operator_delete((void *)(this->cHgAniDIBList_data).offset_0x58);
  ExceptionList = local_c;
  return;
}



/* ---- Load @ 605072a0 size=550 ---- */

/* public: int __thiscall cHgAniDIBList::Load(char const *) */

int __thiscall cHgAniDIBList::Load(cHgAniDIBList *this,char *param_1)

{
  void *pvVar1;
  HANDLE hFile;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  char local_10;
  char local_f;
  ushort local_e;
  ushort local_c;
  byte local_a;
  byte local_9;
  uint local_4;
  
                    /* 0x72a0  185  ?Load@cHgAniDIBList@@QAEHPBD@Z */
  local_4 = DAT_6052101c ^ (uint)&local_20;
  pvVar1 = (this->cHgAniDIBList_data).offset_0x7c;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->cHgAniDIBList_data).offset_0x7c = (void *)0x0;
  }
  pvVar1 = (this->cHgAniDIBList_data).offset_0x84;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->cHgAniDIBList_data).offset_0x84 = (void *)0x0;
  }
  (this->cHgAniDIBList_data).offset_0x84 = (void *)0x0;
  (this->cHgAniDIBList_data).offset_0x7c = (void *)0x0;
  (this->cHgAniDIBList_data).offset_0x70 = 0;
  (this->cHgAniDIBList_data).offset_0x44 = 0;
  (this->cHgAniDIBList_data).offset_0x38 = 0;
  (this->cHgAniDIBList_data).offset_0xac = 0;
  (this->cHgAniDIBList_data).offset_0xb0 = 1;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    local_1c = GetFileSize(hFile,&local_18);
    if (local_1c != 0xffffffff) {
      ReadFile(hFile,&local_14,0xd,&local_20,(LPOVERLAPPED)0x0);
      if ((((local_20 == 0xd) && (local_14 == 'G')) && (local_13 == 'I')) &&
         ((((local_12 == 'F' && (local_11 == '8')) && ((local_10 == '7' || (local_10 == '9')))) &&
          (local_f == 'a')))) {
        (this->cHgAniDIBList_data).offset_0x8c = (uint)local_e;
        (this->cHgAniDIBList_data).offset_0xc0 = (uint)local_e;
        (this->cHgAniDIBList_data).offset_0x34 = (uint)local_9;
        (this->cHgAniDIBList_data).offset_0x90 = (uint)local_c;
        (this->cHgAniDIBList_data).offset_0xb8 = 0;
        (this->cHgAniDIBList_data).offset_0xbc = 0;
        (this->cHgAniDIBList_data).offset_0xc4 = (uint)local_c;
        if (-1 < (char)local_a) {
LAB_60507468:
          uVar4 = local_1c + ((this->cHgAniDIBList_data).offset_0x44 + 4) * -3;
          (this->cHgAniDIBList_data).offset_0x38 = uVar4;
          pvVar3 = (LPVOID)FUN_605162b0(uVar4);
          (this->cHgAniDIBList_data).offset_0x84 = pvVar3;
          (this->cHgAniDIBList_data).offset_0x88 = pvVar3;
          ReadFile(hFile,pvVar3,(this->cHgAniDIBList_data).offset_0x38,&local_20,(LPOVERLAPPED)0x0);
          CloseHandle(hFile);
          Copy(this);
          iVar2 = __security_check_cookie(local_4 ^ (uint)&local_20);
          return iVar2;
        }
        iVar2 = 1 << (local_a & 7) + 1;
        (this->cHgAniDIBList_data).offset_0x44 = iVar2;
        pvVar3 = (LPVOID)FUN_605162b0(iVar2 * 3);
        (this->cHgAniDIBList_data).offset_0x7c = pvVar3;
        ReadFile(hFile,pvVar3,(this->cHgAniDIBList_data).offset_0x44 * 3,&local_20,(LPOVERLAPPED)0x0
                );
        if (local_20 == (this->cHgAniDIBList_data).offset_0x44 * 3) goto LAB_60507468;
        operator_delete__((this->cHgAniDIBList_data).offset_0x7c);
        (this->cHgAniDIBList_data).offset_0x7c = (void *)0x0;
        (this->cHgAniDIBList_data).offset_0x44 = 0;
      }
    }
    CloseHandle(hFile);
  }
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_20);
  return iVar2;
}



/* ---- Copy @ 605074d0 size=74 ---- */

/* public: int __thiscall cHgAniDIBList::Copy(void) */

int __thiscall cHgAniDIBList::Copy(cHgAniDIBList *this)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x74d0  68  ?Copy@cHgAniDIBList@@QAEHXZ */
  pvVar1 = (this->cHgAniDIBList_data).offset_0x84;
  iVar3 = 0;
  if (pvVar1 != (void *)0x0) {
    (this->cHgAniDIBList_data).offset_0x88 = pvVar1;
    (this->cHgAniDIBList_data).offset_0x70 = 0;
    iVar2 = NextImage(this);
    if (iVar2 != 0) {
      do {
        iVar3 = iVar3 + 1;
        iVar2 = NextImage(this);
      } while (iVar2 != 0);
      if (0 < iVar3) {
        return 1;
      }
    }
  }
  return 0;
}



/* ---- NextImage @ 60507520 size=456 ---- */

/* public: int __thiscall cHgAniDIBList::NextImage(void) */

int __thiscall cHgAniDIBList::NextImage(cHgAniDIBList *this)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  
                    /* 0x7520  190  ?NextImage@cHgAniDIBList@@QAEHXZ */
  if ((this->cHgAniDIBList_data).offset_0x84 != (void *)0x0) {
    iVar8 = (this->cHgAniDIBList_data).offset_0x38;
    if ((int)(this->cHgAniDIBList_data).offset_0x70 <= iVar8) {
LAB_60507542:
      puVar5 = (undefined1 *)(this->cHgAniDIBList_data).offset_0x88;
      puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
      *puVar1 = *puVar1 + 1;
      uVar2 = *puVar5;
      iVar6 = (this->cHgAniDIBList_data).offset_0x70;
      (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 1;
      switch(uVar2) {
      case 0:
      case 0x3b:
        break;
      default:
        goto switchD_60507568_caseD_1;
      case 0x21:
        goto switchD_60507568_caseD_21;
      case 0x2c:
        iVar8 = TakeIt(this);
        return iVar8;
      }
    }
switchD_60507568_caseD_0:
    (this->cHgAniDIBList_data).offset_0x70 = 0;
    (this->cHgAniDIBList_data).offset_0x88 = (this->cHgAniDIBList_data).offset_0x84;
  }
switchD_60507568_caseD_1:
  return 0;
switchD_60507568_caseD_21:
  (this->cHgAniDIBList_data).offset_0x70 = iVar6 + 1;
  uVar2 = puVar5[1];
  (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 2;
  switch(uVar2) {
  case 1:
    (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 0xf;
    (this->cHgAniDIBList_data).offset_0x70 = iVar6 + 0xe;
    bVar3 = puVar5[0xf];
    while (bVar3 != 0) {
      puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
      *puVar1 = *puVar1 + bVar3 + 1;
      puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
      *puVar1 = *puVar1 + bVar3 + 1;
      if (iVar8 < (int)(this->cHgAniDIBList_data).offset_0x70) {
        return 0;
      }
      bVar3 = *(byte *)(this->cHgAniDIBList_data).offset_0x88;
    }
    break;
  default:
    goto switchD_60507568_caseD_1;
  case 0xf9:
    pbVar7 = puVar5 + 3;
    (this->cHgAniDIBList_data).offset_0x88 = pbVar7;
    (this->cHgAniDIBList_data).offset_0x48 = *pbVar7 & 0x1c;
    bVar3 = *pbVar7;
    (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 4;
    (this->cHgAniDIBList_data).offset_0x4c = bVar3 & 1;
    uVar4 = *(ushort *)(puVar5 + 4);
    (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 6;
    (this->cHgAniDIBList_data).offset_0x54 = (uint)uVar4;
    (this->cHgAniDIBList_data).offset_0x50 = (uint)(byte)puVar5[6];
    (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 7;
    (this->cHgAniDIBList_data).offset_0x70 = iVar6 + 6;
    break;
  case 0xfe:
    bVar3 = puVar5[2];
    while (bVar3 != 0) {
      puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
      *puVar1 = *puVar1 + bVar3 + 1;
      puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
      *puVar1 = *puVar1 + bVar3 + 1;
      if (iVar8 < (int)(this->cHgAniDIBList_data).offset_0x70) {
        return 0;
      }
      bVar3 = *(byte *)(this->cHgAniDIBList_data).offset_0x88;
    }
    break;
  case 0xff:
    pbVar7 = puVar5 + 0xe;
    (this->cHgAniDIBList_data).offset_0x88 = pbVar7;
    (this->cHgAniDIBList_data).offset_0x70 = iVar6 + 0xd;
    if (*pbVar7 == 3) {
      (this->cHgAniDIBList_data).offset_0xb0 = (uint)*(ushort *)(puVar5 + 0x10);
    }
    bVar3 = *pbVar7;
    while (bVar3 != 0) {
      puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
      *puVar1 = *puVar1 + bVar3 + 1;
      puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
      *puVar1 = *puVar1 + bVar3 + 1;
      if (iVar8 < (int)(this->cHgAniDIBList_data).offset_0x70) {
        return 0;
      }
      bVar3 = *(byte *)(this->cHgAniDIBList_data).offset_0x88;
    }
  }
  puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
  *puVar1 = *puVar1 + 1;
  puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
  *puVar1 = *puVar1 + 1;
  if (iVar8 < (int)(this->cHgAniDIBList_data).offset_0x70) {
    return 0;
  }
  if (iVar8 < (int)(this->cHgAniDIBList_data).offset_0x70) goto switchD_60507568_caseD_0;
  goto LAB_60507542;
}



/* ---- TakeIt_Step1 @ 60507850 size=272 ---- */

/* protected: void __thiscall cHgAniDIBList::TakeIt_Step1(unsigned char *) */

void __thiscall cHgAniDIBList::TakeIt_Step1(cHgAniDIBList *this,uchar *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uchar *puVar6;
  int iVar7;
  
                    /* 0x7850  220  ?TakeIt_Step1@cHgAniDIBList@@IAEXPAE@Z */
  bVar2 = (this->cHgAniDIBList_data).offset_0x1;
  if ((char)bVar2 < '\0') {
    iVar7 = 1 << (bVar2 & 7) + 1;
    if ((this->cHgAniDIBList_data).offset_0x4c != 0) {
      iVar3 = (this->cHgAniDIBList_data).offset_0x88;
      iVar4 = (this->cHgAniDIBList_data).offset_0x50 * 3;
      puVar5 = (undefined1 *)(iVar4 + iVar3);
      (this->cHgAniDIBList_data).offset_0x78 =
           (uint)CONCAT21(CONCAT11(puVar5[2],*(undefined1 *)(iVar4 + 1 + iVar3)),*puVar5);
    }
    puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
    *puVar1 = *puVar1 + iVar7 * 3;
    if (iVar7 != 0) {
      do {
        param_1[2] = *(uchar *)(this->cHgAniDIBList_data).offset_0x88;
        puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
        *puVar1 = *puVar1 + 1;
        param_1[1] = *(uchar *)(this->cHgAniDIBList_data).offset_0x88;
        puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
        *puVar1 = *puVar1 + 1;
        *param_1 = *(uchar *)(this->cHgAniDIBList_data).offset_0x88;
        puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
        *puVar1 = *puVar1 + 1;
        param_1[3] = '\0';
        param_1 = param_1 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return;
    }
  }
  else {
    puVar6 = (this->cHgAniDIBList_data).offset_0x7c;
    if ((this->cHgAniDIBList_data).offset_0x4c != 0) {
      iVar7 = (this->cHgAniDIBList_data).offset_0x50;
      (this->cHgAniDIBList_data).offset_0x78 =
           (uint)CONCAT21(CONCAT11((puVar6 + iVar7 * 3)[2],puVar6[iVar7 * 3 + 1]),puVar6[iVar7 * 3])
      ;
    }
    iVar7 = 0;
    if (0 < (int)(this->cHgAniDIBList_data).offset_0x44) {
      do {
        param_1[2] = *puVar6;
        param_1[1] = puVar6[1];
        *param_1 = puVar6[2];
        param_1[3] = '\0';
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 3;
        param_1 = param_1 + 4;
      } while (iVar7 < (int)(this->cHgAniDIBList_data).offset_0x44);
    }
  }
  return;
}



/* ---- TakeIt_Step2 @ 60507960 size=605 ---- */

/* protected: int __thiscall cHgAniDIBList::TakeIt_Step2(struct GIFTABLE *) */

int __thiscall cHgAniDIBList::TakeIt_Step2(cHgAniDIBList *this,GIFTABLE *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  GIFTABLE GVar11;
  uint local_10;
  uint local_c;
  
                    /* 0x7960  221  ?TakeIt_Step2@cHgAniDIBList@@IAEHPAUGIFTABLE@@@Z */
  pbVar3 = (byte *)(this->cHgAniDIBList_data).offset_0x88;
  bVar2 = *pbVar3;
  (this->cHgAniDIBList_data).offset_0x88 = pbVar3 + 1;
  puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
  *puVar1 = *puVar1 + 1;
  uVar8 = 1 << (bVar2 & 0x1f);
  (this->cHgAniDIBList_data).offset_0x4 = (uint)bVar2;
  puVar1 = &(this->cHgAniDIBList_data).offset_0x4;
  *puVar1 = *puVar1 + 1;
  iVar9 = uVar8 + 2;
  (this->cHgAniDIBList_data).offset_0x8 = (uint)bVar2;
  puVar1 = &(this->cHgAniDIBList_data).offset_0x8;
  *puVar1 = *puVar1 + 1;
  local_10 = 0;
  (this->cHgAniDIBList_data).offset_0xc = 0;
  (this->cHgAniDIBList_data).offset_0x0 = 0;
  (this->cHgAniDIBList_data).offset_0x14 = 0;
  (this->cHgAniDIBList_data).offset_0x10 = 1;
  (this->cHgAniDIBList_data).offset_0x40 = 0;
  (this->cHgAniDIBList_data).offset_0x3c = 0;
  (this->cHgAniDIBList_data).offset_0x28 = 1;
  (this->cHgAniDIBList_data).offset_0x2c = 0;
  uVar7 = GetCode(this);
  local_c = (uint)uVar7;
  iVar10 = iVar9;
  if (local_c == uVar8 + 1) {
    return 1;
  }
  do {
    if (local_c == uVar8) {
      (this->cHgAniDIBList_data).offset_0x4 = (this->cHgAniDIBList_data).offset_0x8;
      uVar7 = GetCode(this);
      local_10 = (uint)uVar7;
      if (iVar9 < (int)local_10) {
        return 0;
      }
      Output(this,(uchar)uVar7);
      iVar10 = iVar9;
    }
    else {
      uVar7 = 0;
      uVar5 = local_c;
      uVar6 = local_10;
      if ((int)local_c < iVar10) {
        for (; iVar9 <= (int)uVar5; uVar5 = (uint)*(ushort *)(param_1 + uVar5 * 6 + 2)) {
          *(ushort *)(param_1 + uVar5 * 6 + 4) = uVar7;
          uVar7 = (ushort)uVar5;
          if (uVar7 <= *(ushort *)(param_1 + uVar5 * 6 + 2)) {
            return 0;
          }
        }
        Output(this,(uchar)SUB41(uVar5,0));
        for (; uVar7 != 0; uVar7 = *(ushort *)(param_1 + (uint)uVar7 * 6 + 4)) {
          Output(this,(uchar)param_1[(uint)uVar7 * 6]);
        }
        param_1[iVar10 * 6] = SUB41(uVar5,0);
        *(undefined2 *)(param_1 + iVar10 * 6 + 2) = (undefined2)local_10;
        iVar4 = (this->cHgAniDIBList_data).offset_0x4;
        if (iVar10 + 1 == 1 << ((byte)iVar4 & 0x1f)) {
          (this->cHgAniDIBList_data).offset_0x4 = iVar4 + 1;
        }
        if (0xc < (uint)(this->cHgAniDIBList_data).offset_0x4) {
          (this->cHgAniDIBList_data).offset_0x4 = 0xc;
        }
      }
      else {
        for (; iVar9 <= (int)uVar6; uVar6 = (uint)*(ushort *)(param_1 + uVar6 * 6 + 2)) {
          *(ushort *)(param_1 + uVar6 * 6 + 4) = uVar7;
          uVar7 = (ushort)uVar6;
          if (uVar7 <= *(ushort *)(param_1 + uVar6 * 6 + 2)) {
            return 0;
          }
        }
        GVar11 = SUB41(uVar6,0);
        Output(this,(uchar)GVar11);
        for (; uVar7 != 0; uVar7 = *(ushort *)(param_1 + (uint)uVar7 * 6 + 4)) {
          Output(this,(uchar)param_1[(uint)uVar7 * 6]);
        }
        Output(this,(uchar)GVar11);
        param_1[iVar10 * 6] = GVar11;
        *(undefined2 *)(param_1 + iVar10 * 6 + 2) = (undefined2)local_10;
        iVar4 = (this->cHgAniDIBList_data).offset_0x4;
        if (iVar10 + 1 == 1 << ((byte)iVar4 & 0x1f)) {
          (this->cHgAniDIBList_data).offset_0x4 = iVar4 + 1;
        }
        if (0xc < (uint)(this->cHgAniDIBList_data).offset_0x4) {
          (this->cHgAniDIBList_data).offset_0x4 = 0xc;
        }
      }
      local_10 = local_c;
      iVar10 = iVar10 + 1;
    }
    uVar7 = GetCode(this);
    local_c = (uint)uVar7;
  } while (local_c != uVar8 + 1);
  return 1;
}



/* ---- TakeIt_Step3 @ 60507bd0 size=1102 ---- */

/* protected: void __thiscall cHgAniDIBList::TakeIt_Step3(struct tagRGBQUAD *) */

void __thiscall cHgAniDIBList::TakeIt_Step3(cHgAniDIBList *this,tagRGBQUAD *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  code *pcVar8;
  CHgAImage *unaff_ESI;
  CHgAImage *pCVar9;
  uint uVar10;
  ushort *puVar11;
  int *local_34;
  int local_30 [2];
  int local_28;
  int local_24;
  int local_20 [2];
  int local_18 [2];
  uint local_10;
  
                    /* 0x7bd0  222  ?TakeIt_Step3@cHgAniDIBList@@IAEXPAUtagRGBQUAD@@@Z */
  local_18[0] = (this->cHgAniDIBList_data).offset_0x18;
  iVar6 = local_18[0] * 0x10 + 0x1f;
  iVar1 = (this->cHgAniDIBList_data).offset_0x1c;
  local_10 = local_18[0] * 8 + 0x1f >> 3 & 0xfffffffc;
  local_30[0] = (int)((iVar6 >> 3 & 0xfffffffcU) - (iVar6 >> 0x1f)) >> 1;
  pCVar9 = (CHgAImage *)0x0;
  local_24 = iVar1;
  if ((int)(this->cHgAniDIBList_data).offset_0xa4 - (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2
      == 0) goto LAB_60507d7a;
  if ((int)(this->cHgAniDIBList_data).offset_0xa4 - (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2
      == 0) {
    _invalid_parameter_noinfo();
  }
  if (*(int *)(*(int *)(this->cHgAniDIBList_data).offset_0xa0 + 8) == local_30[0]) {
    if ((int)(this->cHgAniDIBList_data).offset_0xa4 - (int)(this->cHgAniDIBList_data).offset_0xa0 >>
        2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(int *)(*(int *)(this->cHgAniDIBList_data).offset_0xa0 + 0xc) != iVar1) goto LAB_60507c8c;
    pcVar8 = _invalid_parameter_noinfo_exref;
  }
  else {
LAB_60507c8c:
    (this->cHgAniDIBList_data).offset_0x18 = local_30[0];
    pcVar8 = _invalid_parameter_noinfo_exref;
    (this->cHgAniDIBList_data).offset_0x1c = iVar1;
    if ((int)(this->cHgAniDIBList_data).offset_0xa4 - (int)(this->cHgAniDIBList_data).offset_0xa0 >>
        2 == 0) {
      _invalid_parameter_noinfo();
    }
    local_30[0] = *(int *)(*(int *)(this->cHgAniDIBList_data).offset_0xa0 + 8);
    if ((int)(this->cHgAniDIBList_data).offset_0xa4 - (int)(this->cHgAniDIBList_data).offset_0xa0 >>
        2 == 0) {
      _invalid_parameter_noinfo();
    }
    local_24 = *(int *)(*(int *)(this->cHgAniDIBList_data).offset_0xa0 + 0xc);
  }
  iVar6 = (this->cHgAniDIBList_data).offset_0xb4;
  if (iVar6 == 4) {
    uVar10 = ((int)(this->cHgAniDIBList_data).offset_0xa4 -
              (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) - 1;
  }
  else {
    if (iVar6 != 0x10) {
      if (iVar6 == 8) {
        if ((int)(this->cHgAniDIBList_data).offset_0xa4 -
            (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2 == 0) {
          (*pcVar8)();
        }
        pCVar9 = *(CHgAImage **)(this->cHgAniDIBList_data).offset_0xa0;
      }
      goto LAB_60507d7a;
    }
    if ((uint)((int)(this->cHgAniDIBList_data).offset_0xa4 -
               (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) < 2) goto LAB_60507d7a;
    uVar10 = ((int)(this->cHgAniDIBList_data).offset_0xa4 -
              (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) - 2;
  }
  if ((uint)((int)(this->cHgAniDIBList_data).offset_0xa4 -
             (int)(this->cHgAniDIBList_data).offset_0xa0 >> 2) <= uVar10) {
    (*pcVar8)();
  }
  pCVar9 = *(CHgAImage **)((int)(this->cHgAniDIBList_data).offset_0xa0 + uVar10 * 4);
LAB_60507d7a:
  (this->cHgAniDIBList_data).offset_0xb4 = (this->cHgAniDIBList_data).offset_0x48;
  local_34 = operator_new(0x20);
  if (local_34 == (int *)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    *local_34 = (int)&CHgAImage::_vftable_;
    local_34[1] = 0;
    local_34[7] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_34[6] = 0;
    *(undefined1 *)(local_34 + 4) = 1;
    local_34[5] = -1;
  }
  if (local_34 == (int *)0x0) {
    local_34 = operator_new(0x20);
    if (local_34 == (int *)0x0) {
      local_34 = (int *)0x0;
    }
    else {
      *local_34 = (int)&CHgAImage::_vftable_;
      local_34[1] = 0;
      local_34[7] = 0;
      local_34[2] = 0;
      local_34[3] = 0;
      local_34[6] = 0;
      *(undefined1 *)(local_34 + 4) = 1;
      local_34[5] = -1;
    }
    if (local_34 == (int *)0x0) {
      return;
    }
  }
  (**(code **)(*local_34 + 0x10))(local_30[0],local_24);
  iVar6 = 0;
  if (pCVar9 == (CHgAImage *)0x0) {
    FUN_60502ee0((void *)(unaff_ESI->CHgAImage_data).offset_0x8,
                 (unaff_ESI->CHgAImage_data).offset_0x4);
  }
  else {
    (unaff_ESI->CHgAImage_data).offset_0xc = 0;
    CHgAImage::DrawUnSafe(unaff_ESI,0,0,pCVar9,0,0,*(int *)(pCVar9 + 8),*(int *)(pCVar9 + 0xc),0xff)
    ;
    iVar6 = (this->cHgAniDIBList_data).offset_0x20;
    if (local_30[0] != 0) {
      CHgAImage::FillRect(unaff_ESI,(tagRECT *)&(this->cHgAniDIBList_data).offset_0xb8,0xff0000,0xff
                         );
    }
  }
  iVar2 = (this->cHgAniDIBList_data).offset_0x24;
  iVar3 = (this->cHgAniDIBList_data).offset_0x20;
  (this->cHgAniDIBList_data).offset_0xb8 = iVar2;
  (this->cHgAniDIBList_data).offset_0xbc = iVar3;
  (this->cHgAniDIBList_data).offset_0xc0 = (this->cHgAniDIBList_data).offset_0x18 + iVar2;
  (this->cHgAniDIBList_data).offset_0xc4 = (this->cHgAniDIBList_data).offset_0x1c + iVar3;
  local_28 = 0;
  if (0 < (int)local_34) {
    local_24 = 0;
    do {
      if (iVar1 <= iVar6) break;
      puVar11 = (ushort *)
                (*(int *)((unaff_ESI->CHgAImage_data).offset_0x0 + iVar6 * 4) +
                (this->cHgAniDIBList_data).offset_0x24 * 2);
      pbVar7 = (byte *)((this->cHgAniDIBList_data).offset_0x80 + local_24);
      if (0 < local_20[0]) {
        local_30[0] = local_20[0];
        do {
          if (((this->cHgAniDIBList_data).offset_0x4c == 0) ||
             (*pbVar7 != *(byte *)&(this->cHgAniDIBList_data).offset_0x50)) {
            *puVar11 = ((ushort)(param_1[*pbVar7].rgbRed & 0xf8) << 5 |
                       (ushort)(param_1[*pbVar7].rgbGreen & 0xf8)) * 4 |
                       (ushort)(param_1[*pbVar7].rgbBlue >> 3);
          }
          puVar11 = puVar11 + 1;
          pbVar7 = pbVar7 + 1;
          local_30[0] = local_30[0] + -1;
        } while (local_30[0] != 0);
      }
      local_24 = local_24 + local_18[0];
      iVar6 = iVar6 + 1;
      local_28 = local_28 + 1;
    } while (local_28 < (int)local_34);
  }
  piVar4 = (this->cHgAniDIBList_data).offset_0xa0;
  if (piVar4 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (this->cHgAniDIBList_data).offset_0xa8 - (int)piVar4 >> 2;
  }
  piVar5 = (this->cHgAniDIBList_data).offset_0xa4;
  if ((uint)((int)piVar5 - (int)piVar4 >> 2) < uVar10) {
    *piVar5 = (int)unaff_ESI;
    (this->cHgAniDIBList_data).offset_0xa4 = piVar5 + 1;
  }
  else {
    if (piVar5 < piVar4) {
      _invalid_parameter_noinfo();
    }
    FUN_60505720(local_18,local_30 + -3,(this->cHgAniDIBList_data).offset_0x94,piVar5);
  }
  local_18[0] = (this->cHgAniDIBList_data).offset_0x54;
  piVar4 = (this->cHgAniDIBList_data).offset_0x64;
  if (piVar4 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (this->cHgAniDIBList_data).offset_0x6c - (int)piVar4 >> 2;
  }
  piVar5 = (int *)(this->cHgAniDIBList_data).offset_0x68;
  if ((uint)((int)piVar5 - (int)piVar4 >> 2) < uVar10) {
    *piVar5 = local_18[0];
    (this->cHgAniDIBList_data).offset_0x68 = piVar5 + 1;
    return;
  }
  if (piVar5 < piVar4) {
    _invalid_parameter_noinfo();
  }
  FUN_60508400(local_20,local_18,(this->cHgAniDIBList_data).offset_0x58,piVar5);
  return;
}



/* ---- TakeIt @ 60508030 size=306 ---- */

/* public: int __thiscall cHgAniDIBList::TakeIt(void) */

int __thiscall cHgAniDIBList::TakeIt(cHgAniDIBList *this)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  GIFTABLE *_Dst;
  
                    /* 0x8030  219  ?TakeIt@cHgAniDIBList@@QAEHXZ */
  puVar3 = (ushort *)(this->cHgAniDIBList_data).offset_0x88;
  uVar2 = *puVar3;
  (this->cHgAniDIBList_data).offset_0x88 = puVar3 + 1;
  (this->cHgAniDIBList_data).offset_0x24 = (uint)uVar2;
  uVar2 = puVar3[1];
  (this->cHgAniDIBList_data).offset_0x88 = puVar3 + 2;
  (this->cHgAniDIBList_data).offset_0x20 = (uint)uVar2;
  uVar5 = (uint)puVar3[2];
  (this->cHgAniDIBList_data).offset_0x18 = uVar5;
  (this->cHgAniDIBList_data).offset_0x88 = puVar3 + 3;
  iVar6 = (uVar5 - 1 | 3) + 1;
  (this->cHgAniDIBList_data).offset_0x30 = iVar6;
  uVar2 = puVar3[3];
  (this->cHgAniDIBList_data).offset_0x88 = puVar3 + 4;
  (this->cHgAniDIBList_data).offset_0x1c = (uint)uVar2;
  uVar2 = puVar3[4];
  puVar4 = &(this->cHgAniDIBList_data).offset_0x70;
  *puVar4 = *puVar4 + 9;
  (this->cHgAniDIBList_data).offset_0x88 = (int)puVar3 + 9;
  iVar6 = (this->cHgAniDIBList_data).offset_0x1c * iVar6;
  (this->cHgAniDIBList_data).offset_0x74 = iVar6;
  (this->cHgAniDIBList_data).offset_0x1 = (char)uVar2;
  puVar4 = (undefined4 *)FUN_605162b0(iVar6 + 0x6428);
  if (puVar4 != (undefined4 *)0x0) {
    _Dst = (GIFTABLE *)((this->cHgAniDIBList_data).offset_0x74 + (int)(puVar4 + 0x10a));
    (this->cHgAniDIBList_data).offset_0x80 = puVar4 + 0x10a;
    memset(_Dst,0,0x6000);
    *puVar4 = 0x28;
    puVar4[1] = (this->cHgAniDIBList_data).offset_0x18;
    iVar6 = (this->cHgAniDIBList_data).offset_0x1c;
    *(undefined2 *)((int)puVar4 + 0xe) = 8;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[2] = -iVar6;
    *(undefined2 *)(puVar4 + 3) = 1;
    puVar4[8] = 0x100;
    puVar4[9] = 0x100;
    TakeIt_Step1(this,(uchar *)(puVar4 + 10));
    iVar6 = TakeIt_Step2(this,_Dst);
    if (iVar6 != 0) {
      TakeIt_Step3(this,(tagRGBQUAD *)(puVar4 + 10));
      puVar1 = &(this->cHgAniDIBList_data).offset_0x88;
      *puVar1 = *puVar1 + 1;
      puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
      *puVar1 = *puVar1 + 1;
      operator_delete__(puVar4);
      return 1;
    }
    operator_delete__(puVar4);
  }
  return 0;
}



/* ---- Output @ 60508170 size=165 ---- */

/* public: void __thiscall cHgAniDIBList::Output(unsigned char) */

void __thiscall cHgAniDIBList::Output(cHgAniDIBList *this,uchar param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x8170  191  ?Output@cHgAniDIBList@@QAEXE@Z */
  iVar2 = (this->cHgAniDIBList_data).offset_0x3c;
  if (((this->cHgAniDIBList_data).offset_0x1 & 0x40) == 0) {
    if (iVar2 == (this->cHgAniDIBList_data).offset_0x18) {
      puVar1 = &(this->cHgAniDIBList_data).offset_0x40;
      *puVar1 = *puVar1 + 1;
      (this->cHgAniDIBList_data).offset_0x3c = 0;
    }
    iVar2 = (this->cHgAniDIBList_data).offset_0x3c;
    iVar3 = (this->cHgAniDIBList_data).offset_0x40 * (this->cHgAniDIBList_data).offset_0x30 + iVar2;
    (this->cHgAniDIBList_data).offset_0x3c = iVar2 + 1;
  }
  else {
    if (iVar2 == (this->cHgAniDIBList_data).offset_0x18) {
      iVar2 = (this->cHgAniDIBList_data).offset_0x28;
      (this->cHgAniDIBList_data).offset_0x3c = 0;
      if (iVar2 == 1) {
        puVar1 = &(this->cHgAniDIBList_data).offset_0x2c;
        *puVar1 = *puVar1 + 8;
      }
      if (iVar2 == 2) {
        puVar1 = &(this->cHgAniDIBList_data).offset_0x2c;
        *puVar1 = *puVar1 + 8;
      }
      if (iVar2 == 3) {
        puVar1 = &(this->cHgAniDIBList_data).offset_0x2c;
        *puVar1 = *puVar1 + 4;
      }
      if (iVar2 == 4) {
        puVar1 = &(this->cHgAniDIBList_data).offset_0x2c;
        *puVar1 = *puVar1 + 2;
      }
      if ((int)(this->cHgAniDIBList_data).offset_0x1c <= (int)(this->cHgAniDIBList_data).offset_0x2c
         ) {
        (this->cHgAniDIBList_data).offset_0x28 = iVar2 + 1;
        (this->cHgAniDIBList_data).offset_0x2c = 0x10 >> ((byte)(iVar2 + 1) & 0x1f);
      }
    }
    iVar3 = (this->cHgAniDIBList_data).offset_0x30 * (this->cHgAniDIBList_data).offset_0x2c +
            (this->cHgAniDIBList_data).offset_0x3c;
    *(uchar *)(iVar3 + (this->cHgAniDIBList_data).offset_0x80) = param_1;
    puVar1 = &(this->cHgAniDIBList_data).offset_0x3c;
    *puVar1 = *puVar1 + 1;
  }
  if (iVar3 <= (int)(this->cHgAniDIBList_data).offset_0x74) {
    *(uchar *)(iVar3 + (this->cHgAniDIBList_data).offset_0x80) = param_1;
  }
  return;
}



/* ---- GetByte @ 60508220 size=100 ---- */

/* public: unsigned char __thiscall cHgAniDIBList::GetByte(void) */

uchar __thiscall cHgAniDIBList::GetByte(cHgAniDIBList *this)

{
  undefined4 *puVar1;
  uchar uVar2;
  byte *pbVar3;
  int iVar4;
  uchar *puVar5;
  uint uVar6;
  
                    /* 0x8220  144  ?GetByte@cHgAniDIBList@@QAEEXZ */
  if ((uint)(this->cHgAniDIBList_data).offset_0x14 <= (uint)(this->cHgAniDIBList_data).offset_0x10)
  {
    pbVar3 = (byte *)(this->cHgAniDIBList_data).offset_0x88;
    uVar6 = (uint)*pbVar3;
    puVar1 = &(this->cHgAniDIBList_data).offset_0x70;
    *puVar1 = *puVar1 + uVar6 + 1;
    iVar4 = (this->cHgAniDIBList_data).offset_0x70;
    (this->cHgAniDIBList_data).offset_0x14 = uVar6;
    (this->cHgAniDIBList_data).offset_0x88 = pbVar3 + 1;
    (this->cHgAniDIBList_data).offset_0x10 = 0;
    if ((int)(this->cHgAniDIBList_data).offset_0x38 < iVar4) {
      (this->cHgAniDIBList_data).offset_0x70 = (iVar4 - uVar6) + -1;
      return 0xff;
    }
    if (uVar6 == 0) {
      (this->cHgAniDIBList_data).offset_0x88 = pbVar3;
      (this->cHgAniDIBList_data).offset_0x70 = iVar4 + -1;
      return 0xff;
    }
  }
  puVar5 = (uchar *)(this->cHgAniDIBList_data).offset_0x88;
  puVar1 = &(this->cHgAniDIBList_data).offset_0x10;
  *puVar1 = *puVar1 + 1;
  uVar2 = *puVar5;
  (this->cHgAniDIBList_data).offset_0x88 = puVar5 + 1;
  return uVar2;
}



/* ---- GetCode @ 60508290 size=212 ---- */

/* public: unsigned short __thiscall cHgAniDIBList::GetCode(void) */

ushort __thiscall cHgAniDIBList::GetCode(cHgAniDIBList *this)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  
                    /* 0x8290  145  ?GetCode@cHgAniDIBList@@QAEGXZ */
  uVar2 = (this->cHgAniDIBList_data).offset_0x4;
  uVar3 = (this->cHgAniDIBList_data).offset_0xc;
  if (uVar2 <= uVar3) {
    bVar1 = *(byte *)&(this->cHgAniDIBList_data).offset_0x4;
    bVar6 = (this->cHgAniDIBList_data).offset_0x0;
    (this->cHgAniDIBList_data).offset_0xc = uVar3 - uVar2;
    (this->cHgAniDIBList_data).offset_0x0 = bVar6 >> (bVar1 & 0x1f);
    return (ushort)(('\x01' << (bVar1 & 0x1f)) - 1U & bVar6);
  }
  bVar1 = (this->cHgAniDIBList_data).offset_0x0;
  bVar6 = GetByte(this);
  iVar4 = (this->cHgAniDIBList_data).offset_0x4;
  iVar5 = (this->cHgAniDIBList_data).offset_0xc;
  (this->cHgAniDIBList_data).offset_0x0 = bVar6;
  bVar8 = (byte)iVar5;
  if ((uint)(iVar4 - iVar5) < 9) {
    bVar7 = *(char *)&(this->cHgAniDIBList_data).offset_0x4 - bVar8;
    (this->cHgAniDIBList_data).offset_0x0 = bVar6 >> (bVar7 & 0x1f);
    (this->cHgAniDIBList_data).offset_0xc = (iVar5 - iVar4) + 8;
    return (ushort)bVar1 + ((ushort)(('\x01' << (bVar7 & 0x1f)) - 1U & bVar6) << (bVar8 & 0x1f));
  }
  bVar7 = GetByte(this);
  iVar4 = (this->cHgAniDIBList_data).offset_0xc;
  bVar9 = (*(char *)&(this->cHgAniDIBList_data).offset_0x4 -
          *(char *)&(this->cHgAniDIBList_data).offset_0xc) - 8;
  (this->cHgAniDIBList_data).offset_0xc = (iVar4 - (this->cHgAniDIBList_data).offset_0x4) + 0x10;
  (this->cHgAniDIBList_data).offset_0x0 = bVar7 >> (bVar9 & 0x1f);
  return (ushort)bVar1 + ((ushort)bVar6 << (bVar8 & 0x1f)) +
         ((ushort)(('\x01' << (bVar9 & 0x1f)) - 1U & bVar7) << ((char)iVar4 + 8U & 0x1f));
}



/* ---- SetTransparentColor @ 60508370 size=8 ---- */

/* public: int __thiscall cHgAnigifList::SetTransparentColor(unsigned long) */

int __thiscall cHgAnigifList::SetTransparentColor(cHgAnigifList *this,ulong param_1)

{
                    /* 0x8370  215  ?SetTransparentColor@cHgAnigifList@@QAEHK@Z */
  return 1;
}



/* ---- FUN_60508380 @ 60508380 size=92 ---- */

int * FUN_60508380(int *param_1)

{
  undefined4 *extraout_EAX;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_605179c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *extraout_EAX = param_1;
    puVar1 = extraout_EAX;
  }
  *param_1 = (int)puVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_605083e0 @ 605083e0 size=26 ---- */

int FUN_605083e0(void)

{
  int unaff_ESI;
  uint unaff_EDI;
  
  if ((uint)(*(int *)(unaff_ESI + 0x10) - *(int *)(unaff_ESI + 0xc) >> 2) <= unaff_EDI) {
    _invalid_parameter_noinfo();
  }
  return *(int *)(unaff_ESI + 0xc) + unaff_EDI * 4;
}



/* ---- FUN_60508400 @ 60508400 size=183 ---- */

void FUN_60508400(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  
  uVar1 = in_EAX[3];
  if ((in_EAX[4] - uVar1 & 0xfffffffc) == 0) {
    iVar4 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar4 = (int)((int)param_4 - uVar1) >> 2;
  }
  FUN_605084f0(in_EAX,param_2,param_3,param_4);
  uVar1 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)*in_EAX;
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  uVar1 = uVar1 + iVar4 * 4;
  if (uVar1 <= *(uint *)(iVar3 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_605084a4;
  }
  _invalid_parameter_noinfo();
LAB_605084a4:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- FUN_605084c0 @ 605084c0 size=33 ---- */

undefined4 * __fastcall FUN_605084c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  puVar2 = unaff_EDI;
  for (iVar1 = unaff_ESI; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  return unaff_EDI + unaff_ESI;
}



/* ---- FUN_605084f0 @ 605084f0 size=503 ---- */

void __thiscall FUN_605084f0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  length_error *plVar1;
  void *pvVar2;
  rsize_t rVar3;
  uint in_EAX;
  int iVar4;
  int extraout_EAX;
  void *_Dst;
  void *pvVar5;
  length_error *this_00;
  length_error *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *puVar6;
  int iVar7;
  length_error *local_8;
  
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == 0) {
    this_00 = (length_error *)0x0;
  }
  else {
    this_00 = (length_error *)(*(int *)((int)this + 0x14) - iVar4 >> 2);
  }
  if (in_EAX != 0) {
    pvVar2 = *(void **)((int)this + 0x10);
    iVar4 = (int)pvVar2 - iVar4 >> 2;
    if (0x3fffffffU - iVar4 < in_EAX) {
      std::length_error::length_error(this_00);
      iVar4 = extraout_EAX;
      this_00 = extraout_ECX;
    }
    plVar1 = (length_error *)(iVar4 + in_EAX);
    if (this_00 < plVar1) {
      if ((length_error *)(0x3fffffff - ((uint)this_00 >> 1)) < this_00) {
        local_8 = (length_error *)0x0;
      }
      else {
        local_8 = (length_error *)((int)&this_00->vftablePtr + ((uint)this_00 >> 1));
      }
      if (local_8 < plVar1) {
        local_8 = plVar1;
      }
      std::bad_alloc::bad_alloc_Constructor_or_Destructor((uint)local_8);
      iVar7 = (int)param_3 - *(int *)((int)this + 0xc);
      FUN_605084c0(extraout_ECX_00,param_1);
      iVar4 = (int)param_3 - (int)*(void **)((int)this + 0xc) >> 2;
      if (iVar4 != 0) {
        rVar3 = iVar4 * 4;
        memmove_s(_Dst,rVar3,*(void **)((int)this + 0xc),rVar3);
      }
      iVar4 = *(int *)((int)this + 0x10) - (int)param_3 >> 2;
      if (iVar4 != 0) {
        rVar3 = iVar4 * 4;
        memmove_s((void *)((int)_Dst + ((iVar7 >> 2) + in_EAX) * 4),rVar3,param_3,rVar3);
      }
      pvVar2 = *(void **)((int)this + 0xc);
      iVar4 = *(int *)((int)this + 0x10);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(void **)((int)this + 0x14) = (void *)((int)_Dst + (int)local_8 * 4);
      *(void **)((int)this + 0x10) = (void *)((int)_Dst + (in_EAX + (iVar4 - (int)pvVar2 >> 2)) * 4)
      ;
      *(void **)((int)this + 0xc) = _Dst;
      return;
    }
    if ((uint)((int)pvVar2 - (int)param_3 >> 2) < in_EAX) {
      param_1 = (undefined4 *)*param_1;
      FUN_605086f0(param_1,param_3 + in_EAX);
      FUN_605084c0(extraout_ECX_01,&param_1);
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + in_EAX * 4;
      puVar6 = (undefined4 *)(*(int *)((int)this + 0x10) + in_EAX * -4);
      if (param_3 != puVar6) {
        do {
          *param_3 = param_1;
          param_3 = param_3 + 1;
        } while (param_3 != puVar6);
        return;
      }
    }
    else {
      param_1 = (undefined4 *)*param_1;
      pvVar5 = FUN_605086f0(this_00,pvVar2);
      *(void **)((int)this + 0x10) = pvVar5;
      iVar4 = (int)((int)pvVar2 + (in_EAX * -4 - (int)param_3)) >> 2;
      if (0 < iVar4) {
        memmove_s((void *)((int)pvVar2 + iVar4 * -4),iVar4 * 4,param_3,iVar4 * 4);
      }
      puVar6 = param_3 + in_EAX;
      for (; param_3 != puVar6; param_3 = param_3 + 1) {
        *param_3 = param_1;
      }
    }
  }
  return;
}



/* ---- FUN_605086f0 @ 605086f0 size=37 ---- */

void * __fastcall FUN_605086f0(undefined4 param_1,void *param_2)

{
  rsize_t _DstSize;
  int in_EAX;
  int iVar1;
  void *unaff_EDI;
  
  iVar1 = in_EAX - (int)unaff_EDI >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    memmove_s(param_2,_DstSize,unaff_EDI,_DstSize);
  }
  return (void *)(_DstSize + (int)param_2);
}



/* ---- FUN_60508720 @ 60508720 size=348 ---- */

/* WARNING: Removing unreachable block (ram,0x605087f5) */

undefined4 __cdecl FUN_60508720(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int unaff_retaddr;
  undefined4 uStack_34;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60517998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  local_4 = 0;
  cVar1 = (*(code *)PTR_CHgAImage__Create_60519324)
                    (".\\images\\defaultMAvtr.him",DAT_6052101c ^ (int)register0x00000010 - 0x3cU);
  if (cVar1 == '\0') {
    (*(code *)PTR_ReNameAvatarFile_605210f4)
              ("HGAVTR:: ERROR:: file, [.\\images\\default{M,W}Avtr.him] not found!!\n");
    operator_delete__(&CHgAImage::_vftable_);
    ExceptionList = pvStack_10;
    return 0;
  }
  uVar2 = 0x66;
  if (unaff_retaddr == 2) {
    uVar2 = 0x40;
  }
  (**(code **)(*(int *)*unaff_ESI + 0x14))();
  cVar1 = (**(code **)(*(int *)*unaff_ESI + 0x10))(0x2d,uVar2);
  if (cVar1 == '\0') {
    CHgAImage::~CHgAImage((CHgAImage *)((int)register0x00000010 + -0x3c));
    ExceptionList = (void *)0x0;
    return 0;
  }
  FUN_60502ee0(*(void **)(*unaff_ESI + 0xc),*(int *)(*unaff_ESI + 8));
  CHgAImage::DrawUnSafe
            ((CHgAImage *)*unaff_ESI,0,0,(CHgAImage *)((int)register0x00000010 + -0x3c),0,0,
             uStack_34,0x6051931c,0xff);
  CHgAImage::~CHgAImage((CHgAImage *)((int)register0x00000010 + -0x3c));
  ExceptionList = (void *)0x0;
  return 1;
}



/* ---- FUN_60508880 @ 60508880 size=568 ---- */

void __cdecl FUN_60508880(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6)

{
  HDC hdc;
  int iVar1;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  int unaff_ESI;
  int unaff_EDI;
  
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iVar1 = GetMapMode(param_1);
    SetMapMode(hdc,iVar1);
    h = CreateBitmap(unaff_EDI,unaff_ESI,1,1,(void *)0x0);
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      SetBkColor(param_6,0xff0000);
      StretchBlt(hdc,0,0,unaff_EDI,unaff_ESI,param_6,0,0,unaff_EDI,unaff_ESI,0xcc0020);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar1 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar1);
        h_01 = CreateCompatibleBitmap(param_1,unaff_EDI,unaff_ESI);
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          StretchBlt(hdc_00,0,0,unaff_EDI,unaff_ESI,param_6,0,0,unaff_EDI,unaff_ESI,0xcc0020);
          StretchBlt(hdc_00,0,0,unaff_EDI,unaff_ESI,hdc,0,0,unaff_EDI,unaff_ESI,0x220326);
          hdc_01 = CreateCompatibleDC(param_1);
          if (hdc_01 != (HDC)0x0) {
            iVar1 = GetMapMode(param_1);
            SetMapMode(hdc_01,iVar1);
            h_03 = CreateCompatibleBitmap(param_1,unaff_EDI,unaff_ESI);
            if (h_03 != (HBITMAP)0x0) {
              h_04 = SelectObject(hdc_01,h_03);
              StretchBlt(hdc_01,0,0,unaff_EDI,unaff_ESI,param_1,param_2,param_3,param_4,param_5,
                         0xcc0020);
              StretchBlt(hdc_01,0,0,unaff_EDI,unaff_ESI,hdc,0,0,unaff_EDI,unaff_ESI,0x8800c6);
              StretchBlt(hdc_01,0,0,unaff_EDI,unaff_ESI,hdc_00,0,0,unaff_EDI,unaff_ESI,0xee0086);
              StretchBlt(param_1,param_2,param_3,param_4,param_5,hdc_01,0,0,unaff_EDI,unaff_ESI,
                         0xcc0020);
              SelectObject(hdc_01,h_04);
              DeleteObject(h_03);
            }
            DeleteDC(hdc_01);
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return;
}



/* ---- initAnonymousBitmap @ 60508ac0 size=287 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl initAnonymousBitmap(void) */

int __cdecl initAnonymousBitmap(void)

{
                    /* 0x8ac0  255  ?initAnonymousBitmap@@YAHXZ */
  if (DAT_605218f8 != 0) {
    return 1;
  }
  DAT_605217bc = operator_new(0x20);
  if (DAT_605217bc == (undefined4 *)0x0) {
    DAT_605217bc = (undefined4 *)0x0;
  }
  else {
                    /* inlined constructor: CHgAImage::CHgAImage */
    *DAT_605217bc = &CHgAImage::_vftable_;
    DAT_605217bc[1] = 0;
    DAT_605217bc[7] = 0;
    DAT_605217bc[2] = 0;
    DAT_605217bc[3] = 0;
    DAT_605217bc[6] = 0;
    *(undefined1 *)(DAT_605217bc + 4) = 1;
    DAT_605217bc[5] = 0xffffffff;
  }
  FUN_60508720(2);
  DAT_605217c0 = operator_new(0x20);
  if (DAT_605217c0 == (undefined4 *)0x0) {
    DAT_605217c0 = (undefined4 *)0x0;
  }
  else {
    *DAT_605217c0 = &CHgAImage::_vftable_;
    DAT_605217c0[1] = 0;
    DAT_605217c0[7] = 0;
    DAT_605217c0[2] = 0;
    DAT_605217c0[3] = 0;
    DAT_605217c0[6] = 0;
    *(undefined1 *)(DAT_605217c0 + 4) = 1;
    DAT_605217c0[5] = 0xffffffff;
  }
  FUN_60508720(3);
  DAT_605217b4 = 0;
  DAT_605217b8 = 0;
  memset(&DAT_60521788,0,0x2c);
  _DAT_60521788 = 0x28;
  _DAT_60521794 = 1;
  _DAT_60521796 = 0x10;
  _DAT_60521798 = 0;
  _DAT_605217a0 = 0;
  _DAT_605217a8 = 0;
  _DAT_605217ac = 0;
  _DAT_6052178c = 0;
  _DAT_60521790 = 0;
  _DAT_6052179c = 0;
  DAT_605218f8 = 1;
  return 1;
}



/* ---- DrawSelectedAnonymousAvatar @ 60508be0 size=367 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl DrawSelectedAnonymousAvatar(struct HDC__ *,int,int,unsigned long,int) */

int __cdecl
DrawSelectedAnonymousAvatar(HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  HBRUSH hbr;
  int iVar1;
  int local_28;
  int local_24;
  RECT local_18;
  
                    /* 0x8be0  127  ?DrawSelectedAnonymousAvatar@@YAHPAUHDC__@@HHKH@Z */
  initAnonymousBitmap();
  local_24 = 0x2d;
  local_28 = 0x66;
  iVar1 = DAT_605217bc;
  if (param_5 == 0) {
    local_24 = 0x16;
    local_28 = 0x20;
  }
  else {
    if (param_5 == 1) {
      local_24 = 0x16;
      local_28 = 0x33;
    }
    else {
      if (param_5 == 2) {
        local_28 = 0x40;
        goto LAB_60508c5b;
      }
      if (param_5 != 3) {
        return 1;
      }
    }
    iVar1 = DAT_605217c0;
  }
LAB_60508c5b:
  if (iVar1 != 0) {
    _DAT_6052178c = *(undefined4 *)(iVar1 + 8);
    _DAT_60521790 = -*(int *)(iVar1 + 0xc);
    hdc = CreateCompatibleDC(param_1);
    if (hdc != (HDC)0x0) {
      h = CreateCompatibleBitmap(param_1,local_24,local_28);
      if (h != (HBITMAP)0x0) {
        h_00 = SelectObject(hdc,h);
        hbr = CreateSolidBrush(param_4);
        if (hbr != (HBRUSH)0x0) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = local_24;
          local_18.bottom = local_28;
          FillRect(hdc,&local_18,hbr);
          StretchDIBits(param_1,0,0,local_24,local_28,0,0,*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc),
                        *(void **)(iVar1 + 0x1c),(BITMAPINFO *)&DAT_60521788,0,0xcc0020);
          DeleteObject(hbr);
        }
        SelectObject(hdc,h_00);
        DeleteObject(h);
      }
      DeleteDC(hdc);
    }
  }
  return 1;
}



/* ---- DrawAnonymousAvatar @ 60508d50 size=365 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl DrawAnonymousAvatar(struct HDC__ *,int,int,int) */

int __cdecl DrawAnonymousAvatar(HDC__ *param_1,int param_2,int param_3,int param_4)

{
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  HBRUSH hbr;
  int cy;
  int cx;
  int local_28;
  RECT local_18;
  
                    /* 0x8d50  113  ?DrawAnonymousAvatar@@YAHPAUHDC__@@HHH@Z */
  initAnonymousBitmap();
  cx = 0x2d;
  cy = 0x66;
  if (param_4 == 0) {
    cx = 0x16;
    cy = 0x20;
    local_28 = DAT_605217bc;
  }
  else if (param_4 == 1) {
    local_28 = DAT_605217c0;
    cx = 0x16;
    cy = 0x33;
  }
  else if (param_4 == 2) {
    local_28 = DAT_605217bc;
    cy = 0x40;
  }
  else {
    if (param_4 != 3) {
      return 1;
    }
    local_28 = DAT_605217c0;
  }
  if (local_28 != 0) {
    _DAT_6052178c = *(undefined4 *)(local_28 + 8);
    _DAT_60521790 = -*(int *)(local_28 + 0xc);
    hdc = CreateCompatibleDC(param_1);
    if (hdc != (HDC)0x0) {
      h = CreateCompatibleBitmap(param_1,cx,cy);
      if (h != (HBITMAP)0x0) {
        h_00 = SelectObject(hdc,h);
        hbr = CreateSolidBrush(0xff0000);
        if (hbr != (HBRUSH)0x0) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = cx;
          local_18.bottom = cy;
          FillRect(hdc,&local_18,hbr);
          StretchDIBits(hdc,0,0,cx,cy,0,0,*(int *)(local_28 + 8),*(int *)(local_28 + 0xc),
                        *(void **)(local_28 + 0x1c),(BITMAPINFO *)&DAT_60521788,0,0xcc0020);
          FUN_60508880(param_1,param_2,param_3,cx,cy,hdc);
          DeleteObject(hbr);
        }
        SelectObject(hdc,h_00);
        DeleteObject(h);
      }
      DeleteDC(hdc);
    }
  }
  return 1;
}



/* ---- CAvtrPart @ 60508ec0 size=101 ---- */

/* public: __thiscall CAvtrPart::CAvtrPart(struct CAvtrPart const &) */

CAvtrPart * __thiscall CAvtrPart::CAvtrPart(CAvtrPart *this,CAvtrPart *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8ec0  7  ??0CAvtrPart@@QAE@ABU0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_605055e0(param_1,(int *)this);
  local_4 = 0;
  FUN_605055e0(param_1 + 0x18,(int *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 60508f30 size=41 ---- */

/* public: struct CAvtrPart & __thiscall CAvtrPart::operator=(struct CAvtrPart const &) */

CAvtrPart * __thiscall CAvtrPart::operator=(CAvtrPart *this,CAvtrPart *param_1)

{
                    /* 0x8f30  41  ??4CAvtrPart@@QAEAAU0@ABU0@@Z */
  FUN_6050c7b0((int)param_1);
  FUN_605054e0((int)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}



/* ---- IsDefault @ 60508f60 size=4 ---- */

/* public: bool __thiscall CAvtrId::IsDefault(void) */

bool __thiscall CAvtrId::IsDefault(CAvtrId *this)

{
                    /* 0x8f60  177  ?IsDefault@CAvtrId@@QAE_NXZ */
  return (bool)(this->CAvtrId_data).offset_0x1;
}



/* ---- IsComAvtr @ 60508f70 size=4 ---- */

/* public: bool __thiscall CAvtrId::IsComAvtr(void) */

bool __thiscall CAvtrId::IsComAvtr(CAvtrId *this)

{
                    /* 0x8f70  176  ?IsComAvtr@CAvtrId@@QAE_NXZ */
  return (bool)(this->CAvtrId_data).offset_0x0;
}



/* ---- SetComAvatar @ 60508f80 size=10 ---- */

/* public: void __thiscall CAvtrId::SetComAvatar(bool) */

void __thiscall CAvtrId::SetComAvatar(CAvtrId *this,bool param_1)

{
                    /* 0x8f80  204  ?SetComAvatar@CAvtrId@@QAEX_N@Z */
  (this->CAvtrId_data).offset_0x0 = param_1;
  return;
}



/* ---- SetDefAvatar @ 60508f90 size=10 ---- */

/* public: void __thiscall CAvtrId::SetDefAvatar(bool) */

void __thiscall CAvtrId::SetDefAvatar(CAvtrId *this,bool param_1)

{
                    /* 0x8f90  205  ?SetDefAvatar@CAvtrId@@QAEX_N@Z */
  (this->CAvtrId_data).offset_0x1 = param_1;
  return;
}



/* ---- IdVec @ 60508fa0 size=4 ---- */

/* public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > > & __thiscall CAvtrId::IdVec(void) */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __thiscall CAvtrId::IdVec(CAvtrId *this)

{
                    /* 0x8fa0  169
                       ?IdVec@CAvtrId@@QAEAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
                        */
  return (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
          *)&(this->CAvtrId_data).offset_0x48;
}



/* ---- CAvtrId @ 60508fb0 size=154 ---- */

/* public: __thiscall CAvtrId::CAvtrId(class CAvtrId const &) */

CAvtrId * __thiscall CAvtrId::CAvtrId(CAvtrId *this,CAvtrId *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8fb0  3  ??0CAvtrId@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CAvtrId_data).offset_0x0 = param_1[4];
  (this->CAvtrId_data).offset_0x1 = param_1[5];
  (this->CAvtrId_data).offset_0x4 = *(int *)(param_1 + 8);
  (this->CAvtrId_data).offset_0x8 = *(uint *)(param_1 + 0xc);
  (this->CAvtrId_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x10,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x14));
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x2c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x30));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_6050c8b0(param_1 + 0x4c,&(this->CAvtrId_data).offset_0x48);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 60509050 size=87 ---- */

/* public: class CAvtrId & __thiscall CAvtrId::operator=(class CAvtrId const &) */

CAvtrId * __thiscall CAvtrId::operator=(CAvtrId *this,CAvtrId *param_1)

{
                    /* 0x9050  39  ??4CAvtrId@@QAEAAV0@ABV0@@Z */
  (this->CAvtrId_data).offset_0x0 = param_1[4];
  (this->CAvtrId_data).offset_0x1 = param_1[5];
  (this->CAvtrId_data).offset_0x4 = *(int *)(param_1 + 8);
  (this->CAvtrId_data).offset_0x8 = *(uint *)(param_1 + 0xc);
  (this->CAvtrId_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x10,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x14));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x2c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x30));
  FUN_6050ca20((int)&(this->CAvtrId_data).offset_0x48);
  return (CAvtrId *)this;
}



/* ---- scalar_deleting_destructor @ 605090b0 size=82 ---- */

CAvtrId * __thiscall CAvtrId::scalar_deleting_destructor(CAvtrId *this,byte param_1)

{
  uint *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CAvtrId(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CAvtrId *)this;
  }
  puVar1 = &this[-1].CAvtrId_data.offset_0x58;
  _eh_vector_destructor_iterator_(this,100,this[-1].CAvtrId_data.offset_0x58,~CAvtrId);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CAvtrId *)puVar1;
}



/* ---- GetPrePath @ 60509110 size=16 ---- */

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __thiscall CAvtrPartPool::GetPrePath(bool) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
CAvtrPartPool::GetPrePath(CAvtrPartPool *this,bool param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
                    /* 0x9110  156
                       ?GetPrePath@CAvtrPartPool@@QAEAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
                        */
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           &(this->CAvtrPartPool_data).field_0x38;
  if (!param_1) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x1c;
  }
  return pbVar1;
}



/* ---- SetPrePath @ 60509120 size=108 ---- */

/* public: void __thiscall CAvtrPartPool::SetPrePath(char const *) */

void __thiscall CAvtrPartPool::SetPrePath(CAvtrPartPool *this,char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9120  211  ?SetPrePath@CAvtrPartPool@@QAEXPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60516fd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28,param_1);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x1c,pbVar1);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28);
  ExceptionList = local_c;
  return;
}



/* ---- operator= @ 60509190 size=5 ---- */

/* public: struct tMapDeclare<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct CAvtrPart *> & __thiscall tMapDeclare<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   CAvtrPart *>::operator=(struct tMapDeclare<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,struct CAvtrPart *> const &) */

tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>
* __thiscall
tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>::
operator=(tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
          *this,tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>
                *param_1)

{
                    /* 0x9190  37
                       ??4?$tMapDeclare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCAvtrPart@@@@QAEAAU0@ABU0@@Z
                        */
  return (tMapDeclare<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,struct_CAvtrPart*>
          *)this;
}



/* ---- CAvtrPartPool @ 605091a0 size=105 ---- */

/* public: __thiscall CAvtrPartPool::CAvtrPartPool(void) */

CAvtrPartPool * __thiscall CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x91a0  10  ??0CAvtrPartPool@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517939;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  FUN_6050cdb0((int *)&this->
                       tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
              );
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x38);
  ExceptionList = local_c;
  return this;
}



/* ---- CAvtrPartPool @ 60509210 size=164 ---- */

/* public: __thiscall CAvtrPartPool::CAvtrPartPool(class CAvtrPartPool const &) */

CAvtrPartPool * __thiscall CAvtrPartPool::CAvtrPartPool(CAvtrPartPool *this,CAvtrPartPool *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9210  9  ??0CAvtrPartPool@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605178f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  FUN_6050cba0((int *)&this->
                       tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
              );
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x1c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x24));
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x38,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x40));
  (this->CAvtrPartPool_data).offset_0x54 = *(undefined4 *)(param_1 + 0x5c);
  (this->CAvtrPartPool_data).offset_0x58 = *(undefined4 *)(param_1 + 0x60);
  (this->CAvtrPartPool_data).offset_0x5c = *(undefined4 *)(param_1 + 100);
  (this->CAvtrPartPool_data).offset_0x60 = *(undefined4 *)(param_1 + 0x68);
  (this->CAvtrPartPool_data).offset_0x64 = *(undefined4 *)(param_1 + 0x6c);
  (this->CAvtrPartPool_data).offset_0x68 = *(undefined4 *)(param_1 + 0x70);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 605092c0 size=144 ---- */

/* public: class CAvtrPartPool & __thiscall CAvtrPartPool::operator=(class CAvtrPartPool const &) */

CAvtrPartPool * __thiscall CAvtrPartPool::operator=(CAvtrPartPool *this,CAvtrPartPool *param_1)

{
  int *piVar1;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tVar2
  ;
  int local_10 [3];
  
                    /* 0x92c0  42  ??4CAvtrPartPool@@QAEAAV0@ABV0@@Z */
  if (&this->
       tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
      != (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
          *)(param_1 + 4)) {
    piVar1 = (this->CAvtrPartPool_data).offset_0x14;
    tVar2 = this->
            tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
    ;
    FUN_6050ce30(local_10,(int)tVar2,(int *)*piVar1,(int)tVar2,piVar1);
    FUN_6050cf10();
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x1c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x24));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x38,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x40));
  (this->CAvtrPartPool_data).offset_0x54 = *(undefined4 *)(param_1 + 0x5c);
  (this->CAvtrPartPool_data).offset_0x58 = *(undefined4 *)(param_1 + 0x60);
  (this->CAvtrPartPool_data).offset_0x5c = *(undefined4 *)(param_1 + 100);
  (this->CAvtrPartPool_data).offset_0x60 = *(undefined4 *)(param_1 + 0x68);
  (this->CAvtrPartPool_data).offset_0x64 = *(undefined4 *)(param_1 + 0x6c);
  (this->CAvtrPartPool_data).offset_0x68 = *(undefined4 *)(param_1 + 0x70);
  return (CAvtrPartPool *)this;
}



/* ---- scalar_deleting_destructor @ 60509350 size=82 ---- */

CAvtrPartPool * __thiscall
CAvtrPartPool::scalar_deleting_destructor(CAvtrPartPool *this,byte param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 2) == 0) {
    ~CAvtrPartPool(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CAvtrPartPool *)this;
  }
  puVar1 = &this[-1].CAvtrPartPool_data.offset_0x68;
  _eh_vector_destructor_iterator_(this,0x74,this[-1].CAvtrPartPool_data.offset_0x68,~CAvtrPartPool);
  if ((param_1 & 1) != 0) {
    operator_delete__(puVar1);
  }
  return (CAvtrPartPool *)puVar1;
}



/* ---- FUN_605093b0 @ 605093b0 size=80 ---- */

void FUN_605093b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60517208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_6050cf80();
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- CAvtrTickHandler @ 60509400 size=98 ---- */

/* public: __thiscall CAvtrTickHandler::CAvtrTickHandler(void) */

CAvtrTickHandler * __thiscall CAvtrTickHandler::CAvtrTickHandler(CAvtrTickHandler *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9400  12  ??0CAvtrTickHandler@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605178c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_60508380((int *)this);
  local_4 = 0;
  FUN_60508380((int *)(this + 0x18));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_60508380((int *)(this + 0x30));
  ExceptionList = local_c;
  return this;
}



/* ---- CAvtrTickHandler @ 60509470 size=112 ---- */

/* public: __thiscall CAvtrTickHandler::CAvtrTickHandler(class CAvtrTickHandler const &) */

CAvtrTickHandler * __thiscall
CAvtrTickHandler::CAvtrTickHandler(CAvtrTickHandler *this,CAvtrTickHandler *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9470  11  ??0CAvtrTickHandler@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605178c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_605055e0(param_1,(int *)this);
  local_4 = 0;
  FUN_605055e0(param_1 + 0x18,(int *)(this + 0x18));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_605055e0(param_1 + 0x30,(int *)(this + 0x30));
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 605094e0 size=47 ---- */

/* public: class CAvtrTickHandler & __thiscall CAvtrTickHandler::operator=(class CAvtrTickHandler
   const &) */

CAvtrTickHandler * __thiscall
CAvtrTickHandler::operator=(CAvtrTickHandler *this,CAvtrTickHandler *param_1)

{
                    /* 0x94e0  43  ??4CAvtrTickHandler@@QAEAAV0@ABV0@@Z */
  FUN_605054e0((int)param_1);
  FUN_605054e0((int)(param_1 + 0x18));
  FUN_605054e0((int)(param_1 + 0x30));
  return this;
}



/* ---- Height @ 60509510 size=4 ---- */

/* public: unsigned long __thiscall CAvtr2004::Height(void) */

ulong __thiscall CAvtr2004::Height(CAvtr2004 *this)

{
                    /* 0x9510  168  ?Height@CAvtr2004@@QAEKXZ */
  return *(ulong *)(this + 0x70);
}



/* ---- IsAnimatedGIF @ 60509520 size=4 ---- */

/* public: int __thiscall cHgAnigifList::IsAnimatedGIF(void) */

int __thiscall cHgAnigifList::IsAnimatedGIF(cHgAnigifList *this)

{
                    /* 0x9520  175  ?IsAnimatedGIF@cHgAnigifList@@QAEHXZ
                       0x9520  229  ?Width@CAvtr2004@@QAEKXZ */
  return *(int *)(this + 0x6c);
}



/* ---- IsReady @ 60509530 size=6 ---- */

/* public: int __thiscall CAvtr2004::IsReady(void) */

int __thiscall CAvtr2004::IsReady(CAvtr2004 *this)

{
                    /* 0x9530  181  ?IsReady@CAvtr2004@@QAEHXZ */
  return 1;
}



/* ---- AvatarId @ 60509540 size=3 ---- */

/* public: class CAvtrId & __thiscall CAvtr2004::AvatarId(void) */

CAvtrId * __thiscall CAvtr2004::AvatarId(CAvtr2004 *this)

{
                    /* 0x9540  59  ?AvatarId@CAvtr2004@@QAEAAVCAvtrId@@XZ */
  return (CAvtrId *)this;
}



/* ---- CAvtr2004 @ 60509550 size=248 ---- */

/* public: __thiscall CAvtr2004::CAvtr2004(class CAvtr2004 const &) */

CAvtr2004 * __thiscall CAvtr2004::CAvtr2004(CAvtr2004 *this,CAvtr2004 *param_1)

{
  int iVar1;
  CAvtr2004 *pCVar2;
  CAvtr2004 *pCVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9550  1  ??0CAvtr2004@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CAvtrId::CAvtrId((CAvtrId *)this,(CAvtrId *)param_1);
  local_4 = 0;
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  pCVar2 = param_1 + 0x80;
  pCVar3 = this + 0x80;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  CAvtrTickHandler::CAvtrTickHandler
            ((CAvtrTickHandler *)(this + 0xac),(CAvtrTickHandler *)(param_1 + 0xac));
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  this[0x104] = param_1[0x104];
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  ExceptionList = local_c;
  return this;
}



/* ---- operator= @ 60509650 size=214 ---- */

/* public: class CAvtr2004 & __thiscall CAvtr2004::operator=(class CAvtr2004 const &) */

CAvtr2004 * __thiscall CAvtr2004::operator=(CAvtr2004 *this,CAvtr2004 *param_1)

{
  int iVar1;
  CAvtr2004 *pCVar2;
  CAvtr2004 *pCVar3;
  
                    /* 0x9650  38  ??4CAvtr2004@@QAEAAV0@ABV0@@Z */
  CAvtrId::operator=((CAvtrId *)this,(CAvtrId *)param_1);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  pCVar2 = param_1 + 0x80;
  pCVar3 = this + 0x80;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  FUN_605054e0((int)(param_1 + 0xac));
  FUN_605054e0((int)(param_1 + 0xc4));
  FUN_605054e0((int)(param_1 + 0xdc));
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  this[0x104] = param_1[0x104];
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  return this;
}



/* ---- SetDrawingRect @ 60509730 size=21 ---- */

/* public: void __thiscall CAvtr2004::SetDrawingRect(struct tagRECT &) */

void __thiscall CAvtr2004::SetDrawingRect(CAvtr2004 *this,tagRECT *param_1)

{
                    /* 0x9730  207  ?SetDrawingRect@CAvtr2004@@QAEXAAUtagRECT@@@Z */
  CopyRect((LPRECT)(this + 0xf4),param_1);
  return;
}



/* ---- HasDrawingRect @ 60509750 size=47 ---- */

/* protected: bool __thiscall CAvtr2004::HasDrawingRect(void) */

bool __thiscall CAvtr2004::HasDrawingRect(CAvtr2004 *this)

{
  BOOL BVar1;
  RECT local_14;
  
                    /* 0x9750  166  ?HasDrawingRect@CAvtr2004@@IAE_NXZ */
  local_14.left = -1;
  local_14.top = -1;
  local_14.right = -1;
  local_14.bottom = -1;
  BVar1 = EqualRect((RECT *)(this + 0xf4),&local_14);
  return BVar1 == 0;
}



/* ---- GetAvatarBits @ 60509780 size=4 ---- */

/* public: unsigned char * __thiscall CHgAvtr::GetAvatarBits(void) */

uchar * __thiscall CHgAvtr::GetAvatarBits(CHgAvtr *this)

{
                    /* 0x9780  140  ?GetAvatarBits@CHgAvtr@@QAEPAEXZ */
  return (uchar *)(this->CHgAvtr_data).offset_0x1c;
}



/* ---- HasAvatarBitmap @ 60509790 size=21 ---- */

/* public: int __thiscall CHgAvtr::HasAvatarBitmap(void) */

int __thiscall CHgAvtr::HasAvatarBitmap(CHgAvtr *this)

{
                    /* 0x9790  165  ?HasAvatarBitmap@CHgAvtr@@QAEHXZ */
  if (((this->CHgAvtr_data).offset_0x24 == 0) || ((this->CHgAvtr_data).offset_0x28 == 0)) {
    return 0;
  }
  return 1;
}



/* ---- CHgAImage @ 605097b0 size=151 ---- */

/* public: __thiscall CHgAvtr::CHgAvtr(class CHgAvtr const &) */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this,CHgAvtr *param_1)

{
  int iVar1;
  CHgAvtr *pCVar2;
  undefined4 *puVar3;
  
                    /* 0x97b0  19  ??0CHgAvtr@@QAE@ABV0@@Z */
                    /* inlined constructor: CHgAvtr::CHgAvtr */
  this->vftablePtr = (CHgAImage_vftable *)&CHgAvtr::_vftable_;
  (this->CHgAImage_data).offset_0x0 = (int)&_vftable_;
  (this->CHgAImage_data).offset_0x4 = *(int *)(param_1 + 8);
  (this->CHgAImage_data).offset_0x8 = *(int *)(param_1 + 0xc);
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = *(undefined4 *)(param_1 + 0x10);
  *(CHgAvtr *)&(this->CHgAImage_data).offset_0x10 = param_1[0x14];
  (this->CHgAImage_data).offset_0x14 = *(int *)(param_1 + 0x18);
  (this->CHgAImage_data).offset_0x18 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)&(this->CHgAImage_data).field_0x1c = *(undefined4 *)(param_1 + 0x20);
  pCVar2 = param_1 + 0x24;
  puVar3 = (undefined4 *)&(this->CHgAImage_data).field_0x20;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)&(this->CHgAImage_data).field_0x4c = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)&(this->CHgAImage_data).field_0x50 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)&(this->CHgAImage_data).field_0x54 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)&(this->CHgAImage_data).field_0x58 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&(this->CHgAImage_data).field_0x5c = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)&(this->CHgAImage_data).field_0x60 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)&(this->CHgAImage_data).field_0x64 = *(undefined4 *)(param_1 + 0x68);
  pCVar2 = param_1 + 0x6c;
  puVar3 = (undefined4 *)&(this->CHgAImage_data).field_0x68;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pCVar2;
  *(CHgAvtr *)((int)puVar3 + 2) = pCVar2[2];
  *(undefined4 *)&(this->CHgAImage_data).field_0x84 = *(undefined4 *)(param_1 + 0x88);
  return;
}



/* ---- scalar_deleting_destructor @ 60509850 size=85 ---- */

CHgAvtr * __thiscall CHgAvtr::scalar_deleting_destructor(CHgAvtr *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    ~CHgAvtr(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return (CHgAvtr *)this;
  }
  piVar1 = &this[-1].CHgAvtr_data.offset_0x84;
  _eh_vector_destructor_iterator_(this,0x8c,this[-1].CHgAvtr_data.offset_0x84,~CHgAvtr);
  if ((param_1 & 1) != 0) {
    operator_delete__(piVar1);
  }
  return (CHgAvtr *)piVar1;
}



/* ---- operator= @ 605098b0 size=37 ---- */

/* public: class CHgAvatar & __thiscall CHgAvatar::operator=(class CHgAvatar const &) */

CHgAvatar * __thiscall CHgAvatar::operator=(CHgAvatar *this,CHgAvatar *param_1)

{
                    /* 0x98b0  44  ??4CHgAvatar@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}



/* ---- FUN_605098e0 @ 605098e0 size=388 ---- */

void __fastcall
FUN_605098e0(undefined4 param_1,int param_2,int param_3,LPCSTR param_4,LPCSTR param_5)

{
  int iVar1;
  char cVar2;
  UINT UVar3;
  UINT UVar4;
  int *piVar5;
  int iVar6;
  void *pvStack_12c;
  LPCSTR local_128;
  int *local_124;
  undefined4 local_120;
  int local_11c;
  CHAR aCStack_118 [12];
  CHAR local_10c [264];
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)&pvStack_12c;
  local_128 = param_5;
  local_120 = param_1;
  if (0 < param_3) {
    local_124 = (int *)(&DAT_6052a198 + param_2 * 0x618);
    iVar6 = 0;
    do {
      piVar5 = local_124;
      UVar3 = GetPrivateProfileIntA(param_4,"N",0,local_128);
      local_11c = iVar6 + 1;
      wsprintfA(local_10c,"%s\\Avatar\\%s%d.avt",local_120,param_4,local_11c);
      strcpy_s((char *)(piVar5 + 8),0x104,local_10c);
      cVar2 = (**(code **)(*piVar5 + 4))(local_10c,0xff0000);
      if (cVar2 == '\0') break;
      piVar5[6] = UVar3;
      UVar3 = GetPrivateProfileIntA(param_4,"S",0,local_128);
      if (0 < (int)UVar3) {
        pvStack_12c = (void *)FUN_605162b0(-(uint)((int)((ulonglong)UVar3 * 4 >> 0x20) != 0) |
                                           (uint)((ulonglong)UVar3 * 4));
        iVar6 = 0;
        if (0 < (int)UVar3) {
          do {
            iVar1 = iVar6 + 1;
            wsprintfA(aCStack_118,"S%d",iVar1);
            UVar4 = GetPrivateProfileIntA(param_4,aCStack_118,0,local_128);
            *(UINT *)((int)pvStack_12c + iVar6 * 4) = UVar4;
            iVar6 = iVar1;
          } while (iVar1 < (int)UVar3);
          piVar5 = local_124;
        }
        FUN_6050df80(pvStack_12c,(int)(piVar5 + -2));
        operator_delete__(pvStack_12c);
      }
      local_124 = piVar5 + 0x4e;
      iVar6 = local_11c;
    } while (local_11c < param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&pvStack_12c);
  return;
}



/* ---- FUN_60509a70 @ 60509a70 size=328 ---- */

void __fastcall FUN_60509a70(LPCSTR param_1,int param_2,LPCSTR param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  UINT UVar3;
  UINT UVar4;
  int iVar5;
  void *local_124;
  int local_120;
  LPCSTR local_11c;
  CHAR aCStack_118 [12];
  CHAR local_10c [264];
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)&local_124;
  local_11c = param_3;
  local_120 = param_2;
  if (param_1 != (LPCSTR)0x0) {
    local_124 = (void *)GetPrivateProfileIntA(param_1,"N",0,param_3);
    wsprintfA(local_10c,"%s\\Avatar\\%s.avt",param_4,param_1);
    strcpy_s((char *)(param_2 + 0x28),0x104,local_10c);
    cVar2 = (**(code **)(*(int *)(param_2 + 8) + 4))(local_10c,0xff0000);
    if (cVar2 != '\0') {
      *(void **)(param_2 + 0x20) = local_124;
      UVar3 = GetPrivateProfileIntA(param_1,"S",0,param_3);
      if (0 < (int)UVar3) {
        local_124 = (void *)FUN_605162b0(-(uint)((int)((ulonglong)UVar3 * 4 >> 0x20) != 0) |
                                         (uint)((ulonglong)UVar3 * 4));
        iVar5 = 0;
        if (0 < (int)UVar3) {
          do {
            iVar1 = iVar5 + 1;
            wsprintfA(aCStack_118,"S%d",iVar1);
            UVar4 = GetPrivateProfileIntA(param_1,aCStack_118,0,local_11c);
            *(UINT *)((int)local_124 + iVar5 * 4) = UVar4;
            iVar5 = iVar1;
          } while (iVar1 < (int)UVar3);
          param_2 = local_120;
        }
        FUN_6050df80(local_124,param_2);
        operator_delete__(local_124);
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_124);
  return;
}



/* ---- MeInitAvatar @ 60509bc0 size=1706 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MeInitAvatar(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  UINT UVar4;
  UINT UVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  char **ppcVar9;
  int local_4e8;
  UINT local_4e4;
  UINT local_4e0;
  char *local_4dc [4];
  undefined *local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  char *local_4c0;
  undefined *local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  char *local_4b0;
  undefined *local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  char *local_4a0;
  undefined *local_49c;
  char *local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined *local_48c;
  char *local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined *local_47c;
  char *local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined *local_46c;
  char *local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined *local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined *local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined *local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined *local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined *local_41c;
  undefined *local_418;
  undefined *local_414;
  undefined4 local_410;
  undefined *local_40c;
  undefined *local_408;
  undefined *local_404;
  undefined4 local_400;
  undefined *local_3fc;
  undefined *local_3f8;
  undefined *local_3f4;
  undefined4 local_3f0;
  undefined *local_3ec;
  undefined *local_3e8;
  undefined *local_3e4;
  undefined4 local_3e0;
  undefined *local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined *local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined *local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined *local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined *local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined *local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined *local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined *local_360;
  undefined *local_35c;
  undefined *local_358;
  undefined *local_354;
  undefined *local_350;
  undefined *local_34c;
  undefined *local_348;
  undefined *local_344;
  undefined *local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined *local_324;
  undefined4 local_320;
  CHAR local_31c [264];
  char local_214 [264];
  CHAR local_10c [264];
  uint local_4;
  
                    /* 0x9bc0  262  MeInitAvatar */
  local_4 = DAT_6052101c ^ (uint)&local_4e8;
  if (DAT_60521900 == 0) {
    DAT_60521900 = 1;
    local_4dc[0] = "MRH";
    local_4dc[1] = (char *)0x0;
    local_4dc[2] = (char *)0x0;
    local_4dc[3] = "MRHSA";
    local_4cc = &DAT_60519610;
    local_4c8 = 0;
    local_4c4 = 0;
    local_4c0 = "FRHSA";
    local_4bc = &DAT_6051961c;
    local_4b8 = 0;
    local_4b4 = 0;
    local_4b0 = "MFHSA";
    local_4ac = &DAT_60519628;
    local_4a8 = 0;
    local_4a4 = 0;
    local_4a0 = "FFHSA";
    local_49c = &DAT_60519634;
    local_498 = "MRHAT";
    local_494 = 0;
    local_490 = 0;
    local_48c = &DAT_60519644;
    local_488 = "FRHAT";
    local_484 = 0;
    local_480 = 0;
    local_47c = &DAT_60519654;
    local_478 = "MFHAT";
    local_474 = 0;
    local_470 = 0;
    local_46c = &DAT_60519664;
    local_468 = "FFHAT";
    local_464 = 0;
    local_460 = 0;
    local_45c = &DAT_60519674;
    local_458 = 0;
    local_454 = 0;
    local_450 = 0;
    local_44c = &DAT_60519678;
    local_448 = 0;
    local_444 = 0;
    local_440 = 0;
    local_43c = &DAT_6051967c;
    local_438 = 0;
    local_434 = 0;
    local_430 = 0;
    local_42c = &DAT_60519680;
    local_428 = 0;
    local_424 = 0;
    local_420 = 0;
    local_41c = &DAT_60519684;
    local_418 = &DAT_6051968c;
    local_414 = &DAT_60519694;
    local_410 = 0;
    local_40c = &DAT_6051969c;
    local_408 = &DAT_605196a4;
    local_404 = &DAT_605196ac;
    local_400 = 0;
    local_3fc = &DAT_605196b4;
    local_3f8 = &DAT_605196bc;
    local_3f4 = &DAT_605196c4;
    local_3f0 = 0;
    local_3ec = &DAT_605196cc;
    local_3e8 = &DAT_605196d4;
    local_3e4 = &DAT_605196dc;
    local_3e0 = 0;
    local_3dc = &DAT_605196e4;
    local_3d8 = 0;
    local_3d4 = 0;
    local_3d0 = 0;
    local_3cc = &DAT_605196e8;
    local_3c8 = 0;
    local_3c4 = 0;
    local_3c0 = 0;
    local_3bc = &DAT_605196ec;
    local_3b8 = 0;
    local_3b4 = 0;
    local_3b0 = 0;
    local_3ac = &DAT_605196f0;
    local_3a8 = 0;
    local_3a4 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    local_394 = 0;
    local_390 = &DAT_605196f4;
    local_38c = 0;
    local_388 = 0;
    local_384 = 0;
    local_380 = &DAT_605196fc;
    local_37c = 0;
    local_378 = 0;
    local_374 = 0;
    local_370 = &DAT_60519704;
    local_36c = 0;
    local_368 = 0;
    local_364 = 0;
    local_360 = &DAT_6051970c;
    local_35c = &DAT_60519714;
    local_358 = &DAT_60519718;
    local_354 = &DAT_6051971c;
    local_350 = &DAT_60519720;
    local_34c = &DAT_60519724;
    local_348 = &DAT_60519728;
    local_344 = &DAT_6051972c;
    local_340 = &DAT_60519730;
    local_33c = 0;
    local_338 = 0;
    local_334 = &DAT_60519734;
    local_330 = 0;
    local_32c = 0;
    local_328 = 0;
    local_324 = &DAT_6051973c;
    local_320 = 0;
    DVar2 = GetCurrentDirectoryA(0x104,local_10c);
    if ((DVar2 != 0) && (iVar3 = GetHangameDirectory(local_214), iVar3 != 0)) {
      wsprintfA(local_31c,"%s\\Avatar\\Avatar3.ini",local_214);
      UVar4 = GetPrivateProfileIntA("MHCN","N",0,local_31c);
      local_4e4 = UVar4;
      UVar5 = GetPrivateProfileIntA("FHCN","N",0,local_31c);
      local_4e8 = 0;
      local_4e0 = UVar5;
      do {
        iVar3 = local_4e8;
        if (local_4e8 == 2) {
          iVar6 = FUN_605098e0(local_214,0,UVar4,"MRHC",local_31c);
          if (((iVar6 == 0) ||
              (iVar6 = FUN_605098e0(local_214,1,UVar5,"FRHC",local_31c), iVar6 == 0)) ||
             (iVar6 = FUN_60509a70("MRHAT",0x60522dc8,local_31c,local_214), iVar6 == 0))
          goto LAB_6050a257;
          puVar8 = &DAT_605232a8;
          pcVar7 = "FRHAT";
LAB_6050a151:
          iVar6 = FUN_60509a70(pcVar7,(int)puVar8,local_31c,local_214);
          if (iVar6 == 0) goto LAB_6050a257;
        }
        else {
          if (local_4e8 == 3) {
            iVar6 = FUN_605098e0(local_214,2,UVar4,"MFHC",local_31c);
            if (((iVar6 != 0) &&
                (iVar6 = FUN_605098e0(local_214,3,UVar5,"FFHC",local_31c), iVar6 != 0)) &&
               (iVar6 = FUN_60509a70("MFHAT",0x60523788,local_31c,local_214), iVar6 != 0)) {
              puVar8 = &DAT_60523c68;
              pcVar7 = "FFHAT";
              goto LAB_6050a151;
            }
            goto LAB_6050a257;
          }
          iVar3 = 0;
          ppcVar9 = local_4dc + local_4e8 * 8;
          puVar8 = &DAT_60521910 + local_4e8 * 0x9c0;
          do {
            iVar6 = FUN_60509a70(*ppcVar9,(int)puVar8,local_31c,local_214);
            if (iVar6 == 0) goto LAB_6050a257;
            iVar3 = iVar3 + 1;
            puVar8 = puVar8 + 0x138;
            ppcVar9 = ppcVar9 + 1;
          } while (iVar3 < 8);
          UVar5 = local_4e0;
          UVar4 = local_4e4;
          iVar3 = local_4e8;
        }
        local_4e8 = iVar3 + 1;
      } while (local_4e8 < 0xe);
      strcpy_s(&DAT_6052ba18,0x104,".\\Avatar\\moukyl1.avt");
      cVar1 = (**(code **)(DAT_6052b9f8 + 4))(".\\Avatar\\moukyl1.avt",0xff0000);
      if (cVar1 != '\0') {
        _DAT_6052ba10 = 1;
        strcpy_s(&DAT_60521130,0x104,".\\Avatar\\default.avt");
        cVar1 = (**(code **)(PTR__vftable__60521110 + 4))(".\\Avatar\\default.avt",0xff0000);
        if (cVar1 != '\0') {
          _DAT_60521128 = 2;
          DAT_605218fc = 1;
        }
      }
LAB_6050a257:
      __security_check_cookie(local_4 ^ (uint)&local_4e8);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_4e8);
  return;
}



/* ---- CHgAImage @ 6050a270 size=214 ---- */

/* public: __thiscall CHgAvtr::CHgAvtr(void) */

CHgAImage * __thiscall CHgAImage::CHgAImage(CHgAImage *this)

{
  undefined1 *_Dst;
  HDC hdc;
  int iVar1;
  
                    /* 0xa270  20  ??0CHgAvtr@@QAE@XZ */
                    /* inlined constructor: CHgAvtr::CHgAvtr */
  this->vftablePtr = (CHgAImage_vftable *)&CHgAvtr::_vftable_;
  (this->CHgAImage_data).offset_0x0 = (int)&_vftable_;
  (this->CHgAImage_data).offset_0x4 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x1c = 0;
  (this->CHgAImage_data).offset_0x8 = 0;
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = 0;
  (this->CHgAImage_data).offset_0x18 = 0;
  *(undefined1 *)&(this->CHgAImage_data).offset_0x10 = 1;
  (this->CHgAImage_data).offset_0x14 = -1;
  *(undefined4 *)&(this->CHgAImage_data).field_0x58 = 0x2d;
  *(undefined4 *)&(this->CHgAImage_data).field_0x5c = 0x40;
  strcpy_s(&(this->CHgAImage_data).field_0x68,0x1b,"NNN0121001001N010000000000");
  *(undefined4 *)&(this->CHgAImage_data).field_0x50 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x60 = 0x2d;
  *(undefined4 *)&(this->CHgAImage_data).field_0x64 = 0x40;
  *(undefined4 *)&(this->CHgAImage_data).field_0x54 = 0;
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    *(undefined4 *)&(this->CHgAImage_data).field_0x84 = 0;
  }
  else {
    iVar1 = GetDeviceCaps(hdc,0xc);
    *(int *)&(this->CHgAImage_data).field_0x84 = iVar1;
    ReleaseDC((HWND)0x0,hdc);
  }
  _Dst = &(this->CHgAImage_data).field_0x20;
  memset(_Dst,0,0x2c);
  *(undefined4 *)&(this->CHgAImage_data).field_0x30 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x38 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x40 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x44 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x24 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x28 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x34 = 0;
  *(undefined2 *)((int)&(this->CHgAImage_data).offset_0x2b + 1) = 1;
  *(undefined2 *)((int)&(this->CHgAImage_data).offset_0x2b + 3) = 0x10;
  *(undefined4 *)&(this->CHgAImage_data).field_0x4c = 0x2e;
  *(undefined4 *)_Dst = 0x28;
  return this;
}



/* ---- ~CHgAvtr @ 6050a350 size=77 ---- */

/* public: virtual __thiscall CHgAvtr::~CHgAvtr(void) */

void __thiscall CHgAvtr::~CHgAvtr(CHgAvtr *this)

{
  void *pvVar1;
  
                    /* 0xa350  34  ??1CHgAvtr@@UAE@XZ */
  this->vftablePtr = &_vftable_;
  pvVar1 = (void *)(this->CHgAvtr_data).offset_0x1c;
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  (this->CHgAvtr_data).offset_0x0 = &CHgAImage::_vftable_.deleting_destructor;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CHgAvtr_data).offset_0x1c = 0;
  }
  pvVar1 = (void *)(this->CHgAvtr_data).offset_0x4;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CHgAvtr_data).offset_0x4 = 0;
  }
  (this->CHgAvtr_data).offset_0x8 = 0;
  (this->CHgAvtr_data).offset_0xc = 0;
  (this->CHgAvtr_data).offset_0x10 = 1;
  (this->CHgAvtr_data).offset_0x14 = 0xffffffff;
  return;
}



/* ---- CreateAvatarSurface @ 6050a3a0 size=778 ---- */

/* private: int __thiscall CHgAvtr::CreateAvatarSurface(char const *) */

int __thiscall CHgAvtr::CreateAvatarSurface(CHgAvtr *this,char *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  CHgAImage_vftable *local_38;
  void *local_34;
  int local_30;
  void *local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  void *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xa3a0  80  ?CreateAvatarSurface@CHgAvtr@@AAEHPBD@Z */
  puStack_10 = &LAB_605180d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  local_40 = '\0';
  local_3f = 0;
  local_3d = 0;
  local_38 = &CHgAImage::_vftable_;
  local_34 = (void *)0x0;
  local_1c = (void *)0x0;
  local_30 = 0;
  local_2c = (void *)0x0;
  local_20 = 0;
  local_28 = 1;
  local_24 = -1;
  local_c = 0;
  bVar3 = CHgAImage::CHgAImage__Create
                    ((CHgAImage *)&local_38,(this->CHgAvtr_data).offset_0x4c,
                     (this->CHgAvtr_data).offset_0x5c);
  if (!bVar3) {
    local_38 = &CHgAImage::_vftable_;
    if (local_1c != (void *)0x0) {
      operator_delete__(local_1c);
      local_1c = (void *)0x0;
    }
    if (local_34 != (void *)0x0) {
      operator_delete__(local_34);
    }
    ExceptionList = local_14;
    return 0;
  }
  FUN_60502ee0(local_2c,local_30);
  cVar1 = (this->CHgAvtr_data).offset_0x68;
  if (cVar1 == 'N') {
    local_40 = (this->CHgAvtr_data).field_0x6d;
    local_3f = local_3f & 0xff00;
    iVar4 = atoi(&local_40);
    uVar7 = iVar4 - 1;
    if (2 < uVar7) goto LAB_6050a505;
    local_40 = (this->CHgAvtr_data).field_0x6e;
    local_3f = local_3f & 0xff00;
    iVar4 = atoi(&local_40);
    iVar4 = iVar4 + -1;
    if ((iVar4 != 0) && (iVar4 != 1)) goto LAB_6050a505;
    iVar6 = iVar4 * 4;
    iVar5 = _NCreateAvatarSurFace_Step1(this,(CHgAImage *)&local_38,iVar6,iVar4,uVar7);
    if ((iVar5 == 0) ||
       (iVar5 = _NCreateAvatarSurFace_Step2(this,(CHgAImage *)&local_38,iVar6,uVar7), iVar5 == 0))
    goto LAB_6050a505;
    iVar4 = _NCreateAvatarSurFace_Step3(this,(CHgAImage *)&local_38,iVar6,iVar4);
LAB_6050a4f9:
    if (iVar4 == 0) goto LAB_6050a505;
  }
  else {
    if (cVar1 == 'A') {
      local_40 = (this->CHgAvtr_data).field_0x6d;
      local_3f = (ushort)local_3f._1_1_ << 8;
      iVar4 = atoi(&local_40);
      uVar7 = iVar4 - 1;
      if (2 < uVar7) goto LAB_6050a505;
      local_40 = (this->CHgAvtr_data).field_0x6e;
      local_3f = local_3f & 0xff00;
      iVar4 = atoi(&local_40);
      iVar4 = iVar4 + -1;
      if ((iVar4 != 0) && (iVar4 != 1)) goto LAB_6050a505;
      local_40 = (this->CHgAvtr_data).field_0x80;
      iVar6 = iVar4 * 4 + 3;
      local_3f = (ushort)(byte)(this->CHgAvtr_data).field_0x81;
      local_3c = atoi(&local_40);
      iVar5 = _ACreateAvatarSurFace_Step1(this,(CHgAImage *)&local_38,iVar6,iVar4,uVar7,local_3c);
      if (iVar5 == 0) goto LAB_6050a505;
      iVar4 = _ACreateAvatarSurFace_Step2(this,(CHgAImage *)&local_38,iVar6,iVar4,uVar7,local_3c);
      goto LAB_6050a4f9;
    }
    if (cVar1 == 'B') {
      local_40 = (this->CHgAvtr_data).field_0x6e;
      local_3f = (ushort)local_3f._1_1_ << 8;
      iVar4 = atoi(&local_40);
      iVar4 = iVar4 + -1;
      if ((iVar4 != 0) && (iVar4 != 1)) goto LAB_6050a505;
      local_40 = (this->CHgAvtr_data).field_0x80;
      bVar2 = (this->CHgAvtr_data).field_0x81;
      local_3f = (ushort)bVar2;
      if (((byte)(local_40 - 0x30U) < 10) && ((byte)(bVar2 - 0x30) < 10)) {
        iVar6 = atoi(&local_40);
      }
      else {
        iVar6 = local_40 * 0x1a + -0x4bd + (int)(char)bVar2;
      }
      iVar4 = _Drawgali(this,(CHgAImage *)&local_38,0xb,iVar4 * 4 + 3,iVar6);
      goto LAB_6050a4f9;
    }
    if (cVar1 == 'X') {
      FUN_6050e190(&DAT_6052b9f0,(CHgAImage *)&local_38);
    }
  }
  iVar4 = _EXCEED_INDEX(this,(CHgAImage *)&local_38,1);
  if (iVar4 != 0) {
    CHgAImage::~CHgAImage((CHgAImage *)&local_38);
    ExceptionList = local_14;
    return 1;
  }
LAB_6050a505:
  CHgAImage::~CHgAImage((CHgAImage *)&local_38);
  ExceptionList = local_14;
  return 0;
}



/* ---- ~CHgAImage @ 6050a6b0 size=694 ---- */

/* private: int __thiscall CHgAvtr::CreateAnonymousAvatarSurface(void) */

int __thiscall CHgAImage::~CHgAImage(CHgAImage *this)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  char *_Src;
  int iVar5;
  byte *pbVar6;
  CHgAImage_vftable *local_16c;
  void *local_168;
  int local_164;
  void *local_160;
  undefined1 local_15c;
  int local_158;
  int local_154;
  void *local_150;
  CGdiObject local_14c;
  char local_128 [268];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xa6b0  79  ?CreateAnonymousAvatarSurface@CHgAvtr@@AAEHXZ */
  puStack_10 = &LAB_60517876;
  local_14 = ExceptionList;
  local_1c = DAT_6052101c ^ (uint)&local_16c;
  ExceptionList = &local_14;
                    /* inlined destructor: CHgAImage::~CHgAImage */
                    /* inlined destructor: CGdiObject::~CGdiObject */
  local_14c.vftablePtr = &CGdiObject::vftable;
  local_14c.CGdiObject_data.offset_0x0 = &_vftable_.deleting_destructor;
  local_14c.CGdiObject_data.offset_0x4 = (void *)0x0;
  local_14c.CGdiObject_data.offset_0x1c = (void *)0x0;
  local_14c.CGdiObject_data.offset_0x8 = 0;
  local_14c.CGdiObject_data.offset_0xc = 0;
  local_14c.CGdiObject_data.offset_0x18 = 0;
  local_14c.CGdiObject_data.offset_0x10 = 1;
  local_14c.CGdiObject_data.offset_0x14 = 0xffffffff;
  local_16c = &_vftable_;
  local_168 = (void *)0x0;
  local_150 = (void *)0x0;
  local_164 = 0;
  local_160 = (void *)0x0;
  local_154 = 0;
  local_15c = 1;
  local_158 = -1;
  local_c = 1;
  bVar2 = CHgAImage__Create((CHgAImage *)&local_16c,*(int *)&(this->CHgAImage_data).field_0x58,
                            *(int *)&(this->CHgAImage_data).field_0x5c);
  if (!bVar2) {
    local_16c = &_vftable_;
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
      local_150 = (void *)0x0;
    }
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
      local_168 = (void *)0x0;
    }
    local_164 = 0;
    local_160 = (void *)0x0;
    local_15c = 1;
    local_158 = -1;
    CGdiObject::~CGdiObject(&local_14c);
    goto LAB_6050a942;
  }
  FUN_60502ee0(local_160,local_164);
  pbVar6 = &DAT_605197b8;
  pbVar4 = &(this->CHgAImage_data).field_0x68;
  do {
    bVar1 = *pbVar4;
    bVar2 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_6050a800:
      iVar5 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
      goto LAB_6050a805;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar2 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_6050a800;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_6050a805:
  _Src = ".\\images\\defaultMAvtr.him";
  if (iVar5 != 0) {
    _Src = ".\\images\\defaultWAvtr.him";
  }
  strcpy_s(local_128,0x104,_Src);
  bVar2 = (**(Create **)((int)local_14c.CGdiObject_data.offset_0x0 + 4))
                    (&local_14c.CGdiObject_data,local_128,0xff0000);
  if (bVar2) {
    local_14c.CGdiObject_data.offset_0x18 = 1;
    FUN_6050dde0((CHgAImage *)&local_16c);
    iVar5 = (this->CHgAImage_data).offset_0x0;
    if (*(int *)&(this->CHgAImage_data).field_0x50 == 0) {
      cVar3 = (**(code **)(iVar5 + 0xc))
                        (*(undefined4 *)&(this->CHgAImage_data).field_0x4c,
                         *(undefined4 *)&(this->CHgAImage_data).field_0x5c,0xff0000);
      if (cVar3 == '\0') goto LAB_6050a8b8;
      FUN_60502ee0(*(void **)&(this->CHgAImage_data).offset_0xc,(this->CHgAImage_data).offset_0x8);
      DrawUnSafe((CHgAImage *)&this->CHgAImage_data,0,0,(CHgAImage *)&local_16c,0,0,local_164,
                 (int)local_160,0xff);
      *(int *)&(this->CHgAImage_data).field_0x24 = (this->CHgAImage_data).offset_0x8;
      *(int *)&(this->CHgAImage_data).field_0x28 = -*(int *)&(this->CHgAImage_data).offset_0xc;
    }
    else {
      cVar3 = (**(code **)(iVar5 + 0x10))
                        (*(undefined4 *)&(this->CHgAImage_data).field_0x60,
                         *(undefined4 *)&(this->CHgAImage_data).field_0x64);
      if (cVar3 == '\0') goto LAB_6050a8b8;
      FUN_60502ee0(*(void **)&(this->CHgAImage_data).offset_0xc,(this->CHgAImage_data).offset_0x8);
      CHgAvtr::MakeHalfImage
                ((CHgAvtr *)this,*(int *)&(this->CHgAImage_data).field_0x60,
                 *(int *)&(this->CHgAImage_data).field_0x64,(CHgAImage *)&this->CHgAImage_data,
                 *(int *)&(this->CHgAImage_data).field_0x58,
                 *(int *)&(this->CHgAImage_data).field_0x5c,(CHgAImage *)&local_16c);
      *(int *)&(this->CHgAImage_data).field_0x24 = (this->CHgAImage_data).offset_0x8;
      *(int *)&(this->CHgAImage_data).field_0x28 = -*(int *)&(this->CHgAImage_data).offset_0xc;
    }
    ~CHgAImage((CHgAImage *)&local_16c);
    CGdiObject::~CGdiObject(&local_14c);
  }
  else {
LAB_6050a8b8:
    ~CHgAImage((CHgAImage *)&local_16c);
    CGdiObject::~CGdiObject(&local_14c);
  }
LAB_6050a942:
  ExceptionList = local_14;
  iVar5 = __security_check_cookie(local_1c ^ (uint)&local_16c);
  return iVar5;
}



/* ---- Create @ 6050a970 size=89 ---- */

/* public: int __thiscall CHgAvtr::Create(char const *,int,int,int,int) */

int __thiscall
CHgAvtr::Create(CHgAvtr *this,char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *_Dst;
  int iVar1;
  
                    /* 0xa970  77  ?Create@CHgAvtr@@QAEHPBDHHHH@Z */
  if ((DAT_60521900 == 0) && (g_bExternalAvatarThreadOn == 0)) {
    MeInitAvatar();
  }
  if (DAT_605218fc == 0) {
    return 0;
  }
  _Dst = &(this->CHgAvtr_data).offset_0x68;
  (this->CHgAvtr_data).offset_0x54 = param_5;
  (this->CHgAvtr_data).offset_0x50 = param_2;
  strcpy_s(_Dst,0x1b,param_1);
  iVar1 = CreateAvatarSurface(this,_Dst);
  return iVar1;
}



/* ---- Draw @ 6050a9d0 size=786 ---- */

/* public: int __thiscall CHgAvtr::Draw(struct HDC__ *,int,int,int) */

int __thiscall CHgAvtr::Draw(CHgAvtr *this,HDC__ *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  uint local_24;
  
                    /* 0xa9d0  107  ?Draw@CHgAvtr@@QAEHPAUHDC__@@HHH@Z */
  if (((this->CHgAvtr_data).offset_0x24 == 0) || ((this->CHgAvtr_data).offset_0x28 == 0)) {
    return 0;
  }
  local_24 = 0;
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iVar2 = GetMapMode(param_1);
    SetMapMode(hdc,iVar2);
    h = CreateCompatibleBitmap
                  (param_1,(this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64);
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      iVar2 = (this->CHgAvtr_data).offset_0x60;
      iVar1 = (this->CHgAvtr_data).offset_0x64;
      StretchDIBits(hdc,0,0,iVar2,iVar1,0,0,iVar2,iVar1,(void *)(this->CHgAvtr_data).offset_0x1c,
                    (BITMAPINFO *)&(this->CHgAvtr_data).offset_0x20,0,0xcc0020);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar2 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar2);
        h_01 = CreateBitmap((this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64,1,1,
                            (void *)0x0);
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          SetBkColor(hdc,0xff0000);
          iVar2 = (this->CHgAvtr_data).offset_0x64;
          iVar1 = (this->CHgAvtr_data).offset_0x60;
          StretchBlt(hdc_00,0,0,iVar1,iVar2,hdc,0,0,iVar1,iVar2,0xcc0020);
          hdc_01 = CreateCompatibleDC(param_1);
          if (hdc_01 != (HDC)0x0) {
            iVar2 = GetMapMode(param_1);
            SetMapMode(hdc_01,iVar2);
            h_03 = CreateCompatibleBitmap
                             (param_1,(this->CHgAvtr_data).offset_0x60,
                              (this->CHgAvtr_data).offset_0x64);
            if (h_03 != (HBITMAP)0x0) {
              h_04 = SelectObject(hdc_01,h_03);
              iVar2 = (this->CHgAvtr_data).offset_0x60;
              iVar1 = (this->CHgAvtr_data).offset_0x64;
              StretchBlt(hdc_01,0,0,iVar2,iVar1,hdc,0,0,iVar2,iVar1,0xcc0020);
              iVar2 = (this->CHgAvtr_data).offset_0x64;
              iVar1 = (this->CHgAvtr_data).offset_0x60;
              StretchBlt(hdc_01,0,0,iVar1,iVar2,hdc_00,0,0,iVar1,iVar2,0x220326);
              hdc_02 = CreateCompatibleDC(param_1);
              if (hdc_02 != (HDC)0x0) {
                iVar2 = GetMapMode(param_1);
                SetMapMode(hdc_02,iVar2);
                h_05 = CreateCompatibleBitmap
                                 (param_1,(this->CHgAvtr_data).offset_0x60,
                                  (this->CHgAvtr_data).offset_0x64);
                if (h_05 != (HBITMAP)0x0) {
                  h_06 = SelectObject(hdc_02,h_05);
                  iVar2 = (this->CHgAvtr_data).offset_0x60;
                  iVar1 = (this->CHgAvtr_data).offset_0x64;
                  StretchBlt(hdc_02,0,0,iVar2,iVar1,param_1,param_2,param_3,iVar2,iVar1,0xcc0020);
                  iVar2 = (this->CHgAvtr_data).offset_0x64;
                  iVar1 = (this->CHgAvtr_data).offset_0x60;
                  StretchBlt(hdc_02,0,0,iVar1,iVar2,hdc_00,0,0,iVar1,iVar2,0x8800c6);
                  iVar2 = (this->CHgAvtr_data).offset_0x64;
                  iVar1 = (this->CHgAvtr_data).offset_0x60;
                  StretchBlt(hdc_02,0,0,iVar1,iVar2,hdc_01,0,0,iVar1,iVar2,0xee0086);
                  iVar2 = (this->CHgAvtr_data).offset_0x64;
                  iVar1 = (this->CHgAvtr_data).offset_0x60;
                  StretchBlt(param_1,param_2,param_3,iVar1,iVar2,hdc_02,0,0,iVar1,iVar2,0xcc0020);
                  SelectObject(hdc_02,h_06);
                  DeleteObject(h_05);
                }
                local_24 = (uint)(h_05 != (HBITMAP)0x0);
                DeleteDC(hdc_02);
              }
              SelectObject(hdc_01,h_04);
              DeleteObject(h_03);
            }
            DeleteDC(hdc_01);
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return local_24;
}



/* ---- DrawSelected @ 6050acf0 size=1030 ---- */

/* public: int __thiscall CHgAvtr::DrawSelected(struct HDC__ *,int,int,unsigned long,int) */

int __thiscall
CHgAvtr::DrawSelected
          (CHgAvtr *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HBRUSH hbr;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  HDC hdc_02;
  HBITMAP h_05;
  HGDIOBJ h_06;
  HDC hdc_03;
  HBITMAP local_48;
  HGDIOBJ local_38;
  int local_34;
  tagRECT local_10;
  
                    /* 0xacf0  124  ?DrawSelected@CHgAvtr@@QAEHPAUHDC__@@HHKH@Z */
  if (((this->CHgAvtr_data).offset_0x24 == 0) || ((this->CHgAvtr_data).offset_0x28 == 0)) {
    return 0;
  }
  local_34 = 0;
  local_48 = (HBITMAP)0x0;
  local_38 = (HGDIOBJ)0x0;
  hdc = CreateCompatibleDC(param_1);
  if (hdc == (HDC)0x0) {
    return 0;
  }
  iVar2 = GetMapMode(param_1);
  SetMapMode(hdc,iVar2);
  h = CreateCompatibleBitmap
                (param_1,(this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64);
  if (h != (HBITMAP)0x0) {
    h_00 = SelectObject(hdc,h);
    iVar2 = (this->CHgAvtr_data).offset_0x60;
    iVar1 = (this->CHgAvtr_data).offset_0x64;
    StretchDIBits(hdc,0,0,iVar2,iVar1,0,0,iVar2,iVar1,(void *)(this->CHgAvtr_data).offset_0x1c,
                  (BITMAPINFO *)&(this->CHgAvtr_data).offset_0x20,0,0xcc0020);
    hdc_00 = CreateCompatibleDC(param_1);
    if (hdc_00 != (HDC)0x0) {
      iVar2 = GetMapMode(param_1);
      SetMapMode(hdc_00,iVar2);
      h_01 = CreateCompatibleBitmap
                       (param_1,(this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64);
      if (h_01 != (HBITMAP)0x0) {
        h_02 = SelectObject(hdc_00,h_01);
        hbr = CreateSolidBrush(0x5050);
        if (hbr != (HBRUSH)0x0) {
          SetRect(&local_10,0,0,(this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64);
          FillRect(hdc_00,&local_10,hbr);
          DeleteObject(hbr);
          hdc_01 = CreateCompatibleDC(param_1);
          if (hdc_01 != (HDC)0x0) {
            iVar2 = GetMapMode(param_1);
            SetMapMode(hdc_01,iVar2);
            h_03 = CreateBitmap((this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64,1,
                                1,(void *)0x0);
            if (h_03 != (HBITMAP)0x0) {
              h_04 = SelectObject(hdc_01,h_03);
              SetBkColor(hdc,0xff0000);
              iVar2 = (this->CHgAvtr_data).offset_0x64;
              iVar1 = (this->CHgAvtr_data).offset_0x60;
              StretchBlt(hdc_01,0,0,iVar1,iVar2,hdc,0,0,iVar1,iVar2,0xcc0020);
              iVar2 = (this->CHgAvtr_data).offset_0x64;
              iVar1 = (this->CHgAvtr_data).offset_0x60;
              StretchBlt(hdc_00,0,0,iVar1,iVar2,hdc_01,0,0,iVar1,iVar2,0xee0086);
              hdc_02 = CreateCompatibleDC(param_1);
              if (hdc_02 != (HDC)0x0) {
                iVar2 = GetMapMode(param_1);
                SetMapMode(hdc_02,iVar2);
                h_05 = CreateCompatibleBitmap
                                 (hdc,(this->CHgAvtr_data).offset_0x60,
                                  (this->CHgAvtr_data).offset_0x64);
                if (h_05 != (HBITMAP)0x0) {
                  h_06 = SelectObject(hdc_02,h_05);
                  iVar2 = (this->CHgAvtr_data).offset_0x60;
                  iVar1 = (this->CHgAvtr_data).offset_0x64;
                  StretchBlt(hdc_02,0,0,iVar2,iVar1,hdc,0,0,iVar2,iVar1,0xcc0020);
                  iVar2 = (this->CHgAvtr_data).offset_0x64;
                  iVar1 = (this->CHgAvtr_data).offset_0x60;
                  StretchBlt(hdc_02,0,0,iVar1,iVar2,hdc_00,0,0,iVar1,iVar2,0x220326);
                  hdc_03 = CreateCompatibleDC(param_1);
                  if (hdc_03 != (HDC)0x0) {
                    iVar2 = GetMapMode(param_1);
                    SetMapMode(hdc_03,iVar2);
                    local_48 = CreateCompatibleBitmap
                                         (hdc,(this->CHgAvtr_data).offset_0x60,
                                          (this->CHgAvtr_data).offset_0x64);
                    if (local_48 != (HBITMAP)0x0) {
                      local_38 = SelectObject(hdc_03,local_48);
                      iVar2 = (this->CHgAvtr_data).offset_0x60;
                      iVar1 = (this->CHgAvtr_data).offset_0x64;
                      StretchBlt(hdc_03,0,0,iVar2,iVar1,param_1,param_2,param_3,iVar2,iVar1,0xcc0020
                                );
                      iVar2 = (this->CHgAvtr_data).offset_0x64;
                      iVar1 = (this->CHgAvtr_data).offset_0x60;
                      StretchBlt(hdc_03,0,0,iVar1,iVar2,hdc_01,0,0,iVar1,iVar2,0x8800c6);
                      iVar2 = (this->CHgAvtr_data).offset_0x64;
                      iVar1 = (this->CHgAvtr_data).offset_0x60;
                      StretchBlt(hdc_03,0,0,iVar1,iVar2,hdc_02,0,0,iVar1,iVar2,0xee0086);
                      iVar2 = (this->CHgAvtr_data).offset_0x64;
                      iVar1 = (this->CHgAvtr_data).offset_0x60;
                      StretchBlt(param_1,param_2,param_3,iVar1,iVar2,hdc_03,0,0,iVar1,iVar2,0xcc0020
                                );
                    }
                  }
                  local_34 = 1;
                  if (hdc_03 != (HDC)0x0) {
                    if (local_48 != (HBITMAP)0x0) {
                      SelectObject(hdc_03,local_38);
                      DeleteObject(local_48);
                    }
                    DeleteDC(hdc_03);
                  }
                  SelectObject(hdc_02,h_06);
                  DeleteObject(h_05);
                }
                DeleteDC(hdc_02);
              }
              SelectObject(hdc_01,h_04);
              DeleteObject(h_03);
            }
            DeleteDC(hdc_01);
          }
        }
        SelectObject(hdc_00,h_02);
        DeleteObject(h_01);
      }
      DeleteDC(hdc_00);
    }
    SelectObject(hdc,h_00);
    DeleteObject(h);
  }
  DeleteDC(hdc);
  return local_34;
}



/* ---- MakeHalfImage @ 6050b100 size=598 ---- */

/* private: int __thiscall CHgAvtr::MakeHalfImage(int,int,class CHgAImage &,int,int,class CHgAImage
   &) */

int __thiscall
CHgAvtr::MakeHalfImage
          (CHgAvtr *this,int param_1,int param_2,CHgAImage *param_3,int param_4,int param_5,
          CHgAImage *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  byte bVar12;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_10;
  
                    /* 0xb100  189  ?MakeHalfImage@CHgAvtr@@AAEHHHAAVCHgAImage@@HH0@Z */
  iVar1 = *(int *)(param_6 + 8);
  iVar2 = *(int *)(param_3 + 8);
  uVar7 = iVar1 * 0x10 + 0x1f >> 3 & 0xfffffffc;
  local_10 = 0;
  if (0 < *(int *)(param_6 + 0xc)) {
    local_24 = 0;
    do {
      iVar3 = *(int *)(*(int *)(param_6 + 4) + local_10 * 4);
      iVar4 = *(int *)(*(int *)(param_6 + 4) + local_10 * 4 + 4);
      pbVar5 = *(byte **)(local_24 + *(int *)(param_3 + 4));
      uVar10 = 0;
      local_2c = 0;
      if (0 < (int)uVar7) {
        local_28 = pbVar5;
        do {
          if ((iVar1 * 2 < (int)(uVar10 + 2)) || (iVar2 * 2 < (int)(local_28 + (2 - (int)pbVar5))))
          {
            uVar10 = uVar7;
          }
          else {
            uVar11 = CONCAT11(*(undefined1 *)(uVar10 + 1 + iVar3),*(undefined1 *)(uVar10 + iVar3));
            iVar8 = 0;
            uVar9 = 0;
            uVar6 = 0;
            bVar12 = uVar11 != 0x1f;
            if ((bool)bVar12) {
              uVar6 = uVar11 >> 7 & 0xf8;
              uVar9 = uVar11 >> 2 & 0xf8;
              iVar8 = (uVar11 & 0x1f) * 8;
            }
            uVar11 = CONCAT11(*(undefined1 *)(uVar10 + 1 + iVar4),*(undefined1 *)(uVar10 + iVar4));
            if (uVar11 != 0x1f) {
              uVar6 = uVar6 + (uVar11 >> 7 & 0xf8);
              uVar9 = uVar9 + (uVar11 >> 2 & 0xf8);
              iVar8 = iVar8 + (uVar11 & 0x1f) * 8;
              bVar12 = bVar12 + 1;
            }
            uVar11 = CONCAT11(*(undefined1 *)(uVar10 + 3 + iVar3),
                              *(undefined1 *)(uVar10 + 2 + iVar3));
            if (uVar11 != 0x1f) {
              uVar6 = uVar6 + (uVar11 >> 7 & 0xf8);
              uVar9 = uVar9 + (uVar11 >> 2 & 0xf8);
              iVar8 = iVar8 + (uVar11 & 0x1f) * 8;
              bVar12 = bVar12 + 1;
            }
            uVar11 = CONCAT11(*(undefined1 *)(uVar10 + 3 + iVar4),
                              *(undefined1 *)(uVar10 + 2 + iVar4));
            if (uVar11 != 0x1f) {
              uVar6 = uVar6 + (uVar11 >> 7 & 0xf8);
              uVar9 = uVar9 + (uVar11 >> 2 & 0xf8);
              iVar8 = iVar8 + (uVar11 & 0x1f) * 8;
              bVar12 = bVar12 + 1;
            }
            if (bVar12 < 2) {
              pbVar5[local_2c + 1] = 0;
              *local_28 = 0x1f;
            }
            else {
              *local_28 = (byte)(uVar9 & 0xffe0) | (byte)(iVar8 >> 5);
              pbVar5[local_2c + 1] =
                   (byte)(((uVar6 & 0xffe0) << 5) >> 8) | (byte)((uVar9 & 0xffe0) >> 8);
            }
          }
          local_2c = local_2c + 2;
          uVar10 = uVar10 + 4;
          local_28 = local_28 + 2;
        } while ((int)uVar10 < (int)uVar7);
      }
      local_24 = local_24 + 4;
      local_10 = local_10 + 2;
    } while (local_10 < *(int *)(param_6 + 0xc));
  }
  return 1;
}



/* ---- CheckScreenMode @ 6050b360 size=85 ---- */

/* public: int __thiscall CHgAvtr::CheckScreenMode(void) */

int __thiscall CHgAvtr::CheckScreenMode(CHgAvtr *this)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  
                    /* 0xb360  65  ?CheckScreenMode@CHgAvtr@@QAEHXZ */
  hdc = GetDC((HWND)0x0);
  if (hdc != (HDC)0x0) {
    iVar2 = GetDeviceCaps(hdc,0xc);
    iVar1 = (this->CHgAvtr_data).offset_0x84;
    if (iVar1 != iVar2) {
      (this->CHgAvtr_data).offset_0x84 = iVar2;
      ReleaseDC((HWND)0x0,hdc);
      return (uint)(iVar1 < 9);
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  return 0;
}



/* ---- CreateAnonymousAvatar @ 6050b3c0 size=121 ---- */

/* public: int __thiscall CHgAvtr::CreateAnonymousAvatar(int,int,int,int,int) */

int __thiscall
CHgAvtr::CreateAnonymousAvatar
          (CHgAvtr *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *_Src;
  
                    /* 0xb3c0  78  ?CreateAnonymousAvatar@CHgAvtr@@QAEHHHHHH@Z */
  (this->CHgAvtr_data).offset_0x58 = 0x2d;
  if (param_5 == 0) {
    (this->CHgAvtr_data).offset_0x5c = 0x40;
  }
  else {
    (this->CHgAvtr_data).offset_0x5c = 0x66;
  }
  if (param_2 == 0) {
    (this->CHgAvtr_data).offset_0x60 = 0x2d;
    iVar1 = (this->CHgAvtr_data).offset_0x5c;
  }
  else {
    (this->CHgAvtr_data).offset_0x60 = 0x16;
    iVar1 = (int)(this->CHgAvtr_data).offset_0x5c / 2;
  }
  (this->CHgAvtr_data).offset_0x64 = iVar1;
  (this->CHgAvtr_data).offset_0x54 = param_5;
  (this->CHgAvtr_data).offset_0x50 = param_2;
  _Src = "QMarkM";
  if (param_1 == 0) {
    _Src = "QMarkW";
  }
  strcpy_s(&(this->CHgAvtr_data).offset_0x68,0x1b,_Src);
  iVar1 = CHgAImage::~CHgAImage((CHgAImage *)this);
  return iVar1;
}



/* ---- SetChance @ 6050b440 size=8 ---- */

/* public: int __thiscall CHgAniAvatar::SetChance(int,int) */

int __thiscall CHgAniAvatar::SetChance(CHgAniAvatar *this,int param_1,int param_2)

{
                    /* 0xb440  201  ?SetChance@CHgAniAvatar@@QAEHHH@Z
                       0xb440  202  ?SetChance@CHgAvatar@@QAEHHH@Z
                       0xb440  203  ?SetChance@CHgAvtr@@QAEHHH@Z */
  return 1;
}



/* ---- CHgAvatar @ 6050b450 size=19 ---- */

/* public: __thiscall CHgAvatar::CHgAvatar(void) */

void __thiscall CHgAvatar::CHgAvatar(CHgAvatar *this)

{
                    /* 0xb450  18  ??0CHgAvatar@@QAE@XZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}



/* ---- ~CHgAvatar @ 6050b470 size=106 ---- */

/* public: __thiscall CHgAvatar::~CHgAvatar(void) */

void __thiscall CHgAvatar::~CHgAvatar(CHgAvatar *this)

{
  CHgAniAvatar *this_00;
  int iVar1;
  
                    /* 0xb470  33  ??1CHgAvatar@@QAE@XZ */
  this_00 = *(CHgAniAvatar **)(this + 4);
  if (this_00 == (CHgAniAvatar *)0x0) {
    iVar1 = *(int *)this;
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x28) == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x2c) == 0) {
      return;
    }
  }
  else if (*(int *)(this_00 + 0x23c) == 0) {
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  if (this_00 != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::~CHgAniAvatar(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 4) = 0;
  }
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- IsMe @ 6050b4e0 size=12 ---- */

/* public: int __thiscall CHgAvatar::IsMe(class CHgAvatar *) */

int __thiscall CHgAvatar::IsMe(CHgAvatar *this,CHgAvatar *param_1)

{
                    /* 0xb4e0  180  ?IsMe@CHgAvatar@@QAEHPAV1@@Z */
  return (uint)(this == param_1);
}



/* ---- SetAniAvatar @ 6050b4f0 size=10 ---- */

/* public: void __thiscall CHgAvatar::SetAniAvatar(int) */

void __thiscall CHgAvatar::SetAniAvatar(CHgAvatar *this,int param_1)

{
                    /* 0xb4f0  197  ?SetAniAvatar@CHgAvatar@@QAEXH@Z */
  *(int *)(this + 8) = param_1;
  return;
}



/* ---- SetWindowHandle @ 6050b500 size=10 ---- */

/* public: void __thiscall CHgAvatar::SetWindowHandle(struct HWND__ *) */

void __thiscall CHgAvatar::SetWindowHandle(CHgAvatar *this,HWND__ *param_1)

{
                    /* 0xb500  216  ?SetWindowHandle@CHgAvatar@@QAEXPAUHWND__@@@Z */
  *(HWND__ **)(this + 0xc) = param_1;
  return;
}



/* ---- GetHeight @ 6050b510 size=24 ---- */

/* public: unsigned long __thiscall CHgAvatar::GetHeight(void) */

ulong __thiscall CHgAvatar::GetHeight(CHgAvatar *this)

{
                    /* 0xb510  151  ?GetHeight@CHgAvatar@@QAEKXZ */
  if (*(int *)(this + 4) != 0) {
    return *(ulong *)(*(int *)(this + 4) + 0x10);
  }
  if (*(int *)this == 0) {
    return 0;
  }
  return *(ulong *)(*(int *)this + 0x60);
}



/* ---- GetWidth @ 6050b530 size=24 ---- */

/* public: unsigned long __thiscall CHgAvatar::GetWidth(void) */

ulong __thiscall CHgAvatar::GetWidth(CHgAvatar *this)

{
                    /* 0xb530  162  ?GetWidth@CHgAvatar@@QAEKXZ */
  if (*(int *)(this + 4) != 0) {
    return *(ulong *)(*(int *)(this + 4) + 0xc);
  }
  if (*(int *)this == 0) {
    return 0;
  }
  return *(ulong *)(*(int *)this + 0x5c);
}



/* ---- Create @ 6050b550 size=371 ---- */

/* public: int __thiscall CHgAvatar::Create(char const *,int,int,int,int,int,int) */

int __thiscall
CHgAvatar::Create(CHgAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  CHgAniAvatar *this_00;
  CHgAImage *pCVar1;
  int extraout_EAX;
  int iVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xb550  76  ?Create@CHgAvatar@@QAEHPBDHHHHHH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6051824b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1,DAT_6052101c ^ (uint)(auStack_e + -10));
    *(undefined4 *)this = 0;
  }
  this_00 = *(CHgAniAvatar **)(this + 4);
  if (this_00 != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::~CHgAniAvatar(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 4) = 0;
  }
  if (m_bUseNewAvatar == 0) {
    pCVar1 = operator_new(0x8c);
    if (pCVar1 == (CHgAImage *)0x0) {
      pCVar1 = (CHgAImage *)0x0;
    }
    else {
      pCVar1 = CHgAImage::CHgAImage(pCVar1);
    }
    *(CHgAImage **)this = pCVar1;
    if (pCVar1 == (CHgAImage *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    pCVar1 = operator_new(0x33c);
    uStack_4 = 0;
    if (pCVar1 == (CHgAImage *)0x0) {
      iVar2 = 0;
    }
    else {
      CHgAImage::CHgAImage(pCVar1);
      iVar2 = extraout_EAX;
    }
    uStack_4 = 0xffffffff;
    *(int *)(this + 4) = iVar2;
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (*(int *)(this + 4) == 0) {
    iVar2 = CHgAvtr::Create(*(CHgAvtr **)this,param_1,param_2,param_3,param_4,param_5);
    ExceptionList = local_c;
    return iVar2;
  }
  *(CHgAvatar **)(*(int *)(this + 4) + 0x2d8) = this;
  *(undefined4 *)(*(int *)(this + 4) + 0x238) = *(undefined4 *)(this + 0xc);
  iVar2 = CHgAniAvatar::Create
                    (*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7);
  ExceptionList = local_c;
  return (uint)(iVar2 != 0);
}



/* ---- CreateEx @ 6050b6d0 size=371 ---- */

/* public: int __thiscall CHgAvatar::CreateEx(char const *,int,int,int,int,int,int) */

int __thiscall
CHgAvatar::CreateEx(CHgAvatar *this,char *param_1,int param_2,int param_3,int param_4,int param_5,
                   int param_6,int param_7)

{
  CHgAniAvatar *this_00;
  CHgAImage *pCVar1;
  int extraout_EAX;
  int iVar2;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0xb6d0  84  ?CreateEx@CHgAvatar@@QAEHPBDHHHHHH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_6051824b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1,DAT_6052101c ^ (uint)(auStack_e + -10));
    *(undefined4 *)this = 0;
  }
  this_00 = *(CHgAniAvatar **)(this + 4);
  if (this_00 != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::~CHgAniAvatar(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 4) = 0;
  }
  if (m_bUseNewAvatar == 0) {
    pCVar1 = operator_new(0x8c);
    if (pCVar1 == (CHgAImage *)0x0) {
      pCVar1 = (CHgAImage *)0x0;
    }
    else {
      pCVar1 = CHgAImage::CHgAImage(pCVar1);
    }
    *(CHgAImage **)this = pCVar1;
    if (pCVar1 == (CHgAImage *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    pCVar1 = operator_new(0x33c);
    uStack_4 = 0;
    if (pCVar1 == (CHgAImage *)0x0) {
      iVar2 = 0;
    }
    else {
      CHgAImage::CHgAImage(pCVar1);
      iVar2 = extraout_EAX;
    }
    uStack_4 = 0xffffffff;
    *(int *)(this + 4) = iVar2;
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (*(int *)(this + 4) == 0) {
    iVar2 = CHgAvtr::Create(*(CHgAvtr **)this,param_1,param_2,param_3,param_4,param_5);
    ExceptionList = local_c;
    return iVar2;
  }
  *(CHgAvatar **)(*(int *)(this + 4) + 0x2d8) = this;
  *(undefined4 *)(*(int *)(this + 4) + 0x238) = *(undefined4 *)(this + 0xc);
  iVar2 = CHgAniAvatar::CreateEx
                    (*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7);
  ExceptionList = local_c;
  return (uint)(iVar2 != 0);
}



/* ---- Destroy @ 6050b850 size=71 ---- */

/* public: void __thiscall CHgAvatar::Destroy(void) */

void __thiscall CHgAvatar::Destroy(CHgAvatar *this)

{
  CHgAniAvatar *this_00;
  
                    /* 0xb850  91  ?Destroy@CHgAvatar@@QAEXXZ */
  this_00 = *(CHgAniAvatar **)(this + 4);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  if (this_00 != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::~CHgAniAvatar(this_00);
    operator_delete(this_00);
    *(undefined4 *)(this + 4) = 0;
  }
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
    *(undefined4 *)this = 0;
  }
  return;
}



/* ---- Draw @ 6050b8a0 size=114 ---- */

/* public: int __thiscall CHgAvatar::Draw(struct HDC__ *,int,int,int) */

int __thiscall CHgAvatar::Draw(CHgAvatar *this,HDC__ *param_1,int param_2,int param_3,int param_4)

{
                    /* 0xb8a0  106  ?Draw@CHgAvatar@@QAEHPAUHDC__@@HHH@Z */
  if (*(int *)(this + 0x10) != 0) {
    return 1;
  }
  *(undefined4 *)(this + 0x10) = 1;
  if (*(CHgAniAvatar **)(this + 4) != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::Draw(*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_4);
    *(undefined4 *)(this + 0x10) = 0;
    return 0;
  }
  if (*(CHgAvtr **)this != (CHgAvtr *)0x0) {
    CHgAvtr::Draw(*(CHgAvtr **)this,param_1,param_2,param_3,param_4);
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 0;
}



/* ---- DirectDraw @ 6050b920 size=103 ---- */

/* public: int __thiscall CHgAvatar::DirectDraw(struct HDC__ *,int,int,int) */

int __thiscall
CHgAvatar::DirectDraw(CHgAvatar *this,HDC__ *param_1,int param_2,int param_3,int param_4)

{
                    /* 0xb920  100  ?DirectDraw@CHgAvatar@@QAEHPAUHDC__@@HHH@Z */
  if (*(int *)(this + 0x10) == 0) {
    *(undefined4 *)(this + 0x10) = 1;
    if (*(CHgAniAvatar **)(this + 4) != (CHgAniAvatar *)0x0) {
      CHgAniAvatar::DirectDraw(*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3);
      *(undefined4 *)(this + 0x10) = 0;
      return 1;
    }
    if (*(CHgAvtr **)this != (CHgAvtr *)0x0) {
      CHgAvtr::Draw(*(CHgAvtr **)this,param_1,param_2,param_3,0);
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 1;
}



/* ---- DrawSelected @ 6050b990 size=126 ---- */

/* public: int __thiscall CHgAvatar::DrawSelected(struct HDC__ *,int,int,unsigned long,int) */

int __thiscall
CHgAvatar::DrawSelected
          (CHgAvatar *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5)

{
                    /* 0xb990  123  ?DrawSelected@CHgAvatar@@QAEHPAUHDC__@@HHKH@Z */
  if (*(int *)(this + 0x10) != 0) {
    return 1;
  }
  *(undefined4 *)(this + 0x10) = 1;
  if (*(CHgAniAvatar **)(this + 4) != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::DrawSelected(*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_5,0);
    *(undefined4 *)(this + 0x10) = 0;
    return 0;
  }
  if (*(CHgAvtr **)this != (CHgAvtr *)0x0) {
    CHgAvtr::DrawSelected(*(CHgAvtr **)this,param_1,param_2,param_3,param_5,0);
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 0;
}



/* ---- Draw @ 6050ba10 size=80 ---- */

/* public: int __thiscall CHgAvatar::Draw(unsigned char * *,int,int,int,int,int) */

int __thiscall
CHgAvatar::Draw(CHgAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,
               int param_6)

{
                    /* 0xba10  105  ?Draw@CHgAvatar@@QAEHPAPAEHHHHH@Z */
  if (*(int *)(this + 0x10) != 0) {
    return 1;
  }
  *(undefined4 *)(this + 0x10) = 1;
  if (*(CHgAniAvatar **)(this + 4) != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::Draw(*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 0;
}



/* ---- DirectDraw @ 6050ba60 size=74 ---- */

/* public: int __thiscall CHgAvatar::DirectDraw(unsigned char * *,int,int,int,int,int) */

int __thiscall
CHgAvatar::DirectDraw
          (CHgAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
                    /* 0xba60  99  ?DirectDraw@CHgAvatar@@QAEHPAPAEHHHHH@Z */
  if (*(int *)(this + 0x10) == 0) {
    *(undefined4 *)(this + 0x10) = 1;
    if (*(CHgAniAvatar **)(this + 4) != (CHgAniAvatar *)0x0) {
      CHgAniAvatar::DirectDraw
                (*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6);
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 1;
}



/* ---- DrawSelected @ 6050bab0 size=85 ---- */

/* public: int __thiscall CHgAvatar::DrawSelected(unsigned char * *,int,int,int,int,unsigned
   long,int) */

int __thiscall
CHgAvatar::DrawSelected
          (CHgAvatar *this,uchar **param_1,int param_2,int param_3,int param_4,int param_5,
          ulong param_6,int param_7)

{
                    /* 0xbab0  122  ?DrawSelected@CHgAvatar@@QAEHPAPAEHHHHKH@Z */
  if (*(int *)(this + 0x10) != 0) {
    return 1;
  }
  *(undefined4 *)(this + 0x10) = 1;
  if (*(CHgAniAvatar **)(this + 4) != (CHgAniAvatar *)0x0) {
    CHgAniAvatar::DrawSelected
              (*(CHgAniAvatar **)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7)
    ;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 0;
}



/* ---- IsReady @ 6050bb10 size=41 ---- */

/* public: int __thiscall CHgAvatar::IsReady(void) */

int __thiscall CHgAvatar::IsReady(CHgAvatar *this)

{
  int iVar1;
  
                    /* 0xbb10  183  ?IsReady@CHgAvatar@@QAEHXZ */
  if (*(int *)(this + 4) != 0) {
    return *(int *)(*(int *)(this + 4) + 0x23c);
  }
  iVar1 = *(int *)this;
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x28) == 0)) || (*(int *)(iVar1 + 0x2c) == 0)) {
    return 0;
  }
  return 1;
}



/* ---- IsAniAvatar @ 6050bb40 size=35 ---- */

/* public: int __thiscall CHgAvatar::IsAniAvatar(void) */

int __thiscall CHgAvatar::IsAniAvatar(CHgAvatar *this)

{
  int iVar1;
  
                    /* 0xbb40  174  ?IsAniAvatar@CHgAvatar@@QAEHXZ */
  iVar1 = *(int *)(this + 4);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x23c) == 0)) || (*(int *)(iVar1 + 0x328) != 0)) {
    return 0;
  }
  return *(int *)(iVar1 + 0x2ac);
}



/* ---- GetAvatarType @ 6050bb70 size=20 ---- */

/* public: int __thiscall CHgAvatar::GetAvatarType(void) */

int __thiscall CHgAvatar::GetAvatarType(CHgAvatar *this)

{
                    /* 0xbb70  141  ?GetAvatarType@CHgAvatar@@QAEHXZ */
  if (*(int *)(this + 4) == 0) {
    return (uint)(*(int *)this != 0);
  }
  return 2;
}



/* ---- CheckAvatarFolder @ 6050bb90 size=13 ---- */

/* public: void __thiscall CHgAvatar::CheckAvatarFolder(void) */

void __thiscall CHgAvatar::CheckAvatarFolder(CHgAvatar *this)

{
                    /* 0xbb90  62  ?CheckAvatarFolder@CHgAvatar@@QAEXXZ */
  if (*(CHgAniAvatar **)(this + 4) == (CHgAniAvatar *)0x0) {
    return;
  }
  CHgAniAvatar::CheckFolder(*(CHgAniAvatar **)(this + 4));
  return;
}



/* ---- _EXCEED_INDEX @ 6050bba0 size=275 ---- */

/* private: int __thiscall CHgAvtr::_EXCEED_INDEX(class CHgAImage &,int) */

int __thiscall CHgAvtr::_EXCEED_INDEX(CHgAvtr *this,CHgAImage *param_1,int param_2)

{
  CHgAvtr_data *this_00;
  char cVar1;
  ushort local_4 [2];
  
  local_4[0] = 0;
  local_4[1] = 0;
                    /* 0xbba0  235  ?_EXCEED_INDEX@CHgAvtr@@AAEHAAVCHgAImage@@H@Z */
  if (param_2 != 0) {
    FUN_60502ee0(*(void **)(param_1 + 0xc),*(int *)(param_1 + 8));
    local_4[0] = (ushort)(byte)(this->CHgAvtr_data).field_0x6e;
    atoi((char *)local_4);
    FUN_6050e190(&PTR_vftable_60521108,param_1);
  }
  this_00 = &this->CHgAvtr_data;
  if ((this->CHgAvtr_data).offset_0x50 == 0) {
    cVar1 = (*(code *)this_00->offset_0x0[3])
                      ((this->CHgAvtr_data).offset_0x4c,(this->CHgAvtr_data).offset_0x5c,0xff0000);
    if (cVar1 != '\0') {
      FUN_60502ee0((void *)(this->CHgAvtr_data).offset_0xc,(this->CHgAvtr_data).offset_0x8);
      CHgAImage::DrawUnSafe
                ((CHgAImage *)this_00,0,0,param_1,0,0,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                 0xff);
      goto LAB_6050bc99;
    }
  }
  else {
    cVar1 = (*(code *)this_00->offset_0x0[3])
                      ((this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64);
    if (cVar1 != '\0') {
      FUN_60502ee0((void *)(this->CHgAvtr_data).offset_0xc,(this->CHgAvtr_data).offset_0x8);
      MakeHalfImage(this,(this->CHgAvtr_data).offset_0x60,(this->CHgAvtr_data).offset_0x64,
                    (CHgAImage *)this_00,(this->CHgAvtr_data).offset_0x58,
                    (this->CHgAvtr_data).offset_0x5c,param_1);
LAB_6050bc99:
      (this->CHgAvtr_data).offset_0x24 = (this->CHgAvtr_data).offset_0x8;
      (this->CHgAvtr_data).offset_0x28 = -(this->CHgAvtr_data).offset_0xc;
      return 1;
    }
  }
  return 0;
}



/* ---- _Drawgali @ 6050bcc0 size=70 ---- */

/* private: int __thiscall CHgAvtr::_Drawgali(class CHgAImage &,int,int,int) */

int __thiscall
CHgAvtr::_Drawgali(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0xbcc0  234  ?_Drawgali@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  iVar1 = FUN_6050e190(&DAT_60521910 + (param_3 + param_2 * 8) * 0x138,param_1);
  if (iVar1 == 0) {
    iVar1 = _EXCEED_INDEX(this,param_1,1);
    return iVar1;
  }
  return 1;
}



/* ---- _Drawgahc @ 6050bd10 size=72 ---- */

/* private: int __thiscall CHgAvtr::_Drawgahc(class CHgAImage &,int,int,int) */

int __thiscall
CHgAvtr::_Drawgahc(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
                    /* 0xbd10  233  ?_Drawgahc@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  iVar1 = FUN_6050e190(&DAT_6052a190 + (param_3 + param_2 * 5) * 0x138,param_1);
  if (iVar1 == 0) {
    iVar1 = _EXCEED_INDEX(this,param_1,1);
    return iVar1;
  }
  return 1;
}



/* ---- _NBackHead @ 6050bd60 size=198 ---- */

/* private: int __thiscall CHgAvtr::_NBackHead(class CHgAImage &,int,int,int) */

int __thiscall
CHgAvtr::_NBackHead(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
                    /* 0xbd60  236  ?_NBackHead@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  cVar1 = (this->CHgAvtr_data).field_0x69;
  if (cVar1 == 'N') {
    iVar2 = FUN_6050e190(&DAT_60521910 + param_2 * 0x138,param_1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = _EXCEED_INDEX(this,param_1,1);
    if (iVar2 == 0) {
      return 0;
    }
    return 1;
  }
  if (cVar1 == 'A') {
    iVar2 = 0;
  }
  else if (cVar1 == 'B') {
    iVar2 = 1;
  }
  else if (cVar1 == 'C') {
    iVar2 = 2;
  }
  else if (cVar1 == 'D') {
    iVar2 = 3;
  }
  else {
    if (cVar1 != 'E') {
      if (cVar1 != '1') {
        return 1;
      }
      iVar2 = _Drawgali(this,param_1,2,param_2 + 1,param_3);
      goto LAB_6050bdc0;
    }
    iVar2 = 4;
  }
  iVar2 = _Drawgahc(this,param_1,param_4,iVar2,param_3);
LAB_6050bdc0:
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



/* ---- _NFace @ 6050be30 size=147 ---- */

/* private: int __thiscall CHgAvtr::_NFace(class CHgAImage &,int,int,int) */

int __thiscall CHgAvtr::_NFace(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
                    /* 0xbe30  240  ?_NFace@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  cVar1 = (this->CHgAvtr_data).field_0x75;
  if (cVar1 == 'N') {
    iVar2 = FUN_6050e190(&DAT_605249d0 + param_2 * 0x138,param_1);
    if ((iVar2 == 0) && (iVar2 = _EXCEED_INDEX(this,param_1,1), iVar2 == 0)) {
      return 0;
    }
  }
  else {
    if (cVar1 == 'A') {
      iVar2 = 6;
    }
    else {
      if (cVar1 != 'B') {
        return 1;
      }
      iVar2 = 7;
    }
    iVar2 = _Drawgali(this,param_1,iVar2,param_2 + param_4,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



/* ---- _NFrontHead @ 6050bed0 size=328 ---- */

/* private: int __thiscall CHgAvtr::_NFrontHead(class CHgAImage &,int,int,int) */

int __thiscall
CHgAvtr::_NFrontHead(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
                    /* 0xbed0  241  ?_NFrontHead@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  cVar1 = (this->CHgAvtr_data).field_0x69;
  if (cVar1 == 'N') {
    iVar2 = FUN_6050e190(&DAT_605222d0 + param_2 * 0x138,param_1);
    if (iVar2 == 0) {
      iVar2 = _EXCEED_INDEX(this,param_1,1);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  else if (cVar1 == 'A') {
    iVar2 = _Drawgahc(this,param_1,param_4 + 2,0,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (cVar1 == 'B') {
    iVar2 = _Drawgahc(this,param_1,param_4 + 2,1,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (cVar1 == 'C') {
    iVar2 = _Drawgahc(this,param_1,param_4 + 2,2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (cVar1 == 'D') {
    iVar2 = _Drawgahc(this,param_1,param_4 + 2,3,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (cVar1 == 'E') {
    iVar2 = _Drawgahc(this,param_1,param_4 + 2,4,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (cVar1 == '1') {
    iVar2 = _Drawgali(this,param_1,3,param_2 + 1,param_3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



/* ---- _AFace @ 6050c020 size=149 ---- */

/* private: int __thiscall CHgAvtr::_AFace(class CHgAImage &,int,int,int) */

int __thiscall CHgAvtr::_AFace(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
                    /* 0xc020  232  ?_AFace@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  cVar1 = (this->CHgAvtr_data).field_0x75;
  if (cVar1 == 'N') {
    iVar2 = FUN_6050e190(&DAT_605249d0 + param_3 * 0x4e0,param_1);
    if ((iVar2 == 0) && (iVar2 = _EXCEED_INDEX(this,param_1,1), iVar2 == 0)) {
      return 0;
    }
  }
  else {
    if (cVar1 == 'A') {
      iVar2 = 6;
    }
    else {
      if (cVar1 != 'B') {
        return 1;
      }
      iVar2 = 7;
    }
    iVar2 = _Drawgali(this,param_1,iVar2,param_4 + param_3 * 4,param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



/* ---- _NCreateAvatarSurFace_Step1 @ 6050c0c0 size=319 ---- */

/* private: int __thiscall CHgAvtr::_NCreateAvatarSurFace_Step1(class CHgAImage &,int,int,int) */

int __thiscall
CHgAvtr::_NCreateAvatarSurFace_Step1
          (CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint local_4;
  
                    /* 0xc0c0  237  ?_NCreateAvatarSurFace_Step1@CHgAvtr@@AAEHAAVCHgAImage@@HHH@Z */
  puVar1 = &(this->CHgAvtr_data).field_0x78;
  local_4 = (uint)*(ushort *)puVar1;
  if (((byte)(*puVar1 - 0x30) < 10) && ((byte)((this->CHgAvtr_data).field_0x79 - 0x30) < 10)) {
    atoi((char *)&local_4);
  }
  iVar4 = FUN_6050e190(&DAT_605291b8 + param_2 * 0x138,param_1);
  if ((iVar4 != 0) || (iVar4 = _EXCEED_INDEX(this,param_1,1), iVar4 != 0)) {
    local_4._0_3_ = (uint3)*(ushort *)&(this->CHgAvtr_data).field_0x6b;
    iVar4 = atoi((char *)&local_4);
    iVar4 = _NBackHead(this,param_1,param_2,iVar4,param_3);
    if (iVar4 != 0) {
      puVar1 = &(this->CHgAvtr_data).field_0x7a;
      cVar2 = *puVar1;
      cVar3 = (this->CHgAvtr_data).field_0x7b;
      local_4._0_3_ = (uint3)*(ushort *)puVar1;
      if (((byte)(cVar2 - 0x30U) < 10) && ((byte)(cVar3 - 0x30U) < 10)) {
        iVar4 = atoi((char *)&local_4);
      }
      else {
        iVar4 = cVar2 * 0x1a + -0x4bd + (int)cVar3;
      }
      iVar4 = _Drawgali(this,param_1,0xd,param_2 + 2,iVar4);
      if (iVar4 != 0) {
        iVar4 = _Drawgali(this,param_1,4,param_2,param_4 + 1);
        return (uint)(iVar4 != 0);
      }
    }
  }
  return 0;
}



/* ---- _NCreateAvatarSurFace_Step2 @ 6050c200 size=328 ---- */

/* private: int __thiscall CHgAvtr::_NCreateAvatarSurFace_Step2(class CHgAImage &,int,int) */

int __thiscall
CHgAvtr::_NCreateAvatarSurFace_Step2(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint local_4;
  
                    /* 0xc200  238  ?_NCreateAvatarSurFace_Step2@CHgAvtr@@AAEHAAVCHgAImage@@HH@Z */
  local_4 = (uint)*(uint3 *)&(this->CHgAvtr_data).field_0x6f;
  atoi((char *)&local_4);
  iVar4 = FUN_6050e190(&DAT_605270d0 + param_2 * 0x138,param_1);
  if ((iVar4 == 0) && (iVar4 = _EXCEED_INDEX(this,param_1,1), iVar4 == 0)) {
    return 0;
  }
  local_4 = (uint)*(uint3 *)&(this->CHgAvtr_data).field_0x72;
  atoi((char *)&local_4);
  iVar4 = FUN_6050e190(&DAT_60526710 + param_2 * 0x138,param_1);
  if ((iVar4 == 0) && (iVar4 = _EXCEED_INDEX(this,param_1,1), iVar4 == 0)) {
    return 0;
  }
  local_4._0_3_ = (uint3)*(ushort *)&(this->CHgAvtr_data).field_0x76;
  iVar4 = atoi((char *)&local_4);
  iVar4 = _NFace(this,param_1,param_2,iVar4,param_3);
  if (iVar4 == 0) {
    return 0;
  }
  puVar1 = &(this->CHgAvtr_data).field_0x7a;
  cVar2 = *puVar1;
  cVar3 = (this->CHgAvtr_data).field_0x7b;
  local_4._0_3_ = (uint3)*(ushort *)puVar1;
  if (((byte)(cVar2 - 0x30U) < 10) && ((byte)(cVar3 - 0x30U) < 10)) {
    iVar4 = atoi((char *)&local_4);
  }
  else {
    iVar4 = cVar2 * 0x1a + -0x4bd + (int)cVar3;
  }
  iVar4 = _Drawgali(this,param_1,0xc,param_2 + 2,iVar4);
  return (uint)(iVar4 != 0);
}



/* ---- _NCreateAvatarSurFace_Step3 @ 6050c350 size=303 ---- */

/* private: int __thiscall CHgAvtr::_NCreateAvatarSurFace_Step3(class CHgAImage &,int,int) */

int __thiscall
CHgAvtr::_NCreateAvatarSurFace_Step3(CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint local_4;
  
                    /* 0xc350  239  ?_NCreateAvatarSurFace_Step3@CHgAvtr@@AAEHAAVCHgAImage@@HH@Z */
  local_4 = (uint)*(ushort *)&(this->CHgAvtr_data).field_0x6b;
  iVar4 = atoi((char *)&local_4);
  iVar4 = _NFrontHead(this,param_1,param_2,iVar4,param_3);
  if (iVar4 != 0) {
    puVar1 = &(this->CHgAvtr_data).field_0x7c;
    local_4._0_3_ = (uint3)*(ushort *)puVar1;
    if (((byte)(*puVar1 - 0x30) < 10) && ((byte)((this->CHgAvtr_data).field_0x7d - 0x30) < 10)) {
      atoi((char *)&local_4);
    }
    iVar4 = FUN_6050e190(&DAT_60528f48 + param_2 * 0x138,param_1);
    if ((iVar4 != 0) || (iVar4 = _EXCEED_INDEX(this,param_1,1), iVar4 != 0)) {
      puVar1 = &(this->CHgAvtr_data).field_0x7e;
      cVar2 = *puVar1;
      cVar3 = (this->CHgAvtr_data).field_0x7f;
      local_4._0_3_ = (uint3)*(ushort *)puVar1;
      if (((byte)(cVar2 - 0x30U) < 10) && ((byte)(cVar3 - 0x30U) < 10)) {
        iVar4 = atoi((char *)&local_4);
      }
      else {
        iVar4 = cVar2 * 0x1a + -0x4bd + (int)cVar3;
      }
      iVar4 = _Drawgali(this,param_1,0xc,param_2,iVar4);
      return (uint)(iVar4 != 0);
    }
  }
  return 0;
}



/* ---- _ACreateAvatarSurFace_Step1 @ 6050c480 size=378 ---- */

/* private: int __thiscall CHgAvtr::_ACreateAvatarSurFace_Step1(class CHgAImage &,int,int,int,int)
    */

int __thiscall
CHgAvtr::_ACreateAvatarSurFace_Step1
          (CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint local_4;
  
                    /* 0xc480  230  ?_ACreateAvatarSurFace_Step1@CHgAvtr@@AAEHAAVCHgAImage@@HHHH@Z
                        */
  puVar1 = &(this->CHgAvtr_data).field_0x78;
  local_4 = (uint)*(ushort *)puVar1;
  if (((byte)(*puVar1 - 0x30) < 10) && ((byte)((this->CHgAvtr_data).field_0x79 - 0x30) < 10)) {
    atoi((char *)&local_4);
  }
  iVar4 = FUN_6050e190(&DAT_605291b8 + param_3 * 0x4e0,param_1);
  if ((iVar4 != 0) || (iVar4 = _EXCEED_INDEX(this,param_1,1), iVar4 != 0)) {
    local_4._0_3_ = (uint3)*(ushort *)&(this->CHgAvtr_data).field_0x80;
    iVar4 = atoi((char *)&local_4);
    iVar5 = FUN_6050e190(&DAT_60521910 + param_2 * 0x138,param_1);
    if ((iVar5 != 0) || (iVar5 = _EXCEED_INDEX(this,param_1,1), iVar5 != 0)) {
      puVar1 = &(this->CHgAvtr_data).field_0x7a;
      cVar2 = *puVar1;
      cVar3 = (this->CHgAvtr_data).field_0x7b;
      local_4._0_3_ = (uint3)*(ushort *)puVar1;
      if (((byte)(cVar2 - 0x30U) < 10) && ((byte)(cVar3 - 0x30U) < 10)) {
        iVar5 = atoi((char *)&local_4);
      }
      else {
        iVar5 = cVar2 * 0x1a + -0x4bd + (int)cVar3;
      }
      iVar5 = _Drawgali(this,param_1,0xd,param_3 * 4 + 2,iVar5);
      if ((iVar5 != 0) && (iVar5 = _Drawgali(this,param_1,4,param_3 * 4,param_4 + 1), iVar5 != 0)) {
        iVar4 = _Drawgali(this,param_1,10,param_2,iVar4);
        return (uint)(iVar4 != 0);
      }
    }
  }
  return 0;
}



/* ---- _ACreateAvatarSurFace_Step2 @ 6050c600 size=430 ---- */

/* private: int __thiscall CHgAvtr::_ACreateAvatarSurFace_Step2(class CHgAImage &,int,int,int,int)
    */

int __thiscall
CHgAvtr::_ACreateAvatarSurFace_Step2
          (CHgAvtr *this,CHgAImage *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint local_4;
  
                    /* 0xc600  231  ?_ACreateAvatarSurFace_Step2@CHgAvtr@@AAEHAAVCHgAImage@@HHHH@Z
                        */
  local_4 = (uint)*(ushort *)&(this->CHgAvtr_data).field_0x76;
  iVar4 = atoi((char *)&local_4);
  iVar4 = _AFace(this,param_1,iVar4,param_3,param_4);
  if (iVar4 != 0) {
    puVar1 = &(this->CHgAvtr_data).field_0x7a;
    local_4._0_3_ = (uint3)*(ushort *)puVar1;
    if (((byte)(*puVar1 - 0x30) < 10) && ((byte)((this->CHgAvtr_data).field_0x7b - 0x30) < 10)) {
      atoi((char *)&local_4);
    }
    iVar4 = FUN_6050e190(&DAT_60529080 + param_3 * 0x4e0,param_1);
    if (((iVar4 != 0) || (iVar4 = _EXCEED_INDEX(this,param_1,1), iVar4 != 0)) &&
       (iVar4 = _Drawgali(this,param_1,1,param_2,param_5), iVar4 != 0)) {
      puVar1 = &(this->CHgAvtr_data).field_0x7c;
      cVar2 = *puVar1;
      cVar3 = (this->CHgAvtr_data).field_0x7d;
      local_4._0_3_ = (uint3)*(ushort *)puVar1;
      if (((byte)(cVar2 - 0x30U) < 10) && ((byte)(cVar3 - 0x30U) < 10)) {
        iVar4 = atoi((char *)&local_4);
      }
      else {
        iVar4 = cVar2 * 0x1a + -0x4bd + (int)cVar3;
      }
      iVar4 = _Drawgali(this,param_1,0xc,param_3 * 4 + 1,iVar4);
      if (iVar4 != 0) {
        puVar1 = &(this->CHgAvtr_data).field_0x7e;
        cVar2 = *puVar1;
        cVar3 = (this->CHgAvtr_data).field_0x7f;
        local_4._0_3_ = (uint3)*(ushort *)puVar1;
        if (((byte)(cVar2 - 0x30U) < 10) && ((byte)(cVar3 - 0x30U) < 10)) {
          iVar4 = atoi((char *)&local_4);
        }
        else {
          iVar4 = cVar2 * 0x1a + -0x4bd + (int)cVar3;
        }
        iVar4 = _Drawgali(this,param_1,0xc,param_3 * 4,iVar4);
        return (uint)(iVar4 != 0);
      }
    }
  }
  return 0;
}



/* ---- FUN_6050c7b0 @ 6050c7b0 size=253 ---- */

void FUN_6050c7b0(int param_1)

{
  rsize_t _DstSize;
  void *_Dst;
  int iVar1;
  int in_EAX;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (in_EAX != param_1) {
    pvVar3 = *(void **)(param_1 + 0xc);
    uVar2 = *(int *)(param_1 + 0x10) - (int)pvVar3 >> 2;
    if (uVar2 == 0) {
      FUN_6050cc60();
      return;
    }
    _Dst = *(void **)(in_EAX + 0xc);
    if (uVar2 <= (uint)(*(int *)(in_EAX + 0x10) - (int)_Dst >> 2)) {
      iVar5 = *(int *)(param_1 + 0x10) - (int)pvVar3 >> 2;
      if (0 < iVar5) {
        _DstSize = iVar5 * 4;
        memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
      }
      *(int *)(in_EAX + 0x10) =
           *(int *)(in_EAX + 0xc) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2) * 4;
      return;
    }
    if (_Dst == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(in_EAX + 0x14) - (int)_Dst >> 2;
    }
    if (uVar2 <= uVar6) {
      FUN_60505a70(*(undefined4 *)(param_1 + 0xc),_Dst);
      pvVar3 = FUN_605086f0(extraout_ECX,*(void **)(in_EAX + 0x10));
      *(void **)(in_EAX + 0x10) = pvVar3;
      return;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    if ((iVar5 - iVar1 >> 2 != 0) && (uVar4 = FUN_605056f0(), (char)uVar4 != '\0')) {
      pvVar3 = FUN_605086f0(extraout_ECX_00,*(void **)(in_EAX + 0xc));
      *(void **)(in_EAX + 0x10) = pvVar3;
    }
  }
  return;
}



/* ---- FUN_6050c8b0 @ 6050c8b0 size=264 ---- */

int * __thiscall FUN_6050c8b0(void *this,int *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  uint uVar2;
  undefined4 *extraout_EAX;
  undefined4 *puVar3;
  uint uVar4;
  uint extraout_EAX_00;
  void *pvVar5;
  void *extraout_EAX_01;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  length_error *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_605173f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *extraout_EAX = param_1;
    puVar3 = extraout_EAX;
  }
  *param_1 = (int)puVar3;
  local_8 = 0;
  this_00 = (length_error *)(*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc));
  uVar2 = (int)this_00 / 0x1c;
  uVar4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar2 != 0) {
    if (0x9249249 < uVar2) {
      std::length_error::length_error(this_00);
      uVar4 = extraout_EAX_00;
    }
    if (uVar4 < uVar2) {
      std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar2);
      pvVar5 = extraout_EAX_01;
    }
    else {
      pvVar5 = operator_new(uVar4);
    }
    param_1[3] = (int)pvVar5;
    param_1[4] = (int)pvVar5;
    param_1[5] = (int)((int)pvVar5 + uVar2 * 0x1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)this + 0x10);
    if (pbVar1 < *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  ((int)this + 0xc)) {
      _invalid_parameter_noinfo();
    }
    pvVar5 = *(void **)((int)this + 0xc);
    if (*(void **)((int)this + 0x10) < pvVar5) {
      _invalid_parameter_noinfo();
    }
    pbVar6 = FUN_6050d6e0(pvVar5,pbVar1,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          param_1[3]);
    param_1[4] = (int)pbVar6;
  }
  ExceptionList = local_10;
  return param_1;
}



/* ---- Catch_All@6050c9b8 @ 6050c9b8 size=17 ---- */

void Catch_All_6050c9b8(void)

{
  FUN_6050cd60();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_6050c9d0 @ 6050c9d0 size=80 ---- */

void FUN_6050c9d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60517208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_6050cd60();
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_6050ca20 @ 6050ca20 size=378 ---- */

int FUN_6050ca20(int param_1)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  uint uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBX;
  uint uVar8;
  
  if (param_1 != unaff_EBX) {
    iVar7 = *(int *)(unaff_EBX + 0x10) - *(int *)(unaff_EBX + 0xc);
    iVar1 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 0x1c + iVar1;
    uVar8 = iVar7 - iVar1;
    if (iVar7 == iVar1) {
      FUN_6050ccb0();
      return param_1;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    uVar4 = (*(int *)(param_1 + 0x10) - iVar1) / 0x1c;
    if (uVar8 <= uVar4) {
      this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_6050d600(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            **)(unaff_EBX + 0xc));
      pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x10)
      ;
      for (; this != pbVar2; this = this + 0x1c) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
      }
      *(int *)(param_1 + 0x10) =
           *(int *)(param_1 + 0xc) +
           ((*(int *)(unaff_EBX + 0x10) - *(int *)(unaff_EBX + 0xc)) / 0x1c) * 0x1c;
      return param_1;
    }
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(param_1 + 0x14) - iVar1) / 0x1c;
    }
    if (uVar8 <= uVar5) {
      pbVar3 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (unaff_EBX + 0xc);
      FUN_6050d600(pbVar3);
      uVar6 = FUN_6050d650(*(undefined4 *)(unaff_EBX + 0x10),
                           *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                            (param_1 + 0x10),pbVar3 + uVar4 * 0x1c,
                           (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)*(undefined4 *)(unaff_EBX + 0x10));
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      return param_1;
    }
    if (iVar1 != 0) {
      FUN_6050cd40();
      operator_delete(*(void **)(param_1 + 0xc));
    }
    iVar7 = *(int *)(unaff_EBX + 0x10) - *(int *)(unaff_EBX + 0xc);
    iVar1 = iVar7 >> 0x1f;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if ((iVar7 / 0x1c + iVar1 != iVar1) && (uVar6 = FUN_6050cd00(), (char)uVar6 != '\0')) {
      uVar6 = FUN_6050d650(*(undefined4 *)(unaff_EBX + 0xc),
                           *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                            (param_1 + 0xc),(void *)*(undefined4 *)(unaff_EBX + 0xc),
                           *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                             **)(unaff_EBX + 0x10));
      *(undefined4 *)(param_1 + 0x10) = uVar6;
    }
  }
  return param_1;
}



/* ---- FUN_6050cba0 @ 6050cba0 size=145 ---- */

int * FUN_6050cba0(int *param_1)

{
  undefined4 *extraout_EAX;
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60517838;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *extraout_EAX = param_1;
    puVar1 = extraout_EAX;
  }
  *param_1 = (int)puVar1;
  local_8 = 0;
  iVar2 = FUN_6050d420();
  param_1[6] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(int *)(param_1[6] + 4) = param_1[6];
  *(int *)param_1[6] = param_1[6];
  *(int *)(param_1[6] + 8) = param_1[6];
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[7] = 0;
  FUN_6050cf10();
  ExceptionList = local_10;
  return param_1;
}



/* ---- Catch_All@6050cc31 @ 6050cc31 size=17 ---- */

void Catch_All_6050cc31(void)

{
  FUN_6050cf80();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_6050cc50 @ 6050cc50 size=10 ---- */

void FUN_6050cc50(void)

{
  undefined4 *in_EAX;
  
  operator_delete((void *)*in_EAX);
  return;
}



/* ---- FUN_6050cc60 @ 6050cc60 size=74 ---- */

void FUN_6050cc60(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  
  pvVar1 = (void *)in_EAX[4];
  if (pvVar1 < (void *)in_EAX[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = in_EAX[3];
  uVar3 = *in_EAX;
  if ((uint)in_EAX[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_605057e0(*in_EAX,uVar2,uVar3,pvVar1);
  return;
}



/* ---- FUN_6050ccb0 @ 6050ccb0 size=75 ---- */

void FUN_6050ccb0(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  uint uVar2;
  int *in_EAX;
  int local_10 [3];
  
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)in_EAX[4]
  ;
  if (pbVar1 < (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               in_EAX[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = in_EAX[3];
  local_10[0] = *in_EAX;
  if ((uint)in_EAX[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_6050cfc0(local_10,*in_EAX,uVar2,local_10[0],pbVar1);
  return;
}



/* ---- FUN_6050cd00 @ 6050cd00 size=60 ---- */

undefined4 FUN_6050cd00(void)

{
  undefined4 extraout_EAX;
  void *pvVar1;
  void *extraout_EAX_00;
  length_error *in_ECX;
  uint unaff_ESI;
  int unaff_EDI;
  
  if (0x9249249 < unaff_ESI) {
    std::length_error::length_error(in_ECX);
    return extraout_EAX;
  }
  if (unaff_ESI == 0) {
    pvVar1 = operator_new(0);
  }
  else {
    std::bad_alloc::bad_alloc_Constructor_or_Destructor(unaff_ESI);
    pvVar1 = extraout_EAX_00;
  }
  *(void **)(unaff_EDI + 0xc) = pvVar1;
  *(void **)(unaff_EDI + 0x10) = pvVar1;
  *(void **)(unaff_EDI + 0x14) = (void *)((int)pvVar1 + unaff_ESI * 0x1c);
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}



/* ---- FUN_6050cd40 @ 6050cd40 size=24 ---- */

void FUN_6050cd40(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_EAX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x1c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(in_EAX);
  }
  return;
}



/* ---- FUN_6050cd60 @ 6050cd60 size=67 ---- */

void FUN_6050cd60(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int unaff_EBX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBX + 0xc);
  if (this != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBX + 0x10)
    ;
    for (; this != pbVar1; this = this + 0x1c) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
    }
    operator_delete(*(void **)(unaff_EBX + 0xc));
  }
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  *(undefined4 *)(unaff_EBX + 0x10) = 0;
  *(undefined4 *)(unaff_EBX + 0x14) = 0;
  return;
}



/* ---- FUN_6050cdb0 @ 6050cdb0 size=124 ---- */

int * FUN_6050cdb0(int *param_1)

{
  undefined4 *extraout_EAX;
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *extraout_EAX = param_1;
    puVar1 = extraout_EAX;
  }
  *param_1 = (int)puVar1;
  local_4 = 0;
  iVar2 = FUN_6050d420();
  param_1[6] = iVar2;
  *(undefined1 *)(iVar2 + 0x2d) = 1;
  *(int *)(param_1[6] + 4) = param_1[6];
  *(int *)param_1[6] = param_1[6];
  *(int *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_6050ce30 @ 6050ce30 size=220 ---- */

void FUN_6050ce30(int *param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 local_8 [2];
  
  piVar1 = *(int **)in_EAX[6];
  if ((param_2 == 0) || (param_2 != *in_EAX)) {
    _invalid_parameter_noinfo();
  }
  if (param_3 == piVar1) {
    piVar1 = (int *)in_EAX[6];
    if ((param_4 == 0) || (param_4 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    if (param_5 == piVar1) {
      FUN_6050d460(*(int **)(in_EAX[6] + 4));
      *(int *)(in_EAX[6] + 4) = in_EAX[6];
      in_EAX[7] = 0;
      *(int *)in_EAX[6] = in_EAX[6];
      *(int *)(in_EAX[6] + 8) = in_EAX[6];
      iVar2 = *in_EAX;
      param_1[1] = *(int *)in_EAX[6];
      *param_1 = iVar2;
      return;
    }
  }
  while( true ) {
    if ((param_2 == 0) || (param_2 != param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3 == param_5) break;
    FUN_6050d590();
    FUN_6050d060(in_EAX,local_8,param_2,param_3);
  }
  *param_1 = *in_EAX;
  param_1[1] = (int)param_3;
  return;
}



/* ---- FUN_6050cf10 @ 6050cf10 size=108 ---- */

void FUN_6050cf10(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *in_EAX;
  undefined4 *puVar7;
  int unaff_EBX;
  
  iVar2 = *(int *)((int)in_EAX + 0x18);
  puVar7 = FUN_6050d350(in_EAX,*(undefined4 **)(*(int *)(unaff_EBX + 0x18) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)((int)in_EAX + 0x18);
  *(undefined4 *)((int)in_EAX + 0x1c) = *(undefined4 *)(unaff_EBX + 0x1c);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x2d) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)((int)in_EAX + 0x18) + 8) = *(int *)((int)in_EAX + 0x18);
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0x2d);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x2d);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)((int)in_EAX + 0x18) + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x2d);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x2d);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)((int)in_EAX + 0x18) + 8) = iVar2;
  return;
}



/* ---- FUN_6050cf80 @ 6050cf80 size=56 ---- */

void FUN_6050cf80(void)

{
  int *unaff_ESI;
  int local_10 [3];
  
  FUN_6050ce30(local_10,*unaff_ESI,*(int **)unaff_ESI[6],*unaff_ESI,(int *)unaff_ESI[6]);
  operator_delete((void *)unaff_ESI[6]);
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  return;
}



/* ---- FUN_6050cfc0 @ 6050cfc0 size=148 ---- */

int * FUN_6050cfc0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_5)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int *unaff_ESI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  *param_1 = 0;
  if (((unaff_ESI == (int *)0x0) || (param_3 < (uint)unaff_ESI[3])) ||
     ((uint)unaff_ESI[4] < param_3)) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *unaff_ESI;
  param_1[1] = param_3;
  if ((param_5 < (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 unaff_ESI[3]) ||
     ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)unaff_ESI[4] <
      param_5)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_1 == 0) || (*param_1 != *unaff_ESI)) {
    _invalid_parameter_noinfo();
  }
  if ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_1[1] ==
      param_5) {
    return param_1;
  }
  pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_6050d600(param_5);
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)unaff_ESI[4];
  for (this = pbVar2; this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  }
  unaff_ESI[4] = (int)pbVar2;
  return param_1;
}



/* ---- FUN_6050d060 @ 6050d060 size=740 ---- */

/* WARNING: Removing unreachable block (ram,0x6050d176) */
/* WARNING: Removing unreachable block (ram,0x6050d187) */
/* WARNING: Removing unreachable block (ram,0x6050d190) */
/* WARNING: Removing unreachable block (ram,0x6050d193) */
/* WARNING: Removing unreachable block (ram,0x6050d183) */
/* WARNING: Removing unreachable block (ram,0x6050d1a0) */
/* WARNING: Removing unreachable block (ram,0x6050d1b1) */
/* WARNING: Removing unreachable block (ram,0x6050d1bc) */
/* WARNING: Removing unreachable block (ram,0x6050d1b8) */
/* WARNING: Removing unreachable block (ram,0x6050d1ac) */
/* WARNING: Removing unreachable block (ram,0x6050d1bf) */
/* WARNING: Removing unreachable block (ram,0x6050d1cf) */

undefined4 * FUN_6050d060(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

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
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605173c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_4 + 0x2d) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_50,"invalid map/set<T> iterator");
    local_4 = 0;
                    /* inlined constructor: std::out_of_range::out_of_range */
    std::logic_error::logic_error
              (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_34);
    local_34[0].vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_6051a24c);
  }
  FUN_6050d590();
  piVar8 = (int *)*param_4;
  if (*(char *)((int)piVar8 + 0x2d) == '\0') {
    if (*(char *)(param_4[2] + 0x2d) == '\0') {
      piVar8 = (int *)param_4[2];
    }
  }
  else {
    piVar8 = (int *)param_4[2];
  }
  piVar6 = (int *)param_4[1];
  if (*(char *)((int)piVar8 + 0x2d) == '\0') {
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
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0x2d);
      piVar7 = (int *)*piVar8;
      piVar5 = piVar8;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar7 + 0x2d);
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
    if (*(char *)((int)piVar8 + 0x2d) == '\0') {
      uVar4 = FUN_6050d400();
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar6;
    }
  }
  if ((char)param_4[0xb] == '\x01') {
    if (piVar8 != *(int **)(param_1[6] + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[0xb] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_605120e0(piVar7,(int)param_1);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(*piVar6 + 0x2c) == '\x01') && (*(char *)(piVar6[2] + 0x2c) == '\x01'))
            goto LAB_6050d2a7;
            if (*(char *)(piVar6[2] + 0x2c) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              *(undefined1 *)(piVar6 + 0xb) = 0;
              FUN_6050d4a0(piVar6,(int)param_1);
              piVar6 = (int *)piVar7[2];
            }
            *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
            *(undefined1 *)(piVar7 + 0xb) = 1;
            *(undefined1 *)(piVar6[2] + 0x2c) = 1;
            FUN_605120e0(piVar7,(int)param_1);
            break;
          }
        }
        else {
          if ((char)piVar6[0xb] == '\0') {
            *(undefined1 *)(piVar6 + 0xb) = 1;
            *(undefined1 *)(piVar7 + 0xb) = 0;
            FUN_6050d4a0(piVar7,(int)param_1);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x2d) == '\0') {
            if ((*(char *)(piVar6[2] + 0x2c) != '\x01') || (*(char *)(*piVar6 + 0x2c) != '\x01')) {
              if (*(char *)(*piVar6 + 0x2c) == '\x01') {
                *(undefined1 *)(piVar6[2] + 0x2c) = 1;
                *(undefined1 *)(piVar6 + 0xb) = 0;
                FUN_605120e0(piVar6,(int)param_1);
                piVar6 = (int *)*piVar7;
              }
              *(char *)(piVar6 + 0xb) = (char)piVar7[0xb];
              *(undefined1 *)(piVar7 + 0xb) = 1;
              *(undefined1 *)(*piVar6 + 0x2c) = 1;
              FUN_6050d4a0(piVar7,(int)param_1);
              break;
            }
LAB_6050d2a7:
            *(undefined1 *)(piVar6 + 0xb) = 0;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(param_1[6] + 4));
    }
    *(undefined1 *)(piVar8 + 0xb) = 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_4 + 3));
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



/* ---- FUN_6050d350 @ 6050d350 size=154 ---- */

undefined4 * __thiscall FUN_6050d350(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60517180;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = *(undefined4 **)((int)this + 0x18);
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    puVar1 = FUN_6050d4f0(param_1 + 3,local_18,param_2,local_18,*(undefined1 *)(param_1 + 0xb));
    if (*(char *)((int)local_18 + 0x2d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_6050d350(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_6050d350(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



/* ---- Catch_All@6050d3ea @ 6050d3ea size=21 ---- */

void Catch_All_6050d3ea(void)

{
  int unaff_EBP;
  
  FUN_6050d460(*(int **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_6050d400 @ 6050d400 size=28 ---- */

void FUN_6050d400(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_6050d420 @ 6050d420 size=55 ---- */

void FUN_6050d420(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}



/* ---- FUN_6050d460 @ 6050d460 size=62 ---- */

void FUN_6050d460(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  while (cVar1 == '\0') {
    FUN_6050d460((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 3));
    operator_delete(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}



/* ---- FUN_6050d4a0 @ 6050d4a0 size=80 ---- */

void __thiscall FUN_6050d4a0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
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



/* ---- FUN_6050d4f0 @ 6050d4f0 size=138 ---- */

undefined4 * __thiscall
FUN_6050d4f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60517165;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    puVar1[2] = param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 3),this)
    ;
    puVar1[10] = *(undefined4 *)((int)this + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = param_4;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@6050d57a @ 6050d57a size=21 ---- */

void Catch_All_6050d57a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_6050d590 @ 6050d590 size=99 ---- */

void FUN_6050d590(void)

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
    unaff_ESI[1] = (int)piVar3;
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while ((cVar1 == '\0' && (unaff_ESI[1] == *(int *)(iVar2 + 8)))) {
    unaff_ESI[1] = iVar2;
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  unaff_ESI[1] = iVar2;
  return;
}



/* ---- FUN_6050d600 @ 6050d600 size=71 ---- */

int __fastcall
FUN_6050d600(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *unaff_EDI;
  
  iVar1 = (int)unaff_EDI - (int)param_1;
  if (param_1 != unaff_EDI) {
    iVar2 = in_EAX - (int)param_1;
    do {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_1 + iVar2),param_1);
      param_1 = param_1 + 0x1c;
    } while (param_1 != unaff_EDI);
  }
  return in_EAX + (iVar1 / 0x1c) * 0x1c;
}



/* ---- FUN_6050d650 @ 6050d650 size=35 ---- */

void __fastcall
FUN_6050d650(undefined4 param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,void *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  FUN_6050d6e0(param_3,param_4,param_2);
  return;
}



/* ---- bad_alloc_Constructor_or_Destructor @ 6050d680 size=86 ---- */

void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1)

{
  char *local_10;
  exception local_c [3];
  
  if ((uint)(0xffffffff / (ulonglong)param_1) < 0x1c) {
    local_10 = (char *)0x0;
    std::exception::exception(local_c,&local_10);
    local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_6051a210);
  }
  operator_new(param_1 * 0x1c);
  return;
}



/* ---- FUN_6050d6e0 @ 6050d6e0 size=112 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_6050d6e0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_60517145;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != param_1; this = (void *)((int)this + 0x1c)) {
    local_8 = 1;
    if (param_2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_2,this);
    }
    param_2 = param_2 + 0x1c;
  }
  ExceptionList = local_10;
  return param_2;
}



/* ---- Catch_All@6050d73c @ 6050d73c size=34 ---- */

void Catch_All_6050d73c(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int unaff_EBP;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBP + 0xc);
  for (this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
               (unaff_EBP + -0x14); this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- ~logic_error @ 6050d780 size=27 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
                    /* WARNING: Could not recover jumptable at 0x6050d795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception((exception *)this);
  return;
}



/* ---- FUN_6050d7a0 @ 6050d7a0 size=25 ---- */

logic_error * __thiscall FUN_6050d7a0(logic_error *param_1,exception *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  param_1->vftablePtr = (logic_error_vftable *)&std::out_of_range::vftable;
  return param_1;
}



/* ---- InitAvatarDll @ 6050d7c0 size=44 ---- */

/* int __cdecl InitAvatarDll(void) */

int __cdecl InitAvatarDll(void)

{
  int iVar1;
  
                    /* 0xd7c0  170  ?InitAvatarDll@@YAHXZ */
  iVar1 = CAvtrPartPool::CreateInstance();
  InitDefaultAvatars();
  CAvtrPartPool::CreateDLThread();
  DAT_605217b4 = 0;
  DAT_605217b8 = 0;
  DAT_605217bc = 0;
  DAT_605217c0 = 0;
  return iVar1;
}



/* ---- DestroyAvatarDll @ 6050d7f0 size=97 ---- */

/* void __cdecl DestroyAvatarDll(void) */

void __cdecl DestroyAvatarDll(void)

{
  CAvtrDownloadThread *pCVar1;
  int *piVar2;
  
                    /* 0xd7f0  93  ?DestroyAvatarDll@@YAXXZ */
  pCVar1 = CAvtrPartPool::m_pAvtrDnThread;
  if (CAvtrPartPool::m_pAvtrDnThread != (CAvtrDownloadThread *)0x0) {
    FUN_60514cf0((undefined4 *)CAvtrPartPool::m_pAvtrDnThread);
    operator_delete(pCVar1);
  }
  CAvtrPartPool::m_pAvtrDnThread = (CAvtrDownloadThread *)0x0;
  DestroyDefaultAvatar();
  CAvtrPartPool::DestroyInstance();
  FUN_6050da80();
  piVar2 = &DAT_605217b4;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x605217c4);
  return;
}



/* ---- FUN_6050d860 @ 6050d860 size=76 ---- */

void __cdecl FUN_6050d860(char *param_1,char param_2)

{
  char local_20c [520];
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)local_20c;
  vsprintf_s(local_20c,0x208,param_1,&param_2);
  __security_check_cookie(local_4 ^ (uint)local_20c);
  return;
}



/* ---- FUN_6050d8b0 @ 6050d8b0 size=452 ---- */

void __fastcall FUN_6050d8b0(LPCSTR param_1)

{
  char cVar1;
  _WIN32_FIND_DATAA *p_Var2;
  char *pcVar3;
  HANDLE hFindFile;
  int iVar4;
  BOOL BVar5;
  _WIN32_FIND_DATAA *p_Var6;
  int iVar7;
  _WIN32_FIND_DATAA *lpFindFileData;
  undefined1 auStack_5b4 [4];
  BOOL local_5b0;
  HANDLE local_5ac;
  _WIN32_FIND_DATAA local_5a4;
  _WIN32_FIND_DATAA local_464;
  CHAR local_324 [264];
  CHAR local_21c [264];
  char local_114 [268];
  uint local_8;
  
  local_8 = DAT_6052101c ^ (uint)auStack_5b4;
  lstrcpyA(local_21c,param_1);
  lstrcatA(local_21c,"\\*.*");
  pcVar3 = local_21c;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(local_21c + 1)) < 0x104) {
    lstrcpyA(local_5a4.cFileName,local_21c);
    hFindFile = FindFirstFileA(local_21c,&local_5a4);
    local_5ac = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      pcVar3 = _fullpath(local_114,param_1,0x104);
      if (pcVar3 == (char *)0x0) {
        FindClose(hFindFile);
      }
      else {
        iVar7 = 0;
        p_Var2 = &local_5a4;
        lpFindFileData = &local_464;
        do {
          p_Var6 = p_Var2;
          iVar7 = iVar7 + 1;
          local_5b0 = FindNextFileA(local_5ac,lpFindFileData);
          if (99 < iVar7) {
            local_5b0 = 0;
          }
          if ((((p_Var6 == (_WIN32_FIND_DATAA *)0x0) || ((p_Var6->dwFileAttributes >> 4 & 1) == 0))
              || (p_Var6->cFileName[0] != '.')) ||
             ((p_Var6->cFileName[1] != '\0' &&
              ((p_Var6->cFileName[1] != '.' || (p_Var6->cFileName[2] != '\0')))))) {
            lstrcpyA(local_324,local_114);
            iVar4 = lstrlenA(local_324);
            if ((local_464.cAlternateFileName[iVar4 + 0xf] != '\\') &&
               (iVar4 = lstrlenA(local_324), local_464.cAlternateFileName[iVar4 + 0xf] != '/')) {
              lstrcatA(local_324,"\\");
            }
            lstrcatA(local_324,p_Var6->cFileName);
            BVar5 = DeleteFileA(local_324);
            if (BVar5 == 0) {
              GetLastError();
            }
          }
          p_Var2 = lpFindFileData;
          lpFindFileData = p_Var6;
        } while (local_5b0 != 0);
        FindClose(local_5ac);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)auStack_5b4);
  return;
}



/* ---- FUN_6050da80 @ 6050da80 size=387 ---- */

void FUN_6050da80(void)

{
  int iVar1;
  errno_t eVar2;
  uint uVar3;
  undefined1 auStack_234 [4];
  int local_230;
  char local_22c [12];
  char local_220;
  undefined1 local_21f [263];
  char local_118;
  undefined1 local_117 [267];
  uint local_c;
  
  local_c = DAT_6052101c ^ (uint)auStack_234;
  local_220 = '\0';
  memset(local_21f,0,0x104);
  local_118 = '\0';
  memset(local_117,0,0x104);
  iVar1 = GetHangameDirectory(&local_220);
  if (iVar1 == 0) {
    GetTempPathA(0x105,&local_220);
  }
  FUN_60516290(&local_220,0x105,&local_118,"%s\\Avatar",(char)&local_220);
  FUN_6050d8b0(&local_118);
  local_230 = 2;
  do {
    local_22c[0] = '\0';
    local_22c[1] = '\0';
    local_22c[2] = '\0';
    local_22c[3] = '\0';
    local_22c[4] = '\0';
    local_22c[5] = '\0';
    local_22c[6] = '\0';
    local_22c[7] = '\0';
    local_22c[8] = '\0';
    local_22c[9] = 0;
    uVar3 = 0;
    do {
      _itoa_s(uVar3 % 0x1a,local_22c,10,0x10);
      strcpy_s(&local_220,0x105,&local_118);
      strcat_s(&local_220,0x105,"\\");
      strcat_s(&local_220,0x105,local_22c);
      eVar2 = _access_s(&local_220,0);
      if (eVar2 == 0) break;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x1a);
    if ((int)uVar3 < 0x1a) {
      FUN_6050d8b0(&local_220);
      RemoveDirectoryA(&local_220);
    }
    local_230 = local_230 + -1;
    if (local_230 == 0) {
      __security_check_cookie(local_c ^ (uint)auStack_234);
      return;
    }
  } while( true );
}



/* ---- FUN_6050dc10 @ 6050dc10 size=55 ---- */

undefined4 FUN_6050dc10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = _access("gstack",0);
    if (iVar1 != -1) {
      PTR_ReNameAvatarFile_605210f4 = FUN_6050d860;
      return 1;
    }
  }
  return 1;
}



/* ---- GetHangameDirectory @ 6050dc50 size=269 ---- */

/* int __cdecl GetHangameDirectory(char *) */

int __cdecl GetHangameDirectory(char *param_1)

{
  LSTATUS LVar1;
  int iVar2;
  HKEY local_130;
  DWORD local_12c [2];
  char local_124 [4];
  char local_120 [4];
  char local_11c [4];
  char local_118 [4];
  char local_114 [4];
  char local_110;
  CHAR local_10c [264];
  uint local_4;
  
                    /* 0xdc50  149  ?GetHangameDirectory@@YAHPAD@Z */
  local_4 = DAT_6052101c ^ (uint)&local_130;
  local_124 = (char  [4])s_Software_HanGame_Com_60519828._0_4_;
  local_120 = (char  [4])s_Software_HanGame_Com_60519828._4_4_;
  local_118 = (char  [4])s_Software_HanGame_Com_60519828._12_4_;
  local_11c = (char  [4])s_Software_HanGame_Com_60519828._8_4_;
  local_114 = (char  [4])s_Software_HanGame_Com_60519828._16_4_;
  local_110 = s_Software_HanGame_Com_60519828[0x14];
  FUN_60516290(local_10c,0x105,local_10c,"%s\\%s",(char)local_124);
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,local_10c,0,1,&local_130);
  if (LVar1 != 0) {
    iVar2 = __security_check_cookie(local_4 ^ (uint)&local_130);
    return iVar2;
  }
  local_12c[1] = 0x104;
  local_12c[0] = 1;
  LVar1 = RegQueryValueExA(local_130,"Home",(LPDWORD)0x0,local_12c,(LPBYTE)param_1,local_12c + 1);
  if (LVar1 != 0) {
    *param_1 = '\0';
  }
  RegCloseKey(local_130);
  iVar2 = __security_check_cookie(local_4 ^ (uint)&local_130);
  return iVar2;
}



/* ---- CHgAImage @ 6050dd60 size=44 ---- */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this)

{
                    /* inlined constructor: CGdiObject::CGdiObject */
  this->vftablePtr = (CHgAImage_vftable *)&CGdiObject::vftable;
  (this->CHgAImage_data).offset_0x0 = (int)&_vftable_;
  (this->CHgAImage_data).offset_0x4 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x1c = 0;
  (this->CHgAImage_data).offset_0x8 = 0;
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = 0;
  (this->CHgAImage_data).offset_0x18 = 0;
  *(undefined1 *)&(this->CHgAImage_data).offset_0x10 = 1;
  (this->CHgAImage_data).offset_0x14 = -1;
  return;
}



/* ---- ~CGdiObject @ 6050dd90 size=77 ---- */

void __thiscall CGdiObject::~CGdiObject(CGdiObject *this)

{
  void *pvVar1;
  
  this->vftablePtr = &vftable;
  pvVar1 = (this->CGdiObject_data).offset_0x1c;
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  (this->CGdiObject_data).offset_0x0 = &CHgAImage::_vftable_.deleting_destructor;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CGdiObject_data).offset_0x1c = (void *)0x0;
  }
  pvVar1 = (this->CGdiObject_data).offset_0x4;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    (this->CGdiObject_data).offset_0x4 = (void *)0x0;
  }
  (this->CGdiObject_data).offset_0x8 = 0;
  (this->CGdiObject_data).offset_0xc = 0;
  (this->CGdiObject_data).offset_0x10 = 1;
  (this->CGdiObject_data).offset_0x14 = 0xffffffff;
  return;
}



/* ---- FUN_6050dde0 @ 6050dde0 size=93 ---- */

undefined4 __fastcall FUN_6050dde0(CHgAImage *param_1)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  if ((0 < iVar1) && (unaff_EBX < iVar1)) {
    if (iVar1 < 2) {
      CHgAImage::DrawUnSafe
                ((CHgAImage *)param_1,0,0,(CHgAImage *)(in_EAX + 4),0,0,*(int *)(in_EAX + 0xc),
                 *(int *)(in_EAX + 0x10),0xff);
      return 1;
    }
    iVar1 = *(int *)(in_EAX + 0xc) / iVar1;
    CHgAImage::DrawUnSafe
              ((CHgAImage *)param_1,0,0,(CHgAImage *)(in_EAX + 4),iVar1 * unaff_EBX,0,iVar1,
               *(int *)(in_EAX + 0x10),0xff);
  }
  return 1;
}



/* ---- CHgAImage @ 6050de40 size=72 ---- */

void __thiscall CHgAImage::CHgAImage(CHgAImage *this)

{
                    /* inlined constructor: CAvatarLayer::CAvatarLayer */
  this->vftablePtr = (CHgAImage_vftable *)&CAvatarLayer::vftable;
                    /* inlined constructor: CGdiObject::CGdiObject */
  (this->CHgAImage_data).offset_0x0 = (int)&CGdiObject::vftable;
  (this->CHgAImage_data).offset_0x4 = (int)&_vftable_;
  (this->CHgAImage_data).offset_0x8 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x20 = 0;
  *(undefined4 *)&(this->CHgAImage_data).offset_0xc = 0;
  (this->CHgAImage_data).offset_0x10 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x1c = 0;
  *(undefined1 *)&(this->CHgAImage_data).offset_0x14 = 1;
  (this->CHgAImage_data).offset_0x18 = -1;
  *(undefined4 *)&(this->CHgAImage_data).field_0x128 = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x12c = 0;
  *(undefined4 *)&(this->CHgAImage_data).field_0x130 = 0;
  (this->CHgAImage_data).field_0x24 = 0;
  return;
}



/* ---- scalar_deleting_destructor @ 6050de90 size=30 ---- */

undefined4 * __thiscall CAvatarLayer::scalar_deleting_destructor(CAvatarLayer *this,byte param_1)

{
  ~CAvatarLayer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- ~CAvatarLayer @ 6050deb0 size=208 ---- */

void __thiscall CAvatarLayer::~CAvatarLayer(CAvatarLayer *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 auStack_e [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_6051739b;
  local_c = ExceptionList;
  uVar3 = DAT_6052101c ^ (uint)(auStack_e + -10);
  ExceptionList = &local_c;
  this->vftablePtr = &vftable;
  local_4 = 0;
  puVar1 = (undefined4 *)(this->CAvatarLayer_data).offset_0x128;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      operator_delete__(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3,uVar3);
    }
    (this->CAvatarLayer_data).offset_0x128 = 0;
  }
  pvVar2 = (void *)(this->CAvatarLayer_data).offset_0x130;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->CAvatarLayer_data).offset_0x130 = 0;
  }
                    /* inlined constructor or destructor (approx location) for CGdiObject */
  (this->CAvatarLayer_data).offset_0x0 = &CGdiObject::vftable.deleting_destructor;
  pvVar2 = (void *)(this->CAvatarLayer_data).offset_0x20;
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  (this->CAvatarLayer_data).offset_0x4 = &CHgAImage::_vftable_.deleting_destructor;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->CAvatarLayer_data).offset_0x20 = 0;
  }
  pvVar2 = (void *)(this->CAvatarLayer_data).offset_0x8;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    (this->CAvatarLayer_data).offset_0x8 = 0;
  }
  (this->CAvatarLayer_data).offset_0xc = 0;
  (this->CAvatarLayer_data).offset_0x10 = 0;
  (this->CAvatarLayer_data).offset_0x14 = 1;
  (this->CAvatarLayer_data).offset_0x18 = 0xffffffff;
  ExceptionList = local_c;
  return;
}



/* ---- FUN_6050df80 @ 6050df80 size=426 ---- */

void __thiscall FUN_6050df80(void *this,int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *_Dst;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint unaff_EDI;
  uint *local_120;
  undefined4 local_11c;
  void *local_118;
  undefined1 local_114 [260];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6051735e;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)&local_120;
  ExceptionList = &local_c;
  *(uint *)(param_1 + 0x130) = unaff_EDI;
  local_118 = this;
  _Dst = (void *)FUN_605162b0(-(uint)((int)((ulonglong)unaff_EDI * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)unaff_EDI * 4));
  *(void **)(param_1 + 0x134) = _Dst;
  memcpy(_Dst,this,unaff_EDI * 4);
  uVar4 = -(uint)((int)((ulonglong)unaff_EDI * 0x24 >> 0x20) != 0) |
          (uint)((ulonglong)unaff_EDI * 0x24);
  local_120 = (uint *)FUN_605162b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  iVar5 = 0;
  local_4 = 0;
  if (local_120 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  else {
    puVar6 = local_120 + 1;
    *local_120 = unaff_EDI;
    _eh_vector_constructor_iterator_
              (puVar6,0x24,unaff_EDI,CHgAImage::CHgAImage,CGdiObject::~CGdiObject);
  }
  local_4 = 0xffffffff;
  *(uint **)(param_1 + 300) = puVar6;
  puVar6 = (uint *)0x0;
  if (0 < (int)unaff_EDI) {
    do {
      local_120 = (uint *)((int)puVar6 + 1);
      iVar3 = FUN_6050e250((int)local_114,(int)local_120);
      if (iVar3 != 0) {
        local_11c = *(undefined4 *)((int)local_118 + (int)puVar6 * 4);
        iVar3 = *(int *)(param_1 + 300) + iVar5;
        cVar2 = (**(code **)(*(int *)(iVar3 + 4) + 4))(local_114,0xff0000);
        if (cVar2 == '\0') {
          puVar1 = *(undefined4 **)(param_1 + 300);
          if (puVar1 != (undefined4 *)0x0) {
            if (puVar1[-1] != 0) {
              (**(code **)*puVar1)(3);
              *(undefined4 *)(param_1 + 300) = 0;
              break;
            }
            operator_delete__(puVar1 + -1);
          }
          *(undefined4 *)(param_1 + 300) = 0;
          break;
        }
        *(undefined4 *)(iVar3 + 0x1c) = local_11c;
      }
      iVar5 = iVar5 + 0x24;
      puVar6 = local_120;
    } while ((int)local_120 < (int)unaff_EDI);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_120);
  return;
}



/* ---- scalar_deleting_destructor @ 6050e130 size=82 ---- */

undefined4 * __thiscall CGdiObject::scalar_deleting_destructor(CGdiObject *this,byte param_1)

{
  void **ppvVar1;
  
  if ((param_1 & 2) == 0) {
    ~CGdiObject(this);
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
    return &this->vftablePtr;
  }
  ppvVar1 = &this[-1].CGdiObject_data.offset_0x1c;
  _eh_vector_destructor_iterator_(this,0x24,(int)this[-1].CGdiObject_data.offset_0x1c,~CGdiObject);
  if ((param_1 & 1) != 0) {
    operator_delete__(ppvVar1);
  }
  return ppvVar1;
}



/* ---- FUN_6050e190 @ 6050e190 size=183 ---- */

undefined4 __thiscall FUN_6050e190(void *this,CHgAImage *param_1)

{
  CHgAImage *pCVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (in_EAX < *(int *)((int)this + 0x20)) {
    FUN_6050dde0(param_1);
    return 1;
  }
  iVar6 = *(int *)((int)this + 0x130);
  iVar5 = in_EAX - *(int *)((int)this + 0x20);
  iVar3 = 0;
  iVar2 = 0;
  if (0 < iVar6) {
    piVar4 = *(int **)((int)this + 0x134);
    do {
      if (iVar5 < *piVar4) break;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 - *piVar4;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < iVar6);
  }
  if (iVar6 <= iVar3) {
    return 0;
  }
  iVar6 = *(int *)(*(int *)((int)this + 300) + 0x1c + iVar3 * 0x24);
  pCVar1 = (CHgAImage *)(*(int *)((int)this + 300) + 4 + iVar3 * 0x24);
  if ((0 < iVar6) && (iVar5 < iVar6)) {
    iVar2 = *(int *)(pCVar1 + 8);
    if (iVar6 < 2) {
      iVar6 = *(int *)(pCVar1 + 0xc);
      iVar5 = 0;
    }
    else {
      iVar2 = iVar2 / iVar6;
      iVar6 = *(int *)(pCVar1 + 0xc);
      iVar5 = iVar2 * iVar5;
    }
    CHgAImage::DrawUnSafe((CHgAImage *)param_1,0,0,pCVar1,iVar5,0,iVar2,iVar6,0xff);
  }
  return 1;
}



/* ---- FUN_6050e250 @ 6050e250 size=455 ---- */

void FUN_6050e250(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int local_424;
  char *local_420;
  char local_41c [8];
  CHAR local_414 [8];
  char local_40c [260];
  char local_308 [256];
  char local_208 [256];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)&local_424;
  local_424 = param_1;
  local_40c[0] = '\0';
  memset(local_40c + 1,0,0x103);
  local_41c[0] = '\0';
  local_41c[1] = '\0';
  local_41c[2] = '\0';
  local_41c[3] = '\0';
  local_41c[4] = '\0';
  local_41c[5] = '\0';
  local_414[0] = '\0';
  local_414[1] = '\0';
  local_414[2] = '\0';
  local_414[3] = '\0';
  local_414[4] = '\0';
  local_414[5] = '\0';
  if (999 < param_2) {
    __security_check_cookie(local_4 ^ (uint)&local_424);
    return;
  }
  iVar4 = 0;
  iVar3 = param_2;
  do {
    iVar3 = iVar3 / 10;
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  strcpy_s(local_40c,0x104,"0");
  iVar4 = 3 - iVar4;
  if (0 < iVar4) {
    do {
      strcat_s(local_41c,6,local_40c);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  wsprintfA(local_414,"%d",param_2);
  strcat_s(local_41c,6,local_414);
  _splitpath_s(local_420,(char *)0x0,0,local_108,0x104,local_208,0x100,local_308,0x100);
  strcpy_s(local_40c,0x104,local_108);
  strcat_s(local_40c,0x104,local_208);
  strcat_s(local_40c,0x104,local_41c);
  strcat_s(local_40c,0x104,local_308);
  pcVar2 = local_40c;
  iVar3 = local_424 - (int)pcVar2;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar3] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  __security_check_cookie(local_4 ^ (uint)&local_424);
  return;
}



/* ---- FUN_6050e420 @ 6050e420 size=178 ---- */

void FUN_6050e420(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int unaff_ESI;
  int iVar5;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  puVar1[2] = puVar1[1];
  *puVar1 = 0;
  iVar5 = 0;
  if (0 < *(int *)(unaff_ESI + 0x10)) {
    do {
      piVar2 = *(int **)(unaff_ESI + 8);
      if (0x7f < *piVar2) {
        if (*(int *)piVar2[2] == 0) {
          pvVar4 = operator_new(0x804);
          *(void **)piVar2[2] = pvVar4;
          **(undefined4 **)piVar2[2] = 0;
        }
        piVar2[2] = *(int *)piVar2[2];
        *piVar2 = 0;
      }
      iVar3 = *piVar2;
      *piVar2 = iVar3 + 1;
      *(int *)(*(int *)(unaff_ESI + 4) + iVar5 * 4) = iVar3 * 0x10 + 4 + piVar2[2];
      **(undefined2 **)(*(int *)(unaff_ESI + 4) + iVar5 * 4) = 0;
      *(undefined2 *)(*(int *)(*(int *)(unaff_ESI + 4) + iVar5 * 4) + 2) =
           *(undefined2 *)(unaff_ESI + 0xc);
      *(undefined1 *)(*(int *)(*(int *)(unaff_ESI + 4) + iVar5 * 4) + 4) = 0;
      *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 4) + iVar5 * 4) + 8) =
           *(undefined4 *)(unaff_ESI + 0x14);
      iVar3 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 4) + iVar3) + 0xc) = 0;
    } while (iVar5 < *(int *)(unaff_ESI + 0x10));
  }
  return;
}



/* ---- scalar_deleting_destructor @ 6050e4e0 size=77 ---- */

undefined4 * __thiscall lsp::CLsp::scalar_deleting_destructor(CLsp *this,byte param_1)

{
                    /* inlined destructor: lsp::CLsp::~CLsp */
  this->vftablePtr = &vftable;
  if (this[1].vftablePtr != (CLsp_vftable *)0x0) {
    operator_delete__(this[1].vftablePtr);
  }
  if (this[2].vftablePtr != (CLsp_vftable *)0x0) {
    FUN_6050e530();
  }
  if (this[5].vftablePtr != (CLsp_vftable *)0x0) {
    operator_delete__(this[5].vftablePtr);
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_6050e530 @ 6050e530 size=47 ---- */

void FUN_6050e530(void)

{
  int iVar1;
  void *unaff_ESI;
  
  iVar1 = *(int *)((int)unaff_ESI + 4);
  while (iVar1 != 0) {
    *(undefined4 **)((int)unaff_ESI + 8) = *(undefined4 **)((int)unaff_ESI + 4);
    *(undefined4 *)((int)unaff_ESI + 4) = **(undefined4 **)((int)unaff_ESI + 4);
    operator_delete(*(void **)((int)unaff_ESI + 8));
    iVar1 = *(int *)((int)unaff_ESI + 4);
  }
  operator_delete(unaff_ESI);
  return;
}



/* ---- vfunction2 @ 6050e560 size=183 ---- */

/* lsp::CLsp member function inherited by lsp::CLspDib */

void __thiscall lsp::CLsp::vfunction2(CLsp *this,int param_1,uint param_2)

{
  vfunction4 *pvVar1;
  CLsp_vftable *pCVar2;
  vfunction3 *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6051711b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this[3].vftablePtr = (CLsp_vftable *)param_1;
  this[4].vftablePtr = (CLsp_vftable *)param_2;
  pCVar2 = (CLsp_vftable *)
           FUN_605162b0(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                        (uint)((ulonglong)param_2 * 4));
  this[1].vftablePtr = pCVar2;
  pCVar2 = operator_new(0xc);
  local_4 = 0;
  if (pCVar2 == (CLsp_vftable *)0x0) {
    pCVar2 = (CLsp_vftable *)0x0;
  }
  else {
    pCVar2->deleting_destructor = (deleting_destructor *)0x0;
    pvVar3 = operator_new(0x804);
    pCVar2->vfunction2 = (vfunction2 *)pvVar3;
    pCVar2->vfunction3 = pvVar3;
    *(undefined4 *)pvVar3 = 0;
  }
  local_4 = 0xffffffff;
  pvVar1 = this->vftablePtr->vfunction4;
  this[2].vftablePtr = pCVar2;
  (*pvVar1)(this);
  FUN_6050e420();
  ExceptionList = local_c;
  return;
}



/* ---- vfunction4 @ 6050e620 size=32 ---- */

void __thiscall lsp::CLsp::vfunction4(CLsp *this)

{
  CLsp_vftable *_Dst;
  
  _Dst = (CLsp_vftable *)FUN_605162b0((uint)this[3].vftablePtr);
  this[5].vftablePtr = _Dst;
  memset(_Dst,-1,(size_t)this[3].vftablePtr);
  return;
}



/* ---- FUN_6050e640 @ 6050e640 size=656 ---- */

void __fastcall
FUN_6050e640(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short *psVar1;
  int *piVar2;
  void *pvVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short *psVar9;
  short sVar10;
  int local_8;
  
  for (psVar9 = *(short **)(*(int *)(param_3 + 4) + param_2 * 4);
      (param_4 < *psVar9 || (psVar9[1] <= param_4)); psVar9 = *(short **)(psVar9 + 6)) {
  }
  if (0 < param_5) {
    do {
      psVar5 = psVar9;
      if ((char)psVar9[2] != '\0') {
        do {
          if (param_5 <= psVar9[1]) break;
          psVar9 = *(short **)(psVar9 + 6);
        } while ((char)psVar9[2] != '\0');
        psVar5 = psVar9;
        if ((char)psVar9[2] != '\0') {
          return;
        }
      }
      iVar8 = (int)psVar5[1];
      psVar1 = psVar5;
      iVar6 = iVar8;
      while ((psVar9 = psVar5, iVar6 < param_5 && ((char)psVar1[2] == '\0'))) {
        psVar1 = *(short **)(psVar1 + 6);
        iVar6 = (int)psVar1[1];
      }
      while (iVar8 < param_5) {
        iVar8 = (int)(*(short **)(psVar9 + 6))[1];
        psVar9 = *(short **)(psVar9 + 6);
      }
      iVar8 = (int)*psVar5;
      iVar6 = iVar8;
      if (iVar8 <= param_4) {
        iVar6 = param_4;
      }
      if ((char)psVar9[2] == '\0') {
        local_8 = (int)psVar9[1];
        if (param_5 <= local_8) {
          local_8 = param_5;
        }
      }
      else {
        local_8 = (int)*psVar9;
      }
      sVar10 = (short)iVar6;
      sVar7 = (short)local_8;
      if (psVar5 == psVar9) {
        piVar2 = *(int **)(param_3 + 8);
        if (0x7f < *piVar2) {
          if (*(int *)piVar2[2] == 0) {
            pvVar3 = operator_new(0x804);
            *(void **)piVar2[2] = pvVar3;
            **(undefined4 **)piVar2[2] = 0;
          }
          piVar2[2] = *(int *)piVar2[2];
          *piVar2 = 0;
        }
        psVar1 = (short *)(*piVar2 * 0x10 + 4 + piVar2[2]);
        *piVar2 = *piVar2 + 1;
        *psVar1 = *psVar5;
        psVar1[1] = psVar5[1];
        *(char *)(psVar1 + 2) = (char)psVar5[2];
        *(undefined4 *)(psVar1 + 4) = *(undefined4 *)(psVar5 + 4);
        *(undefined4 *)(psVar1 + 6) = *(undefined4 *)(psVar5 + 6);
        if (*psVar5 == iVar6) {
          psVar4 = psVar5;
        }
        else {
          piVar2 = *(int **)(param_3 + 8);
          if (0x7f < *piVar2) {
            if (*(int *)piVar2[2] == 0) {
              pvVar3 = operator_new(0x804);
              *(void **)piVar2[2] = pvVar3;
              **(undefined4 **)piVar2[2] = 0;
            }
            piVar2[2] = *(int *)piVar2[2];
            *piVar2 = 0;
          }
          psVar4 = (short *)(*piVar2 * 0x10 + 4 + piVar2[2]);
          *piVar2 = *piVar2 + 1;
          psVar5[1] = sVar10;
          *(short **)(psVar5 + 6) = psVar4;
        }
        *psVar4 = sVar10;
        *(short **)(psVar4 + 6) = psVar1;
        psVar4[1] = sVar7;
        *(undefined1 *)(psVar4 + 2) = 0;
        *(int *)(psVar4 + 4) = (iVar6 - param_4) + param_6;
        *psVar1 = sVar7;
        *(int *)(psVar1 + 4) = *(int *)(psVar1 + 4) + (local_8 - *psVar5);
      }
      else {
        if (iVar8 != iVar6) {
          piVar2 = *(int **)(param_3 + 8);
          if (0x7f < *piVar2) {
            if (*(int *)piVar2[2] == 0) {
              pvVar3 = operator_new(0x804);
              *(void **)piVar2[2] = pvVar3;
              **(undefined4 **)piVar2[2] = 0;
            }
            piVar2[2] = *(int *)piVar2[2];
            *piVar2 = 0;
          }
          psVar1 = (short *)(*piVar2 * 0x10 + 4 + piVar2[2]);
          *piVar2 = *piVar2 + 1;
          psVar5[1] = sVar10;
          *(short **)(psVar5 + 6) = psVar1;
          psVar5 = psVar1;
        }
        *psVar5 = sVar10;
        psVar5[1] = sVar7;
        *(undefined1 *)(psVar5 + 2) = 0;
        *(int *)(psVar5 + 4) = (iVar6 - param_4) + param_6;
        *(short **)(psVar5 + 6) = psVar9;
        *(int *)(psVar9 + 4) = *(int *)(psVar9 + 4) + (local_8 - *psVar9);
        *psVar9 = sVar7;
      }
    } while (local_8 < param_5);
  }
  return;
}



/* ---- FUN_6050e8e0 @ 6050e8e0 size=286 ---- */

void __thiscall FUN_6050e8e0(void *this,int param_1,int *param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  uint in_EAX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = *param_2 * 2 + (int)this * 2;
  uVar5 = ((int)in_EAX < 1) - 1 & in_EAX;
  local_10 = *(int *)(param_1 + 0xc);
  if (iVar4 <= *(int *)(param_1 + 0xc)) {
    local_10 = iVar4;
  }
  local_c = *(int *)(param_1 + 0x10);
  if ((int)(param_2[1] + in_EAX) <= *(int *)(param_1 + 0x10)) {
    local_c = param_2[1] + in_EAX;
  }
  if (((int)(((int)this < 1) - 1 & (uint)this) < local_10) && ((int)uVar5 < local_c)) {
    local_8 = (uVar5 - in_EAX) * 4;
    do {
      psVar1 = *(short **)(local_8 + param_2[2]);
      iVar4 = (int)this * 2;
      while (iVar4 < local_10) {
        iVar6 = (int)(short)(psVar1[1] * 2);
        iVar4 = iVar4 + (short)(*psVar1 * 2) + iVar6;
        if ((short)(psVar1[1] * 2) != 0) {
          if (iVar4 - iVar6 < 0) {
            sVar3 = 0;
          }
          else {
            sVar3 = (short)(iVar4 - iVar6);
          }
          if (iVar4 < *(int *)(param_1 + 0xc)) {
            sVar2 = (short)iVar4;
          }
          else {
            sVar2 = (short)*(int *)(param_1 + 0xc);
          }
          if (sVar3 < sVar2) {
            FUN_6050e640((int)sVar2,uVar5,param_1,(int)sVar3,(int)sVar2,
                         (sVar3 - iVar4) + iVar6 + 4 + (int)psVar1);
          }
          psVar1 = (short *)((int)psVar1 + iVar6 + 4);
        }
      }
      uVar5 = uVar5 + 1;
      local_8 = local_8 + 4;
    } while ((int)uVar5 < local_c);
  }
  return;
}



/* ---- CLspDib @ 6050ea10 size=166 ---- */

void __thiscall lsp::CLspDib::CLspDib(CLspDib *this)

{
  BOOL BVar1;
  undefined4 *unaff_ESI;
  bool bVar2;
  _OSVERSIONINFOA local_a0;
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)&local_a0;
  bVar2 = DAT_605210f0 == 0xffffffff;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[5] = 0;
  *unaff_ESI = &vftable;
  if (bVar2) {
    memset(&local_a0,0,0x9c);
    local_a0.dwOSVersionInfoSize = 0x9c;
    BVar1 = GetVersionExA(&local_a0);
    if (BVar1 == 0) {
      local_a0.dwOSVersionInfoSize = 0x94;
      BVar1 = GetVersionExA(&local_a0);
      if (BVar1 == 0) {
        DAT_605210f0 = 1;
        goto LAB_6050ea9d;
      }
    }
    DAT_605210f0 = (uint)(local_a0.dwPlatformId != 2);
  }
  unaff_ESI[0x13] = 0;
LAB_6050ea9d:
  __security_check_cookie(local_4 ^ (uint)&local_a0);
  return;
}



/* ---- scalar_deleting_destructor @ 6050eac0 size=30 ---- */

undefined4 * __thiscall lsp::CLspDib::scalar_deleting_destructor(CLspDib *this,byte param_1)

{
  ~CLspDib(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- ~CLspDib @ 6050eae0 size=84 ---- */

void __thiscall lsp::CLspDib::~CLspDib(CLspDib *this)

{
  HGDIOBJ ho;
  void *pvVar1;
  
  ho = (HGDIOBJ)(this->CLspDib_data).offset_0x48;
  this->vftablePtr = &vftable;
  if (ho != (HGDIOBJ)0x0) {
    DeleteObject(ho);
    (this->CLspDib_data).offset_0x48 = 0;
  }
  pvVar1 = (void *)(this->CLspDib_data).offset_0x0;
                    /* inlined destructor: lsp::CLsp::~CLsp */
  this->vftablePtr = (CLspDib_vftable *)&CLsp::vftable;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if ((this->CLspDib_data).offset_0x4 != 0) {
    FUN_6050e530();
  }
  pvVar1 = (void *)(this->CLspDib_data).offset_0x10;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}



/* ---- vfunction5 @ 6050eb40 size=174 ---- */

void __thiscall
lsp::CLspDib::vfunction5(CLspDib *this,int param_1,uint param_2,undefined2 param_3,int param_4)

{
  undefined1 *lpbmi;
  HDC hdc;
  HBITMAP pHVar1;
  
  *(undefined2 *)&(this->CLspDib_data).field_0x44 = param_3;
  CLsp::vfunction2((CLsp *)this,param_1 * param_4 + 1U & 0xfffffffc,param_2);
  lpbmi = &(this->CLspDib_data).field_0x14;
  memset(lpbmi,0,0x2c);
  *(undefined4 *)lpbmi = 0x28;
  *(undefined2 *)&(this->CLspDib_data).field_0x20 = 1;
  *(short *)&(this->CLspDib_data).field_0x22 = (short)param_4 * 8;
  *(undefined4 *)&(this->CLspDib_data).field_0x24 = 0;
  *(int *)&(this->CLspDib_data).field_0x18 = param_1;
  *(uint *)&(this->CLspDib_data).field_0x1c = -param_2;
  hdc = GetDC((HWND)0x0);
  pHVar1 = CreateDIBSection(hdc,(BITMAPINFO *)lpbmi,0,(void **)&(this->CLspDib_data).field_0x40,
                            (HANDLE)0x0,0);
  (this->CLspDib_data).offset_0x48 = pHVar1;
  if (pHVar1 == (HBITMAP)0x0) {
    ReleaseDC((HWND)0x0,hdc);
    return;
  }
  ReleaseDC((HWND)0x0,hdc);
  GdiFlush();
  return;
}



/* ---- vfunction4 @ 6050ebf0 size=61 ---- */

void __thiscall lsp::CLspDib::vfunction4(CLspDib *this)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)FUN_605162b0(*(uint *)&(this->CLspDib_data).field_0x8);
  (this->CLspDib_data).offset_0x10 = puVar1;
  iVar2 = 0;
  if (0 < *(int *)&(this->CLspDib_data).field_0x8 / 2) {
    do {
      *puVar1 = *(undefined2 *)&(this->CLspDib_data).field_0x44;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)&(this->CLspDib_data).field_0x8 / 2);
  }
  return;
}



/* ---- vfunction3 @ 6050ec30 size=80 ---- */

void __thiscall lsp::CLspDib::vfunction3(CLspDib *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)&(this->CLspDib_data).field_0x40;
  iVar3 = 0;
  if (0 < *(int *)&(this->CLspDib_data).field_0xc) {
    do {
      iVar4 = *(int *)((this->CLspDib_data).offset_0x0 + iVar3 * 4);
      iVar1 = 0;
      do {
        if (iVar4 == 0) break;
        if (*(void **)(iVar4 + 8) != (void *)0x0) {
          memcpy((void *)(iVar1 + iVar2),*(void **)(iVar4 + 8),*(short *)(iVar4 + 2) - iVar1);
          iVar1 = (int)*(short *)(iVar4 + 2);
        }
        iVar4 = *(int *)(iVar4 + 0xc);
      } while (iVar1 < *(int *)&(this->CLspDib_data).field_0x8);
      iVar2 = iVar2 + *(int *)&(this->CLspDib_data).field_0x8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)&(this->CLspDib_data).field_0xc);
  }
  return;
}



/* ---- FUN_6050ec80 @ 6050ec80 size=114 ---- */

void FUN_6050ec80(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int *in_EAX;
  HDC hdc;
  HGDIOBJ h;
  
  (**(code **)(*in_EAX + 8))();
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    h = SelectObject(hdc,(HGDIOBJ)in_EAX[0x13]);
    StretchBlt(param_1,param_2,param_3,param_6,param_7,hdc,param_4,param_5,param_6,param_7,0xcc0020)
    ;
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  return;
}



/* ---- FUN_6050ed00 @ 6050ed00 size=626 ---- */

void FUN_6050ed00(HDC param_1,HGDIOBJ param_2,int param_3,int param_4,int param_5,int param_6)

{
  int in_EAX;
  HDC hdc;
  HGDIOBJ h;
  HDC hdc_00;
  int iVar1;
  HBITMAP h_00;
  HGDIOBJ h_01;
  HDC hdc_01;
  HBITMAP h_02;
  HGDIOBJ h_03;
  HDC hdc_02;
  HBITMAP h_04;
  HGDIOBJ h_05;
  int unaff_EDI;
  
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    h = SelectObject(hdc,param_2);
    hdc_00 = CreateCompatibleDC(param_1);
    if (hdc_00 != (HDC)0x0) {
      iVar1 = GetMapMode(param_1);
      SetMapMode(hdc_00,iVar1);
      h_00 = CreateBitmap(unaff_EDI,in_EAX,1,1,(void *)0x0);
      if (h_00 != (HBITMAP)0x0) {
        h_01 = SelectObject(hdc_00,h_00);
        SetBkColor(hdc,0xff0000);
        StretchBlt(hdc_00,0,0,unaff_EDI,in_EAX,hdc,param_5,param_6,unaff_EDI,in_EAX,0xcc0020);
        hdc_01 = CreateCompatibleDC(param_1);
        if (hdc_01 != (HDC)0x0) {
          iVar1 = GetMapMode(param_1);
          SetMapMode(hdc_01,iVar1);
          h_02 = CreateCompatibleBitmap(param_1,unaff_EDI,in_EAX);
          if (h_02 != (HBITMAP)0x0) {
            h_03 = SelectObject(hdc_01,h_02);
            StretchBlt(hdc_01,0,0,unaff_EDI,in_EAX,hdc,param_5,param_6,unaff_EDI,in_EAX,0xcc0020);
            StretchBlt(hdc_01,0,0,unaff_EDI,in_EAX,hdc_00,0,0,unaff_EDI,in_EAX,0x220326);
            hdc_02 = CreateCompatibleDC(param_1);
            if (hdc_02 != (HDC)0x0) {
              iVar1 = GetMapMode(param_1);
              SetMapMode(hdc_02,iVar1);
              h_04 = CreateCompatibleBitmap(param_1,unaff_EDI,in_EAX);
              if (h_04 != (HBITMAP)0x0) {
                h_05 = SelectObject(hdc_02,h_04);
                StretchBlt(hdc_02,0,0,unaff_EDI,in_EAX,param_1,param_3,param_4,unaff_EDI,in_EAX,
                           0xcc0020);
                StretchBlt(hdc_02,0,0,unaff_EDI,in_EAX,hdc_00,0,0,unaff_EDI,in_EAX,0x8800c6);
                StretchBlt(hdc_02,0,0,unaff_EDI,in_EAX,hdc_01,0,0,unaff_EDI,in_EAX,0xee0086);
                StretchBlt(param_1,param_3,param_4,unaff_EDI,in_EAX,hdc_02,0,0,unaff_EDI,in_EAX,
                           0xcc0020);
                SelectObject(hdc_02,h_05);
                DeleteObject(h_04);
              }
              DeleteDC(hdc_02);
            }
            SelectObject(hdc_01,h_03);
            DeleteObject(h_02);
          }
          DeleteDC(hdc_01);
        }
        SelectObject(hdc_00,h_01);
        DeleteObject(h_00);
      }
      DeleteDC(hdc_00);
    }
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  return;
}



/* ---- FUN_6050ef80 @ 6050ef80 size=167 ---- */

void __thiscall
FUN_6050ef80(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int in_EAX;
  HDC hdc;
  HGDIOBJ h;
  
  (**(code **)(*(int *)this + 8))();
  if (DAT_605210f0 != 0) {
    FUN_6050ed00(param_1,*(HGDIOBJ *)((int)this + 0x4c),param_2,param_3,param_4,param_5);
    return;
  }
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    h = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x4c));
    TransparentBlt(param_1,param_2,param_3,in_EAX,param_6,hdc,param_4,param_5,in_EAX,param_6,
                   0xff0000);
    SelectObject(hdc,h);
    DeleteDC(hdc);
  }
  return;
}



/* ---- FUN_6050f030 @ 6050f030 size=229 ---- */

void __cdecl FUN_6050f030(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  int local_c;
  
  iVar4 = 0;
  if (0 < param_2) {
    iVar5 = param_2;
    do {
      iVar3 = 0;
      if (0 < unaff_EDI) {
        do {
          iVar1 = 0;
          if (iVar3 < unaff_EDI) {
            iVar1 = unaff_EDI - iVar3;
            iVar3 = iVar3 + iVar1;
          }
          iVar4 = iVar4 + 4 + iVar1 * 2;
        } while (iVar3 < unaff_EDI);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piVar2 = (int *)FUN_605162b0(iVar4 + 0xc + param_2 * 4);
  piVar2[2] = (int)(piVar2 + 3);
  iVar4 = param_2 * 4;
  iVar5 = 0;
  *piVar2 = unaff_EDI;
  piVar2[1] = param_2;
  local_c = 0;
  if (0 < param_2) {
    do {
      *(int *)(piVar2[2] + local_c * 4) = (int)piVar2 + iVar5 + iVar4 + 0xc;
      iVar3 = 0;
      if (0 < unaff_EDI) {
        do {
          iVar1 = 0;
          if (iVar3 < unaff_EDI) {
            iVar1 = unaff_EDI - iVar3;
            iVar3 = iVar3 + iVar1;
          }
          *(undefined2 *)((int)piVar2 + iVar5 + iVar4 + 0xc) = 0;
          *(short *)((int)piVar2 + iVar5 + iVar4 + 0xe) = (short)iVar1;
          if (iVar1 != 0) {
            memcpy((void *)((int)piVar2 + iVar5 + iVar4 + 0x10),
                   (void *)(param_1 + (iVar3 - iVar1) * 2),iVar1 * 2);
          }
          iVar5 = iVar5 + 4 + iVar1 * 2;
        } while (iVar3 < unaff_EDI);
      }
      local_c = local_c + 1;
      param_1 = param_1 + unaff_EDI * 2;
    } while (local_c < param_2);
  }
  return;
}



/* ---- InitDefaultAvatars @ 6050f120 size=952 ---- */

/* void __cdecl InitDefaultAvatars(void) */

void __cdecl InitDefaultAvatars(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined1 auStack_114 [4];
  CAvtr2004 *local_110;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_10c [28];
  CAvtrId local_f0;
  CAvtrId local_88;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xf120  171  ?InitDefaultAvatars@@YAXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_6051809b;
  local_14 = ExceptionList;
  local_1c = DAT_6052101c ^ (uint)auStack_114;
  ExceptionList = &local_14;
  local_110 = operator_new(0x110);
  local_c = 0;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217c8 = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217c8 = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 1;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217cc = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217cc = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 2;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217d0 = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217d0 = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 3;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217d4 = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217d4 = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 4;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217d8 = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217d8 = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 5;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217dc = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217dc = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 6;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217e0 = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217e0 = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  local_110 = operator_new(0x110);
  local_c = 7;
  if (local_110 == (CAvtr2004 *)0x0) {
    DAT_605217e4 = (CAvtr2004 *)0x0;
  }
  else {
    DAT_605217e4 = (CAvtr2004 *)CAvtr2004::CAvtr2004(local_110);
  }
  local_c = 0xffffffff;
  CAvtrId::CAvtrId(&local_88);
  local_c = 8;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (local_10c,"LCM001_HCM001_FNM001A_PNM001");
  local_c._0_1_ = 9;
  CAvtrId::Set(&local_88,pbVar1,true);
  local_c._0_1_ = 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_10c);
  CAvtr2004::CreateBlock(DAT_605217c8,(CAvtrId *)&local_88,0,0,1,0xffffff);
  CAvtr2004::CreateBlock(DAT_605217cc,(CAvtrId *)&local_88,1,0,1,0xffffff);
  CAvtr2004::CreateBlock(DAT_605217d0,(CAvtrId *)&local_88,0,1,1,0xffffff);
  CAvtr2004::CreateBlock(DAT_605217d4,(CAvtrId *)&local_88,1,1,1,0xffffff);
  CAvtrId::CAvtrId(&local_f0);
  local_c._0_1_ = 10;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (local_10c,"LCF001_HCF001_FNF001A_PNF001");
  local_c._0_1_ = 0xb;
  CAvtrId::Set(&local_f0,pbVar1,true);
  local_c._0_1_ = 10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_10c);
  CAvtr2004::CreateBlock(DAT_605217d8,(CAvtrId *)&local_f0,0,0,1,0xffffff);
  CAvtr2004::CreateBlock(DAT_605217dc,(CAvtrId *)&local_f0,1,0,1,0xffffff);
  CAvtr2004::CreateBlock(DAT_605217e0,(CAvtrId *)&local_f0,0,1,1,0xffffff);
  CAvtr2004::CreateBlock(DAT_605217e4,(CAvtrId *)&local_f0,1,1,1,0xffffff);
  local_c = CONCAT31(local_c._1_3_,8);
  CAvtrId::~CAvtrId(&local_f0);
  local_c = 0xffffffff;
  CAvtrId::~CAvtrId(&local_88);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_114);
  return;
}



/* ---- DestroyDefaultAvatar @ 6050f4e0 size=49 ---- */

/* void __cdecl DestroyDefaultAvatar(void) */

void __cdecl DestroyDefaultAvatar(void)

{
  CAvtr2004 *this;
  undefined4 *puVar1;
  
                    /* 0xf4e0  95  ?DestroyDefaultAvatar@@YAXXZ */
  puVar1 = &DAT_605217c8;
  do {
    this = (CAvtr2004 *)*puVar1;
    if (this != (CAvtr2004 *)0x0) {
      CAvtr2004::~CAvtr2004(this);
      operator_delete(this);
    }
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x605217e8);
  return;
}



/* ---- DrawDefaultAvatar @ 6050f520 size=85 ---- */

/* void __cdecl DrawDefaultAvatar(struct HDC__ *,int,int,int,int,char,bool,unsigned long) */

void __cdecl
DrawDefaultAvatar(HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,char param_6,
                 bool param_7,ulong param_8)

{
  uint uVar1;
  
                    /* 0xf520  114  ?DrawDefaultAvatar@@YAXPAUHDC__@@HHHHD_NK@Z */
  if (param_5 == 0) {
    uVar1 = (uint)(param_4 != 0);
  }
  else {
    uVar1 = (param_4 != 0) + 2;
  }
  if ((CAvtr2004 *)(&DAT_605217c8)[uVar1 + ((param_6 != 'F') - 1 & 4)] != (CAvtr2004 *)0x0) {
    CAvtr2004::DrawDefaultAvtr
              ((CAvtr2004 *)(&DAT_605217c8)[uVar1 + ((param_6 != 'F') - 1 & 4)],param_1,param_2,
               param_3,param_7,param_8);
  }
  return;
}



/* ---- ~CAvtrTickHandler @ 6050f580 size=124 ---- */

/* public: __thiscall CAvtrTickHandler::~CAvtrTickHandler(void) */

void __thiscall CAvtrTickHandler::~CAvtrTickHandler(CAvtrTickHandler *this)

{
                    /* 0xf580  30  ??1CAvtrTickHandler@@QAE@XZ */
  clear(this);
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x3c));
  }
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  operator_delete(*(void **)(this + 0x30));
  if (*(void **)(this + 0x24) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x24));
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  operator_delete(*(void **)(this + 0x18));
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  operator_delete(*(void **)this);
  return;
}



/* ---- clear @ 6050f600 size=174 ---- */

/* public: void __thiscall CAvtrTickHandler::clear(void) */

void __thiscall CAvtrTickHandler::clear(CAvtrTickHandler *this)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
                    /* 0xf600  246  ?clear@CAvtrTickHandler@@QAEXXZ */
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 < *(void **)(this + 0xc)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *(uint *)(this + 0xc);
  uVar3 = *(undefined4 *)this;
  if (*(uint *)(this + 0x10) < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_605057e0(*(undefined4 *)this,uVar2,uVar3,pvVar1);
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 < *(void **)(this + 0x24)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *(uint *)(this + 0x24);
  uVar3 = *(undefined4 *)(this + 0x18);
  if (*(uint *)(this + 0x28) < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_605057e0(*(undefined4 *)(this + 0x18),uVar2,uVar3,pvVar1);
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 < *(void **)(this + 0x3c)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *(uint *)(this + 0x3c);
  uVar3 = *(undefined4 *)(this + 0x30);
  if (*(uint *)(this + 0x40) < uVar2) {
    _invalid_parameter_noinfo();
  }
  FUN_605057e0(*(undefined4 *)(this + 0x30),uVar2,uVar3,pvVar1);
  return;
}



/* ---- SetSize @ 6050f6b0 size=418 ---- */

/* public: void __thiscall CAvtrTickHandler::SetSize(int) */

void __thiscall CAvtrTickHandler::SetSize(CAvtrTickHandler *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 *local_20;
  undefined4 *local_14;
  DWORD *local_c;
  
                    /* 0xf6b0  212  ?SetSize@CAvtrTickHandler@@QAEXH@Z */
  FUN_60511210(param_1);
  FUN_60511210(param_1);
  FUN_60511210(param_1);
  local_20 = *(undefined4 **)(this + 0x24);
  if (*(undefined4 **)(this + 0x28) < local_20) {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)(this + 0x18);
  local_14 = *(undefined4 **)(this + 0x3c);
  if (*(undefined4 **)(this + 0x40) < local_14) {
    _invalid_parameter_noinfo();
  }
  piVar2 = *(int **)(this + 0x30);
  local_c = *(DWORD **)(this + 0xc);
  if (*(DWORD **)(this + 0x10) < local_c) {
    _invalid_parameter_noinfo();
  }
  piVar3 = *(int **)this;
  while( true ) {
    puVar4 = *(undefined4 **)(this + 0x28);
    if (puVar4 < *(undefined4 **)(this + 0x24)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(this + 0x18))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 == puVar4) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (*(undefined4 **)(iVar5 + 0x10) <= local_14) {
      _invalid_parameter_noinfo();
    }
    *local_14 = 0;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(undefined4 **)(iVar5 + 0x10) <= local_20) {
      _invalid_parameter_noinfo();
    }
    *local_20 = 0;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    if (*(DWORD **)(iVar5 + 0x10) <= local_c) {
      _invalid_parameter_noinfo();
    }
    DVar6 = GetTickCount();
    *local_c = DVar6;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if (*(undefined4 **)(iVar5 + 0x10) <= local_20) {
      _invalid_parameter_noinfo();
    }
    local_20 = local_20 + 1;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
    if (*(undefined4 **)(iVar5 + 0x10) <= local_14) {
      _invalid_parameter_noinfo();
    }
    local_14 = local_14 + 1;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    if (*(DWORD **)(iVar5 + 0x10) <= local_c) {
      _invalid_parameter_noinfo();
    }
    local_c = local_c + 1;
  }
  return;
}



/* ---- SetDelay @ 6050f860 size=73 ---- */

/* public: void __thiscall CAvtrTickHandler::SetDelay(int,unsigned long) */

void __thiscall CAvtrTickHandler::SetDelay(CAvtrTickHandler *this,int param_1,ulong param_2)

{
  int iVar1;
  
                    /* 0xf860  206  ?SetDelay@CAvtrTickHandler@@QAEXHK@Z */
  if (param_2 < 5) {
    iVar1 = 100;
  }
  else {
    iVar1 = param_2 * 10;
  }
  if ((uint)param_1 < (uint)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2)) {
    *(int *)(*(int *)(this + 0x3c) + param_1 * 4) = iVar1;
    return;
  }
  _invalid_parameter_noinfo();
  *(int *)(*(int *)(this + 0x3c) + param_1 * 4) = iVar1;
  return;
}



/* ---- FrameMove @ 6050f8b0 size=322 ---- */

/* public: void __thiscall CAvtrTickHandler::FrameMove(int,struct CAvtrPart *) */

void __thiscall CAvtrTickHandler::FrameMove(CAvtrTickHandler *this,int param_1,CAvtrPart *param_2)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
                    /* 0xf8b0  138  ?FrameMove@CAvtrTickHandler@@QAEXHPAUCAvtrPart@@@Z */
  if ((uint)(*(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2) <= (uint)param_1) {
    _invalid_parameter_noinfo();
  }
  iVar6 = *(int *)(this + 0x24);
  iVar1 = param_1 * 4;
  if ((uint)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2) <= (uint)param_1) {
    _invalid_parameter_noinfo();
  }
  iVar2 = *(int *)(this + 0x3c);
  if ((uint)(*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2) <= (uint)param_1) {
    _invalid_parameter_noinfo();
  }
  iVar5 = *(int *)(this + 0xc);
  DVar3 = GetTickCount();
  iVar5 = DVar3 - *(int *)(iVar5 + iVar1);
  if (*(int *)(iVar2 + iVar1) - iVar5 < 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    iVar5 = *(int *)(param_2 + 0xc);
    uVar4 = *(uint *)(iVar6 + iVar1) + 1;
    if ((uint)(*(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2) <= (uint)param_1) {
      _invalid_parameter_noinfo();
    }
    *(uint *)(*(int *)(this + 0x24) + iVar1) = -(uint)(uVar4 < (uint)(iVar2 - iVar5 >> 2)) & uVar4;
    uVar4 = *(uint *)(iVar6 + iVar1);
    if ((uint)(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 2) <= uVar4) {
      _invalid_parameter_noinfo();
    }
    uVar4 = *(uint *)(*(int *)(param_2 + 0x24) + uVar4 * 4);
    if (uVar4 < 5) {
      iVar6 = 100;
    }
    else {
      iVar6 = uVar4 * 10;
    }
    if ((uint)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2) <= (uint)param_1) {
      _invalid_parameter_noinfo();
    }
    *(int *)(*(int *)(this + 0x3c) + iVar1) = iVar6;
  }
  else {
    if ((uint)(*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2) <= (uint)param_1) {
      _invalid_parameter_noinfo();
    }
    *(int *)(*(int *)(this + 0x3c) + iVar1) = *(int *)(*(int *)(this + 0x3c) + iVar1) - iVar5;
  }
  if ((uint)(*(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2) <= (uint)param_1) {
    _invalid_parameter_noinfo();
  }
  iVar6 = *(int *)(this + 0xc);
  DVar3 = GetTickCount();
  *(DWORD *)(iVar6 + iVar1) = DVar3;
  return;
}



/* ---- getNowFrameNo @ 6050fa00 size=76 ---- */

/* public: unsigned long __thiscall CAvtrTickHandler::getNowFrameNo(int) */

ulong __thiscall CAvtrTickHandler::getNowFrameNo(CAvtrTickHandler *this,int param_1)

{
                    /* 0xfa00  253  ?getNowFrameNo@CAvtrTickHandler@@QAEKH@Z */
  if (((param_1 < 0) || (*(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2 <= param_1)) ||
     ((*(int *)(this + 0x28) - *(int *)(this + 0x24) & 0xfffffffcU) == 0)) {
    return 0;
  }
  if ((uint)(*(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2) <= (uint)param_1) {
    _invalid_parameter_noinfo();
  }
  return *(ulong *)(*(int *)(this + 0x24) + param_1 * 4);
}



/* ---- CAvtr2004 @ 6050fa50 size=258 ---- */

/* public: __thiscall CAvtr2004::CAvtr2004(void) */

CAvtr2004 * __thiscall CAvtr2004::CAvtr2004(CAvtr2004 *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfa50  2  ??0CAvtr2004@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CAvtrId::CAvtrId((CAvtrId *)this);
  local_4 = 0;
  CAvtrTickHandler::CAvtrTickHandler((CAvtrTickHandler *)(this + 0xac));
  memset(this + 0x80,0,0x2c);
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined2 *)(this + 0x8c) = 1;
  *(undefined2 *)(this + 0x8e) = 0x10;
  *(undefined4 *)(this + 0x80) = 0x28;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 100) = 100;
  *(undefined4 *)(this + 0x68) = 0x78;
  *(undefined4 *)(this + 0x84) = 100;
  *(undefined4 *)(this + 0x88) = 0x78;
  *(undefined4 *)(this + 0x6c) = 0x2e;
  *(undefined4 *)(this + 0x70) = 0x66;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x104] = (CAvtr2004)0x41;
  SetRect((LPRECT)(this + 0xf4),-1,-1,-1,-1);
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- ~CAvtr2004 @ 6050fb60 size=96 ---- */

/* public: __thiscall CAvtr2004::~CAvtr2004(void) */

void __thiscall CAvtr2004::~CAvtr2004(CAvtr2004 *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfb60  25  ??1CAvtr2004@@QAE@XZ */
  puStack_8 = &LAB_60517c46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  Destroy(this);
  CAvtrTickHandler::~CAvtrTickHandler((CAvtrTickHandler *)(this + 0xac));
  local_4 = 0xffffffff;
  CAvtrId::~CAvtrId((CAvtrId *)this);
  ExceptionList = local_c;
  return;
}



/* ---- Create @ 6050fbc0 size=226 ---- */

/* public: int __thiscall CAvtr2004::Create(char *,int,int,int,unsigned long) */

int __thiscall
CAvtr2004::Create(CAvtr2004 *this,char *param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iVar2;
  undefined1 auStack_a8 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a4 [28];
  CAvtrId local_88;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0xfbc0  70  ?Create@CAvtr2004@@QAEHPADHHHK@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517fc4;
  local_14 = ExceptionList;
  local_1c = DAT_6052101c ^ (uint)auStack_a8;
  ExceptionList = &local_14;
  CAvtrId::CAvtrId(&local_88);
  local_c = 0;
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a4,param_1);
  local_c._0_1_ = 1;
  CAvtrId::Set(&local_88,pbVar1,false);
  local_c = (uint)local_c._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a4);
  Create(this,(CAvtrId *)&local_88,param_2,param_3,param_4,param_5);
  local_c = 0xffffffff;
  CAvtrId::~CAvtrId(&local_88);
  ExceptionList = local_14;
  iVar2 = __security_check_cookie(local_1c ^ (uint)auStack_a8);
  return iVar2;
}



/* ---- Create @ 6050fcb0 size=560 ---- */

/* public: int __thiscall CAvtr2004::Create(class CAvtrId &,int,int,int,unsigned long) */

int __thiscall
CAvtr2004::Create(CAvtr2004 *this,CAvtrId *param_1,int param_2,int param_3,int param_4,ulong param_5
                 )

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  void *pvVar2;
  int *extraout_EAX;
  int *piVar3;
  int iVar4;
  CAvtrPart *pCVar5;
  CLspDib *this_00;
  uint uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  
                    /* 0xfcb0  69  ?Create@CAvtr2004@@QAEHAAVCAvtrId@@HHHK@Z */
  if ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x1c == 0) {
    return 0;
  }
  CAvtrId::operator=((CAvtrId *)this,param_1);
  if (this[4] != (CAvtr2004)0x0) {
    MakeComAvtrId(this,param_1,&param_2,&param_3,&param_4);
    if (param_2 != 0) {
      *(undefined4 *)(this + 100) = 0x32;
      *(undefined4 *)(this + 0x68) = 0x3c;
      *(undefined4 *)(this + 0x84) = 0x32;
      *(undefined4 *)(this + 0x88) = 0x3c;
    }
  }
  pvVar2 = operator_new(0x50);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lsp::CLspDib::CLspDib(this_00);
    piVar3 = extraout_EAX;
  }
  *(int **)(this + 0x108) = piVar3;
  (**(code **)(*piVar3 + 0x10))
            (*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68),
             ((ushort)((byte)(param_5 >> 8) & 0xf8) | (ushort)((byte)param_5 & 0xf8) << 5) * 4 |
             (ushort)((byte)(param_5 >> 0x13) & 0x1f),2);
  CAvtrPartPool::RequestLoad((CAvtrPartPool *)CAvtrPartPool::m_pInst,(CAvtrId *)this,true);
  CAvtrTickHandler::SetSize
            ((CAvtrTickHandler *)(this + 0xac),
             (*(int *)(this + 0x5c) - *(int *)(this + 0x58)) / 0x1c);
  pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58);
  uVar6 = 0;
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c) < pbVar7) {
    _invalid_parameter_noinfo();
  }
  piVar3 = *(int **)(this + 0x4c);
  while( true ) {
    pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c);
    if (pbVar1 < *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58))
    {
      _invalid_parameter_noinfo();
    }
    if ((piVar3 == (int *)0x0) || (piVar3 != *(int **)(this + 0x4c))) {
      _invalid_parameter_noinfo();
    }
    if (pbVar7 == pbVar1) break;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar4 + 0x10) <=
        pbVar7) {
      _invalid_parameter_noinfo();
    }
    pCVar5 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,pbVar7);
    if (pCVar5 != (CAvtrPart *)0x0) {
      *(int *)(pCVar5 + 0x30) = *(int *)(pCVar5 + 0x30) + 1;
      if (*(int *)(pCVar5 + 0x28) - *(int *)(pCVar5 + 0x24) >> 2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (**(uint **)(pCVar5 + 0x24) < 5) {
        iVar4 = 100;
      }
      else {
        iVar4 = **(uint **)(pCVar5 + 0x24) * 10;
      }
      if ((uint)(*(int *)(this + 0xec) - *(int *)(this + 0xe8) >> 2) <= uVar6) {
        _invalid_parameter_noinfo();
      }
      *(int *)(*(int *)(this + 0xe8) + uVar6 * 4) = iVar4;
    }
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar4 + 0x10) <=
        pbVar7) {
      _invalid_parameter_noinfo();
    }
    pbVar7 = pbVar7 + 0x1c;
    uVar6 = uVar6 + 1;
  }
  *(int *)(this + 0x74) = param_2;
  *(int *)(this + 0x78) = param_3;
  *(int *)(this + 0x7c) = param_4;
  return 1;
}



/* ---- CreateBlock @ 6050fee0 size=560 ---- */

/* public: int __thiscall CAvtr2004::CreateBlock(class CAvtrId &,int,int,int,unsigned long) */

int __thiscall
CAvtr2004::CreateBlock
          (CAvtr2004 *this,CAvtrId *param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  void *pvVar2;
  int *extraout_EAX;
  int *piVar3;
  int iVar4;
  CAvtrPart *pCVar5;
  CLspDib *this_00;
  uint uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  
                    /* 0xfee0  81  ?CreateBlock@CAvtr2004@@QAEHAAVCAvtrId@@HHHK@Z */
  if ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x1c == 0) {
    return 0;
  }
  CAvtrId::operator=((CAvtrId *)this,param_1);
  if (this[4] != (CAvtr2004)0x0) {
    MakeComAvtrId(this,param_1,&param_2,&param_3,&param_4);
    if (param_2 != 0) {
      *(undefined4 *)(this + 100) = 0x32;
      *(undefined4 *)(this + 0x68) = 0x3c;
      *(undefined4 *)(this + 0x84) = 0x32;
      *(undefined4 *)(this + 0x88) = 0x3c;
    }
  }
  pvVar2 = operator_new(0x50);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lsp::CLspDib::CLspDib(this_00);
    piVar3 = extraout_EAX;
  }
  *(int **)(this + 0x108) = piVar3;
  (**(code **)(*piVar3 + 0x10))
            (*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68),
             ((ushort)((byte)(param_5 >> 8) & 0xf8) | (ushort)((byte)param_5 & 0xf8) << 5) * 4 |
             (ushort)((byte)(param_5 >> 0x13) & 0x1f),2);
  CAvtrPartPool::RequestLoad((CAvtrPartPool *)CAvtrPartPool::m_pInst,(CAvtrId *)this,false);
  CAvtrTickHandler::SetSize
            ((CAvtrTickHandler *)(this + 0xac),
             (*(int *)(this + 0x5c) - *(int *)(this + 0x58)) / 0x1c);
  pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58);
  uVar6 = 0;
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c) < pbVar7) {
    _invalid_parameter_noinfo();
  }
  piVar3 = *(int **)(this + 0x4c);
  while( true ) {
    pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c);
    if (pbVar1 < *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58))
    {
      _invalid_parameter_noinfo();
    }
    if ((piVar3 == (int *)0x0) || (piVar3 != *(int **)(this + 0x4c))) {
      _invalid_parameter_noinfo();
    }
    if (pbVar7 == pbVar1) break;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar4 + 0x10) <=
        pbVar7) {
      _invalid_parameter_noinfo();
    }
    pCVar5 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,pbVar7);
    if (pCVar5 != (CAvtrPart *)0x0) {
      *(int *)(pCVar5 + 0x30) = *(int *)(pCVar5 + 0x30) + 1;
      if (*(int *)(pCVar5 + 0x28) - *(int *)(pCVar5 + 0x24) >> 2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (**(uint **)(pCVar5 + 0x24) < 5) {
        iVar4 = 100;
      }
      else {
        iVar4 = **(uint **)(pCVar5 + 0x24) * 10;
      }
      if ((uint)(*(int *)(this + 0xec) - *(int *)(this + 0xe8) >> 2) <= uVar6) {
        _invalid_parameter_noinfo();
      }
      *(int *)(*(int *)(this + 0xe8) + uVar6 * 4) = iVar4;
    }
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar4 + 0x10) <=
        pbVar7) {
      _invalid_parameter_noinfo();
    }
    pbVar7 = pbVar7 + 0x1c;
    uVar6 = uVar6 + 1;
  }
  *(int *)(this + 0x74) = param_2;
  *(int *)(this + 0x78) = param_3;
  *(int *)(this + 0x7c) = param_4;
  return 1;
}



/* ---- SetBkgndImage @ 60510110 size=298 ---- */

/* public: bool __thiscall CAvtr2004::SetBkgndImage(char const *) */

bool __thiscall CAvtr2004::SetBkgndImage(CAvtr2004 *this,char *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  CHgAImage_vftable *local_38;
  void *local_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  void *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x10110  200  ?SetBkgndImage@CAvtr2004@@QAE_NPBD@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517328;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(void **)(this + 0x10c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10c));
    *(undefined4 *)(this + 0x10c) = 0;
  }
                    /* inlined constructor or destructor (approx location) for CHgAImage */
  local_38 = &CHgAImage::_vftable_;
  local_34 = (void *)0x0;
  local_1c = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_20 = 0;
  local_28 = 1;
  local_24 = -1;
  local_c = 0;
  bVar1 = CHgAImage::CHgAImage__Create((CHgAImage *)&local_38,param_1);
  if (bVar1) {
    uVar2 = FUN_6050f030((int)local_1c,local_2c);
    *(undefined4 *)(this + 0x10c) = uVar2;
    local_38 = &CHgAImage::_vftable_;
    if (local_1c != (void *)0x0) {
      operator_delete__(local_1c);
      local_1c = (void *)0x0;
    }
    if (local_34 != (void *)0x0) {
      operator_delete__(local_34);
    }
    ExceptionList = local_14;
    return true;
  }
  local_38 = &CHgAImage::_vftable_;
  if (local_1c != (void *)0x0) {
    operator_delete__(local_1c);
    local_1c = (void *)0x0;
  }
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  ExceptionList = local_14;
  return false;
}



/* ---- Destroy @ 60510240 size=434 ---- */

/* public: void __thiscall CAvtr2004::Destroy(void) */

void __thiscall CAvtr2004::Destroy(CAvtr2004 *this)

{
  CAvtr2004 *pCVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int *piVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  uint uVar5;
  int iVar6;
  CAvtrPart *pCVar7;
  int local_10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c;
  
                    /* 0x10240  88  ?Destroy@CAvtr2004@@QAEXXZ */
  pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58);
  pCVar1 = this + 0x4c;
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c) < pbVar2) {
    _invalid_parameter_noinfo();
  }
  piVar3 = *(int **)pCVar1;
  local_c = pbVar2;
  while( true ) {
    pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c);
    if (pbVar2 < *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58))
    {
      _invalid_parameter_noinfo();
    }
    if ((piVar3 == (int *)0x0) || (piVar3 != *(int **)pCVar1)) {
      _invalid_parameter_noinfo();
    }
    if (local_c == pbVar2) break;
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar6 + 0x10) <=
        local_c) {
      _invalid_parameter_noinfo();
    }
    pCVar7 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,local_c);
    if (pCVar7 != (CAvtrPart *)0x0) {
      *(int *)(pCVar7 + 0x30) = *(int *)(pCVar7 + 0x30) + -1;
    }
    if (piVar3 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar6 + 0x10) <=
        local_c) {
      _invalid_parameter_noinfo();
    }
    local_c = local_c + 0x1c;
  }
  CAvtrTickHandler::clear((CAvtrTickHandler *)(this + 0xac));
  pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (this + 0x5c);
  if (pbVar4 < *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (this + 0x58)) {
    _invalid_parameter_noinfo();
  }
  uVar5 = *(uint *)(this + 0x58);
  local_10 = *(int *)pCVar1;
  if (*(uint *)(this + 0x5c) < uVar5) {
    _invalid_parameter_noinfo();
  }
  FUN_6050cfc0(&local_10,*(int *)pCVar1,uVar5,local_10,pbVar4);
  memset(this + 0x80,0,0x2c);
  *(undefined4 *)(this + 0x80) = 0x28;
  *(undefined2 *)(this + 0x8c) = 1;
  *(undefined2 *)(this + 0x8e) = 0x10;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 100) = 100;
  *(undefined4 *)(this + 0x68) = 0x78;
  *(undefined4 *)(this + 0x84) = 100;
  *(undefined4 *)(this + 0x88) = 0xffffff88;
  *(undefined4 *)(this + 0x6c) = 0x2e;
  *(undefined4 *)(this + 0x70) = 0x66;
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined4 *)(this + 0x78) = 1;
  *(undefined4 *)(this + 0x7c) = 1;
  SetRect((LPRECT)(this + 0xf4),-1,-1,-1,-1);
  if (*(undefined4 **)(this + 0x108) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x108))(1);
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (*(void **)(this + 0x10c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x10c));
    *(undefined4 *)(this + 0x10c) = 0;
  }
  return;
}



/* ---- Draw @ 60510400 size=540 ---- */

/* public: int __thiscall CAvtr2004::Draw(struct HDC__ *,int,int,int,bool,unsigned long) */

int __thiscall
CAvtr2004::Draw(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,int param_4,bool param_5,
               ulong param_6)

{
  int *piVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  CAvtrPart *pCVar3;
  int iVar4;
  int local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  
                    /* 0x10400  101  ?Draw@CAvtr2004@@QAEHPAUHDC__@@HHH_NK@Z */
  if (this[4] != (CAvtr2004)0x0) {
    iVar4 = *(int *)(this + 0x5c) - *(int *)(this + 0x58) >> 0x1f;
    if ((*(int *)(this + 0x5c) - *(int *)(this + 0x58)) / 0x1c + iVar4 == iVar4) {
      _invalid_parameter_noinfo();
    }
    pCVar3 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,
                                *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **
                                 )(this + 0x58));
    if (pCVar3 == (CAvtrPart *)0x0) {
      if (this[0x104] == (CAvtr2004)0x41) {
        this[0x104] = param_4._0_1_;
      }
      DrawDefaultAvatar(param_1,param_2,param_3,*(int *)(this + 0x74),*(int *)(this + 0x78),
                        (char)this[0x104],param_5,param_6);
      return 1;
    }
  }
  local_28.bottom = *(LONG *)(this + 0x68);
  local_28.right = *(LONG *)(this + 100);
  local_18.left = 0;
  local_18.top = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_18.right = local_28.right;
  local_18.bottom = local_28.bottom;
  GetDrawRect(this,&local_28,&local_18);
  local_34 = 0;
  if (*(int *)(this + 0x108) != 0) {
    FUN_6050e420();
    if (*(int **)(this + 0x10c) != (int *)0x0) {
      FUN_6050e8e0((void *)0x0,*(int *)(this + 0x108),*(int **)(this + 0x10c));
    }
    local_2c = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58);
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c) <
        local_2c) {
      _invalid_parameter_noinfo();
    }
    piVar1 = *(int **)(this + 0x4c);
    while( true ) {
      pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c);
      if (pbVar2 < *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                    (this + 0x58)) {
        _invalid_parameter_noinfo();
      }
      if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(this + 0x4c))) {
        _invalid_parameter_noinfo();
      }
      if (local_2c == pbVar2) break;
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar4 + 0x10) <=
          local_2c) {
        _invalid_parameter_noinfo();
      }
      pCVar3 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,local_2c);
      if (pCVar3 != (CAvtrPart *)0x0) {
        DrawOneImage(this,&local_28,&local_18,pCVar3,local_34);
      }
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar4 + 0x10) <=
          local_2c) {
        _invalid_parameter_noinfo();
      }
      local_2c = local_2c + 0x1c;
      local_34 = local_34 + 1;
    }
    if (param_5) {
      FUN_6050ef80(*(void **)(this + 0x108),param_1,param_2,param_3,local_18.left,local_18.top,
                   local_28.bottom);
      return 1;
    }
    FUN_6050ec80(param_1,param_2,param_3,local_18.left,local_18.top,local_28.right,local_28.bottom);
  }
  return 1;
}



/* ---- DrawSelected @ 60510620 size=38 ---- */

/* public: void __thiscall CAvtr2004::DrawSelected(struct HDC__ *,int,int,unsigned
   long,int,bool,unsigned long) */

void __thiscall
CAvtr2004::DrawSelected
          (CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,ulong param_4,int param_5,
          bool param_6,ulong param_7)

{
                    /* 0x10620  119  ?DrawSelected@CAvtr2004@@QAEXPAUHDC__@@HHKH_NK@Z */
  Draw(this,param_1,param_2,param_3,param_5,param_6,param_7);
  return;
}



/* ---- DrawDefaultAvtr @ 60510650 size=404 ---- */

/* public: int __thiscall CAvtr2004::DrawDefaultAvtr(struct HDC__ *,int,int,bool,unsigned long) */

int __thiscall
CAvtr2004::DrawDefaultAvtr
          (CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,bool param_4,ulong param_5)

{
  int *piVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iVar3;
  CAvtrPart *pCVar4;
  int local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  
                    /* 0x10650  115  ?DrawDefaultAvtr@CAvtr2004@@QAEHPAUHDC__@@HH_NK@Z */
  local_28.right = *(LONG *)(this + 100);
  local_28.bottom = *(LONG *)(this + 0x68);
  local_18.left = 0;
  local_18.top = 0;
  local_28.left = 0;
  local_28.top = 0;
  local_18.right = local_28.right;
  local_18.bottom = local_28.bottom;
  GetDrawRect(this,&local_28,&local_18);
  local_34 = 0;
  if (*(int *)(this + 0x108) != 0) {
    FUN_6050e420();
    if (*(int **)(this + 0x10c) != (int *)0x0) {
      FUN_6050e8e0((void *)0x0,*(int *)(this + 0x108),*(int **)(this + 0x10c));
    }
    local_2c = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58);
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c) <
        local_2c) {
      _invalid_parameter_noinfo();
    }
    piVar1 = *(int **)(this + 0x4c);
    while( true ) {
      pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c);
      if (pbVar2 < *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                    (this + 0x58)) {
        _invalid_parameter_noinfo();
      }
      if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(this + 0x4c))) {
        _invalid_parameter_noinfo();
      }
      if (local_2c == pbVar2) break;
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
          local_2c) {
        _invalid_parameter_noinfo();
      }
      pCVar4 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,local_2c);
      if (pCVar4 != (CAvtrPart *)0x0) {
        DrawOneImage(this,&local_28,&local_18,pCVar4,local_34);
      }
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
          local_2c) {
        _invalid_parameter_noinfo();
      }
      local_2c = local_2c + 0x1c;
      local_34 = local_34 + 1;
    }
    if (param_4) {
      FUN_6050ef80(*(void **)(this + 0x108),param_1,param_2,param_3,local_18.left,local_18.top,
                   local_28.bottom);
      return 1;
    }
    FUN_6050ec80(param_1,param_2,param_3,local_18.left,local_18.top,local_28.right,local_28.bottom);
  }
  return 1;
}



/* ---- ChangeAvatarExpress @ 605107f0 size=52 ---- */

/* public: int __thiscall CAvtr2004::ChangeAvatarExpress(char) */

int __thiscall CAvtr2004::ChangeAvatarExpress(CAvtr2004 *this,char param_1)

{
  bool bVar1;
  int iVar2;
  
                    /* 0x107f0  61  ?ChangeAvatarExpress@CAvtr2004@@QAEHD@Z */
  bVar1 = CAvtrId::SetExpressionCode((CAvtrId *)this,param_1);
  if (bVar1) {
    iVar2 = ReCreate(this);
    return (uint)(iVar2 != 0);
  }
  return 0;
}



/* ---- TransBlt @ 60510830 size=594 ---- */

/* protected: void __thiscall CAvtr2004::TransBlt(struct HDC__ *,int,int,int,int,struct HDC__
   *,int,int,int,int) */

void __thiscall
CAvtr2004::TransBlt(CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,
                   HDC__ *param_6,int param_7,int param_8,int param_9,int param_10)

{
  HDC hdc;
  int iVar1;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  
                    /* 0x10830  226  ?TransBlt@CAvtr2004@@IAEXPAUHDC__@@HHHH0HHHH@Z */
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iVar1 = GetMapMode(param_1);
    SetMapMode(hdc,iVar1);
    h = CreateBitmap(param_9,param_10,1,1,(void *)0x0);
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      SetBkColor(param_6,0xff0000);
      StretchBlt(hdc,0,0,param_9,param_10,param_6,param_7,param_8,param_9,param_10,0xcc0020);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar1 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar1);
        h_01 = CreateCompatibleBitmap(param_1,param_9,param_10);
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          StretchBlt(hdc_00,0,0,param_9,param_10,param_6,param_7,param_8,param_9,param_10,0xcc0020);
          StretchBlt(hdc_00,0,0,param_9,param_10,hdc,0,0,param_9,param_10,0x220326);
          hdc_01 = CreateCompatibleDC(param_1);
          if (hdc_01 != (HDC)0x0) {
            iVar1 = GetMapMode(param_1);
            SetMapMode(hdc_01,iVar1);
            h_03 = CreateCompatibleBitmap(param_1,param_9,param_10);
            if (h_03 != (HBITMAP)0x0) {
              h_04 = SelectObject(hdc_01,h_03);
              StretchBlt(hdc_01,0,0,param_9,param_10,param_1,param_2,param_3,param_4,param_5,
                         0xcc0020);
              StretchBlt(hdc_01,0,0,param_9,param_10,hdc,0,0,param_9,param_10,0x8800c6);
              StretchBlt(hdc_01,0,0,param_9,param_10,hdc_00,0,0,param_9,param_10,0xee0086);
              StretchBlt(param_1,param_2,param_3,param_4,param_5,hdc_01,0,0,param_9,param_10,
                         0xcc0020);
              SelectObject(hdc_01,h_04);
              DeleteObject(h_03);
            }
            DeleteDC(hdc_01);
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return;
}



/* ---- ReCreate @ 60510a90 size=515 ---- */

/* protected: int __thiscall CAvtr2004::ReCreate(void) */

int __thiscall CAvtr2004::ReCreate(CAvtr2004 *this)

{
  int *piVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iVar3;
  CAvtrPart *pCVar4;
  uint local_1c;
  char local_18 [3];
  undefined1 local_15;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_14;
  uint local_c;
  
                    /* 0x10a90  192  ?ReCreate@CAvtr2004@@IAEHXZ */
  local_c = DAT_6052101c ^ (uint)&local_1c;
  iVar3 = *(int *)(this + 0x5c) - *(int *)(this + 0x58) >> 0x1f;
  if ((*(int *)(this + 0x5c) - *(int *)(this + 0x58)) / 0x1c + iVar3 == iVar3) {
    iVar3 = __security_check_cookie(local_c ^ (uint)&local_1c);
    return iVar3;
  }
  if (this[4] != (CAvtr2004)0x0) {
    FUN_60516290((-(uint)(*(int *)(this + 0x74) != 0) & 0x12) + 0x41,10,local_18,"A%cF%c_",
                 (-(*(int *)(this + 0x74) != 0) & 0xecU) + 0x57);
    if (this[5] != (CAvtr2004)0x0) {
      local_15 = 0x53;
    }
    CAvtrId::AddPrefix((CAvtrId *)this,local_18);
    if (*(int *)(this + 0x74) != 0) {
      *(undefined4 *)(this + 100) = 0x32;
      *(undefined4 *)(this + 0x68) = 0x3c;
      *(undefined4 *)(this + 0x84) = 0x32;
      *(undefined4 *)(this + 0x88) = 0x3c;
    }
  }
  CAvtrPartPool::RequestLoad((CAvtrPartPool *)CAvtrPartPool::m_pInst,(CAvtrId *)this,true);
  CAvtrTickHandler::clear((CAvtrTickHandler *)(this + 0xac));
  CAvtrTickHandler::SetSize
            ((CAvtrTickHandler *)(this + 0xac),
             (*(int *)(this + 0x5c) - *(int *)(this + 0x58)) / 0x1c);
  local_14 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58);
  local_1c = 0;
  if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c) < local_14)
  {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)(this + 0x4c);
  while( true ) {
    pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x5c);
    if (pbVar2 < *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(this + 0x58))
    {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != *(int **)(this + 0x4c))) {
      _invalid_parameter_noinfo();
    }
    if (local_14 == pbVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
        local_14) {
      _invalid_parameter_noinfo();
    }
    pCVar4 = CAvtrPartPool::Get((CAvtrPartPool *)CAvtrPartPool::m_pInst,local_14);
    if (pCVar4 != (CAvtrPart *)0x0) {
      if (*(int *)(pCVar4 + 0x28) - *(int *)(pCVar4 + 0x24) >> 2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (**(uint **)(pCVar4 + 0x24) < 5) {
        iVar3 = 100;
      }
      else {
        iVar3 = **(uint **)(pCVar4 + 0x24) * 10;
      }
      if ((uint)(*(int *)(this + 0xec) - *(int *)(this + 0xe8) >> 2) <= local_1c) {
        _invalid_parameter_noinfo();
      }
      *(int *)(*(int *)(this + 0xe8) + local_1c * 4) = iVar3;
    }
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
        local_14) {
      _invalid_parameter_noinfo();
    }
    local_14 = local_14 + 0x1c;
    local_1c = local_1c + 1;
  }
  iVar3 = __security_check_cookie(local_c ^ (uint)&local_1c);
  return iVar3;
}



/* ---- DrawOneImage @ 60510ca0 size=142 ---- */

/* protected: void __thiscall CAvtr2004::DrawOneImage(struct tagRECT &,struct tagRECT &,struct
   CAvtrPart *,int) */

void __thiscall
CAvtr2004::DrawOneImage
          (CAvtr2004 *this,tagRECT *param_1,tagRECT *param_2,CAvtrPart *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
                    /* 0x10ca0  116  ?DrawOneImage@CAvtr2004@@IAEXAAUtagRECT@@0PAUCAvtrPart@@H@Z */
  if (param_3 != (CAvtrPart *)0x0) {
    if ((this[4] == (CAvtr2004)0x0) && (*(int *)(this + 0x74) == 0)) {
      CAvtrTickHandler::FrameMove((CAvtrTickHandler *)(this + 0xac),param_4,param_3);
    }
    iVar1 = *(int *)(param_3 + 0x10);
    iVar2 = *(int *)(param_3 + 0xc);
    uVar3 = CAvtrTickHandler::getNowFrameNo((CAvtrTickHandler *)(this + 0xac),param_4);
    if (uVar3 < (uint)(iVar1 - iVar2 >> 2)) {
      uVar3 = CAvtrTickHandler::getNowFrameNo((CAvtrTickHandler *)(this + 0xac),param_4);
      if ((uint)(*(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc) >> 2) <= uVar3) {
        _invalid_parameter_noinfo();
      }
      FUN_6050e8e0((void *)param_1->left,*(int *)(this + 0x108),
                   *(int **)(*(int *)(param_3 + 0xc) + uVar3 * 4));
    }
  }
  return;
}



/* ---- GetDrawRect @ 60510d30 size=415 ---- */

/* protected: void __thiscall CAvtr2004::GetDrawRect(struct tagRECT &,struct tagRECT &) */

void __thiscall CAvtr2004::GetDrawRect(CAvtr2004 *this,tagRECT *param_1,tagRECT *param_2)

{
  RECT *lprc1;
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  RECT local_14;
  
                    /* 0x10d30  147  ?GetDrawRect@CAvtr2004@@IAEXAAUtagRECT@@0@Z */
  if (*(int *)(this + 0x7c) == 0) {
    local_14.left = -1;
    local_14.top = -1;
    local_14.right = -1;
    local_14.bottom = -1;
    lprc1 = (RECT *)(this + 0xf4);
    BVar2 = EqualRect(lprc1,&local_14);
    if (BVar2 != 0) {
      param_2->left = 0;
      param_2->top = 0;
      param_2->right = (-(uint)(*(int *)(this + 0x74) != 0) & 0xffffffce) + 100;
      param_2->bottom = (-(uint)(*(int *)(this + 0x78) != 0) & 0x3c) + 0x3c;
      param_1->left = 0;
      param_1->top = 0;
      param_1->right = (-(uint)(*(int *)(this + 0x74) != 0) & 0xffffffce) + 100;
      iVar4 = param_2->bottom;
      if (*(int *)(this + 0x74) != 0) {
        iVar4 = iVar4 >> 1;
      }
      param_1->bottom = iVar4;
      return;
    }
    param_2->left = lprc1->left;
    param_2->top = *(LONG *)(this + 0xf8);
    param_2->right = *(int *)(this + 0xfc) - lprc1->left;
    param_2->bottom = *(int *)(this + 0x100) - *(int *)(this + 0xf8);
    param_1->left = 0;
    param_1->top = 0;
    iVar4 = param_2->right;
    if (*(int *)(this + 0x74) != 0) {
      iVar4 = iVar4 >> 1;
    }
    param_1->right = iVar4;
    iVar4 = param_2->bottom;
    if (*(int *)(this + 0x74) != 0) {
      iVar4 = iVar4 >> 1;
    }
    param_1->bottom = iVar4;
    return;
  }
  if ((this[4] != (CAvtr2004)0x0) && (*(int *)(this + 0x74) != 0)) {
    iVar4 = *(int *)(this + 0x78);
    param_2->left = *(int *)(this + 100) - 0x16U >> 1;
    param_2->top = 0;
    param_2->right = 0x16;
    LVar5 = 0x34;
    if (iVar4 == 0) {
      LVar5 = 0x20;
    }
    param_2->bottom = LVar5;
    param_1->left = 0;
    param_1->top = 0;
    param_1->right = 0x16;
    param_1->bottom = LVar5;
    return;
  }
  iVar4 = *(int *)(this + 0x74);
  if (*(int *)(this + 0x78) == 0) {
    iVar3 = (-(uint)(iVar4 != 0) & 0xffffffe0) + 0x40;
  }
  else {
    iVar3 = (-(uint)(iVar4 != 0) & 0xffffffce) + 0x66;
  }
  iVar1 = *(int *)(this + 100);
  param_2->top = 5;
  param_2->right = 0x2e;
  param_2->left = iVar1 - 0x2eU >> 1;
  param_2->bottom = (-(uint)(*(int *)(this + 0x78) != 0) & 0x26) + 0x40;
  param_1->left = 0;
  param_1->top = 0;
  param_1->right = (-(uint)(iVar4 != 0) & 0xffffffe8) + 0x2e;
  param_1->bottom = iVar3;
  return;
}



/* ---- TransDIBits @ 60510ed0 size=616 ---- */

/* protected: void __thiscall CAvtr2004::TransDIBits(struct HDC__
   *,int,int,int,int,int,int,int,int,void const *) */

void __thiscall
CAvtr2004::TransDIBits
          (CAvtr2004 *this,HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,void *param_10)

{
  HDC hdc;
  int iVar1;
  HBITMAP h;
  HGDIOBJ h_00;
  HDC hdc_00;
  HBITMAP h_01;
  HGDIOBJ h_02;
  HDC hdc_01;
  HBITMAP h_03;
  HGDIOBJ h_04;
  
                    /* 0x10ed0  227  ?TransDIBits@CAvtr2004@@IAEXPAUHDC__@@HHHHHHHHPBX@Z */
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    iVar1 = GetMapMode(param_1);
    SetMapMode(hdc,iVar1);
    h = CreateBitmap(param_4,param_5,1,1,(void *)0x0);
    if (h != (HBITMAP)0x0) {
      h_00 = SelectObject(hdc,h);
      hdc_00 = CreateCompatibleDC(param_1);
      if (hdc_00 != (HDC)0x0) {
        iVar1 = GetMapMode(param_1);
        SetMapMode(hdc_00,iVar1);
        h_01 = CreateCompatibleBitmap(param_1,param_8,param_9);
        if (h_01 != (HBITMAP)0x0) {
          h_02 = SelectObject(hdc_00,h_01);
          SetBkColor(hdc_00,0xff0000);
          StretchDIBits(hdc_00,0,0,param_8,param_9,param_6,param_7,param_8,param_9,param_10,
                        (BITMAPINFO *)(this + 0x80),0,0xcc0020);
          StretchBlt(hdc,0,0,param_4,param_5,hdc_00,param_2,param_3,param_4,param_5,0xcc0020);
          StretchBlt(hdc_00,0,0,param_8,param_9,hdc,0,0,param_8,param_9,0x220326);
          hdc_01 = CreateCompatibleDC(param_1);
          if (hdc_01 != (HDC)0x0) {
            iVar1 = GetMapMode(param_1);
            SetMapMode(hdc_01,iVar1);
            h_03 = CreateCompatibleBitmap(param_1,param_8,param_9);
            if (h_03 != (HBITMAP)0x0) {
              h_04 = SelectObject(hdc_01,h_03);
              StretchBlt(hdc_01,0,0,param_8,param_9,param_1,param_2,param_3,param_4,param_5,0xcc0020
                        );
              StretchBlt(hdc_01,0,0,param_8,param_9,hdc,0,0,param_8,param_9,0x8800c6);
              StretchBlt(hdc_01,0,0,param_8,param_9,hdc_00,0,0,param_8,param_9,0xee0086);
              StretchBlt(param_1,param_2,param_3,param_4,param_5,hdc_01,0,0,param_8,param_9,0xcc0020
                        );
              SelectObject(hdc_01,h_04);
              DeleteObject(h_03);
            }
            DeleteDC(hdc_01);
          }
          SelectObject(hdc_00,h_02);
          DeleteObject(h_01);
        }
        DeleteDC(hdc_00);
      }
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    DeleteDC(hdc);
  }
  return;
}



/* ---- DrawOneImage @ 60511140 size=3 ---- */

/* protected: void __thiscall CAvtr2004::DrawOneImage(class CHgAImage &,struct tagRECT &,struct
   tagRECT &,struct CAvtrPart *,int) */

void __thiscall
CAvtr2004::DrawOneImage
          (CAvtr2004 *this,CHgAImage *param_1,tagRECT *param_2,tagRECT *param_3,CAvtrPart *param_4,
          int param_5)

{
                    /* 0x11140  117
                       ?DrawOneImage@CAvtr2004@@IAEXAAVCHgAImage@@AAUtagRECT@@1PAUCAvtrPart@@H@Z
                       0x11140  118
                       ?DrawOneImage@CAvtr2004@@IAEXPAUHDC__@@AAUtagRECT@@1PAUCAvtrPart@@H@Z */
  return;
}



/* ---- MakeComAvtrId @ 60511150 size=130 ---- */

/* protected: void __thiscall CAvtr2004::MakeComAvtrId(class CAvtrId &,int &,int &,int &) */

void __thiscall
CAvtr2004::MakeComAvtrId(CAvtr2004 *this,CAvtrId *param_1,int *param_2,int *param_3,int *param_4)

{
  char local_10 [12];
  uint local_4;
  
                    /* 0x11150  188  ?MakeComAvtrId@CAvtr2004@@IAEXAAVCAvtrId@@AAH11@Z */
  local_4 = DAT_6052101c ^ (uint)local_10;
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_10[8] = '\0';
  local_10[9] = 0;
  local_10[0] = '\0';
  FUN_60516290((-(uint)(*param_2 != 0) & 0x12) + 0x41,10,local_10,"A%cFS_",
               (-(*param_2 != 0) & 0xecU) + 0x57);
  if (this[5] != (CAvtr2004)0x0) {
    local_10[3] = 0x53;
  }
  CAvtrId::AddPrefix((CAvtrId *)this,local_10);
  __security_check_cookie(local_4 ^ (uint)local_10);
  return;
}



/* ---- GetLspBitmapInfo @ 605111e0 size=10 ---- */

/* protected: struct tagBITMAPINFO & __thiscall CAvtr2004::GetLspBitmapInfo(void) */

tagBITMAPINFO * __thiscall CAvtr2004::GetLspBitmapInfo(CAvtr2004 *this)

{
                    /* 0x111e0  153  ?GetLspBitmapInfo@CAvtr2004@@IAEAAUtagBITMAPINFO@@XZ */
  return (tagBITMAPINFO *)(*(int *)(this + 0x108) + 0x18);
}



/* ---- GetLspDIBData @ 605111f0 size=10 ---- */

/* protected: unsigned char * __thiscall CAvtr2004::GetLspDIBData(void) */

uchar * __thiscall CAvtr2004::GetLspDIBData(CAvtr2004 *this)

{
                    /* 0x111f0  154  ?GetLspDIBData@CAvtr2004@@IAEPAEXZ */
  return *(uchar **)(*(int *)(this + 0x108) + 0x44);
}



/* ---- GetLsp @ 60511200 size=7 ---- */

/* protected: class lsp::CLspDib & __thiscall CAvtr2004::GetLsp(void) */

CLspDib * __thiscall CAvtr2004::GetLsp(CAvtr2004 *this)

{
                    /* 0x11200  152  ?GetLsp@CAvtr2004@@IAEAAVCLspDib@lsp@@XZ */
  return *(CLspDib **)(this + 0x108);
}



/* ---- FUN_60511210 @ 60511210 size=209 ---- */

void FUN_60511210(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_EAX;
  uint uVar4;
  int iVar5;
  int *local_10;
  uint local_c;
  int local_8;
  
  puVar1 = (undefined4 *)in_EAX[4];
  puVar2 = (undefined4 *)in_EAX[3];
  uVar4 = (int)puVar1 - (int)puVar2 >> 2;
  local_10 = (int *)0x0;
  if (uVar4 < param_1) {
    if (puVar1 < puVar2) {
      _invalid_parameter_noinfo();
    }
    FUN_605084f0(in_EAX,&local_10,*in_EAX,puVar1);
    return;
  }
  if (uVar4 <= param_1) {
    return;
  }
  if (puVar1 < puVar2) {
    _invalid_parameter_noinfo();
  }
  uVar4 = in_EAX[3];
  local_8 = *in_EAX;
  if ((uint)in_EAX[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  piVar3 = (int *)*in_EAX;
  local_10 = piVar3;
  local_c = uVar4;
  if (piVar3 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  uVar4 = uVar4 + param_1 * 4;
  if (uVar4 <= *(uint *)(iVar5 + 0x10)) {
    if (piVar3 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar3;
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar4) goto LAB_605112c2;
  }
  _invalid_parameter_noinfo();
LAB_605112c2:
  FUN_605057e0(local_10,uVar4,local_8,puVar1);
  return;
}



/* ---- FUN_605112f0 @ 605112f0 size=185 ---- */

void FUN_605112f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60516fb2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(unaff_ESI);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (unaff_ESI,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_1);
  iVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                    (unaff_ESI,0,1,"p");
  if (iVar1 != 0) {
    iVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                      (unaff_ESI,0,2,"a3");
    if (iVar1 != 0) {
      iVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                        (unaff_ESI,0,2,"sa");
      unaff_ESI[0x1c] =
           (basic_string<char,std::char_traits<char>,std::allocator<char>_>)
           ((-(iVar1 != 0) & 0x9dU) + 99);
      goto LAB_60511383;
    }
  }
  unaff_ESI[0x1c] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x62;
LAB_60511383:
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_605113b0 @ 605113b0 size=279 ---- */

void FUN_605113b0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> bVar1;
  int iVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  undefined4 local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 ***local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60516f69;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)&local_30;
  ExceptionList = &local_c;
  local_30 = 0;
  iVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                    (unaff_ESI,0,1,"p");
  if (iVar2 != 0) {
    iVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                      (unaff_ESI,0,2,"a3");
    if (iVar2 != 0) {
      iVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                        (unaff_ESI,0,2,"sa");
      if (iVar2 != 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)unaff_ESI);
        goto LAB_605114a7;
      }
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)unaff_ESI);
  local_4 = 0;
  if (local_18 == 6) {
    bVar1 = unaff_ESI[0x1c];
    unaff_ESI[0x1c] =
         (basic_string<char,std::char_traits<char>,std::allocator<char>_>)((char)bVar1 + -1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (local_2c,1,(char)bVar1);
  }
  else if (local_18 == 7) {
    if (local_14 < 0x10) {
      local_28[0] = local_28;
    }
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)local_28[0] + 6) =
         unaff_ESI[0x1c];
    unaff_ESI[0x1c] =
         (basic_string<char,std::char_traits<char>,std::allocator<char>_>)
         ((char)unaff_ESI[0x1c] + -1);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )local_2c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
LAB_605114a7:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_30);
  return;
}



/* ---- FUN_605114d0 @ 605114d0 size=1259 ---- */

undefined4 FUN_605114d0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  int **ppiVar8;
  undefined4 extraout_EAX;
  int iVar9;
  int *piVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  uint uVar12;
  int *piVar13;
  void *pvStack_d8;
  undefined4 uVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> bStack_cd;
  char *in_stack_ffffff34;
  uint local_a0;
  int *local_9c;
  int *local_98;
  void *local_94 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_88;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_84;
  undefined4 local_80;
  int *local_7c [6];
  int *local_64;
  undefined4 local_60;
  int *local_58;
  int *local_54;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4c [28];
  undefined4 local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60517803;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar9 = 0;
  local_4 = 0;
  FUN_60508380((int *)local_94);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_94 + -0xf),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_1);
  uVar14 = 0x60511545;
  FUN_60511a30(in_stack_ffffff30,in_stack_ffffff34);
  FUN_6050cdb0((int *)local_7c);
  local_4._0_1_ = 2;
  uVar12 = 0;
  if (0 < ((int)local_84 - (int)local_88) / 0x1c) {
    do {
      pvVar5 = operator_new(0x20);
      local_4._0_1_ = 3;
      if (pvVar5 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        if ((uint)(((int)local_84 - (int)local_88) / 0x1c) <= uVar12) {
          _invalid_parameter_noinfo();
        }
        local_9c = (int *)(local_94 + -0xf);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (local_94 + -0xf),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   (local_88 + iVar9));
        uVar14 = 0x605115d9;
        iVar6 = FUN_605112f0(in_stack_ffffff30);
      }
      local_4._0_1_ = 2;
      if (iVar6 != 0) {
        if ((uint)(((int)local_84 - (int)local_88) / 0x1c) <= uVar12) {
          _invalid_parameter_noinfo();
        }
        local_9c = (int *)(local_94 + -0x10);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
                  (local_88 + iVar9,(uint)(local_94 + -0x10),0);
        pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_605125f0(SUB41(uVar14,0));
        local_4._0_1_ = 4;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4c,pbVar7);
        local_30 = *(undefined4 *)(pbVar7 + 0x1c);
        local_4._0_1_ = 5;
        FUN_60511bc0((int *)local_7c,local_4c);
        local_4._0_1_ = 4;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4c);
        local_4._0_1_ = 2;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
      }
      uVar12 = uVar12 + 1;
      iVar9 = iVar9 + 0x1c;
    } while ((int)uVar12 < ((int)local_84 - (int)local_88) / 0x1c);
  }
  FUN_6050ccb0();
  local_a0 = 0;
  do {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_2c,*(char **)((int)&PTR_DAT_60521388 + local_a0));
    local_4 = CONCAT31(local_4._1_3_,6);
    cVar1 = *(char *)(local_64[1] + 0x2d);
    piVar10 = (int *)local_64[1];
    piVar2 = local_64;
    piVar3 = local_64;
    while( true ) {
      piVar13 = piVar10;
      local_64 = piVar3;
      if (cVar1 != '\0') break;
      bVar4 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (piVar13 + 3),local_2c);
      if (bVar4) {
        piVar10 = (int *)piVar13[2];
        piVar13 = piVar2;
      }
      else {
        piVar10 = (int *)*piVar13;
      }
      cVar1 = *(char *)((int)piVar10 + 0x2d);
      piVar2 = piVar13;
      piVar3 = local_64;
    }
    local_98 = piVar2;
    local_9c = local_7c[0];
    if (local_7c[0] == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if ((piVar2 == piVar3) ||
       (bVar4 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                          (local_2c,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(piVar2 + 3)), bVar4)) {
      local_54 = local_64;
      local_58 = local_7c[0];
      ppiVar8 = &local_58;
    }
    else {
      ppiVar8 = &local_9c;
    }
    piVar10 = *ppiVar8;
    piVar2 = ppiVar8[1];
    local_4._0_1_ = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
    piVar3 = local_64;
    if ((piVar10 == (int *)0x0) || (piVar10 != local_7c[0])) {
      _invalid_parameter_noinfo();
    }
    if (piVar2 != piVar3) {
      if (piVar10 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar10;
      }
      if (piVar2 == *(int **)(iVar9 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_605113b0(local_4c);
      local_4._0_1_ = 7;
      FUN_60511ce0(pbVar7);
      local_4._0_1_ = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4c);
    }
    local_a0 = local_a0 + 4;
  } while (local_a0 < 0xc4);
  piVar10 = (int *)*local_64;
  local_9c = local_7c[0];
  while( true ) {
    piVar2 = local_64;
    if ((local_9c == (int *)0x0) || (local_9c != local_7c[0])) {
      _invalid_parameter_noinfo();
    }
    if (piVar10 == piVar2) break;
    if (local_9c == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar9 = 0;
    }
    else {
      iVar9 = *local_9c;
    }
    if (piVar10 == *(int **)(iVar9 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    pbVar11 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)piVar10[10];
    if (pbVar11 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar11);
      operator_delete(pbVar11);
    }
    if (local_9c == (int *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((int)piVar10 + 0x2d) == '\0') {
      piVar2 = (int *)piVar10[2];
      if (*(char *)((int)piVar2 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x2d);
        piVar10 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2d);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar10[1] + 0x2d);
        piVar3 = (int *)piVar10[1];
        piVar2 = piVar10;
        while ((piVar10 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar10[2]))) {
          cVar1 = *(char *)(piVar10[1] + 0x2d);
          piVar3 = (int *)piVar10[1];
          piVar2 = piVar10;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar1 = *(char *)(local_64[1] + 0x2d);
  piVar10 = (int *)local_64[1];
  while (cVar1 == '\0') {
    FUN_6050d460((int *)piVar10[2]);
    piVar2 = (int *)*piVar10;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar10 + 3));
    operator_delete(piVar10);
    piVar10 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  local_64[1] = (int)local_64;
  local_60 = 0;
  *local_64 = (int)local_64;
  local_64[2] = (int)local_64;
  local_4._0_1_ = 8;
  FUN_6050cf80();
  operator_delete(local_7c[0]);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (local_88 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    pbVar11 = local_88;
    if (local_88 != local_84) {
      do {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar11);
        pbVar11 = pbVar11 + 0x1c;
      } while (pbVar11 != local_84);
    }
    operator_delete(local_88);
  }
  local_88 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_84 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  local_80 = 0;
  operator_delete(local_94[0]);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}



/* ---- FUN_605119c0 @ 605119c0 size=81 ---- */

void FUN_605119c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_605179c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_6050cf80();
  operator_delete((void *)*param_1);
  ExceptionList = local_c;
  return;
}



/* ---- ~basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 60511a20 size=6 ---- */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
~basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x60511a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  return;
}



/* ---- FUN_60511a30 @ 60511a30 size=386 ---- */

void FUN_60511a30(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1,
                 char *param_2)

{
  char **_Src;
  char *pcVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int iVar3;
  uint in_stack_0000001c;
  char *local_23c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_238 [28];
  char local_21c [520];
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_60517771;
  local_c = ExceptionList;
  local_14 = DAT_6052101c ^ (uint)&local_23c;
  ExceptionList = &local_c;
  local_4 = 0;
  local_23c = (char *)0x0;
  _Src = (char **)param_2;
  if (in_stack_0000001c < 0x10) {
    _Src = &param_2;
  }
  strcpy_s(local_21c,0x208,(char *)_Src);
  pcVar1 = strtok_s(local_21c,"_",&local_23c);
  if (pcVar1 == (char *)0x0) {
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  }
  else {
    _strlwr(pcVar1);
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_238,pcVar1);
    local_4._0_1_ = 1;
    FUN_60511ce0(pbVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_238);
    iVar3 = 0;
    do {
      pcVar1 = strtok_s((char *)0x0,"_",&local_23c);
      if (pcVar1 == (char *)0x0) break;
      _strlwr(pcVar1);
      pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_238,pcVar1);
      local_4._0_1_ = 2;
      FUN_60511ce0(pbVar2);
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_238);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3000);
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_14 ^ (uint)&local_23c);
  return;
}



/* ---- FUN_60511bc0 @ 60511bc0 size=274 ---- */

void FUN_60511bc0(int *param_1,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *this;
  bool local_1c;
  undefined4 local_10;
  undefined4 *local_c;
  
  this = (undefined4 *)param_1[6];
  local_1c = true;
  puVar4 = (undefined4 *)this[1];
  if (*(char *)((int)this[1] + 0x2d) == '\0') {
    do {
      this = puVar4;
      local_1c = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                           (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(this + 3));
      if (local_1c) {
        puVar4 = (undefined4 *)*this;
      }
      else {
        puVar4 = (undefined4 *)this[2];
      }
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  iVar1 = *param_1;
  if (local_1c != false) {
    local_c = *(undefined4 **)param_1[6];
    if (iVar1 == 0) {
      _invalid_parameter_noinfo();
    }
    if (this == local_c) {
      piVar3 = (int *)FUN_60511d90(this,&local_10,'\x01',param_2);
      iVar1 = *piVar3;
      unaff_EBX[1] = piVar3[1];
      *unaff_EBX = iVar1;
      *(undefined1 *)(unaff_EBX + 2) = 1;
      return;
    }
    FUN_60512560();
  }
  bVar2 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 3),
                     param_2);
  if (!bVar2) {
    *unaff_EBX = iVar1;
    unaff_EBX[1] = (int)this;
    *(undefined1 *)(unaff_EBX + 2) = 0;
    return;
  }
  piVar3 = (int *)FUN_60511d90(this,&local_10,local_1c,param_2);
  iVar1 = piVar3[1];
  *unaff_EBX = *piVar3;
  unaff_EBX[1] = iVar1;
  *(undefined1 *)(unaff_EBX + 2) = 1;
  return;
}



/* ---- FUN_60511ce0 @ 60511ce0 size=163 ---- */

void FUN_60511ce0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int *unaff_EBX;
  uint uVar2;
  uint local_10 [3];
  
  if (unaff_EBX[3] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (unaff_EBX[5] - unaff_EBX[3]) / 0x1c;
  }
  pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)unaff_EBX[4];
  if ((uint)(((int)pbVar1 - unaff_EBX[3]) / 0x1c) < uVar2) {
    local_10[0] = local_10[0] & 0xffffff00;
    FUN_605126a0((void *)0x1,pbVar1,param_1);
    unaff_EBX[4] = (int)(pbVar1 + 0x1c);
    return;
  }
  if (pbVar1 < (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)unaff_EBX[3]) {
    _invalid_parameter_noinfo();
  }
  FUN_60511fd0((int *)local_10,param_1,*unaff_EBX,pbVar1);
  return;
}



/* ---- FUN_60511d90 @ 60511d90 size=562 ---- */

void __thiscall FUN_60511d90(void *this,undefined4 *param_1,char param_2,void *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *unaff_EDI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [28];
  logic_error local_38 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < (uint)unaff_EDI[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_54,"map/set<T> too long");
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error
              (local_38,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_38);
    local_38[0].vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_38,(ThrowInfo *)&DAT_6051a1d8);
  }
  piVar4 = FUN_60512130(param_3,unaff_EDI[6],this,unaff_EDI[6]);
  unaff_EDI[7] = unaff_EDI[7] + 1;
  if (this == (void *)unaff_EDI[6]) {
    *(int **)((int)unaff_EDI[6] + 4) = piVar4;
    *(int **)unaff_EDI[6] = piVar4;
    *(int **)(unaff_EDI[6] + 8) = piVar4;
  }
  else if (param_2 == '\0') {
    *(int **)((int)this + 8) = piVar4;
    if (this == *(void **)(unaff_EDI[6] + 8)) {
      *(int **)(unaff_EDI[6] + 8) = piVar4;
    }
  }
  else {
    *(int **)this = piVar4;
    if (this == *(void **)unaff_EDI[6]) {
      *(int **)unaff_EDI[6] = piVar4;
    }
  }
  cVar1 = *(char *)(piVar4[1] + 0x2c);
  piVar8 = piVar4;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(unaff_EDI[6] + 4) + 0x2c) = 1;
      uVar3 = *unaff_EDI;
      param_1[1] = piVar4;
      *param_1 = uVar3;
      ExceptionList = local_c;
      return;
    }
    piVar5 = piVar8 + 1;
    piVar6 = (int *)*piVar5;
    piVar2 = (int *)piVar6[1];
    if (piVar6 == (int *)*piVar2) {
      iVar7 = piVar2[2];
      if (*(char *)(iVar7 + 0x2c) != '\0') {
        if (piVar8 == (int *)piVar6[2]) {
          piVar8 = (int *)piVar6[2];
          piVar6[2] = *piVar8;
          if (*(char *)(*piVar8 + 0x2d) == '\0') {
            *(int **)(*piVar8 + 4) = piVar6;
          }
          piVar5 = piVar6 + 1;
          piVar8[1] = piVar6[1];
          if (piVar6 == *(int **)(unaff_EDI[6] + 4)) {
            *(int **)(unaff_EDI[6] + 4) = piVar8;
          }
          else {
            piVar2 = (int *)*piVar5;
            if (piVar6 == (int *)*piVar2) {
              *piVar2 = (int)piVar8;
            }
            else {
              piVar2[2] = (int)piVar8;
            }
          }
          *piVar8 = (int)piVar6;
          *piVar5 = (int)piVar8;
          piVar8 = piVar6;
        }
        *(undefined1 *)(*piVar5 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
        piVar5 = *(int **)(*piVar5 + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x2d) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *(int **)(unaff_EDI[6] + 4)) {
          *(int **)(unaff_EDI[6] + 4) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
        goto LAB_60511f86;
      }
LAB_60511f18:
      *(undefined1 *)(piVar6 + 0xb) = 1;
      *(undefined1 *)(iVar7 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar8 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar7 = *piVar2;
      if (*(char *)(iVar7 + 0x2c) == '\0') goto LAB_60511f18;
      if (piVar8 == (int *)*piVar6) {
        FUN_6050d4a0(piVar6,(int)unaff_EDI);
        piVar8 = piVar6;
      }
      *(undefined1 *)(piVar8[1] + 0x2c) = 1;
      *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x2c) = 0;
      piVar5 = *(int **)(piVar8[1] + 4);
      piVar6 = (int *)piVar5[2];
      piVar5[2] = *piVar6;
      if (*(char *)(*piVar6 + 0x2d) == '\0') {
        *(int **)(*piVar6 + 4) = piVar5;
      }
      piVar6[1] = piVar5[1];
      if (piVar5 == *(int **)(unaff_EDI[6] + 4)) {
        *(int **)(unaff_EDI[6] + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar5[1];
        if (piVar5 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar5;
LAB_60511f86:
      piVar5[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar8[1] + 0x2c);
  } while( true );
}



/* ---- FUN_60511fd0 @ 60511fd0 size=216 ---- */

void FUN_60511fd0(int *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2,int param_3,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  uint uVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  
  uVar1 = in_EAX[3];
  iVar3 = in_EAX[4] - uVar1;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x1c + iVar4 == iVar4) {
    iVar4 = 0;
  }
  else {
    if ((uint)in_EAX[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((param_3 == 0) || (param_3 != *in_EAX)) {
      _invalid_parameter_noinfo();
    }
    iVar4 = (int)((int)param_4 - uVar1) / 0x1c;
  }
  FUN_605121d0(in_EAX,param_2,param_3,param_4);
  uVar1 = in_EAX[3];
  if ((uint)in_EAX[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  piVar2 = (int *)*in_EAX;
  if (piVar2 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  uVar1 = uVar1 + iVar4 * 0x1c;
  if (uVar1 <= *(uint *)(iVar3 + 0x10)) {
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar1) goto LAB_60512095;
  }
  _invalid_parameter_noinfo();
LAB_60512095:
  param_1[1] = uVar1;
  *param_1 = (int)piVar2;
  return;
}



/* ---- FUN_605120b0 @ 605120b0 size=38 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall
FUN_605120b0(undefined4 param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *unaff_ESI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_EDI;
  
  FUN_605126a0(unaff_ESI,unaff_EDI,param_2);
  return unaff_EDI + (int)unaff_ESI * 0x1c;
}



/* ---- FUN_605120e0 @ 605120e0 size=76 ---- */

void __thiscall FUN_605120e0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 8);
  *(int *)((int)this + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
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



/* ---- FUN_60512130 @ 60512130 size=136 ---- */

undefined4 * __thiscall
FUN_60512130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_605170f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x30);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    puVar1[2] = param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 3),this)
    ;
    puVar1[10] = *(undefined4 *)((int)this + 0x1c);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}



/* ---- Catch_All@605121b8 @ 605121b8 size=21 ---- */

void Catch_All_605121b8(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_605121d0 @ 605121d0 size=787 ---- */

void __thiscall
FUN_605121d0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined4 param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  uint *puVar2;
  int extraout_EAX;
  int iVar4;
  uint uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *extraout_EAX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar7;
  int iVar8;
  uint uStack_74;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [28];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_60517722;
  local_10 = ExceptionList;
  uStack_74 = DAT_6052101c ^ (uint)(local_34 + 0x30);
  local_14 = (undefined1 *)&uStack_74;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0xc) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0xc)) / 0x1c;
  }
  iVar8 = *(int *)((int)this + 0x10);
  iVar4 = (iVar8 - *(int *)((int)this + 0xc)) / 0x1c;
  local_18 = uStack_74;
  puVar2 = &uStack_74;
  if (iVar4 == 0x9249249) {
    std::length_error::length_error((length_error *)0x0);
    iVar4 = extraout_EAX;
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  uVar3 = iVar4 + 1;
  if (uVar7 < uVar3) {
    if (0x9249249 - (uVar7 >> 1) < uVar7) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 + (uVar7 >> 1);
    }
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 == 0) {
      pbVar5 = operator_new(0);
    }
    else {
      std::bad_alloc::bad_alloc_Constructor_or_Destructor(uVar7);
      pbVar5 = extraout_EAX_00;
    }
    iVar8 = ((int)param_3 - *(int *)((int)this + 0xc)) / 0x1c;
    local_8 = 0;
    FUN_605126a0((void *)0x1,pbVar5 + iVar8 * 0x1c,param_1);
    FUN_60512780(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  ((int)this + 0xc),pbVar5,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 param_3);
    FUN_60512780((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 param_3,pbVar5 + (iVar8 + 1) * 0x1c,
                 *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                  ((int)this + 0x10));
    local_8 = 0xffffffff;
    iVar8 = *(int *)((int)this + 0x10);
    iVar4 = *(int *)((int)this + 0xc);
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_6050cd40();
      operator_delete(*(void **)((int)this + 0xc));
    }
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)this + 0x14) =
         pbVar5 + uVar7 * 0x1c;
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)this + 0x10) =
         pbVar5 + ((iVar8 - iVar4) / 0x1c + 1) * 0x1c;
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)this + 0xc) = pbVar5;
  }
  else {
    iVar8 = iVar8 - (int)param_3;
    iVar4 = iVar8 >> 0x1f;
    if (iVar8 / 0x1c + iVar4 == iVar4) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34,param_1);
      local_8 = 2;
      FUN_60512670(extraout_ECX,
                   *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )((int)this + 0x10),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   param_3,param_3 + 0x1c);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_605120b0(*(int *)((int)this + 0x10) - (int)param_3,
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_34);
      local_8 = 2;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 0x1c;
      iVar8 = *(int *)((int)this + 0x10);
      for (; param_3 !=
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar8 + -0x1c);
          param_3 = param_3 + 0x1c) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)local_34);
      }
      pbVar5 = local_34;
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,param_1);
      local_8 = 5;
      pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                ((int)this + 0x10);
      uVar6 = FUN_60512670(extraout_ECX_00,pbVar1,pbVar1 + -0x1c,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pbVar1
                          );
      *(undefined4 *)((int)this + 0x10) = uVar6;
      FUN_60512730((int)pbVar1);
      pbVar5 = param_3 + 0x1c;
      for (; param_3 != pbVar5; param_3 = param_3 + 0x1c) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)local_50);
      }
      pbVar5 = local_50;
    }
    local_8 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)(local_34 + 0x30));
  return;
}



/* ---- Catch_All@605123ad @ 605123ad size=87 ---- */

void Catch_All_605123ad(void)

{
  void *pvVar1;
  int unaff_EBP;
  
  pvVar1 = *(void **)(unaff_EBP + -0x54);
  if (1 < *(int *)(unaff_EBP + -0x58)) {
    FUN_6050cd40();
  }
  if (0 < *(int *)(unaff_EBP + -0x58)) {
    FUN_6050cd40();
  }
  operator_delete(pvVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- Catch_All@605124ab @ 605124ab size=29 ---- */

void Catch_All_605124ab(void)

{
  FUN_6050cd40();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60512560 @ 60512560 size=125 ---- */

void FUN_60512560(void)

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
  if (*(char *)((int)piVar2 + 0x2d) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x2d);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      unaff_ESI[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    while ((cVar1 == '\0' && (unaff_ESI[1] == *piVar2))) {
      unaff_ESI[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x2d);
    }
    if (*(char *)(unaff_ESI[1] + 0x2d) == '\0') {
      unaff_ESI[1] = (int)piVar2;
      return;
    }
  }
  else {
    iVar3 = piVar2[2];
    unaff_ESI[1] = iVar3;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      return;
    }
  }
  _invalid_parameter_noinfo();
  return;
}



/* ---- FUN_605125f0 @ 605125f0 size=116 ---- */

void __cdecl FUN_605125f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  undefined4 in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_605170d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (unaff_ESI,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_1);
  *(undefined4 *)(unaff_ESI + 0x1c) = in_stack_00000020;
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60512670 @ 60512670 size=34 ---- */

void __fastcall
FUN_60512670(undefined4 param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  FUN_60512780(param_3,param_4,param_2);
  return;
}



/* ---- FUN_605126a0 @ 605126a0 size=110 ---- */

void __thiscall
FUN_605126a0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_60517305;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != (void *)0x0; this = (void *)((int)this + -1)) {
    local_8 = 1;
    if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
    }
    param_1 = param_1 + 0x1c;
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@605126fc @ 605126fc size=34 ---- */

void Catch_All_605126fc(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int unaff_EBP;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBP + 8);
  for (this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
               (unaff_EBP + -0x14); this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60512730 @ 60512730 size=78 ---- */

int __cdecl FUN_60512730(int param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *in_EAX;
  int iVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *unaff_EDI;
  
  iVar1 = (int)in_EAX - (int)unaff_EDI;
  if (unaff_EDI != in_EAX) {
    iVar2 = param_1 - (int)in_EAX;
    do {
      in_EAX = in_EAX + -0x1c;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::swap
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(in_EAX + iVar2)
                 ,in_EAX);
    } while (in_EAX != unaff_EDI);
  }
  return param_1 + (iVar1 / 0x1c) * -0x1c;
}



/* ---- FUN_60512780 @ 60512780 size=174 ---- */

void __fastcall
FUN_60512780(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  uint uStack_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [28];
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_605172ce;
  local_10 = ExceptionList;
  uStack_4c = DAT_6052101c ^ (uint)(local_34 + 0x30);
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_18 = uStack_4c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  local_8 = 0;
  for (; param_1 != param_3; param_1 = param_1 + 0x1c) {
    local_8._0_1_ = 2;
    if (param_2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)local_34);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::swap(param_2,param_1);
    param_2 = param_2 + 0x1c;
  }
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)(local_34 + 0x30));
  return;
}



/* ---- Catch_All@60512800 @ 60512800 size=40 ---- */

void Catch_All_60512800(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int unaff_EBP;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  
  pbVar1 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBP + -0x34);
  for (this = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
               (unaff_EBP + -0x38); this != pbVar1; this = this + 0x1c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60512860 @ 60512860 size=20 ---- */

void FUN_60512860(void)

{
  undefined4 *unaff_ESI;
  
  CloseHandle((HANDLE)*unaff_ESI);
  CloseHandle((HANDLE)unaff_ESI[1]);
  return;
}



/* ---- FUN_60512880 @ 60512880 size=9 ---- */

void __fastcall FUN_60512880(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60512883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  return;
}



/* ---- FUN_60512890 @ 60512890 size=30 ---- */

void FUN_60512890(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (unaff_ESI,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (CAvtrPartPool::m_pAvtrDnThread + 0x20));
  return;
}



/* ---- FUN_605128b0 @ 605128b0 size=30 ---- */

void FUN_605128b0(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (unaff_ESI,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (CAvtrPartPool::m_pAvtrDnThread + 0x3c));
  return;
}



/* ---- FUN_605128d0 @ 605128d0 size=30 ---- */

void FUN_605128d0(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (unaff_ESI,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (CAvtrPartPool::m_pAvtrDnThread + 0x58));
  return;
}



/* ---- FUN_605128f0 @ 605128f0 size=516 ---- */

void __fastcall
FUN_605128f0(char *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 local_94;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [4];
  undefined4 ***local_34 [4];
  uint local_24;
  uint local_20;
  char local_1c [12];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_60516f23;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)&local_94;
  ExceptionList = &local_c;
  local_4 = 0;
  local_90 = param_3;
  local_94 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_3);
  local_4 = 0;
  local_94 = 1;
  if (*param_1 == '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
              (param_2,(uint)local_38,0);
    local_4 = 5;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_3,local_38);
  }
  else {
    FUN_60512b00();
    local_4 = 1;
    iVar6 = 0;
    uVar7 = 0;
    if (0 < (int)local_24) {
      bVar8 = local_24 != 0;
      iVar2 = -local_24;
      uVar5 = local_24;
      do {
        if (!bVar8 && iVar2 != 0) {
          _invalid_parameter_noinfo();
          uVar5 = local_24;
        }
        pppuVar3 = local_34[0];
        if (local_20 < 0x10) {
          pppuVar3 = local_34;
        }
        pcVar1 = (char *)((int)pppuVar3 + uVar7);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + *pcVar1;
        bVar8 = uVar7 < uVar5;
        iVar2 = uVar7 - uVar5;
      } while ((int)uVar7 < (int)uVar5);
    }
    local_1c[1] = '\0';
    local_1c[2] = '\0';
    local_1c[3] = '\0';
    local_1c[4] = '\0';
    local_1c[5] = '\0';
    local_1c[6] = '\0';
    local_1c[7] = '\0';
    local_1c[8] = '\0';
    local_1c[9] = 0;
    local_1c[0] = '\0';
    _itoa_s(iVar6 % 0x1a,local_1c,10,0x10);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8c,local_1c);
    local_4._0_1_ = 2;
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_54,"com\\");
    local_4._0_1_ = 3;
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_70,pbVar4);
    local_4._0_1_ = 4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_3,pbVar4);
    local_4._0_1_ = 3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_70);
    local_4._0_1_ = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_54);
    local_4 = CONCAT31(local_4._1_3_,1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8c);
  }
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_38);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_94);
  return;
}



/* ---- FUN_60512b00 @ 60512b00 size=188 ---- */

void FUN_60512b00(void)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_EDI;
  undefined4 local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60516ea3;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)&local_34;
  ExceptionList = &local_c;
  local_34 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
            (unaff_ESI,(uint)local_2c,*(int *)(unaff_ESI + 0x14) - 4);
  local_4 = 1;
  iVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                    (local_2c,".gif");
  if (iVar1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
              (unaff_ESI,(uint)unaff_EDI,0);
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (unaff_EDI,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               unaff_ESI);
  }
  local_34 = 1;
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_34);
  return;
}



/* ---- FUN_60512bc0 @ 60512bc0 size=301 ---- */

void FUN_60512bc0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> bStack00000020;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_60516e5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(unaff_ESI);
  pbVar3 = unaff_ESI + 0x1c;
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(pbVar3);
  this = unaff_ESI + 0x38;
  local_4._0_1_ = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(unaff_ESI + 0x54);
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(unaff_ESI + 0x70);
  local_4 = CONCAT31(local_4._1_3_,6);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (pbVar3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                    &param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &bStack00000020);
  iVar1 = *(int *)(unaff_ESI + 0x30);
  if (*(uint *)(unaff_ESI + 0x30) < iVar1 - 1U) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(unaff_ESI + 0x34) < 0x10) {
    pbVar2 = unaff_ESI + 0x20;
  }
  else {
    pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_ESI + 0x20)
    ;
  }
  if (pbVar2[iVar1 - 1U] != (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x2f) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(pbVar3,1,'/');
  }
  iVar1 = *(int *)(unaff_ESI + 0x4c);
  if (*(uint *)(unaff_ESI + 0x4c) < iVar1 - 1U) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(unaff_ESI + 0x50) < 0x10) {
    pbVar3 = unaff_ESI + 0x3c;
  }
  else {
    pbVar3 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_ESI + 0x3c)
    ;
  }
  if (pbVar3[iVar1 - 1U] != (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x5c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(this,1,'\\');
  }
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&bStack00000020);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60512cf0 @ 60512cf0 size=131 ---- */

void FUN_60512cf0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_60516ded;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x70);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x54);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x38);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x1c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60512d80 @ 60512d80 size=460 ---- */

bool __fastcall
FUN_60512d80(int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  errno_t eVar2;
  HRESULT HVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  bool bVar6;
  char local_7d;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_7c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6051708d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(*param_1 + 4));
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                     (local_7c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(param_2 + 0x1c));
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (param_2 + 0x54,pbVar1);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_7c);
  local_7d = *(char *)*param_1;
  FUN_605128f0(&local_7d,param_2,local_60);
  local_4 = 1;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                     (local_7c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                *)(param_2 + 0x38));
  pbVar5 = param_2 + 0x70;
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(pbVar5,pbVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_7c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
  if (*(uint *)(param_2 + 0x88) < 0x10) {
    pbVar4 = param_2 + 0x74;
  }
  else {
    pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x74);
  }
  FUN_60512f50((char *)pbVar4);
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                     (local_28,(char *)pbVar5);
  local_4 = 3;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_44,pbVar1);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(pbVar5,pbVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_44);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28);
  if (*(uint *)(param_2 + 0x88) < 0x10) {
    pbVar5 = param_2 + 0x74;
  }
  else {
    pbVar5 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x74);
  }
  eVar2 = _access_s((char *)pbVar5,0);
  if (eVar2 == 0) {
    bVar6 = true;
  }
  else {
    if (*(uint *)(param_2 + 0x88) < 0x10) {
      pbVar5 = param_2 + 0x74;
    }
    else {
      pbVar5 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x74)
      ;
    }
    if (*(uint *)(param_2 + 0x6c) < 0x10) {
      pbVar4 = param_2 + 0x58;
    }
    else {
      pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x58)
      ;
    }
    HVar3 = URLDownloadToFileA((LPUNKNOWN)0x0,(LPCSTR)pbVar4,(LPCSTR)pbVar5,0,
                               (LPBINDSTATUSCALLBACK)0x0);
    bVar6 = HVar3 == 0;
  }
  ExceptionList = local_c;
  return bVar6;
}



/* ---- FUN_60512f50 @ 60512f50 size=176 ---- */

void FUN_60512f50(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  DWORD DVar4;
  char local_10c [264];
  uint local_4;
  
  local_4 = DAT_6052101c ^ (uint)local_10c;
  strcpy_s(local_10c,0x105,param_1);
  pcVar2 = local_10c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(local_10c + 1);
  if ((3 < iVar3) && (local_10c[iVar3 + -1] == '\\')) {
    local_10c[iVar3 + -1] = '\0';
  }
  DVar4 = GetFileAttributesA(local_10c);
  if (DVar4 == 0xffffffff) {
    pcVar2 = strrchr(local_10c,0x5c);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    FUN_60512f50(local_10c);
    CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  __security_check_cookie(local_4 ^ (uint)local_10c);
  return;
}



/* ---- CAvtrPart @ 60513000 size=91 ---- */

/* public: __thiscall CAvtrPart::CAvtrPart(void) */

CAvtrPart * __thiscall CAvtrPart::CAvtrPart(CAvtrPart *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13000  8  ??0CAvtrPart@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_60508380((int *)this);
  local_4 = 0;
  FUN_60508380((int *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  ExceptionList = local_c;
  return this;
}



/* ---- ~CAvtrPart @ 60513060 size=313 ---- */

/* public: __thiscall CAvtrPart::~CAvtrPart(void) */

void __thiscall CAvtrPart::~CAvtrPart(CAvtrPart *this)

{
  CAvtrPart *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
                    /* 0x13060  28  ??1CAvtrPart@@QAE@XZ */
  puVar8 = *(undefined4 **)(this + 0xc);
  if (*(undefined4 **)(this + 0x10) < puVar8) {
    _invalid_parameter_noinfo();
  }
  piVar2 = *(int **)this;
  while( true ) {
    puVar3 = *(undefined4 **)(this + 0x10);
    if (puVar3 < *(undefined4 **)(this + 0xc)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar2 == (int *)0x0) || (piVar2 != *(int **)this)) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 == puVar3) break;
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (*(undefined4 **)(iVar7 + 0x10) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    operator_delete__((void *)*puVar8);
    if (piVar2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (*(undefined4 **)(iVar7 + 0x10) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    puVar8 = puVar8 + 1;
  }
  pvVar4 = *(void **)(this + 0x10);
  if (pvVar4 < *(void **)(this + 0xc)) {
    _invalid_parameter_noinfo();
  }
  uVar5 = *(uint *)(this + 0xc);
  uVar6 = *(undefined4 *)this;
  if (*(uint *)(this + 0x10) < uVar5) {
    _invalid_parameter_noinfo();
  }
  FUN_605057e0(*(undefined4 *)this,uVar5,uVar6,pvVar4);
  pvVar4 = *(void **)(this + 0x28);
  pCVar1 = this + 0x18;
  if (pvVar4 < *(void **)(this + 0x24)) {
    _invalid_parameter_noinfo();
  }
  uVar5 = *(uint *)(this + 0x24);
  uVar6 = *(undefined4 *)pCVar1;
  if (*(uint *)(this + 0x28) < uVar5) {
    _invalid_parameter_noinfo();
  }
  FUN_605057e0(*(undefined4 *)pCVar1,uVar5,uVar6,pvVar4);
  if (*(void **)(this + 0x24) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x24));
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  operator_delete(*(void **)pCVar1);
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  operator_delete(*(void **)this);
  return;
}



/* ---- CAvtrId @ 605131a0 size=150 ---- */

/* public: __thiscall CAvtrId::CAvtrId(void) */

CAvtrId * __thiscall CAvtrId::CAvtrId(CAvtrId *this)

{
  int *piVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x131a0  4  ??0CAvtrId@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  (this->CAvtrId_data).offset_0x4 = 0;
  (this->CAvtrId_data).offset_0x8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x10);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x2c);
  piVar1 = &(this->CAvtrId_data).offset_0x48;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_60508380(piVar1);
  (this->CAvtrId_data).offset_0x0 = 0;
  (this->CAvtrId_data).offset_0x1 = 0;
  uVar2 = (this->CAvtrId_data).offset_0x58;
  if (uVar2 < (this->CAvtrId_data).offset_0x54) {
    _invalid_parameter_noinfo();
  }
  (this->CAvtrId_data).offset_0x4 = *piVar1;
  (this->CAvtrId_data).offset_0x8 = uVar2;
  (this->CAvtrId_data).offset_0xc = 1;
  ExceptionList = local_c;
  return this;
}



/* ---- Set @ 60513240 size=267 ---- */

/* public: void __thiscall CAvtrId::Set(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &,bool) */

void __thiscall
CAvtrId::Set(CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            bool param_2)

{
  undefined1 *this_00;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_28 [2];
  int local_20 [7];
  
                    /* 0x13240  195
                       ?Set@CAvtrId@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
                        */
  local_28[0] = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (this->CAvtrId_data).offset_0x58;
  piVar4 = &(this->CAvtrId_data).offset_0x48;
  if (local_28[0] <
      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
      (this->CAvtrId_data).offset_0x54) {
    _invalid_parameter_noinfo();
  }
  uVar1 = (this->CAvtrId_data).offset_0x54;
  local_20[0] = *piVar4;
  if ((this->CAvtrId_data).offset_0x58 < uVar1) {
    _invalid_parameter_noinfo();
  }
  FUN_6050cfc0(local_20,*piVar4,uVar1,local_20[0],local_28[0]);
  (this->CAvtrId_data).offset_0x0 = param_2;
  this_00 = &(this->CAvtrId_data).field_0x10;
  (this->CAvtrId_data).offset_0x1 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this_00,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)param_1
            );
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    pbVar5 = param_1 + 4;
  }
  else {
    pbVar5 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 4);
  }
  Add(this,(char *)pbVar5,param_2,"_");
  puVar2 = (undefined4 *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this_00);
  local_28[0] = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           this_00);
  puVar3 = (undefined4 *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this_00);
  FUN_605020f0((int *)local_28,tolower_exref,*puVar3,(char *)puVar3[1],*(undefined4 *)local_28[0],
               *(char **)(local_28[0] + 4),*puVar2,puVar2[1]);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x2c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this_00
            );
  piVar4 = (int *)FindExpressAvtrId(this);
  (this->CAvtrId_data).offset_0x4 = *piVar4;
  (this->CAvtrId_data).offset_0x8 = piVar4[1];
  return;
}



/* ---- ~CAvtrId @ 60513350 size=145 ---- */

/* public: virtual __thiscall CAvtrId::~CAvtrId(void) */

void __thiscall CAvtrId::~CAvtrId(CAvtrId *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x13350  26  ??1CAvtrId@@UAE@XZ */
  puStack_8 = &LAB_605176ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 2;
  FUN_6050ccb0();
  local_4._0_1_ = 3;
  FUN_6050cd60();
  operator_delete((void *)(this->CAvtrId_data).offset_0x48);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x2c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrId_data).field_0x10);
  ExceptionList = local_c;
  return;
}



/* ---- Add @ 605133f0 size=489 ---- */

/* protected: bool __thiscall CAvtrId::Add(char const *,bool,char *) */

bool __thiscall CAvtrId::Add(CAvtrId *this,char *param_1,bool param_2,char *param_3)

{
  int *piVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStackY_124 [128];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff60;
  uint uStack_80;
  int local_70 [7];
  int *local_54;
  int *local_50 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_44;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_40;
  undefined4 local_3c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [28];
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x133f0  53  ?Add@CAvtrId@@IAE_NPBD_NPAD@Z */
  puStack_c = &LAB_60517bcb;
  local_10 = ExceptionList;
  uStack_80 = DAT_6052101c ^ (uint)(local_38 + 0x34);
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = uStack_80;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38,param_1);
  local_8._0_1_ = 1;
  if ((this->CAvtrId_data).offset_0x0 == '\0') {
    FUN_60508380((int *)local_50);
    local_54 = (int *)(abStackY_124 + 0x84);
    local_8 = CONCAT31(local_8._1_3_,2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStackY_124 + 0x84,param_1);
    FUN_605114d0(in_stack_ffffff60);
    local_54 = &(this->CAvtrId_data).offset_0x48;
    FUN_6050ccb0();
    pbVar8 = local_44;
    piVar1 = local_50[0];
    if (local_40 < local_44) {
      _invalid_parameter_noinfo();
      piVar1 = local_50[0];
    }
    while( true ) {
      pbVar2 = local_40;
      if (local_40 < local_44) {
        _invalid_parameter_noinfo();
      }
      if ((piVar1 == (int *)0x0) || (piVar1 != local_50[0])) {
        _invalid_parameter_noinfo();
      }
      if (pbVar8 == pbVar2) break;
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar1;
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (iVar7 + 0x10) <= pbVar8) {
        _invalid_parameter_noinfo();
      }
      FUN_60511ce0(pbVar8);
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar1;
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (iVar7 + 0x10) <= pbVar8) {
        _invalid_parameter_noinfo();
      }
      pbVar8 = pbVar8 + 0x1c;
    }
    local_8._0_1_ = 3;
    this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_44;
    if (local_44 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      for (; this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_40;
          this_00 = this_00 + 0x1c) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(this_00);
      }
      operator_delete(local_44);
    }
    local_44 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_40 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0;
    local_3c = 0;
    operator_delete(local_50[0]);
  }
  else {
    puVar4 = (undefined4 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(local_38);
    puVar5 = (undefined4 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(local_38);
    puVar6 = (undefined4 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(local_38);
    FUN_605020f0(local_70,toupper_exref,*puVar6,(char *)puVar6[1],*puVar5,(char *)puVar5[1],*puVar4,
                 puVar4[1]);
    FUN_60511ce0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_38);
    iVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                      (local_38,"LCM001_HCM001_FNM001A_PNM001");
    if ((iVar7 == 0) ||
       (iVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                          (local_38,"LCF001_HCF001_FNF001A_PNF001"), iVar7 == 0)) {
      (this->CAvtrId_data).offset_0x1 = 1;
      local_8 = (uint)local_8._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
      uVar3 = FUN_605135e1();
      return (bool)uVar3;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
  uVar3 = FUN_605135e1();
  return (bool)uVar3;
}



/* ---- Catch_All@605135d9 @ 605135d9 size=6 ---- */

undefined * Catch_All_605135d9(void)

{
  return &DAT_605135df;
}



/* ---- FUN_605135e1 @ 605135e1 size=30 ---- */

void FUN_605135e1(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x605135f9;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x18) ^ unaff_EBP);
  return;
}



/* ---- AddPrefix @ 60513600 size=230 ---- */

/* public: void __thiscall CAvtrId::AddPrefix(char const *) */

void __thiscall CAvtrId::AddPrefix(CAvtrId *this,char *param_1)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x13600  56  ?AddPrefix@CAvtrId@@QAEXPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605172a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((this->CAvtrId_data).offset_0x0 != '\0') {
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28,param_1);
    local_4 = 0;
    iVar3 = (this->CAvtrId_data).offset_0x58 - (this->CAvtrId_data).offset_0x54;
    iVar1 = iVar3 >> 0x1f;
    if (iVar3 / 0x1c + iVar1 == iVar1) {
      _invalid_parameter_noinfo();
    }
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_44,pbVar2);
    local_4._0_1_ = 1;
    iVar3 = (this->CAvtrId_data).offset_0x58 - (this->CAvtrId_data).offset_0x54;
    iVar1 = iVar3 >> 0x1f;
    if (iVar3 / 0x1c + iVar1 == iVar1) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->CAvtrId_data).offset_0x54,pbVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_44);
    local_4 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28);
  }
  ExceptionList = local_c;
  return;
}



/* ---- IsExpressionAvatar @ 605136f0 size=131 ---- */

/* public: bool __thiscall CAvtrId::IsExpressionAvatar(void) */

bool __thiscall CAvtrId::IsExpressionAvatar(CAvtrId *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x136f0  178  ?IsExpressionAvatar@CAvtrId@@QAE_NXZ */
  piVar3 = (int *)FindExpressAvtrId(this);
  (this->CAvtrId_data).offset_0x4 = *piVar3;
  (this->CAvtrId_data).offset_0x8 = piVar3[1];
  uVar1 = (this->CAvtrId_data).offset_0x58;
  if (uVar1 < (this->CAvtrId_data).offset_0x54) {
    _invalid_parameter_noinfo();
  }
  iVar2 = (this->CAvtrId_data).offset_0x4;
  if ((iVar2 == 0) || (iVar2 != (this->CAvtrId_data).offset_0x48)) {
    _invalid_parameter_noinfo();
  }
  if ((this->CAvtrId_data).offset_0x8 == uVar1) {
    return false;
  }
  uVar1 = (this->CAvtrId_data).offset_0xc;
  if (*(uint *)&(this->CAvtrId_data).field_0x40 < uVar1) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)&(this->CAvtrId_data).field_0x44 < 0x10) {
    return (&(this->CAvtrId_data).field_0x30)[uVar1] != 'n';
  }
  return *(char *)(*(int *)&(this->CAvtrId_data).field_0x30 + uVar1) != 'n';
}



/* ---- GetExpressionCode @ 60513780 size=124 ---- */

/* public: char __thiscall CAvtrId::GetExpressionCode(void) */

char __thiscall CAvtrId::GetExpressionCode(CAvtrId *this)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x13780  148  ?GetExpressionCode@CAvtrId@@QAEDXZ */
  piVar3 = (int *)FindExpressAvtrId(this);
  (this->CAvtrId_data).offset_0x4 = *piVar3;
  (this->CAvtrId_data).offset_0x8 = piVar3[1];
  uVar1 = (this->CAvtrId_data).offset_0x58;
  if (uVar1 < (this->CAvtrId_data).offset_0x54) {
    _invalid_parameter_noinfo();
  }
  iVar2 = (this->CAvtrId_data).offset_0x4;
  if ((iVar2 == 0) || (iVar2 != (this->CAvtrId_data).offset_0x48)) {
    _invalid_parameter_noinfo();
  }
  if ((this->CAvtrId_data).offset_0x8 == uVar1) {
    return '\0';
  }
  uVar1 = (this->CAvtrId_data).offset_0xc;
  if (*(uint *)&(this->CAvtrId_data).field_0x40 < uVar1) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)&(this->CAvtrId_data).field_0x44 < 0x10) {
    return (&(this->CAvtrId_data).field_0x30)[uVar1];
  }
  return *(char *)(*(int *)&(this->CAvtrId_data).field_0x30 + uVar1);
}



/* ---- SetExpressionCode @ 60513800 size=139 ---- */

/* public: bool __thiscall CAvtrId::SetExpressionCode(char) */

bool __thiscall CAvtrId::SetExpressionCode(CAvtrId *this,char param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x13800  208  ?SetExpressionCode@CAvtrId@@QAE_ND@Z */
  piVar3 = (int *)FindExpressAvtrId(this);
  (this->CAvtrId_data).offset_0x4 = *piVar3;
  (this->CAvtrId_data).offset_0x8 = piVar3[1];
  uVar1 = (this->CAvtrId_data).offset_0x58;
  if (uVar1 < (this->CAvtrId_data).offset_0x54) {
    _invalid_parameter_noinfo();
  }
  iVar2 = (this->CAvtrId_data).offset_0x4;
  if ((iVar2 == 0) || (iVar2 != (this->CAvtrId_data).offset_0x48)) {
    _invalid_parameter_noinfo();
  }
  if ((this->CAvtrId_data).offset_0x8 == uVar1) {
    return false;
  }
  uVar1 = (this->CAvtrId_data).offset_0xc;
  if (*(uint *)&(this->CAvtrId_data).field_0x40 < uVar1) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)&(this->CAvtrId_data).field_0x44 < 0x10) {
    (&(this->CAvtrId_data).field_0x30)[uVar1] = param_1;
    return true;
  }
  *(char *)(*(int *)&(this->CAvtrId_data).field_0x30 + uVar1) = param_1;
  return true;
}



/* ---- Copy @ 60513890 size=135 ---- */

/* public: void __thiscall CAvtrId::Copy(class CAvtrId &) */

void __thiscall CAvtrId::Copy(CAvtrId *this,CAvtrId *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  int local_10 [3];
  
                    /* 0x13890  67  ?Copy@CAvtrId@@QAEXAAV1@@Z */
  (this->CAvtrId_data).offset_0x0 = param_1[4];
  (this->CAvtrId_data).offset_0x1 = param_1[5];
  if ((this->CAvtrId_data).offset_0x58 < (this->CAvtrId_data).offset_0x54) {
    _invalid_parameter_noinfo();
  }
  local_10[0] = (this->CAvtrId_data).offset_0x48;
  pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (param_1 + 0x5c);
  if (pbVar1 < *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_1 + 0x58)) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x58)) {
    _invalid_parameter_noinfo();
  }
  FUN_60515fc0(local_10,pbVar1);
  return;
}



/* ---- CheckDefaultAvatarId @ 60513920 size=50 ---- */

/* protected: bool __thiscall CAvtrId::CheckDefaultAvatarId(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > &) */

bool __thiscall
CAvtrId::CheckDefaultAvatarId
          (CAvtrId *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int iVar1;
  
                    /* 0x13920  63
                       ?CheckDefaultAvatarId@CAvtrId@@IAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
                        */
  iVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                    (param_1,"LCM001_HCM001_FNM001A_PNM001");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                    (param_1,"LCF001_HCF001_FNF001A_PNF001");
  return iVar1 == 0;
}



/* ---- FindExpressAvtrId @ 60513960 size=474 ---- */

/* protected: class std::_Vector_iterator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > __thiscall
   CAvtrId::FindExpressAvtrId(void) */

int * __thiscall CAvtrId::FindExpressAvtrId(CAvtrId *this)

{
  int *piVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  uint uVar5;
  code *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  int *in_stack_00000004;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x13960  135
                       ?FindExpressAvtrId@CAvtrId@@IAE?AV?$_Vector_iterator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517699;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
            (this->CAvtrId_data).offset_0x54;
  if ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
      (this->CAvtrId_data).offset_0x58 < this_00) {
    _invalid_parameter_noinfo();
  }
  piVar1 = (int *)(this->CAvtrId_data).offset_0x48;
  do {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->CAvtrId_data).offset_0x58;
    if (pbVar2 < (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (this->CAvtrId_data).offset_0x54) {
      _invalid_parameter_noinfo();
    }
    if ((piVar1 == (int *)0x0) || (piVar1 != (int *)(this->CAvtrId_data).offset_0x48)) {
      _invalid_parameter_noinfo();
    }
    pcVar6 = _invalid_parameter_noinfo_exref;
    if (this_00 == pbVar2) {
      uVar5 = (this->CAvtrId_data).offset_0x58;
      *in_stack_00000004 = 0;
      if (uVar5 < (this->CAvtrId_data).offset_0x54) {
        _invalid_parameter_noinfo();
      }
      *in_stack_00000004 = (this->CAvtrId_data).offset_0x48;
      in_stack_00000004[1] = uVar5;
      ExceptionList = local_14;
      return in_stack_00000004;
    }
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
        this_00) {
      _invalid_parameter_noinfo();
    }
    iVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                      (this_00,0,2,"fn");
    if (iVar3 == 0) {
LAB_60513a28:
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
          this_00) {
        _invalid_parameter_noinfo();
      }
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
                         (this_00,(uint)local_34,0);
      local_c = 0;
      uVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &(this->CAvtrId_data).field_0x10,pbVar4,0);
      local_c = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_34);
      if (uVar5 != *(uint *)npos_exref) {
        if (piVar1 == (int *)0x0) {
          _invalid_parameter_noinfo();
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar1;
        }
        if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
            this_00) {
          _invalid_parameter_noinfo();
        }
        (this->CAvtrId_data).offset_0xc = *(int *)(this_00 + 0x14) + -1 + uVar5;
        *in_stack_00000004 = (int)piVar1;
        in_stack_00000004[1] = (int)this_00;
        ExceptionList = local_14;
        return in_stack_00000004;
      }
      pcVar6 = _invalid_parameter_noinfo_exref;
    }
    else {
      if (piVar1 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
          this_00) {
        _invalid_parameter_noinfo();
      }
      iVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare
                        (this_00,0,2,"sb");
      if (iVar3 == 0) goto LAB_60513a28;
    }
    if (piVar1 == (int *)0x0) {
      (*pcVar6)();
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar3 + 0x10) <=
        this_00) {
      (*pcVar6)();
    }
    this_00 = this_00 + 0x1c;
  } while( true );
}



/* ---- ToString @ 60513b40 size=107 ---- */

/* public: bool __thiscall CAvtrId::ToString(char *,bool) */

bool __thiscall CAvtrId::ToString(CAvtrId *this,char *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
                    /* 0x13b40  225  ?ToString@CAvtrId@@QAE_NPAD_N@Z */
  if (*(int *)&(this->CAvtrId_data).field_0x40 == 0) {
    return false;
  }
  if (*(uint *)&(this->CAvtrId_data).field_0x44 < 0x10) {
    pcVar3 = &(this->CAvtrId_data).field_0x30;
  }
  else {
    pcVar3 = *(char **)&(this->CAvtrId_data).field_0x30;
  }
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (param_2) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar5 = 0;
    if (0 < (int)pcVar3 - (int)(param_1 + 1)) {
      do {
        iVar2 = toupper((int)param_1[iVar5]);
        param_1[iVar5] = (char)iVar2;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)pcVar3 - (int)(param_1 + 1));
    }
  }
  return true;
}



/* ---- ToString @ 60513bb0 size=144 ---- */

/* public: bool __thiscall CAvtrId::ToString(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > &,bool) */

bool __thiscall
CAvtrId::ToString(CAvtrId *this,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                 bool param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_10 [3];
  
                    /* 0x13bb0  224
                       ?ToString@CAvtrId@@QAE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
                        */
  if (*(int *)&(this->CAvtrId_data).field_0x40 == 0) {
    return false;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&(this->CAvtrId_data).field_0x2c);
  if (param_2) {
    puVar1 = (undefined4 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(param_1);
    puVar2 = (undefined4 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(param_1);
    puVar3 = (undefined4 *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(param_1);
    FUN_605020f0(local_10,toupper_exref,*puVar3,(char *)puVar3[1],*puVar2,(char *)puVar2[1],*puVar1,
                 puVar1[1]);
  }
  return true;
}



/* ---- CreateInstance @ 60513c40 size=476 ---- */

/* public: static int __cdecl CAvtrPartPool::CreateInstance(void) */

int __cdecl CAvtrPartPool::CreateInstance(void)

{
  CAvtrPartPool *_Src;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  int iVar2;
  CAvtrPartPool *local_348;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_344 [28];
  char local_328;
  undefined1 local_327 [263];
  CHAR local_220;
  undefined1 local_21f [263];
  char local_118;
  undefined1 local_117 [263];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13c40  85  ?CreateInstance@CAvtrPartPool@@SAHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517b7a;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)&local_348;
  ExceptionList = &local_c;
  if (m_pInst == (CAvtrPartPool *)0x0) {
    local_348 = operator_new(0x74);
    local_4 = 0;
    if (local_348 == (CAvtrPartPool *)0x0) {
      m_pInst = (CAvtrPartPool *)0x0;
    }
    else {
      m_pInst = (CAvtrPartPool *)CAvtrPartPool(local_348);
    }
    local_4 = 0xffffffff;
    if ((CAvtrPartPool *)m_pInst != (CAvtrPartPool *)0x0) {
      local_328 = '\0';
      memset(local_327,0,0x104);
      local_118 = '\0';
      memset(local_117,0,0x104);
      local_220 = '\0';
      memset(local_21f,0,0x104);
      GetCurrentDirectoryA(0x104,&local_220);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(m_pInst + 0x40)
                 ,&local_220);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(m_pInst + 0x40)
                 ,"\\common\\images\\");
      iVar2 = GetHangameDirectory(&local_118);
      if (iVar2 == 0) {
        if (*(uint *)(m_pInst + 0x58) < 0x10) {
          _Src = m_pInst + 0x44;
        }
        else {
          _Src = *(CAvtrPartPool **)(m_pInst + 0x44);
        }
        strcpy_s(&local_328,0x105,(char *)_Src);
      }
      else {
        FUN_60516290(&local_328,0x105,&local_328,"%s\\Avatar\\",(char)&local_118);
      }
      pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_344,&local_328)
      ;
      local_4 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(m_pInst + 0x24)
                 ,pbVar1);
      local_4 = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_344);
      InitializeCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
      goto LAB_60513df7;
    }
  }
  local_4 = 0xffffffff;
LAB_60513df7:
  ExceptionList = local_c;
  iVar2 = __security_check_cookie(local_10 ^ (uint)&local_348);
  return iVar2;
}



/* ---- Inst @ 60513e20 size=6 ---- */

/* public: static class CAvtrPartPool * __cdecl CAvtrPartPool::Inst(void) */

CAvtrPartPool * __cdecl CAvtrPartPool::Inst(void)

{
                    /* 0x13e20  172  ?Inst@CAvtrPartPool@@SAPAV1@XZ */
  return m_pInst;
}



/* ---- DestroyInstance @ 60513e30 size=94 ---- */

/* public: static int __cdecl CAvtrPartPool::DestroyInstance(void) */

int __cdecl CAvtrPartPool::DestroyInstance(void)

{
  CAvtrDownloadThread *pCVar1;
  
                    /* 0x13e30  96  ?DestroyInstance@CAvtrPartPool@@SAHXZ */
  if (m_pInst == (CAvtrPartPool *)0x0) {
    return 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  pCVar1 = m_pAvtrDnThread;
  if (m_pAvtrDnThread != (CAvtrDownloadThread *)0x0) {
    FUN_60514cf0((undefined4 *)m_pAvtrDnThread);
    operator_delete(pCVar1);
  }
  m_pAvtrDnThread = (CAvtrDownloadThread *)0x0;
  if (m_pInst != (CAvtrPartPool *)0x0) {
    (*(code *)**(undefined4 **)m_pInst)(1);
  }
  m_pInst = (CAvtrPartPool *)0x0;
  return 1;
}



/* ---- CreateDLThread @ 60513e90 size=112 ---- */

/* public: static void __cdecl CAvtrPartPool::CreateDLThread(void) */

void __cdecl CAvtrPartPool::CreateDLThread(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x13e90  82  ?CreateDLThread@CAvtrPartPool@@SAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6051821b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x94);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    m_pAvtrDnThread = (CAvtrDownloadThread *)0x0;
    ExceptionList = local_c;
    return;
  }
  m_pAvtrDnThread = (CAvtrDownloadThread *)FUN_60514ba0(puVar1);
  ExceptionList = local_c;
  return;
}



/* ---- DestroyDLThread @ 60513f00 size=39 ---- */

/* public: static void __cdecl CAvtrPartPool::DestroyDLThread(void) */

void __cdecl CAvtrPartPool::DestroyDLThread(void)

{
  CAvtrDownloadThread *pCVar1;
  
                    /* 0x13f00  94  ?DestroyDLThread@CAvtrPartPool@@SAXXZ */
  pCVar1 = m_pAvtrDnThread;
  if (m_pAvtrDnThread != (CAvtrDownloadThread *)0x0) {
    FUN_60514cf0((undefined4 *)m_pAvtrDnThread);
    operator_delete(pCVar1);
  }
  m_pAvtrDnThread = (CAvtrDownloadThread *)0x0;
  return;
}



/* ---- ~CAvtrPartPool @ 60513f30 size=207 ---- */

/* public: virtual __thiscall CAvtrPartPool::~CAvtrPartPool(void) */

void __thiscall CAvtrPartPool::~CAvtrPartPool(CAvtrPartPool *this)

{
  int *piVar1;
  undefined1 local_11;
  CAvtrPartPool *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x13f30  29  ??1CAvtrPartPool@@UAE@XZ */
  puStack_8 = &LAB_60517e3d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftablePtr = &_vftable_;
  local_4 = 2;
  piVar1 = (this->CAvtrPartPool_data).offset_0x14;
  local_10 = this;
  FUN_60515d20(&local_11,
               (int *)this->
                      tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
               ,*piVar1,(int *)this->
                               tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
               ,(int)piVar1);
  FUN_6050d460((int *)(this->CAvtrPartPool_data).offset_0x14[1]);
  piVar1 = (this->CAvtrPartPool_data).offset_0x14;
  piVar1[1] = (int)piVar1;
  piVar1 = (this->CAvtrPartPool_data).offset_0x14;
  (this->CAvtrPartPool_data).offset_0x18 = 0;
  *piVar1 = (int)piVar1;
  piVar1 = (this->CAvtrPartPool_data).offset_0x14;
  piVar1[2] = (int)piVar1;
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x38);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CAvtrPartPool_data).field_0x1c);
  local_4 = 3;
  local_10 = (CAvtrPartPool *)
             &this->
              tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  ;
  FUN_6050cf80();
  operator_delete((void *)this->
                          tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                 );
  ExceptionList = local_c;
  return;
}



/* ---- RequestLoad @ 60514000 size=768 ---- */

/* public: void __thiscall CAvtrPartPool::RequestLoad(class CAvtrId &,bool) */

void __thiscall CAvtrPartPool::RequestLoad(CAvtrPartPool *this,CAvtrId *param_1,bool param_2)

{
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tVar1
  ;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tVar2
  ;
  int *piVar3;
  CAvtrPartPool *pCVar4;
  int iVar5;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  *ptVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  *ptVar11;
  undefined1 auStack_12c [4];
  CAvtrId *local_128;
  CAvtrId *local_124;
  int *local_120;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_11c;
  CAvtrPartPool *local_118;
  undefined1 *local_114;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  local_10c;
  int local_108 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_100 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_e4 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c8 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_ac [84];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [28];
  CAvtrId local_3c [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [28];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x14000  194  ?RequestLoad@CAvtrPartPool@@QAEXAAVCAvtrId@@_N@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517f82;
  local_14 = ExceptionList;
  local_1c = DAT_6052101c ^ (uint)auStack_12c;
  ExceptionList = &local_14;
  local_128 = param_1;
  local_118 = this;
  if (param_1[5] == (CAvtrId)0x0) {
    pbVar10 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x58);
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x5c) <
        pbVar10) {
      _invalid_parameter_noinfo();
    }
    local_120 = *(int **)(param_1 + 0x4c);
    local_11c = pbVar10;
    while( true ) {
      pbVar10 = local_11c;
      piVar3 = local_120;
      local_124 = *(CAvtrId **)(param_1 + 0x5c);
      if (local_124 < *(CAvtrId **)(param_1 + 0x58)) {
        _invalid_parameter_noinfo();
      }
      if ((piVar3 == (int *)0x0) || (piVar3 != *(int **)(param_1 + 0x4c))) {
        _invalid_parameter_noinfo();
      }
      if (pbVar10 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_124)
      break;
      if (piVar3 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar3;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
          pbVar10) {
        _invalid_parameter_noinfo();
      }
      std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_58,(char *)pbVar10);
      local_c = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
      if (piVar3 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar3;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
          pbVar10) {
        _invalid_parameter_noinfo();
      }
      pCVar4 = local_118;
      ptVar11 = &local_118->
                 tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
      ;
      ptVar6 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                *)FUN_60515500(local_108,pbVar10);
      tVar1 = *ptVar6;
      tVar2 = ptVar6[1];
      LeaveCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
      local_10c = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                   )(pCVar4->CAvtrPartPool_data).offset_0x14;
      if ((tVar1 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                     )0x0) || (tVar1 != *ptVar11)) {
        _invalid_parameter_noinfo();
      }
      if (tVar2 == local_10c) {
        if (param_2) {
          local_114 = (undefined1 *)CONCAT31(local_114._1_3_,local_128[4]);
          FUN_60514ed0(local_114,local_58);
        }
        else {
          local_3c[0] = local_128[4];
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38,local_58);
          local_124 = local_3c;
          local_c._0_1_ = 1;
          pbVar7 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_605128d0();
          local_c._0_1_ = 2;
          pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_605128b0();
          local_c._0_1_ = 3;
          pbVar9 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_60512890();
          local_c._0_1_ = 4;
          pbVar10 = FUN_60515610(local_ac,pbVar9,pbVar8,pbVar7);
          local_c._0_1_ = 5;
          FUN_60515680((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)pbVar10);
          local_c._0_1_ = 4;
          FUN_60514310(local_ac);
          local_c._0_1_ = 3;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_c8);
          local_c._0_1_ = 2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_100);
          local_c._0_1_ = 1;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_e4);
          local_c = (uint)local_c._1_3_ << 8;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
        }
      }
      else {
        FileLoad(local_118,local_128);
      }
      local_c = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_58);
      if (local_120 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *local_120;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
          local_11c) {
        _invalid_parameter_noinfo();
      }
      local_11c = local_11c + 0x1c;
      param_1 = local_128;
    }
  }
  else {
    FileLoad(this,param_1);
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_12c);
  return;
}



/* ---- FUN_60514310 @ 60514310 size=103 ---- */

void FUN_60514310(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_60516d55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x38);
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x1c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FileLoad @ 60514380 size=1145 ---- */

/* public: void __thiscall CAvtrPartPool::FileLoad(class CAvtrId &) */

void __thiscall CAvtrPartPool::FileLoad(CAvtrPartPool *this,CAvtrId *param_1)

{
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tVar1
  ;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tVar2
  ;
  CAvtrPartPool *pCVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int iVar5;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  *ptVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  char *pcVar8;
  char ****_Filename;
  errno_t eVar9;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  *ptVar10;
  int *piVar11;
  undefined1 auStack_13c [3];
  CAvtrId local_139;
  int *local_138;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_134;
  CAvtrPartPool *local_130;
  CAvtrId *local_12c;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  local_124;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_120 [28];
  int local_104 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_fc [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_e0 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_c4 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_a8 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_8c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_70 [4];
  char ****local_6c [5];
  uint local_58;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [28];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x14380  132  ?FileLoad@CAvtrPartPool@@QAEXAAVCAvtrId@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517ddf;
  local_14 = ExceptionList;
  local_1c = DAT_6052101c ^ (uint)auStack_13c;
  ExceptionList = &local_14;
  local_12c = param_1;
  local_130 = this;
  if (param_1[5] == (CAvtrId)0x0) {
    pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_1 + 0x58);
    if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (param_1 + 0x5c) < pbVar4) {
      _invalid_parameter_noinfo();
    }
    local_138 = *(int **)(param_1 + 0x4c);
    local_134 = pbVar4;
    while( true ) {
      piVar11 = local_138;
      pbVar4 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (param_1 + 0x5c);
      if (pbVar4 < *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )(param_1 + 0x58)) {
        _invalid_parameter_noinfo();
      }
      if ((piVar11 == (int *)0x0) || (piVar11 != *(int **)(param_1 + 0x4c))) {
        _invalid_parameter_noinfo();
      }
      if (local_134 == pbVar4) break;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_120,".gif");
      local_c = 5;
      if (piVar11 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar11;
      }
      if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
           (iVar5 + 0x10) <= local_134) {
        _invalid_parameter_noinfo();
      }
      std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_38,local_134);
      local_c = CONCAT31(local_c._1_3_,7);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_120);
      EnterCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
      if (piVar11 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar11;
      }
      pbVar4 = local_134;
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
          local_134) {
        _invalid_parameter_noinfo();
      }
      pCVar3 = local_130;
      ptVar10 = &local_130->
                 tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
      ;
      ptVar6 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                *)FUN_60515500(local_104,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               pbVar4);
      tVar1 = *ptVar6;
      local_124 = ptVar6[1];
      LeaveCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
      if (local_138 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *local_138;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
          local_134) {
        _invalid_parameter_noinfo();
      }
      local_139 = param_1[4];
      FUN_605128f0((char *)&local_139,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_134,
                   local_fc);
      local_c._0_1_ = 8;
      pbVar7 = GetPrePath(local_130,false);
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                         (local_e0,(char *)pbVar7);
      local_c._0_1_ = 9;
      pcVar8 = (char *)std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                                 (local_8c,pbVar4);
      local_c._0_1_ = 10;
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_c4,pcVar8);
      local_c._0_1_ = 0xb;
      std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_70,pbVar4);
      local_c._0_1_ = 0xd;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_c4);
      local_c._0_1_ = 0xe;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8c);
      local_c._0_1_ = 0xf;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_e0);
      local_c = CONCAT31(local_c._1_3_,0x10);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_fc);
      tVar2 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
               )(pCVar3->CAvtrPartPool_data).offset_0x14;
      if ((tVar1 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                     )0x0) || (tVar1 != *ptVar10)) {
        _invalid_parameter_noinfo();
      }
      if (local_124 == tVar2) {
LAB_6051476e:
        piVar11 = local_138;
        if (local_138 == (int *)0x0) {
          _invalid_parameter_noinfo();
          iVar5 = 0;
        }
        else {
          iVar5 = *local_138;
        }
        pbVar4 = local_134;
        if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
            local_134) {
          _invalid_parameter_noinfo();
        }
        FileLoad(local_130,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)pbVar4
                 ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_70);
      }
      else {
        _Filename = local_6c[0];
        if (local_58 < 0x10) {
          _Filename = (char ****)local_6c;
        }
        eVar9 = _access_s((char *)_Filename,0);
        if (eVar9 != 0) goto LAB_6051476e;
        pbVar4 = local_134;
        piVar11 = local_138;
      }
      local_c = CONCAT31(local_c._1_3_,7);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_70);
      local_c = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_38);
      if (piVar11 == (int *)0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar11;
      }
      if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar5 + 0x10) <=
          pbVar4) {
        _invalid_parameter_noinfo();
      }
      local_134 = pbVar4 + 0x1c;
      param_1 = local_12c;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 0x1f;
    if ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x1c + iVar5 != iVar5) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_120,".gif");
      local_c = 0;
      iVar5 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 0x1f;
      if ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x1c + iVar5 == iVar5) {
        _invalid_parameter_noinfo();
      }
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                         (local_a8,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)&(this->CAvtrPartPool_data).field_0x38);
      local_c._0_1_ = 1;
      std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_54,pbVar4);
      local_c._0_1_ = 3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_a8);
      local_c = CONCAT31(local_c._1_3_,4);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_120);
      iVar5 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 0x1f;
      if ((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x1c + iVar5 == iVar5) {
        _invalid_parameter_noinfo();
      }
      FileLoad(local_130,
               *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 0x58)
               ,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_54);
      local_c = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_54);
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_13c);
  return;
}



/* ---- FileLoad @ 60514800 size=320 ---- */

/* public: void __thiscall CAvtrPartPool::FileLoad(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > &,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > &) */

void __thiscall
CAvtrPartPool::FileLoad
          (CAvtrPartPool *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int *piVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iVar3;
  vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> *pvVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *lpFileName;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_fffffebc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_141 [53];
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  local_f0;
  int *local_ec;
  cHgAniDIBList local_e8;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x14800  131
                       ?FileLoad@CAvtrPartPool@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_60517d49;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cHgAniDIBList::cHgAniDIBList(&local_e8);
  local_c = 0;
  FUN_60515500((int *)&local_f0,param_1);
  piVar1 = (this->CAvtrPartPool_data).offset_0x14;
  if ((local_f0 ==
       (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
       )0x0) ||
     (local_f0 !=
      this->
      tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>))
  {
    _invalid_parameter_noinfo();
  }
  if (local_ec == piVar1) {
    lpFileName = param_2 + 4;
    if (*(uint *)(param_2 + 0x18) < 0x10) {
      pbVar2 = lpFileName;
    }
    else {
      pbVar2 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)lpFileName;
    }
    iVar3 = cHgAniDIBList::Load(&local_e8,(char *)pbVar2);
    if (iVar3 == 0) {
      if (0xf < *(uint *)(param_2 + 0x18)) {
        lpFileName = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)lpFileName
        ;
      }
      DeleteFileA((LPCSTR)lpFileName);
    }
    else {
      local_f0 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                  )operator_new(0x34);
      local_c._0_1_ = 1;
      if (local_f0 ==
          (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
           )0x0) {
        pvVar4 = (vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> *)0x0;
      }
      else {
        pvVar4 = (vector<lsp::SPRITE*,std::allocator<lsp::SPRITE*>_> *)
                 CAvtrPart::CAvtrPart((CAvtrPart *)local_f0);
      }
      local_c = (uint)local_c._1_3_ << 8;
      cHgAniDIBList::exportImageList
                (&local_e8,pvVar4,
                 (vector<unsigned_long,std::allocator<unsigned_long>_> *)(pvVar4 + 0x18));
      local_f0 = (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                  )((int)abStack_141 + -3);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_141 + -3,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 param_1);
      FUN_605125f0(in_stack_fffffebc);
      Add(this);
    }
  }
  local_c = 0xffffffff;
  cHgAniDIBList::~cHgAniDIBList(&local_e8);
  ExceptionList = local_14;
  return;
}



/* ---- Get @ 60514940 size=135 ---- */

/* public: struct CAvtrPart * __thiscall CAvtrPartPool::Get(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > &) */

CAvtrPart * __thiscall
CAvtrPartPool::Get(CAvtrPartPool *this,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int *piVar1;
  CAvtrPart *pCVar2;
  int iVar3;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  local_10;
  int *local_c;
  
                    /* 0x14940  139
                       ?Get@CAvtrPartPool@@QAEPAUCAvtrPart@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  FUN_60515500((int *)&local_10,param_1);
  piVar1 = (this->CAvtrPartPool_data).offset_0x14;
  if ((local_10 ==
       (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
       )0x0) ||
     (local_10 !=
      this->
      tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>))
  {
    _invalid_parameter_noinfo();
  }
  if (local_c == piVar1) {
    pCVar2 = (CAvtrPart *)0x0;
  }
  else {
    if (local_10 ==
        (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
         )0x0) {
      _invalid_parameter_noinfo();
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)local_10;
    }
    if (local_c == *(int **)(iVar3 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    pCVar2 = (CAvtrPart *)local_c[10];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  return pCVar2;
}



/* ---- AdjustAvtrPart @ 605149d0 size=228 ---- */

/* public: void __thiscall CAvtrPartPool::AdjustAvtrPart(void) */

void __thiscall CAvtrPartPool::AdjustAvtrPart(CAvtrPartPool *this)

{
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  *ptVar1;
  int *piVar2;
  tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*> tVar3
  ;
  int *piVar4;
  CAvtrPart *this_00;
  int iVar5;
  undefined4 local_10 [3];
  
                    /* 0x149d0  57  ?AdjustAvtrPart@CAvtrPartPool@@QAEXXZ */
  EnterCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  piVar2 = (int *)*(this->CAvtrPartPool_data).offset_0x14;
  ptVar1 = &this->
            tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
  ;
  tVar3 = *ptVar1;
  while( true ) {
    piVar4 = (this->CAvtrPartPool_data).offset_0x14;
    if ((tVar3 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                   )0x0) || (tVar3 != *ptVar1)) {
      _invalid_parameter_noinfo();
    }
    if (piVar2 == piVar4) break;
    piVar4 = (this->CAvtrPartPool_data).offset_0x14;
    if ((tVar3 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                   )0x0) || (tVar3 != *ptVar1)) {
      _invalid_parameter_noinfo();
    }
    if (piVar2 != piVar4) {
      if (tVar3 == (tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
                    )0x0) {
        _invalid_parameter_noinfo();
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)tVar3;
      }
      if (piVar2 == *(int **)(iVar5 + 0x18)) {
        _invalid_parameter_noinfo();
      }
      this_00 = (CAvtrPart *)piVar2[10];
      if ((this_00 != (CAvtrPart *)0x0) && (*(int *)(this_00 + 0x30) < 0xb)) {
        CAvtrPart::~CAvtrPart(this_00);
        operator_delete(this_00);
        FUN_6050d590();
        FUN_6050d060(ptVar1,local_10,tVar3,piVar2);
      }
    }
    FUN_6050d590();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  return;
}



/* ---- Add @ 60514ac0 size=177 ---- */

/* public: void __thiscall CAvtrPartPool::Add(struct std::pair<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,struct CAvtrPart *>) */

void __thiscall
CAvtrPartPool::Add(CAvtrPartPool *this,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2)

{
  undefined4 in_stack_00000020;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [28];
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x14ac0  54
                       ?Add@CAvtrPartPool@@QAEXU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUCAvtrPart@@@std@@@Z
                        */
  puStack_8 = &LAB_60517670;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_38,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&param_2);
  local_1c = in_stack_00000020;
  local_4._0_1_ = 1;
  FUN_605153e0((int *)&this->
                       tMapDeclare<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,CAvtrPart*>
               ,local_38);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
  LeaveCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
  ExceptionList = local_c;
  return;
}



/* ---- Lock @ 60514b80 size=16 ---- */

/* public: void __thiscall CAvtrPartPool::Lock(void) */

void __thiscall CAvtrPartPool::Lock(CAvtrPartPool *this)

{
                    /* 0x14b80  187  ?Lock@CAvtrPartPool@@QAEXXZ */
  EnterCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  return;
}



/* ---- Unlock @ 60514b90 size=16 ---- */

/* public: void __thiscall CAvtrPartPool::Unlock(void) */

void __thiscall CAvtrPartPool::Unlock(CAvtrPartPool *this)

{
                    /* 0x14b90  228  ?Unlock@CAvtrPartPool@@QAEXXZ */
  LeaveCriticalSection((LPCRITICAL_SECTION)(m_pInst + 0x5c));
  return;
}



/* ---- FUN_60514ba0 @ 60514ba0 size=323 ---- */

undefined4 * FUN_60514ba0(undefined4 *param_1)

{
  HANDLE pvVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  DWORD local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605181e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *param_1 = pvVar1;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  param_1[1] = pvVar1;
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xf));
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x16));
  local_4._0_1_ = 3;
  FUN_60515580(param_1 + 0x1d);
  local_4._0_1_ = 4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (local_28,"http://avtsvr.hangame.com/IMG_AVTR/");
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xf),
             pbVar2);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (local_28,"http://avimages.hangame.com/avgif/");
  local_4._0_1_ = 6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),pbVar2
            );
  local_4 = CONCAT31(local_4._1_3_,4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x16),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (CAvtrPartPool::m_pInst + 0x24));
  param_1[0x24] = 0;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_60515160,param_1,0,&local_2c);
  param_1[0x24] = pvVar1;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_60514cf0 @ 60514cf0 size=479 ---- */

void FUN_60514cf0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_60517267;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 4;
  SetEvent((HANDLE)*param_1);
  WaitForSingleObject((HANDLE)param_1[1],3000);
  puVar6 = *(undefined4 **)param_1[0x22];
  piVar1 = (int *)param_1[0x1d];
  while( true ) {
    puVar2 = (undefined4 *)param_1[0x22];
    if ((piVar1 == (int *)0x0) || (piVar1 != (int *)param_1[0x1d])) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) break;
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (puVar6 == *(undefined4 **)(iVar4 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    pvVar3 = (void *)puVar6[2];
    if (pvVar3 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((int)pvVar3 + 4));
      operator_delete(pvVar3);
    }
    if (piVar1 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (puVar6 == *(undefined4 **)(iVar4 + 0x14)) {
      _invalid_parameter_noinfo();
    }
    puVar6 = (undefined4 *)*puVar6;
  }
  piVar1 = (int *)param_1[0x22];
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(param_1[0x22] + 4) = param_1[0x22];
  param_1[0x23] = 0;
  if (piVar5 != (int *)param_1[0x22]) {
    do {
      piVar1 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar1;
    } while (piVar1 != (int *)param_1[0x22]);
  }
  if ((HANDLE)param_1[0x24] != (HANDLE)0x0) {
    WaitForSingleObject((HANDLE)param_1[0x24],5000);
    CloseHandle((HANDLE)param_1[0x24]);
    param_1[0x24] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  piVar1 = (int *)param_1[0x22];
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(param_1[0x22] + 4) = param_1[0x22];
  param_1[0x23] = 0;
  if (piVar5 != (int *)param_1[0x22]) {
    do {
      piVar1 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar1;
    } while (piVar1 != (int *)param_1[0x22]);
  }
  operator_delete((void *)param_1[0x22]);
  param_1[0x22] = 0;
  operator_delete((void *)param_1[0x1d]);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x16));
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xf));
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  CloseHandle((HANDLE)*param_1);
  CloseHandle((HANDLE)param_1[1]);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60514ed0 @ 60514ed0 size=187 ---- */

void FUN_60514ed0(undefined1 *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  CAvtrDownloadThread *pCVar2;
  undefined1 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar2 = CAvtrPartPool::m_pAvtrDnThread;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_6051763b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lpCriticalSection = (LPCRITICAL_SECTION)(CAvtrPartPool::m_pAvtrDnThread + 8);
  EnterCriticalSection(lpCriticalSection);
  puVar3 = operator_new(0x20);
  local_4 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *puVar3 = param_1._0_1_;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar3 + 4),
               param_2);
  }
  local_4 = 0xffffffff;
  iVar1 = *(int *)(pCVar2 + 0x88);
  param_1 = puVar3;
  iVar4 = FUN_60515c50(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  FUN_60515c90((int)(pCVar2 + 0x74));
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60514f90 @ 60514f90 size=88 ---- */

void FUN_60514f90(void)

{
  DWORD DVar1;
  undefined4 *unaff_EDI;
  
  DVar1 = WaitForSingleObject((HANDLE)*unaff_EDI,0x1e);
  ResetEvent((HANDLE)*unaff_EDI);
  while (DVar1 != 0) {
    FUN_60514ff0((int)unaff_EDI);
    DVar1 = WaitForSingleObject((HANDLE)*unaff_EDI,0x1e);
    ResetEvent((HANDLE)*unaff_EDI);
  }
  return;
}



/* ---- FUN_60514ff0 @ 60514ff0 size=354 ---- */

void __fastcall FUN_60514ff0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffff00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_fd [73];
  uint uStack_9c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8c [84];
  void *local_38 [5];
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  void *local_8;
  
  puStack_c = &LAB_60518178;
  local_10 = ExceptionList;
  uStack_9c = DAT_6052101c ^ (uint)(local_38 + 0xd);
  local_14 = (undefined1 *)&uStack_9c;
  ExceptionList = &local_10;
  local_8 = (void *)0x0;
  FUN_60515580((int *)local_38);
  local_8 = (void *)CONCAT31(local_8._1_3_,1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_38 != (void **)(param_1 + 0x74)) {
    piVar1 = *(void **)(param_1 + 0x74);
    FUN_60516060(local_1c,piVar1,(undefined4 *)**(undefined4 **)(param_1 + 0x88),piVar1,
                 *(undefined4 **)(param_1 + 0x88));
  }
  puVar3 = *(undefined4 **)(param_1 + 0x88);
  puVar2 = (undefined4 *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(param_1 + 0x88) + 4) = *(int *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  while (puVar2 != *(undefined4 **)(param_1 + 0x88)) {
    puVar3 = (undefined4 *)*puVar2;
    operator_delete(puVar2);
    puVar2 = puVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_20 == 0) {
    FUN_60515b70();
  }
  else {
    local_1c = abStack_fd + -3;
    FUN_60515610(abStack_fd + -3,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 0x20),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 0x3c),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (param_1 + 0x58));
    FUN_60515db0(local_8c,in_stack_ffffff00);
    FUN_60514310(local_8c);
    FUN_60515ea0(&local_15,local_1c,local_38[0],(undefined4 *)*local_24,local_38[0],local_24);
    puVar3 = (undefined4 *)*local_24;
    *local_24 = local_24;
    local_24[1] = local_24;
    local_20 = 0;
    while (puVar3 != local_24) {
      puVar2 = (undefined4 *)*puVar3;
      operator_delete(puVar3);
      puVar3 = puVar2;
    }
    FUN_60515b70();
  }
  operator_delete(local_38[0]);
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@60515155 @ 60515155 size=6 ---- */

undefined4 Catch_All_60515155(void)

{
  return 0x605150a8;
}



/* ---- FUN_60515160 @ 60515160 size=57 ---- */

undefined4 FUN_60515160(int param_1)

{
  if (param_1 != 0) {
    FUN_60514f90();
    if (*(HANDLE *)(param_1 + 0x90) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x90));
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    SetEvent(*(HANDLE *)(param_1 + 4));
  }
  return 0;
}



/* ---- FUN_605151a0 @ 605151a0 size=196 ---- */

void FUN_605151a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60516d9d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_ESI + 4));
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_ESI + 0x20);
  local_4._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(this);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_ESI + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,3);
  *unaff_ESI = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                  &param_1);
  iVar1 = *(int *)(unaff_ESI + 0x34);
  if (*(uint *)(unaff_ESI + 0x34) < iVar1 - 1U) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(unaff_ESI + 0x38) < 0x10) {
    puVar2 = unaff_ESI + 0x24;
  }
  else {
    puVar2 = *(undefined1 **)(unaff_ESI + 0x24);
  }
  if (puVar2[iVar1 - 1U] != '\\') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(this,1,'\\');
  }
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60515270 @ 60515270 size=356 ---- */

void __fastcall FUN_60515270(char *param_1)

{
  char *pcVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined1 auStack_a0 [3];
  char local_9d;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_9c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_64 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517e90;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)auStack_a0;
  ExceptionList = &local_c;
  local_9d = *param_1;
  FUN_605128f0(&local_9d,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4),
               local_80);
  local_4 = 0;
  pcVar1 = (char *)std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                             (local_64,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                        *)(param_1 + 0x20));
  local_4._0_1_ = 1;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_9c,pcVar1);
  local_4._0_1_ = 2;
  std::operator+<char,std::char_traits<char>,std::allocator<char>_>(local_48,pbVar2);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_9c);
  local_4._0_1_ = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_64);
  local_4._0_1_ = 6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_80);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4),
             (uint)local_2c,0);
  local_4._0_1_ = 7;
  CAvtrPartPool::FileLoad
            ((CAvtrPartPool *)CAvtrPartPool::m_pInst,local_2c,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_48);
  local_4 = CONCAT31(local_4._1_3_,6);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_48);
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_a0);
  return;
}



/* ---- FUN_605153e0 @ 605153e0 size=274 ---- */

void FUN_605153e0(int *param_1,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *this;
  bool local_1c;
  undefined4 local_10;
  undefined4 *local_c;
  
  this = (undefined4 *)param_1[6];
  local_1c = true;
  puVar4 = (undefined4 *)this[1];
  if (*(char *)((int)this[1] + 0x2d) == '\0') {
    do {
      this = puVar4;
      local_1c = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                           (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(this + 3));
      if (local_1c) {
        puVar4 = (undefined4 *)*this;
      }
      else {
        puVar4 = (undefined4 *)this[2];
      }
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  iVar1 = *param_1;
  if (local_1c != false) {
    local_c = *(undefined4 **)param_1[6];
    if (iVar1 == 0) {
      _invalid_parameter_noinfo();
    }
    if (this == local_c) {
      piVar3 = (int *)FUN_60515910(this,&local_10,'\x01',param_2);
      iVar1 = *piVar3;
      unaff_EBX[1] = piVar3[1];
      *unaff_EBX = iVar1;
      *(undefined1 *)(unaff_EBX + 2) = 1;
      return;
    }
    FUN_60512560();
  }
  bVar2 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 3),
                     param_2);
  if (!bVar2) {
    *unaff_EBX = iVar1;
    unaff_EBX[1] = (int)this;
    *(undefined1 *)(unaff_EBX + 2) = 0;
    return;
  }
  piVar3 = (int *)FUN_60515910(this,&local_10,local_1c,param_2);
  iVar1 = piVar3[1];
  *unaff_EBX = *piVar3;
  unaff_EBX[1] = iVar1;
  *(undefined1 *)(unaff_EBX + 2) = 1;
  return;
}



/* ---- FUN_60515500 @ 60515500 size=127 ---- */

int * FUN_60515500(int *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_ESI;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  puVar4 = FUN_60515c00(param_2);
  local_10 = puVar4;
  if (unaff_ESI == (int *)0x0) {
    _invalid_parameter_noinfo();
  }
  puVar1 = (undefined4 *)unaff_ESI[6];
  local_14 = *unaff_ESI;
  if (*unaff_ESI == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) ||
     (bVar3 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 (puVar4 + 3)), bVar3)) {
    local_8 = unaff_ESI[6];
    local_c = *unaff_ESI;
    piVar5 = &local_c;
  }
  else {
    piVar5 = &local_14;
  }
  iVar2 = *piVar5;
  param_1[1] = piVar5[1];
  *param_1 = iVar2;
  return param_1;
}



/* ---- FUN_60515580 @ 60515580 size=103 ---- */

int * FUN_60515580(int *param_1)

{
  undefined4 *extraout_EAX;
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *extraout_EAX = param_1;
    puVar1 = extraout_EAX;
  }
  *param_1 = (int)puVar1;
  local_4 = 0;
  iVar2 = FUN_60515b50();
  param_1[5] = iVar2;
  param_1[6] = 0;
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_605155f0 @ 605155f0 size=21 ---- */

void FUN_605155f0(void)

{
  undefined4 *in_EAX;
  
  FUN_60515b70();
  operator_delete((void *)*in_EAX);
  return;
}



/* ---- FUN_60515610 @ 60515610 size=112 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_60515610(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60516d55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x1c,param_3);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0x38,param_4);
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_60515680 @ 60515680 size=511 ---- */

void __fastcall
FUN_60515680(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  bool bVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  char *pcVar4;
  int *unaff_EDI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_fffffebc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_141 [21];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_fffffed8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_125 [13];
  undefined1 auStack_fc [4];
  undefined1 *local_f8;
  undefined1 *local_f4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_f0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d4 [140];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [28];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517f04;
  local_c = ExceptionList;
  local_10 = DAT_6052101c ^ (uint)auStack_fc;
  ExceptionList = &local_c;
  if ((char *)*unaff_EDI != (char *)0x0) {
    pbVar2 = param_1 + 0x1c;
    if (*(char *)*unaff_EDI == '\0') {
      pbVar2 = param_1;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48,pbVar2);
    local_4 = 0;
    if (*(char *)*unaff_EDI == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::substr
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((char *)*unaff_EDI + 4),(uint)local_2c,0);
      local_4._0_1_ = 1;
      pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::operator+<char,std::char_traits<char>,std::allocator<char>_>
                         (local_f0,(char *)local_2c);
      local_4._0_1_ = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (local_48,pbVar2);
      local_4._0_1_ = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_f0);
      local_4 = (uint)local_4._1_3_ << 8;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_2c);
    }
    local_f4 = abStack_125 + -3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_125 + -3,param_1 + 0x38)
    ;
    local_f8 = abStack_141 + -3;
    local_4._0_1_ = 3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_141 + -3,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               local_48);
    local_4 = (uint)local_4._1_3_ << 8;
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_60512bc0(in_stack_fffffebc);
    local_4._0_1_ = 4;
    bVar1 = FUN_60512d80(unaff_EDI,pbVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_60512cf0(local_d4);
    if (bVar1) {
      local_f8 = abStack_125 + -3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_125 + -3,param_1 + 0x38);
      pcVar4 = (char *)FUN_605151a0(in_stack_fffffed8);
      local_4._0_1_ = 5;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar4 + 4),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (*unaff_EDI + 4));
      *pcVar4 = *(char *)*unaff_EDI;
      FUN_60515270(pcVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_605158a0((int)local_d4);
      local_4 = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
    }
    else {
      local_4 = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48);
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_fc);
  return;
}



/* ---- FUN_60515880 @ 60515880 size=30 ---- */

undefined4 FUN_60515880(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  if ((*unaff_EDI == 0) || (*unaff_EDI != *unaff_ESI)) {
    _invalid_parameter_noinfo();
  }
  return CONCAT31((int3)((uint)unaff_EDI[1] >> 8),unaff_EDI[1] != unaff_ESI[1]);
}



/* ---- FUN_605158a0 @ 605158a0 size=104 ---- */

void FUN_605158a0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_60516d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x3c));
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x20));
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60515910 @ 60515910 size=562 ---- */

void __thiscall FUN_60515910(void *this,undefined4 *param_1,char param_2,void *param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *unaff_EDI;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [28];
  logic_error local_38 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_60517609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0x7fffffd < (uint)unaff_EDI[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_54,"map/set<T> too long");
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error
              (local_38,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_38);
    local_38[0].vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_38,(ThrowInfo *)&DAT_6051a1d8);
  }
  piVar4 = FUN_6050d4f0(param_3,unaff_EDI[6],this,unaff_EDI[6],0);
  unaff_EDI[7] = unaff_EDI[7] + 1;
  if (this == (void *)unaff_EDI[6]) {
    *(int **)((int)unaff_EDI[6] + 4) = piVar4;
    *(int **)unaff_EDI[6] = piVar4;
    *(int **)(unaff_EDI[6] + 8) = piVar4;
  }
  else if (param_2 == '\0') {
    *(int **)((int)this + 8) = piVar4;
    if (this == *(void **)(unaff_EDI[6] + 8)) {
      *(int **)(unaff_EDI[6] + 8) = piVar4;
    }
  }
  else {
    *(int **)this = piVar4;
    if (this == *(void **)unaff_EDI[6]) {
      *(int **)unaff_EDI[6] = piVar4;
    }
  }
  cVar1 = *(char *)(piVar4[1] + 0x2c);
  piVar8 = piVar4;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(unaff_EDI[6] + 4) + 0x2c) = 1;
      uVar3 = *unaff_EDI;
      param_1[1] = piVar4;
      *param_1 = uVar3;
      ExceptionList = local_c;
      return;
    }
    piVar5 = piVar8 + 1;
    piVar6 = (int *)*piVar5;
    piVar2 = (int *)piVar6[1];
    if (piVar6 == (int *)*piVar2) {
      iVar7 = piVar2[2];
      if (*(char *)(iVar7 + 0x2c) != '\0') {
        if (piVar8 == (int *)piVar6[2]) {
          piVar8 = (int *)piVar6[2];
          piVar6[2] = *piVar8;
          if (*(char *)(*piVar8 + 0x2d) == '\0') {
            *(int **)(*piVar8 + 4) = piVar6;
          }
          piVar5 = piVar6 + 1;
          piVar8[1] = piVar6[1];
          if (piVar6 == *(int **)(unaff_EDI[6] + 4)) {
            *(int **)(unaff_EDI[6] + 4) = piVar8;
          }
          else {
            piVar2 = (int *)*piVar5;
            if (piVar6 == (int *)*piVar2) {
              *piVar2 = (int)piVar8;
            }
            else {
              piVar2[2] = (int)piVar8;
            }
          }
          *piVar8 = (int)piVar6;
          *piVar5 = (int)piVar8;
          piVar8 = piVar6;
        }
        *(undefined1 *)(*piVar5 + 0x2c) = 1;
        *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
        piVar5 = *(int **)(*piVar5 + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x2d) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *(int **)(unaff_EDI[6] + 4)) {
          *(int **)(unaff_EDI[6] + 4) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
        goto LAB_60515b06;
      }
LAB_60515a98:
      *(undefined1 *)(piVar6 + 0xb) = 1;
      *(undefined1 *)(iVar7 + 0x2c) = 1;
      *(undefined1 *)(*(int *)(*piVar5 + 4) + 0x2c) = 0;
      piVar8 = *(int **)(*piVar5 + 4);
    }
    else {
      iVar7 = *piVar2;
      if (*(char *)(iVar7 + 0x2c) == '\0') goto LAB_60515a98;
      if (piVar8 == (int *)*piVar6) {
        FUN_6050d4a0(piVar6,(int)unaff_EDI);
        piVar8 = piVar6;
      }
      *(undefined1 *)(piVar8[1] + 0x2c) = 1;
      *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x2c) = 0;
      piVar5 = *(int **)(piVar8[1] + 4);
      piVar6 = (int *)piVar5[2];
      piVar5[2] = *piVar6;
      if (*(char *)(*piVar6 + 0x2d) == '\0') {
        *(int **)(*piVar6 + 4) = piVar5;
      }
      piVar6[1] = piVar5[1];
      if (piVar5 == *(int **)(unaff_EDI[6] + 4)) {
        *(int **)(unaff_EDI[6] + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar5[1];
        if (piVar5 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar5;
LAB_60515b06:
      piVar5[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar8[1] + 0x2c);
  } while( true );
}



/* ---- FUN_60515b50 @ 60515b50 size=26 ---- */

void FUN_60515b50(void)

{
  int extraout_EAX;
  
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX != 0) {
    *(int *)extraout_EAX = extraout_EAX;
  }
  if ((int *)(extraout_EAX + 4) != (int *)0x0) {
    *(int *)(extraout_EAX + 4) = extraout_EAX;
  }
  return;
}



/* ---- FUN_60515b70 @ 60515b70 size=71 ---- */

void FUN_60515b70(void)

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



/* ---- FUN_60515bc0 @ 60515bc0 size=49 ---- */

void FUN_60515bc0(void)

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
      goto LAB_60515bdb;
    }
  }
  iVar2 = *piVar1;
LAB_60515bdb:
  if (unaff_ESI[1] == *(int *)(iVar2 + 0x14)) {
    _invalid_parameter_noinfo();
  }
  unaff_ESI[1] = *(int *)unaff_ESI[1];
  return;
}



/* ---- FUN_60515c00 @ 60515c00 size=70 ---- */

undefined4 * FUN_60515c00(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  bool bVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(in_EAX + 0x18);
  puVar3 = (undefined4 *)puVar2[1];
  if (*(char *)((int)puVar3 + 0x2d) == '\0') {
    do {
      bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         (puVar3 + 3),param_1);
      if (bVar1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar2 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x2d) == '\0');
  }
  return puVar2;
}



/* ---- FUN_60515c50 @ 60515c50 size=51 ---- */

void FUN_60515c50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *extraout_EAX;
  
  std::bad_alloc::bad_alloc_Constructor_or_Destructor(1);
  if (extraout_EAX != (undefined4 *)0x0) {
    *extraout_EAX = param_1;
  }
  if (extraout_EAX + 1 != (undefined4 *)0x0) {
    extraout_EAX[1] = param_2;
  }
  if (extraout_EAX + 2 != (undefined4 *)0x0) {
    extraout_EAX[2] = *param_3;
  }
  return;
}



/* ---- FUN_60515c90 @ 60515c90 size=131 ---- */

void __fastcall FUN_60515c90(int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [28];
  logic_error local_34 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_605171d9;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x18) == 0x3fffffff) {
    ExceptionList = &local_c;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50,"list<T> too long");
    local_4 = 0;
                    /* inlined constructor: std::length_error::length_error */
    std::logic_error::logic_error
              (local_34,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_34);
    local_34[0].vftablePtr = (logic_error_vftable *)&std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_6051a1d8);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}



/* ---- FUN_60515d20 @ 60515d20 size=142 ---- */

undefined4 __cdecl
FUN_60515d20(undefined4 param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> in_stack_ffffffb8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_45 [29];
  
  while( true ) {
    if ((param_2 == (int *)0x0) || (param_2 != param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3 == param_5) break;
    if (param_2 == (int *)0x0) {
      _invalid_parameter_noinfo();
      iVar1 = 0;
    }
    else {
      iVar1 = *param_2;
    }
    if (param_3 == *(int *)(iVar1 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_45 + -3,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_3 + 0xc));
    FUN_60515f30(in_stack_ffffffb8);
    FUN_6050d590();
  }
  return param_1;
}



/* ---- FUN_60515db0 @ 60515db0 size=229 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
FUN_60515db0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> param_2)

{
  undefined4 *puVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> bStack00000024;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> bStack00000040;
  undefined4 *in_stack_00000060;
  undefined4 *in_stack_00000068;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_6051814b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  for (puVar1 = in_stack_00000060; puVar1 != in_stack_00000068; puVar1 = (undefined4 *)*puVar1) {
    FUN_60515680((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 &param_2);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )&param_2);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 0x1c,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &bStack00000024);
  local_4 = CONCAT31(local_4._1_3_,3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1 + 0x38,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &bStack00000040);
  local_4 = 5;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&bStack00000040);
  local_4._0_1_ = 4;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&bStack00000024);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_2);
  ExceptionList = local_c;
  return param_1;
}



/* ---- FUN_60515ea0 @ 60515ea0 size=54 ---- */

undefined4 __cdecl
FUN_60515ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6)

{
  void *pvVar1;
  
  for (; param_4 != param_6; param_4 = (undefined4 *)*param_4) {
    pvVar1 = (void *)param_4[2];
    if (pvVar1 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((int)pvVar1 + 4));
      operator_delete(pvVar1);
    }
  }
  return param_1;
}



/* ---- bad_alloc_Constructor_or_Destructor @ 60515ee0 size=80 ---- */

void __fastcall std::bad_alloc::bad_alloc_Constructor_or_Destructor(uint param_1)

{
  char *local_10;
  exception local_c [3];
  
  if ((uint)(0xffffffff / (ulonglong)param_1) < 0xc) {
    local_10 = (char *)0x0;
    std::exception::exception(local_c,&local_10);
    local_c[0] = (exception)&vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c,(ThrowInfo *)&DAT_6051a210);
  }
  operator_new(param_1 * 0xc);
  return;
}



/* ---- FUN_60515f30 @ 60515f30 size=142 ---- */

void FUN_60515f30(basic_string<char,std::char_traits<char>,std::allocator<char>_> param_1)

{
  CAvtrPart *in_stack_00000020;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  CAvtrPart *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_60517d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)&param_1);
  local_14 = in_stack_00000020;
  if (in_stack_00000020 != (CAvtrPart *)0x0) {
    CAvtrPart::~CAvtrPart(in_stack_00000020);
    operator_delete(in_stack_00000020);
    local_14 = (CAvtrPart *)0x0;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&param_1);
  ExceptionList = local_c;
  return;
}



/* ---- FUN_60515fc0 @ 60515fc0 size=158 ---- */

/* WARNING: Variable defined which should be unmapped: param_1 */

undefined4 * __cdecl
FUN_60515fc0(undefined4 *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *unaff_EBX;
  int *in_stack_00000018;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *in_stack_0000001c;
  
  if (in_stack_00000018 == (int *)0x0) {
    _invalid_parameter_noinfo();
    iVar2 = 0;
  }
  else {
    iVar2 = *in_stack_00000018;
  }
  pbVar1 = in_stack_0000001c + (((int)param_2 - (int)unaff_EBX) / 0x1c) * 0x1c;
  if (pbVar1 <= *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar2 + 0x10))
  {
    if (in_stack_00000018 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *in_stack_00000018;
    }
    if (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar2 + 0xc) <= pbVar1
       ) goto LAB_60516029;
  }
  _invalid_parameter_noinfo();
LAB_60516029:
  *param_1 = in_stack_00000018;
  param_1[1] = pbVar1;
  for (; unaff_EBX != param_2; unaff_EBX = unaff_EBX + 0x1c) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (in_stack_0000001c,unaff_EBX);
    in_stack_0000001c = in_stack_0000001c + 0x1c;
  }
  return param_1;
}



/* ---- FUN_60516060 @ 60516060 size=92 ---- */

void FUN_60516060(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  
  piVar1 = (int *)unaff_ESI[5];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(undefined4 *)(unaff_ESI[5] + 4) = unaff_ESI[5];
  unaff_ESI[6] = 0;
  if (piVar2 != (int *)unaff_ESI[5]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)unaff_ESI[5]);
  }
  FUN_605160c0((int)unaff_ESI,param_4,*unaff_ESI,*(int *)unaff_ESI[5],param_2,param_3,(int *)param_4
               ,param_5);
  return;
}



/* ---- FUN_605160c0 @ 605160c0 size=231 ---- */

void FUN_605160c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_605175e0;
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
    iVar1 = FUN_60515c50(param_4,*(undefined4 *)(param_4 + 4),param_6 + 2);
    FUN_60515c90(param_1);
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



/* ---- Catch_All@60516193 @ 60516193 size=103 ---- */

void Catch_All_60516193(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  
  uVar4 = FUN_60515880();
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
    FUN_60516210((undefined4 *)(unaff_EBP + -0x20),piVar1,piVar2);
    FUN_60515bc0();
    uVar4 = FUN_60515880();
    cVar3 = (char)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_60516210 @ 60516210 size=124 ---- */

undefined4 * FUN_60516210(undefined4 *param_1,int *param_2,int *param_3)

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



/* ---- FUN_60516290 @ 60516290 size=26 ---- */

void __fastcall
FUN_60516290(undefined4 param_1,size_t param_2,char *param_3,char *param_4,char param_5)

{
  vsprintf_s(param_3,param_2,param_4,&param_5);
  return;
}



/* ---- URLDownloadToFileA @ 605162aa size=6 ---- */

HRESULT URLDownloadToFileA(LPUNKNOWN param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,
                          LPBINDSTATUSCALLBACK param_5)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x605162aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = URLDownloadToFileA(param_1,param_2,param_3,param_4,param_5);
  return HVar1;
}



/* ---- FUN_605162b0 @ 605162b0 size=11 ---- */

void __cdecl FUN_605162b0(uint param_1)

{
  operator_new(param_1);
  return;
}



/* ---- __security_check_cookie @ 605162bb size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_6052101c) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- operator_delete @ 605162ca size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x605162ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- operator_new @ 605162d0 size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x605162d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 605162dc size=76 ---- */

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



/* ---- std::exception::what @ 60516328 size=6 ---- */

char * __thiscall std::exception::std__exception__what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60516328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* ---- __ArrayUnwind @ 6051632e size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 6051638c size=75 ---- */

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
  FUN_605163d7();
  return;
}



/* ---- FUN_605163d7 @ 605163d7 size=24 ---- */

void FUN_605163d7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- operator_delete[] @ 605163f0 size=6 ---- */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x605163f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}



/* ---- `eh_vector_constructor_iterator' @ 605163f6 size=77 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *in_stack_ffffffcc;
  int local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_60516443();
  return;
}



/* ---- FUN_60516443 @ 60516443 size=24 ---- */

void FUN_60516443(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}



/* ---- __onexit @ 6051645b size=156 ---- */

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
  
  local_8 = &DAT_6051a110;
  uStack_c = 0x60516467;
  local_20[0] = decode_pointer(DAT_6052bb3c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_6052bb3c);
    local_24 = decode_pointer(DAT_6052bb38);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_6052bb3c = encode_pointer(local_20[0]);
    DAT_6052bb38 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_605164f7();
  }
  return p_Var1;
}



/* ---- FUN_605164f7 @ 605164f7 size=9 ---- */

void FUN_605164f7(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 60516500 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- purecall @ 60516518 size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- __CRT_INIT@12 @ 6051656d size=550 ---- */

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
    if (DAT_60521450 < 1) {
      return 0;
    }
    DAT_60521450 = DAT_60521450 + -1;
  }
  _DAT_6052bb28 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_6052bb30,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_6052bb2c == 0) {
      DAT_6052bb2c = 1;
      iVar3 = initterm_e(&DAT_605192a4,&DAT_605192ac);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_6051928c,&DAT_605192a0);
      DAT_6052bb2c = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_6052bb30,0);
    }
    if ((DAT_6052bb34 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_6052bb34), BVar4 != 0)) {
      (*DAT_6052bb34)(param_1,2,param_3);
    }
    DAT_60521450 = DAT_60521450 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_6052bb30,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_6052bb2c == 2) {
      param_2 = (int *)decode_pointer(DAT_6052bb3c);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_6052bb38);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_6052bb3c);
            piVar8 = (int *)decode_pointer(DAT_6052bb38);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_6052bb38 = encoded_null();
        DAT_6052bb3c = DAT_6052bb38;
      }
      DAT_6052bb2c = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_6052bb30,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 60516793 size=240 ---- */

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
  _DAT_60521024 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_60521450 == 0)) {
    local_20 = 0;
    goto LAB_60516885;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_605192d4 != (undefined *)0x0) {
      local_20 = (*(code *)PTR_605192d4)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_60516885;
    local_20 = __CRT_INIT_12(param_3,param_2,param_1);
    if (local_20 == 0) goto LAB_60516885;
  }
  local_20 = FUN_6050dc10(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_6050dc10(param_3,0);
    __CRT_INIT_12(param_3,(int *)0x0,param_1);
    if (PTR_605192d4 != (undefined *)0x0) {
      (*(code *)PTR_605192d4)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_605192d4 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_605192d4)(param_3,param_2,param_1);
    }
  }
LAB_60516885:
  FUN_6051689e();
  return local_20;
}



/* ---- FUN_6051689e @ 6051689e size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6051689e(void)

{
  _DAT_60521024 = 0xffffffff;
  return;
}



/* ---- entry @ 605168a9 size=35 ---- */

void entry(int *param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 605168cc size=262 ---- */

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
  
  _DAT_60521570 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_60521574 = &uStack00000004;
  _DAT_605214b0 = 0x10001;
  _DAT_60521458 = 0xc0000409;
  _DAT_6052145c = 1;
  local_32c = DAT_6052101c;
  local_328 = DAT_60521020;
  _DAT_60521464 = _local_res0;
  _DAT_6052153c = in_GS;
  _DAT_60521540 = in_FS;
  _DAT_60521544 = in_ES;
  _DAT_60521548 = in_DS;
  _DAT_6052154c = unaff_EDI;
  _DAT_60521550 = unaff_ESI;
  _DAT_60521554 = unaff_EBX;
  _DAT_60521558 = in_EDX;
  _DAT_6052155c = in_ECX;
  _DAT_60521560 = in_EAX;
  _DAT_60521564 = unaff_EBP;
  DAT_60521568 = _local_res0;
  _DAT_6052156c = in_CS;
  _DAT_60521578 = in_SS;
  DAT_605214a8 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_605192d8);
  if (DAT_605214a8 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- __SEH_prolog4 @ 605169d8 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_6052101c ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 60516a1d size=20 ---- */

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



/* ---- FUN_60516a31 @ 60516a31 size=37 ---- */

void __cdecl
FUN_60516a31(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_6052101c,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- _unlock @ 60516a56 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60516a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 60516a5c size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 60516a62 size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x60516a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __ValidateImageBase @ 60516ac0 size=53 ---- */

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



/* ---- __FindPESection @ 60516b00 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 60516b50 size=166 ---- */

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
  
  pcStack_10 = FUN_60516a31;
  local_14 = ExceptionList;
  local_c = DAT_6052101c ^ 0x6051a158;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_60500000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_60500000,(DWORD_PTR)(pTarget + -0x60500000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ---- initterm @ 60516c0e size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 60516c14 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 60516c1a size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60516c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- ___security_init_cookie @ 60516c26 size=150 ---- */

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
  if ((DAT_6052101c == 0xbb40e64e) || ((DAT_6052101c & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_6052101c = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_6052101c == 0xbb40e64e) {
      DAT_6052101c = 0xbb40e64f;
    }
    else if ((DAT_6052101c & 0xffff0000) == 0) {
      DAT_6052101c = DAT_6052101c | DAT_6052101c << 0x10;
    }
  }
  DAT_60521020 = ~DAT_6052101c;
  return;
}



/* ---- _crt_debugger_hook @ 60516cbc size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x60516cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- _type_info_dtor_internal_method @ 60516cc2 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x60516cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- except_handler4_common @ 60516cc8 size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- __CxxFrameHandler3 @ 60516cd4 size=6 ---- */

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516cd4. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



/* ---- memcpy @ 60516cda size=6 ---- */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60516cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ---- memset @ 60516ce0 size=6 ---- */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x60516ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ---- _CxxThrowException @ 60516ce6 size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x60516ce6. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- local_unwind4 @ 60516cec size=6 ---- */

void __cdecl local_unwind4(void)

{
                    /* WARNING: Could not recover jumptable at 0x60516cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_unwind4();
  return;
}



/* ---- Unwind@60516d00 @ 60516d00 size=12 ---- */

void Unwind_60516d00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 4));
  return;
}



/* ---- Unwind@60516d0c @ 60516d0c size=12 ---- */

void Unwind_60516d0c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x20));
  return;
}



/* ---- Unwind@60516d40 @ 60516d40 size=9 ---- */

void Unwind_60516d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60516d49 @ 60516d49 size=12 ---- */

void Unwind_60516d49(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x1c));
  return;
}



/* ---- Unwind@60516d70 @ 60516d70 size=9 ---- */

void Unwind_60516d70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60516d79 @ 60516d79 size=12 ---- */

void Unwind_60516d79(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@60516d85 @ 60516d85 size=12 ---- */

void Unwind_60516d85(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x20));
  return;
}



/* ---- Unwind@60516d91 @ 60516d91 size=12 ---- */

void Unwind_60516d91(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}



/* ---- Unwind@60516dc0 @ 60516dc0 size=9 ---- */

void Unwind_60516dc0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60516dc9 @ 60516dc9 size=12 ---- */

void Unwind_60516dc9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x1c));
  return;
}



/* ---- Unwind@60516dd5 @ 60516dd5 size=12 ---- */

void Unwind_60516dd5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x38));
  return;
}



/* ---- Unwind@60516de1 @ 60516de1 size=12 ---- */

void Unwind_60516de1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x54));
  return;
}



/* ---- Unwind@60516e10 @ 60516e10 size=9 ---- */

void Unwind_60516e10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 0x20));
  return;
}



/* ---- Unwind@60516e19 @ 60516e19 size=9 ---- */

void Unwind_60516e19(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60516e22 @ 60516e22 size=9 ---- */

void Unwind_60516e22(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60516e2b @ 60516e2b size=12 ---- */

void Unwind_60516e2b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@60516e37 @ 60516e37 size=12 ---- */

void Unwind_60516e37(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x38));
  return;
}



/* ---- Unwind@60516e43 @ 60516e43 size=12 ---- */

void Unwind_60516e43(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}



/* ---- Unwind@60516e4f @ 60516e4f size=12 ---- */

void Unwind_60516e4f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x70));
  return;
}



/* ---- Unwind@60516e80 @ 60516e80 size=9 ---- */

void Unwind_60516e80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60516e89 @ 60516e89 size=26 ---- */

void Unwind_60516e89(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x34) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x34) = *(uint *)(unaff_EBP + -0x34) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x60516e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x30));
  return;
}



/* ---- Unwind@60516ed0 @ 60516ed0 size=35 ---- */

void Unwind_60516ed0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x94) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x94) = *(uint *)(unaff_EBP + -0x94) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x60516eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x90));
  return;
}



/* ---- Unwind@60516ef3 @ 60516ef3 size=9 ---- */

void Unwind_60516ef3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x38))
  ;
  return;
}



/* ---- Unwind@60516efc @ 60516efc size=12 ---- */

void Unwind_60516efc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x8c))
  ;
  return;
}



/* ---- Unwind@60516f08 @ 60516f08 size=9 ---- */

void Unwind_60516f08(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x54))
  ;
  return;
}



/* ---- Unwind@60516f11 @ 60516f11 size=9 ---- */

void Unwind_60516f11(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x70))
  ;
  return;
}



/* ---- Unwind@60516f1a @ 60516f1a size=9 ---- */

void Unwind_60516f1a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x38))
  ;
  return;
}



/* ---- Unwind@60516f60 @ 60516f60 size=9 ---- */

void Unwind_60516f60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60516fa0 @ 60516fa0 size=9 ---- */

void Unwind_60516fa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60516fa9 @ 60516fa9 size=9 ---- */

void Unwind_60516fa9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60516fd0 @ 60516fd0 size=9 ---- */

void Unwind_60516fd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60516fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@60517000 @ 60517000 size=9 ---- */

void Unwind_60517000(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60517030 @ 60517030 size=9 ---- */

void Unwind_60517030(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60517060 @ 60517060 size=9 ---- */

void Unwind_60517060(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x7c))
  ;
  return;
}



/* ---- Unwind@60517069 @ 60517069 size=9 ---- */

void Unwind_60517069(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051706c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x60))
  ;
  return;
}



/* ---- Unwind@60517072 @ 60517072 size=9 ---- */

void Unwind_60517072(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x7c))
  ;
  return;
}



/* ---- Unwind@6051707b @ 6051707b size=9 ---- */

void Unwind_6051707b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051707e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@60517084 @ 60517084 size=9 ---- */

void Unwind_60517084(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x44))
  ;
  return;
}



/* ---- Unwind@605170b0 @ 605170b0 size=9 ---- */

void Unwind_605170b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605170b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@605170b9 @ 605170b9 size=25 ---- */

void Unwind_605170b9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@605170f0 @ 605170f0 size=5 ---- */

void __thiscall CHgAniAvatar::Unwind_605170f0(CHgAniAvatar *this)

{
  return;
}



/* ---- Unwind@60517110 @ 60517110 size=11 ---- */

void Unwind_60517110(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60517140 @ 60517140 size=5 ---- */

void __thiscall CHgAniAvatar::Unwind_60517140(CHgAniAvatar *this)

{
  return;
}



/* ---- Unwind@60517160 @ 60517160 size=5 ---- */

void __thiscall CHgAniAvatar::Unwind_60517160(CHgAniAvatar *this)

{
  return;
}



/* ---- Unwind@605171a0 @ 605171a0 size=9 ---- */

void Unwind_605171a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605171a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x54))
  ;
  return;
}



/* ---- Unwind@605171d0 @ 605171d0 size=9 ---- */

void Unwind_605171d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605171d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60517200 @ 60517200 size=8 ---- */

void Unwind_60517200(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517230 @ 60517230 size=8 ---- */

void Unwind_60517230(void)

{
  FUN_60512860();
  return;
}



/* ---- Unwind@60517238 @ 60517238 size=12 ---- */

void Unwind_60517238(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051723e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x20));
  return;
}



/* ---- Unwind@60517244 @ 60517244 size=12 ---- */

void Unwind_60517244(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051724a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x3c));
  return;
}



/* ---- Unwind@60517250 @ 60517250 size=12 ---- */

void Unwind_60517250(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x58));
  return;
}



/* ---- Unwind@6051725c @ 6051725c size=11 ---- */

void Unwind_6051725c(void)

{
  FUN_605155f0();
  return;
}



/* ---- Unwind@60517290 @ 60517290 size=9 ---- */

void Unwind_60517290(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@60517299 @ 60517299 size=9 ---- */

void Unwind_60517299(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051729c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x44))
  ;
  return;
}



/* ---- Unwind@605172c0 @ 605172c0 size=9 ---- */

void Unwind_605172c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605172c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x30))
  ;
  return;
}



/* ---- Unwind@605172c9 @ 605172c9 size=5 ---- */

void __thiscall CHgAniAvatar::Unwind_605172c9(CHgAniAvatar *this)

{
  return;
}



/* ---- Unwind@60517300 @ 60517300 size=5 ---- */

void __thiscall CHgAniAvatar::Unwind_60517300(CHgAniAvatar *this)

{
  return;
}



/* ---- Unwind@60517320 @ 60517320 size=8 ---- */

void Unwind_60517320(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(unaff_EBP + -0x30));
  return;
}



/* ---- Unwind@60517350 @ 60517350 size=14 ---- */

void Unwind_60517350(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + -0x120));
  return;
}



/* ---- Unwind@60517390 @ 60517390 size=11 ---- */

void Unwind_60517390(void)

{
  int unaff_EBP;
  
  CGdiObject::~CGdiObject((CGdiObject *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@605173c0 @ 605173c0 size=9 ---- */

void Unwind_605173c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605173c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@605173f0 @ 605173f0 size=8 ---- */

void Unwind_605173f0(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517420 @ 60517420 size=12 ---- */

void Unwind_60517420(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@6051742c @ 6051742c size=12 ---- */

void Unwind_6051742c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}



/* ---- Unwind@60517480 @ 60517480 size=8 ---- */

void Unwind_60517480(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@605174b0 @ 605174b0 size=11 ---- */

void Unwind_605174b0(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@605174e0 @ 605174e0 size=26 ---- */

void Unwind_605174e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_60501a40(*(undefined4 **)(unaff_EBP + 4));
  }
  return;
}



/* ---- Unwind@60517520 @ 60517520 size=26 ---- */

void Unwind_60517520(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_60501a40(*(undefined4 **)(unaff_EBP + 4));
  }
  return;
}



/* ---- Unwind@60517560 @ 60517560 size=10 ---- */

void Unwind_60517560(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x40));
  return;
}



/* ---- Unwind@6051756a @ 6051756a size=10 ---- */

void Unwind_6051756a(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@60517574 @ 60517574 size=10 ---- */

void Unwind_60517574(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@6051757e @ 6051757e size=10 ---- */

void Unwind_6051757e(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@60517588 @ 60517588 size=10 ---- */

void Unwind_60517588(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@60517592 @ 60517592 size=10 ---- */

void Unwind_60517592(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@6051759c @ 6051759c size=10 ---- */

void Unwind_6051759c(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@605175a6 @ 605175a6 size=10 ---- */

void Unwind_605175a6(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@605175b0 @ 605175b0 size=10 ---- */

void Unwind_605175b0(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@605175ba @ 605175ba size=10 ---- */

void Unwind_605175ba(void)

{
  int unaff_EBP;
  
  FUN_60501a40((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@60517600 @ 60517600 size=9 ---- */

void Unwind_60517600(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x54))
  ;
  return;
}



/* ---- Unwind@60517630 @ 60517630 size=11 ---- */

void Unwind_60517630(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60517660 @ 60517660 size=8 ---- */

void Unwind_60517660(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60517668 @ 60517668 size=8 ---- */

void Unwind_60517668(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x38))
  ;
  return;
}



/* ---- Unwind@60517690 @ 60517690 size=9 ---- */

void Unwind_60517690(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@605176c0 @ 605176c0 size=12 ---- */

void Unwind_605176c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605176c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x14) + 0x14));
  return;
}



/* ---- Unwind@605176cc @ 605176cc size=12 ---- */

void Unwind_605176cc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605176d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x14) + 0x30));
  return;
}



/* ---- Unwind@605176d8 @ 605176d8 size=13 ---- */

void Unwind_605176d8(void)

{
  int unaff_EBP;
  
  FUN_6050c9d0((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x4c));
  return;
}



/* ---- Unwind@605176e5 @ 605176e5 size=8 ---- */

void Unwind_605176e5(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517710 @ 60517710 size=9 ---- */

void Unwind_60517710(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x30))
  ;
  return;
}



/* ---- Unwind@60517719 @ 60517719 size=9 ---- */

void Unwind_60517719(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051771c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x4c))
  ;
  return;
}



/* ---- Unwind@60517750 @ 60517750 size=9 ---- */

void Unwind_60517750(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60517759 @ 60517759 size=12 ---- */

void Unwind_60517759(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051775f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x238)
            );
  return;
}



/* ---- Unwind@60517765 @ 60517765 size=12 ---- */

void Unwind_60517765(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051776b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x238)
            );
  return;
}



/* ---- Unwind@605177a0 @ 605177a0 size=9 ---- */

void Unwind_605177a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605177a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@605177a9 @ 605177a9 size=13 ---- */

void Unwind_605177a9(void)

{
  int unaff_EBP;
  
  FUN_6050c9d0((undefined4 *)(unaff_EBP + -0x94));
  return;
}



/* ---- Unwind@605177b6 @ 605177b6 size=10 ---- */

void Unwind_605177b6(void)

{
  int unaff_EBP;
  
  FUN_605119c0((undefined4 *)(unaff_EBP + -0x7c));
  return;
}



/* ---- Unwind@605177c0 @ 605177c0 size=14 ---- */

void Unwind_605177c0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0xa0));
  return;
}



/* ---- Unwind@605177ce @ 605177ce size=8 ---- */

void Unwind_605177ce(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@605177d6 @ 605177d6 size=8 ---- */

void Unwind_605177d6(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x4c))
  ;
  return;
}



/* ---- Unwind@605177de @ 605177de size=9 ---- */

void Unwind_605177de(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605177e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@605177e7 @ 605177e7 size=9 ---- */

void Unwind_605177e7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605177ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x4c))
  ;
  return;
}



/* ---- Unwind@605177f0 @ 605177f0 size=8 ---- */

void Unwind_605177f0(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@605177f8 @ 605177f8 size=11 ---- */

void Unwind_605177f8(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517830 @ 60517830 size=8 ---- */

void Unwind_60517830(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517860 @ 60517860 size=11 ---- */

void Unwind_60517860(void)

{
  int unaff_EBP;
  
  CGdiObject::~CGdiObject((CGdiObject *)(unaff_EBP + -0x144));
  return;
}



/* ---- Unwind@6051786b @ 6051786b size=11 ---- */

void Unwind_6051786b(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(unaff_EBP + -0x164));
  return;
}



/* ---- Unwind@605178b0 @ 605178b0 size=8 ---- */

void Unwind_605178b0(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@605178b8 @ 605178b8 size=11 ---- */

void Unwind_605178b8(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@605178e0 @ 605178e0 size=13 ---- */

void Unwind_605178e0(void)

{
  int unaff_EBP;
  
  FUN_605093b0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@605178ed @ 605178ed size=12 ---- */

void Unwind_605178ed(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605178f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}



/* ---- Unwind@60517920 @ 60517920 size=13 ---- */

void Unwind_60517920(void)

{
  int unaff_EBP;
  
  FUN_605093b0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@6051792d @ 6051792d size=12 ---- */

void Unwind_6051792d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}



/* ---- Unwind@60517960 @ 60517960 size=8 ---- */

void Unwind_60517960(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@60517990 @ 60517990 size=8 ---- */

void Unwind_60517990(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(unaff_EBP + -0x30));
  return;
}



/* ---- Unwind@605179c0 @ 605179c0 size=8 ---- */

void Unwind_605179c0(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@605179f0 @ 605179f0 size=11 ---- */

void Unwind_605179f0(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@605179fb @ 605179fb size=14 ---- */

void Unwind_605179fb(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@60517a30 @ 60517a30 size=11 ---- */

void Unwind_60517a30(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@60517a60 @ 60517a60 size=11 ---- */

void Unwind_60517a60(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@60517a6b @ 60517a6b size=11 ---- */

void Unwind_60517a6b(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@60517aa0 @ 60517aa0 size=11 ---- */

void Unwind_60517aa0(void)

{
  FUN_605056c0();
  return;
}



/* ---- Unwind@60517ad0 @ 60517ad0 size=14 ---- */

void Unwind_60517ad0(void)

{
  int unaff_EBP;
  
  cHgAnigifList::~cHgAnigifList((cHgAnigifList *)(*(int *)(unaff_EBP + -0x10) + 0x240));
  return;
}



/* ---- Unwind@60517ade @ 60517ade size=14 ---- */

void Unwind_60517ade(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(*(int *)(unaff_EBP + -0x10) + 0x2dc));
  return;
}



/* ---- Unwind@60517b10 @ 60517b10 size=17 ---- */

void Unwind_60517b10(void)

{
  int unaff_EBP;
  
  cHgAnigifList::~cHgAnigifList((cHgAnigifList *)(*(int *)(unaff_EBP + -0x11c) + 0x240));
  return;
}



/* ---- Unwind@60517b21 @ 60517b21 size=17 ---- */

void Unwind_60517b21(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(*(int *)(unaff_EBP + -0x11c) + 0x2dc));
  return;
}



/* ---- Unwind@60517b60 @ 60517b60 size=14 ---- */

void Unwind_60517b60(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x348));
  return;
}



/* ---- Unwind@60517b6e @ 60517b6e size=12 ---- */

void Unwind_60517b6e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x344)
            );
  return;
}



/* ---- Unwind@60517bb0 @ 60517bb0 size=9 ---- */

void Unwind_60517bb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x34))
  ;
  return;
}



/* ---- Unwind@60517bb9 @ 60517bb9 size=10 ---- */

void Unwind_60517bb9(void)

{
  int unaff_EBP;
  
  FUN_6050c9d0((undefined4 *)(unaff_EBP + -0x4c));
  return;
}



/* ---- Unwind@60517bc3 @ 60517bc3 size=8 ---- */

void Unwind_60517bc3(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517bf0 @ 60517bf0 size=12 ---- */

void Unwind_60517bf0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@60517bfc @ 60517bfc size=12 ---- */

void Unwind_60517bfc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}



/* ---- Unwind@60517c30 @ 60517c30 size=8 ---- */

void Unwind_60517c30(void)

{
  int unaff_EBP;
  
  CAvtrId::~CAvtrId(*(CAvtrId **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60517c38 @ 60517c38 size=14 ---- */

void Unwind_60517c38(void)

{
  int unaff_EBP;
  
  CAvtrTickHandler::~CAvtrTickHandler((CAvtrTickHandler *)(*(int *)(unaff_EBP + -0x10) + 0xac));
  return;
}



/* ---- Unwind@60517c70 @ 60517c70 size=8 ---- */

void Unwind_60517c70(void)

{
  int unaff_EBP;
  
  CAvtrId::~CAvtrId(*(CAvtrId **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60517ca0 @ 60517ca0 size=11 ---- */

void Unwind_60517ca0(void)

{
  int unaff_EBP;
  
  cHgAniDIBList::~cHgAniDIBList((cHgAniDIBList *)(unaff_EBP + -0xe0));
  return;
}



/* ---- Unwind@60517cd0 @ 60517cd0 size=8 ---- */

void Unwind_60517cd0(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(unaff_EBP + -0x30));
  return;
}



/* ---- Unwind@60517d00 @ 60517d00 size=8 ---- */

void Unwind_60517d00(void)

{
  int unaff_EBP;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 4));
  return;
}



/* ---- Unwind@60517d30 @ 60517d30 size=11 ---- */

void Unwind_60517d30(void)

{
  int unaff_EBP;
  
  cHgAniDIBList::~cHgAniDIBList((cHgAniDIBList *)(unaff_EBP + -0xe0));
  return;
}



/* ---- Unwind@60517d3b @ 60517d3b size=14 ---- */

void Unwind_60517d3b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0xe8));
  return;
}



/* ---- Unwind@60517d70 @ 60517d70 size=12 ---- */

void Unwind_60517d70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x118)
            );
  return;
}



/* ---- Unwind@60517d7c @ 60517d7c size=12 ---- */

void Unwind_60517d7c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xa0))
  ;
  return;
}



/* ---- Unwind@60517d88 @ 60517d88 size=9 ---- */

void Unwind_60517d88(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x4c))
  ;
  return;
}



/* ---- Unwind@60517d91 @ 60517d91 size=12 ---- */

void Unwind_60517d91(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x118)
            );
  return;
}



/* ---- Unwind@60517d9d @ 60517d9d size=9 ---- */

void Unwind_60517d9d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x30))
  ;
  return;
}



/* ---- Unwind@60517da6 @ 60517da6 size=12 ---- */

void Unwind_60517da6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xf4))
  ;
  return;
}



/* ---- Unwind@60517db2 @ 60517db2 size=12 ---- */

void Unwind_60517db2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xd8))
  ;
  return;
}



/* ---- Unwind@60517dbe @ 60517dbe size=12 ---- */

void Unwind_60517dbe(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x84))
  ;
  return;
}



/* ---- Unwind@60517dca @ 60517dca size=12 ---- */

void Unwind_60517dca(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xbc))
  ;
  return;
}



/* ---- Unwind@60517dd6 @ 60517dd6 size=9 ---- */

void Unwind_60517dd6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x68))
  ;
  return;
}



/* ---- Unwind@60517e10 @ 60517e10 size=13 ---- */

void Unwind_60517e10(void)

{
  int unaff_EBP;
  
  FUN_605093b0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@60517e1d @ 60517e1d size=12 ---- */

void Unwind_60517e1d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}



/* ---- Unwind@60517e29 @ 60517e29 size=12 ---- */

void Unwind_60517e29(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}



/* ---- Unwind@60517e35 @ 60517e35 size=8 ---- */

void Unwind_60517e35(void)

{
  FUN_6050cc50();
  return;
}



/* ---- Unwind@60517e60 @ 60517e60 size=9 ---- */

void Unwind_60517e60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x80))
  ;
  return;
}



/* ---- Unwind@60517e69 @ 60517e69 size=9 ---- */

void Unwind_60517e69(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -100));
  return;
}



/* ---- Unwind@60517e72 @ 60517e72 size=12 ---- */

void Unwind_60517e72(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x9c))
  ;
  return;
}



/* ---- Unwind@60517e7e @ 60517e7e size=9 ---- */

void Unwind_60517e7e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x48))
  ;
  return;
}



/* ---- Unwind@60517e87 @ 60517e87 size=9 ---- */

void Unwind_60517e87(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517e8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60517ec0 @ 60517ec0 size=9 ---- */

void Unwind_60517ec0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x48))
  ;
  return;
}



/* ---- Unwind@60517ec9 @ 60517ec9 size=9 ---- */

void Unwind_60517ec9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@60517ed2 @ 60517ed2 size=12 ---- */

void Unwind_60517ed2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xf0))
  ;
  return;
}



/* ---- Unwind@60517ede @ 60517ede size=12 ---- */

void Unwind_60517ede(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0xf4));
  return;
}



/* ---- Unwind@60517eea @ 60517eea size=13 ---- */

void Unwind_60517eea(void)

{
  int unaff_EBP;
  
  FUN_60512cf0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0xd4));
  return;
}



/* ---- Unwind@60517ef7 @ 60517ef7 size=13 ---- */

void Unwind_60517ef7(void)

{
  int unaff_EBP;
  
  FUN_605158a0(unaff_EBP + -0xd4);
  return;
}



/* ---- Unwind@60517f40 @ 60517f40 size=9 ---- */

void Unwind_60517f40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@60517f49 @ 60517f49 size=8 ---- */

void Unwind_60517f49(void)

{
  int unaff_EBP;
  
  FUN_60512880(unaff_EBP + -0x34);
  return;
}



/* ---- Unwind@60517f51 @ 60517f51 size=12 ---- */

void Unwind_60517f51(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xdc))
  ;
  return;
}



/* ---- Unwind@60517f5d @ 60517f5d size=12 ---- */

void Unwind_60517f5d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xf8))
  ;
  return;
}



/* ---- Unwind@60517f69 @ 60517f69 size=12 ---- */

void Unwind_60517f69(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xc0))
  ;
  return;
}



/* ---- Unwind@60517f75 @ 60517f75 size=13 ---- */

void Unwind_60517f75(void)

{
  int unaff_EBP;
  
  FUN_60514310((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0xa4));
  return;
}



/* ---- Unwind@60517fb0 @ 60517fb0 size=8 ---- */

void Unwind_60517fb0(void)

{
  int unaff_EBP;
  
  CAvtrId::~CAvtrId((CAvtrId *)(unaff_EBP + -0x80));
  return;
}



/* ---- Unwind@60517fb8 @ 60517fb8 size=12 ---- */

void Unwind_60517fb8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60517fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x9c))
  ;
  return;
}



/* ---- Unwind@60518000 @ 60518000 size=14 ---- */

void Unwind_60518000(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@6051800e @ 6051800e size=14 ---- */

void Unwind_6051800e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@6051801c @ 6051801c size=14 ---- */

void Unwind_6051801c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@6051802a @ 6051802a size=14 ---- */

void Unwind_6051802a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@60518038 @ 60518038 size=14 ---- */

void Unwind_60518038(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@60518046 @ 60518046 size=14 ---- */

void Unwind_60518046(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@60518054 @ 60518054 size=14 ---- */

void Unwind_60518054(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@60518062 @ 60518062 size=14 ---- */

void Unwind_60518062(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x108));
  return;
}



/* ---- Unwind@60518070 @ 60518070 size=8 ---- */

void Unwind_60518070(void)

{
  int unaff_EBP;
  
  CAvtrId::~CAvtrId((CAvtrId *)(unaff_EBP + -0x80));
  return;
}



/* ---- Unwind@60518078 @ 60518078 size=12 ---- */

void Unwind_60518078(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051807e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x104)
            );
  return;
}



/* ---- Unwind@60518084 @ 60518084 size=11 ---- */

void Unwind_60518084(void)

{
  int unaff_EBP;
  
  CAvtrId::~CAvtrId((CAvtrId *)(unaff_EBP + -0xe8));
  return;
}



/* ---- Unwind@6051808f @ 6051808f size=12 ---- */

void Unwind_6051808f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60518095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x104)
            );
  return;
}



/* ---- Unwind@605180d0 @ 605180d0 size=8 ---- */

void Unwind_605180d0(void)

{
  int unaff_EBP;
  
  CHgAImage::~CHgAImage((CHgAImage *)(unaff_EBP + -0x30));
  return;
}



/* ---- Unwind@60518100 @ 60518100 size=10 ---- */

void Unwind_60518100(void)

{
  int unaff_EBP;
  
  FUN_60514310((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@6051810a @ 6051810a size=9 ---- */

void Unwind_6051810a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051810d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
              (unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60518113 @ 60518113 size=12 ---- */

void Unwind_60518113(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60518119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@6051811f @ 6051811f size=26 ---- */

void Unwind_6051811f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FUN_60514310(*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                  (unaff_EBP + -0x10));
  }
  return;
}



/* ---- Unwind@60518139 @ 60518139 size=9 ---- */

void Unwind_60518139(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x6051813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 8));
  return;
}



/* ---- Unwind@60518142 @ 60518142 size=9 ---- */

void Unwind_60518142(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x60518145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + 0x24));
  return;
}



/* ---- Unwind@60518170 @ 60518170 size=8 ---- */

void Unwind_60518170(void)

{
  FUN_605155f0();
  return;
}



/* ---- Unwind@605181a0 @ 605181a0 size=8 ---- */

void Unwind_605181a0(void)

{
  FUN_60512860();
  return;
}



/* ---- Unwind@605181a8 @ 605181a8 size=12 ---- */

void Unwind_605181a8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605181ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x20));
  return;
}



/* ---- Unwind@605181b4 @ 605181b4 size=12 ---- */

void Unwind_605181b4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605181ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x3c));
  return;
}



/* ---- Unwind@605181c0 @ 605181c0 size=12 ---- */

void Unwind_605181c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605181c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + 4) + 0x58));
  return;
}



/* ---- Unwind@605181cc @ 605181cc size=11 ---- */

void Unwind_605181cc(void)

{
  FUN_605155f0();
  return;
}



/* ---- Unwind@605181d7 @ 605181d7 size=9 ---- */

void Unwind_605181d7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605181da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@605181e0 @ 605181e0 size=9 ---- */

void Unwind_605181e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x605181e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x28))
  ;
  return;
}



/* ---- Unwind@60518210 @ 60518210 size=11 ---- */

void Unwind_60518210(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@60518240 @ 60518240 size=11 ---- */

void Unwind_60518240(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- FUN_60518270 @ 60518270 size=39 ---- */

void FUN_60518270(void)

{
  _eh_vector_constructor_iterator_
            (&DAT_60521910,0x138,0x70,CHgAImage::CHgAImage,CAvatarLayer::~CAvatarLayer);
  _atexit(FUN_60518310);
  return;
}



/* ---- FUN_605182a0 @ 605182a0 size=39 ---- */

void FUN_605182a0(void)

{
  _eh_vector_constructor_iterator_
            (&DAT_6052a190,0x138,0x14,CHgAImage::CHgAImage,CAvatarLayer::~CAvatarLayer);
  _atexit(FUN_60518330);
  return;
}



/* ---- FUN_605182d0 @ 605182d0 size=39 ---- */

void FUN_605182d0(void)

{
  _eh_vector_constructor_iterator_
            (&DAT_6052b9f0,0x138,1,CHgAImage::CHgAImage,CAvatarLayer::~CAvatarLayer);
  _atexit(FUN_60518350);
  return;
}



/* ---- FUN_60518300 @ 60518300 size=12 ---- */

void FUN_60518300(void)

{
  _atexit(FUN_60518370);
  return;
}



/* ---- FUN_60518310 @ 60518310 size=23 ---- */

void FUN_60518310(void)

{
  _eh_vector_destructor_iterator_(&DAT_60521910,0x138,0x70,CAvatarLayer::~CAvatarLayer);
  return;
}



/* ---- FUN_60518330 @ 60518330 size=23 ---- */

void FUN_60518330(void)

{
  _eh_vector_destructor_iterator_(&DAT_6052a190,0x138,0x14,CAvatarLayer::~CAvatarLayer);
  return;
}



/* ---- FUN_60518350 @ 60518350 size=23 ---- */

void FUN_60518350(void)

{
  _eh_vector_destructor_iterator_(&DAT_6052b9f0,0x138,1,CAvatarLayer::~CAvatarLayer);
  return;
}



/* ---- FUN_60518370 @ 60518370 size=10 ---- */

void FUN_60518370(void)

{
  CAvatarLayer::~CAvatarLayer((CAvatarLayer *)&PTR_vftable_60521108);
  return;
}


// total=697 ok=697 failed=0
