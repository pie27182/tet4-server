// Module: TPackClientConnector.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- bad_alloc @ 10001000 size=38 ---- */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  std::exception::exception((exception *)this,&param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- ~bad_alloc @ 10001030 size=29 ---- */

/* Library Function - Single Match
    public: virtual __thiscall std::bad_alloc::~bad_alloc(void)
   
   Library: Visual Studio 2005 Debug */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  this->vftablePtr = &vftable;
  std::exception::~exception((exception *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 10001050 size=44 ---- */

bad_alloc * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,uint param_1)

{
  ~bad_alloc(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (bad_alloc *)this;
}



/* ---- FUN_10001080 @ 10001080 size=8 ---- */

undefined4 __cdecl FUN_10001080(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



/* ---- FUN_10001090 @ 10001090 size=5 ---- */

void FUN_10001090(void)

{
  return;
}



/* ---- FUN_100010a0 @ 100010a0 size=24 ---- */

undefined4 * __thiscall FUN_100010a0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return this;
}



/* ---- FUN_100010c0 @ 100010c0 size=16 ---- */

undefined4 __fastcall FUN_100010c0(undefined4 *param_1)

{
  return *param_1;
}



/* ---- FUN_100010d0 @ 100010d0 size=11 ---- */

void FUN_100010d0(void)

{
  return;
}



/* ---- FUN_100010e0 @ 100010e0 size=23 ---- */

undefined4 * __fastcall FUN_100010e0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* ---- FUN_10001100 @ 10001100 size=23 ---- */

void __thiscall FUN_10001100(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}



/* ---- FUN_10001120 @ 10001120 size=46 ---- */

undefined4 __fastcall FUN_10001120(int *param_1)

{
  undefined4 local_c;
  
  if (*param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_100010c0((undefined4 *)*param_1);
  }
  return local_c;
}



/* ---- FUN_10001150 @ 10001150 size=28 ---- */

bool __thiscall FUN_10001150(void *this,int *param_1)

{
  return *(int *)this == *param_1;
}



/* ---- FUN_10001170 @ 10001170 size=24 ---- */

bool __fastcall FUN_10001170(int *param_1)

{
  return *param_1 != 0;
}



/* ---- logic_error @ 10001190 size=106 ---- */

logic_error * __thiscall
std::logic_error::logic_error
          (logic_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c849;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception((exception *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8,param_1);
  ExceptionList = local_10;
  return this;
}



/* ---- ~logic_error @ 10001200 size=41 ---- */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
  std::exception::~exception((exception *)this);
  return;
}



/* ---- vfunction2 @ 10001230 size=23 ---- */

/* std::logic_error member function inherited by std::length_error
   std::logic_error member function inherited by std::out_of_range */

void __thiscall std::logic_error::vfunction2(logic_error *this)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8);
  return;
}



/* ---- scalar_deleting_destructor @ 10001250 size=44 ---- */

exception * __thiscall std::logic_error::scalar_deleting_destructor(logic_error *this,uint param_1)

{
  ~logic_error(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- out_of_range @ 10001280 size=37 ---- */

out_of_range * __thiscall
std::out_of_range::out_of_range
          (out_of_range *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- ~out_of_range @ 100012b0 size=28 ---- */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  this->vftablePtr = &vftable;
  logic_error::~logic_error((logic_error *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 100012d0 size=44 ---- */

exception * __thiscall
std::out_of_range::scalar_deleting_destructor(out_of_range *this,uint param_1)

{
  ~out_of_range(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- out_of_range @ 10001300 size=37 ---- */

out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,exception *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- logic_error @ 10001330 size=113 ---- */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,exception *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c849;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception((exception *)this,param_1);
  local_8 = 0;
  this->vftablePtr = &vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->logic_error_data).field_0x8,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  ExceptionList = local_10;
  return this;
}



/* ---- ~IMessage @ 100013b0 size=20 ---- */

void __thiscall XDR::IMessage::~IMessage(IMessage *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- scalar_deleting_destructor @ 100013d0 size=44 ---- */

undefined4 * __thiscall XDR::IMessage::scalar_deleting_destructor(IMessage *this,uint param_1)

{
  ~IMessage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10001400 @ 10001400 size=111 ---- */

uint __cdecl
FUN_10001400(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  char *pcVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size(param_2);
  if ((int)local_8 < 0xfa001) {
    bVar1 = FUN_10003990(param_1,&local_8);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      if (0 < (int)local_8) {
        uVar3 = local_8;
        pcVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (param_2,0);
        uVar3 = XStream::Write(param_1,pcVar2,uVar3);
        if (uVar3 != local_8) {
          return uVar3 & 0xffffff00;
        }
      }
      local_8 = CONCAT31((int3)(uVar3 >> 8),1);
    }
    else {
      local_8 = (uint)extraout_var << 8;
    }
  }
  else {
    local_8 = local_8 & 0xffffff00;
  }
  return local_8;
}



/* ---- FUN_10001470 @ 10001470 size=119 ---- */

int __cdecl
FUN_10001470(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  bVar1 = FUN_100039d0(param_1,&local_8);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    if ((int)local_8 < 0xfa001) {
      if (0 < (int)local_8) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                  (param_2,local_8);
        uVar4 = local_8;
        pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                           (param_2,0);
        uVar4 = XStream::Read(param_1,pcVar3,uVar4);
        if (uVar4 != local_8) {
          return uVar4 & 0xffffff00;
        }
      }
      iVar2 = CONCAT31((int3)(uVar4 >> 8),1);
    }
    else {
      iVar2 = (uint)extraout_var << 8;
    }
  }
  else {
    iVar2 = (uint)extraout_var << 8;
  }
  return iVar2;
}



/* ---- FUN_100014f0 @ 100014f0 size=35 ---- */

int __cdecl FUN_100014f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::size(param_1);
  iVar2 = FUN_10003980();
  return iVar2 + uVar1;
}



/* ---- FUN_10001520 @ 10001520 size=105 ---- */

bool __thiscall FUN_10001520(void *this,undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(this);
  (**(code **)(*param_2 + 0x1c))(1);
  cVar2 = (**(code **)(*param_2 + 0x14))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x1c))(uVar1);
  }
  else {
    (**(code **)(*param_2 + 0x1c))(uVar1);
  }
  return cVar2 != '\0';
}



/* ---- FUN_10001590 @ 10001590 size=105 ---- */

bool __thiscall FUN_10001590(void *this,undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(this);
  (**(code **)(*param_2 + 0x1c))(1);
  cVar2 = (**(code **)(*param_2 + 0x18))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_2 + 0x1c))(uVar1);
  }
  else {
    (**(code **)(*param_2 + 0x1c))(uVar1);
  }
  return cVar2 != '\0';
}



/* ---- FUN_10001600 @ 10001600 size=78 ---- */

undefined4 __cdecl FUN_10001600(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x1c))(1);
  uVar2 = (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x1c))(uVar1);
  return uVar2;
}



/* ---- _XDRCommonHeader @ 10001650 size=158 ---- */

_XDRCommonHeader * __thiscall _XDRCommonHeader::_XDRCommonHeader(_XDRCommonHeader *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->_XDRCommonHeader_data).offset_0x0 = 0;
  (this->_XDRCommonHeader_data).offset_0x4 = 0xc2f9eea;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x8);
  local_8._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x28);
  local_8 = CONCAT31(local_8._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x44);
  (this->_XDRCommonHeader_data).offset_0x24 = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~_XDRCommonHeader @ 100016f0 size=128 ---- */

void __thiscall _XDRCommonHeader::~_XDRCommonHeader(_XDRCommonHeader *this)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1000c970;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x44);
  local_8._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x28);
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x8);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10001770 size=63 ---- */

void __thiscall _XDRCommonHeader::vfunction2(_XDRCommonHeader *this)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x8,0);
  (this->_XDRCommonHeader_data).offset_0x24 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x28,0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->_XDRCommonHeader_data).field_0x44,0);
  return;
}



/* ---- vfunction3 @ 100017b0 size=16 ---- */

undefined4 __thiscall _XDRCommonHeader::vfunction3(_XDRCommonHeader *this)

{
  return 0xc2f9eea;
}



/* ---- vfunction4 @ 100017c0 size=16 ---- */

char * __thiscall _XDRCommonHeader::vfunction4(_XDRCommonHeader *this)

{
  return "_XDRCommonHeader";
}



/* ---- vfunction5 @ 100017d0 size=139 ---- */

int __thiscall _XDRCommonHeader::vfunction5(_XDRCommonHeader *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((this->_XDRCommonHeader_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->_XDRCommonHeader_data).field_0x8);
  iVar2 = FUN_10003650();
  iVar3 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->_XDRCommonHeader_data).field_0x28);
  iVar4 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->_XDRCommonHeader_data).field_0x44);
  return iVar4 + iVar3 + iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 10001860 size=176 ---- */

uint __thiscall _XDRCommonHeader::vfunction6(_XDRCommonHeader *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->_XDRCommonHeader_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->_XDRCommonHeader_data).offset_0x4), (uVar1 & 0xff) == 0))
  {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &(this->_XDRCommonHeader_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036b0(param_1,&(this->_XDRCommonHeader_data).offset_0x24);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&(this->_XDRCommonHeader_data).field_0x28);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&(this->_XDRCommonHeader_data).field_0x44);
        uVar2 = (uint3)(uVar1 >> 8);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = (uint)uVar2 << 8;
        }
        else {
          uVar1 = CONCAT31(uVar2,1);
        }
      }
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10001910 size=176 ---- */

uint __thiscall _XDRCommonHeader::vfunction7(_XDRCommonHeader *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->_XDRCommonHeader_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->_XDRCommonHeader_data).offset_0x4), (uVar1 & 0xff) == 0))
  {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &(this->_XDRCommonHeader_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036f0(param_1,&(this->_XDRCommonHeader_data).offset_0x24);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&(this->_XDRCommonHeader_data).field_0x28);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&(this->_XDRCommonHeader_data).field_0x44);
        uVar2 = (uint3)(uVar1 >> 8);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = (uint)uVar2 << 8;
        }
        else {
          uVar1 = CONCAT31(uVar2,1);
        }
      }
    }
  }
  return uVar1;
}



/* ---- scalar_deleting_destructor @ 100019c0 size=44 ---- */

undefined4 * __thiscall
_XDRCommonHeader::scalar_deleting_destructor(_XDRCommonHeader *this,uint param_1)

{
  ~_XDRCommonHeader(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- IMessage @ 100019f0 size=23 ---- */

IMessage * __thiscall XDR::IMessage::IMessage(IMessage *this)

{
  this->vftablePtr = &vftable;
  return this;
}



/* ---- _XDRResponseHeader @ 10001a10 size=125 ---- */

_XDRResponseHeader * __thiscall _XDRResponseHeader::_XDRResponseHeader(_XDRResponseHeader *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->_XDRResponseHeader_data).offset_0x0 = 0;
  (this->_XDRResponseHeader_data).offset_0x4 = 0xcf60b1a;
  _XDRCommonHeader::_XDRCommonHeader((_XDRCommonHeader *)&(this->_XDRResponseHeader_data).field_0x8)
  ;
  (this->_XDRResponseHeader_data).offset_0x6c = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~_XDRResponseHeader @ 10001a90 size=95 ---- */

/* Library Function - Multiple Matches With Different Base Names
    protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >(void)
    protected: virtual __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(void)
    protected: virtual __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)
    public: virtual __thiscall CXMLParser::~CXMLParser(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012
   ***** Removed Bad FID Symbol(s) ***** */

void __thiscall _XDRResponseHeader::~_XDRResponseHeader(_XDRResponseHeader *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  _XDRCommonHeader::~_XDRCommonHeader
            ((_XDRCommonHeader *)&(this->_XDRResponseHeader_data).field_0x8);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10001af0 size=38 ---- */

void __thiscall _XDRResponseHeader::vfunction2(_XDRResponseHeader *this)

{
  (**(code **)(*(int *)&(this->_XDRResponseHeader_data).field_0x8 + 4))();
  (this->_XDRResponseHeader_data).offset_0x6c = 0;
  return;
}



/* ---- vfunction3 @ 10001b20 size=16 ---- */

undefined4 __thiscall _XDRResponseHeader::vfunction3(_XDRResponseHeader *this)

{
  return 0xcf60b1a;
}



/* ---- vfunction4 @ 10001b30 size=16 ---- */

char * __thiscall _XDRResponseHeader::vfunction4(_XDRResponseHeader *this)

{
  return "_XDRResponseHeader";
}



/* ---- vfunction5 @ 10001b40 size=97 ---- */

int __thiscall _XDRResponseHeader::vfunction5(_XDRResponseHeader *this)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  if ((this->_XDRResponseHeader_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->_XDRResponseHeader_data).field_0x8);
  iVar2 = FUN_10003650();
  return iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 10001bb0 size=116 ---- */

uint __thiscall _XDRResponseHeader::vfunction6(_XDRResponseHeader *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->_XDRResponseHeader_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->_XDRResponseHeader_data).offset_0x4), (uVar1 & 0xff) == 0
     )) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003730(param_1,(int *)&(this->_XDRResponseHeader_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036b0(param_1,&(this->_XDRResponseHeader_data).offset_0x6c);
    uVar2 = (uint3)(uVar1 >> 8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10001c30 size=116 ---- */

uint __thiscall _XDRResponseHeader::vfunction7(_XDRResponseHeader *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->_XDRResponseHeader_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->_XDRResponseHeader_data).offset_0x4), (uVar1 & 0xff) == 0
     )) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003770(param_1,(int *)&(this->_XDRResponseHeader_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036f0(param_1,&(this->_XDRResponseHeader_data).offset_0x6c);
    uVar2 = (uint3)(uVar1 >> 8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  return uVar1;
}



/* ---- scalar_deleting_destructor @ 10001cb0 size=44 ---- */

void * __thiscall
_XDRResponseHeader::scalar_deleting_destructor(_XDRResponseHeader *this,uint param_1)

{
  ~_XDRResponseHeader(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- XDRTPackLoginResponse @ 10001ce0 size=170 ---- */

XDRTPackLoginResponse * __thiscall
XDRTPackLoginResponse::XDRTPackLoginResponse(XDRTPackLoginResponse *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cbe3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRTPackLoginResponse_data).offset_0x0 = 0;
  (this->XDRTPackLoginResponse_data).offset_0x4 = 0x5e78e3a;
  _XDRResponseHeader::_XDRResponseHeader
            ((_XDRResponseHeader *)&(this->XDRTPackLoginResponse_data).field_0x8);
  local_8 = CONCAT31(local_8._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLoginResponse_data).field_0x7c);
  (this->XDRTPackLoginResponse_data).offset_0x98 = 0;
  (this->XDRTPackLoginResponse_data).offset_0x9c = 0;
  (this->XDRTPackLoginResponse_data).offset_0xa0 = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRTPackLoginResponse @ 10001d90 size=114 ---- */

void __thiscall XDRTPackLoginResponse::~XDRTPackLoginResponse(XDRTPackLoginResponse *this)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1000cbe3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLoginResponse_data).field_0x7c);
  local_8 = local_8 & 0xffffff00;
  _XDRResponseHeader::~_XDRResponseHeader
            ((_XDRResponseHeader *)&(this->XDRTPackLoginResponse_data).field_0x8);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10001e10 size=81 ---- */

void __thiscall XDRTPackLoginResponse::vfunction2(XDRTPackLoginResponse *this)

{
  (**(code **)(*(int *)&(this->XDRTPackLoginResponse_data).field_0x8 + 4))();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLoginResponse_data).field_0x7c,0);
  (this->XDRTPackLoginResponse_data).offset_0x98 = 0;
  (this->XDRTPackLoginResponse_data).offset_0x9c = 0;
  (this->XDRTPackLoginResponse_data).offset_0xa0 = 0;
  return;
}



/* ---- vfunction3 @ 10001e70 size=16 ---- */

undefined4 __thiscall XDRTPackLoginResponse::vfunction3(XDRTPackLoginResponse *this)

{
  return 0x5e78e3a;
}



/* ---- vfunction4 @ 10001e80 size=16 ---- */

char * __thiscall XDRTPackLoginResponse::vfunction4(XDRTPackLoginResponse *this)

{
  return "XDRTPackLoginResponse";
}



/* ---- vfunction5 @ 10001e90 size=147 ---- */

int __thiscall XDRTPackLoginResponse::vfunction5(XDRTPackLoginResponse *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRTPackLoginResponse_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->XDRTPackLoginResponse_data).field_0x8);
  iVar2 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->XDRTPackLoginResponse_data).field_0x7c);
  iVar3 = FUN_10003650();
  iVar4 = FUN_10003710();
  return iVar4 + iVar3 + iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 10001f30 size=188 ---- */

uint __thiscall XDRTPackLoginResponse::vfunction6(XDRTPackLoginResponse *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRTPackLoginResponse_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->XDRTPackLoginResponse_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003730(param_1,(int *)&(this->XDRTPackLoginResponse_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->XDRTPackLoginResponse_data).field_0x7c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_100036b0(param_1,&(this->XDRTPackLoginResponse_data).offset_0x98);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10003750(param_1,&(this->XDRTPackLoginResponse_data).offset_0x9c);
        uVar2 = (uint3)(uVar1 >> 8);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = (uint)uVar2 << 8;
        }
        else {
          uVar1 = CONCAT31(uVar2,1);
        }
      }
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10001ff0 size=188 ---- */

uint __thiscall XDRTPackLoginResponse::vfunction7(XDRTPackLoginResponse *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRTPackLoginResponse_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->XDRTPackLoginResponse_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003770(param_1,(int *)&(this->XDRTPackLoginResponse_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->XDRTPackLoginResponse_data).field_0x7c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_100036f0(param_1,&(this->XDRTPackLoginResponse_data).offset_0x98);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10003790(param_1,(undefined8 *)&(this->XDRTPackLoginResponse_data).offset_0x9c);
        uVar2 = (uint3)(uVar1 >> 8);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = (uint)uVar2 << 8;
        }
        else {
          uVar1 = CONCAT31(uVar2,1);
        }
      }
    }
  }
  return uVar1;
}



/* ---- scalar_deleting_destructor @ 100020b0 size=44 ---- */

undefined4 * __thiscall
XDRTPackLoginResponse::scalar_deleting_destructor(XDRTPackLoginResponse *this,uint param_1)

{
  ~XDRTPackLoginResponse(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_100020e0 @ 100020e0 size=20 ---- */

void __fastcall
FUN_100020e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str(param_1);
  return;
}



/* ---- FUN_10002100 @ 10002100 size=17 ---- */

undefined4 __fastcall FUN_10002100(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* ---- FUN_10002120 @ 10002120 size=17 ---- */

undefined4 __fastcall FUN_10002120(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* ---- FUN_10002140 @ 10002140 size=22 ---- */

void __thiscall FUN_10002140(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x34) = param_1;
  return;
}



/* ---- FUN_10002160 @ 10002160 size=17 ---- */

undefined4 __fastcall FUN_10002160(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* ---- FUN_10002180 @ 10002180 size=17 ---- */

undefined4 __fastcall FUN_10002180(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* ---- FUN_100021a0 @ 100021a0 size=19 ---- */

void __fastcall FUN_100021a0(void *param_1)

{
  FID_conflict__CAtlWinModule(param_1);
  return;
}



/* ---- FUN_100021c0 @ 100021c0 size=37 ---- */

void * __fastcall FUN_100021c0(void *param_1)

{
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_10003b30(&local_5);
  FUN_10002bc0(param_1,&local_6);
  return param_1;
}



/* ---- FID_conflict:~CAtlWinModule @ 100021f0 size=83 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall ATL::CAtlWinModule::~CAtlWinModule(void)
    public: __thiscall CPaneContainerGC::~CPaneContainerGC(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void __thiscall FID_conflict__CAtlWinModule(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cba8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10002fe0(this);
  local_8 = 0xffffffff;
  FUN_10004a10(this);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10002250 @ 10002250 size=39 ---- */

void * __thiscall FUN_10002250(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10002ce0((int)this);
  _Vector_iterator<>(param_1,*puVar1,this);
  return param_1;
}



/* ---- FUN_10002280 @ 10002280 size=35 ---- */

void * __thiscall FUN_10002280(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(undefined4 *)((int)this + 0x18),this);
  return param_1;
}



/* ---- FUN_100022b0 @ 100022b0 size=1988 ---- */

undefined4 * __thiscall FUN_100022b0(void *this,undefined4 *param_1,int param_2,undefined4 param_3)

{
  _Container_proxy *p_Var1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  _Container_proxy *local_70;
  _Container_proxy *local_6c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [28];
  out_of_range local_48 [2];
  _Container_proxy *local_20;
  _Container_proxy *local_1c;
  _Container_proxy *local_18;
  _Container_proxy *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ca89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_100031e0((int)&param_2);
  pcVar3 = (char *)FUN_10002b90(iVar2);
  if (*pcVar3 != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_64,"invalid map/set<T> iterator");
    local_8 = 0;
    std::out_of_range::out_of_range
              (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_64);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1000e1d0);
  }
  local_14 = (_Container_proxy *)FUN_100031e0((int)&param_2);
  FUN_10003170(&param_2);
  local_1c = local_14;
  piVar4 = (int *)FUN_10006080(local_14);
  pcVar3 = (char *)FUN_10002b90(*piVar4);
  if (*pcVar3 == '\0') {
    piVar4 = (int *)FUN_10002bb0((int)local_1c);
    pcVar3 = (char *)FUN_10002b90(*piVar4);
    if (*pcVar3 == '\0') {
      local_1c = (_Container_proxy *)FUN_100031e0((int)&param_2);
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      local_18 = (_Container_proxy *)*piVar4;
    }
    else {
      piVar4 = (int *)FUN_10006080(local_1c);
      local_18 = (_Container_proxy *)*piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_10002bb0((int)local_1c);
    local_18 = (_Container_proxy *)*piVar4;
  }
  if (local_1c == local_14) {
    piVar4 = (int *)FUN_10002ba0((int)local_14);
    local_20 = (_Container_proxy *)*piVar4;
    pcVar3 = (char *)FUN_10002b90((int)local_18);
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10002ba0((int)local_18);
      *piVar4 = (int)local_20;
    }
    piVar4 = (int *)FUN_10005350((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      piVar4 = (int *)FUN_10005350((int)this);
      *piVar4 = (int)local_18;
    }
    else {
      piVar4 = (int *)FUN_10006080(local_20);
      if ((_Container_proxy *)*piVar4 == local_14) {
        piVar4 = (int *)FUN_10006080(local_20);
        *piVar4 = (int)local_18;
      }
      else {
        piVar4 = (int *)FUN_10002bb0((int)local_20);
        *piVar4 = (int)local_18;
      }
    }
    piVar4 = (int *)FUN_10002ce0((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      pcVar3 = (char *)FUN_10002b90((int)local_18);
      if (*pcVar3 == '\0') {
        local_6c = (_Container_proxy *)FUN_10002e70(local_18);
      }
      else {
        local_6c = local_20;
      }
      piVar4 = (int *)FUN_10002ce0((int)this);
      *piVar4 = (int)local_6c;
    }
    piVar4 = (int *)FUN_10005330((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      pcVar3 = (char *)FUN_10002b90((int)local_18);
      if (*pcVar3 == '\0') {
        local_70 = (_Container_proxy *)FUN_10002e30((int)local_18);
      }
      else {
        local_70 = local_20;
      }
      piVar4 = (int *)FUN_10005330((int)this);
      *piVar4 = (int)local_70;
    }
  }
  else {
    piVar4 = (int *)FUN_10006080(local_14);
    piVar4 = (int *)FUN_10002ba0(*piVar4);
    *piVar4 = (int)local_1c;
    puVar5 = (undefined4 *)FUN_10006080(local_14);
    puVar6 = (undefined4 *)FUN_10006080(local_1c);
    *puVar6 = *puVar5;
    piVar4 = (int *)FUN_10002bb0((int)local_14);
    if (local_1c == (_Container_proxy *)*piVar4) {
      local_20 = local_1c;
    }
    else {
      piVar4 = (int *)FUN_10002ba0((int)local_1c);
      local_20 = (_Container_proxy *)*piVar4;
      pcVar3 = (char *)FUN_10002b90((int)local_18);
      if (*pcVar3 == '\0') {
        piVar4 = (int *)FUN_10002ba0((int)local_18);
        *piVar4 = (int)local_20;
      }
      piVar4 = (int *)FUN_10006080(local_20);
      *piVar4 = (int)local_18;
      puVar5 = (undefined4 *)FUN_10002bb0((int)local_14);
      puVar6 = (undefined4 *)FUN_10002bb0((int)local_1c);
      *puVar6 = *puVar5;
      piVar4 = (int *)FUN_10002bb0((int)local_14);
      piVar4 = (int *)FUN_10002ba0(*piVar4);
      *piVar4 = (int)local_1c;
    }
    piVar4 = (int *)FUN_10005350((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      piVar4 = (int *)FUN_10005350((int)this);
      *piVar4 = (int)local_1c;
    }
    else {
      puVar5 = (undefined4 *)FUN_10002ba0((int)local_14);
      piVar4 = (int *)FUN_10006080(*puVar5);
      if ((_Container_proxy *)*piVar4 == local_14) {
        puVar5 = (undefined4 *)FUN_10002ba0((int)local_14);
        piVar4 = (int *)FUN_10006080(*puVar5);
        *piVar4 = (int)local_1c;
      }
      else {
        piVar4 = (int *)FUN_10002ba0((int)local_14);
        piVar4 = (int *)FUN_10002bb0(*piVar4);
        *piVar4 = (int)local_1c;
      }
    }
    puVar5 = (undefined4 *)FUN_10002ba0((int)local_14);
    puVar6 = (undefined4 *)FUN_10002ba0((int)local_1c);
    *puVar6 = *puVar5;
    puVar7 = (undefined1 *)FUN_10002b80((int)local_14);
    puVar8 = (undefined1 *)FUN_10002b80((int)local_1c);
    FUN_100037f0(puVar8,puVar7);
  }
  pcVar3 = (char *)FUN_10002b80((int)local_14);
  if (*pcVar3 != '\x01') {
LAB_10002a23:
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)((int)this + 0xc),local_14);
    FUN_100030e0(local_14);
    if (*(int *)((int)this + 0x1c) != 0) {
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
    }
    FUN_10002c30(this,param_1,param_2,param_3);
    ExceptionList = local_10;
    return param_1;
  }
LAB_100026a7:
  piVar4 = (int *)FUN_10005350((int)this);
  if ((local_18 == (_Container_proxy *)*piVar4) ||
     (pcVar3 = (char *)FUN_10002b80((int)local_18), *pcVar3 != '\x01')) goto LAB_10002a14;
  piVar4 = (int *)FUN_10006080(local_20);
  if (local_18 == (_Container_proxy *)*piVar4) {
    piVar4 = (int *)FUN_10002bb0((int)local_20);
    local_1c = (_Container_proxy *)*piVar4;
    pcVar3 = (char *)FUN_10002b80((int)local_1c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined1 *)FUN_10002b80((int)local_1c);
      *puVar7 = 1;
      puVar7 = (undefined1 *)FUN_10002b80((int)local_20);
      *puVar7 = 0;
      FUN_10002d00(this,(int)local_20);
      piVar4 = (int *)FUN_10002bb0((int)local_20);
      local_1c = (_Container_proxy *)*piVar4;
    }
    pcVar3 = (char *)FUN_10002b90((int)local_1c);
    p_Var1 = local_20;
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10006080(local_1c);
      pcVar3 = (char *)FUN_10002b80(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10002bb0((int)local_1c);
        pcVar3 = (char *)FUN_10002b80(*piVar4);
        if (*pcVar3 == '\x01') {
          puVar7 = (undefined1 *)FUN_10002b80((int)local_1c);
          *puVar7 = 0;
          p_Var1 = local_20;
          goto LAB_10002696;
        }
      }
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      pcVar3 = (char *)FUN_10002b80(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10006080(local_1c);
        puVar7 = (undefined1 *)FUN_10002b80(*piVar4);
        *puVar7 = 1;
        puVar7 = (undefined1 *)FUN_10002b80((int)local_1c);
        *puVar7 = 0;
        FUN_10002eb0(this,(int)local_1c);
        piVar4 = (int *)FUN_10002bb0((int)local_20);
        local_1c = (_Container_proxy *)*piVar4;
      }
      puVar7 = (undefined1 *)FUN_10002b80((int)local_20);
      puVar8 = (undefined1 *)FUN_10002b80((int)local_1c);
      *puVar8 = *puVar7;
      puVar7 = (undefined1 *)FUN_10002b80((int)local_20);
      *puVar7 = 1;
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      puVar7 = (undefined1 *)FUN_10002b80(*piVar4);
      *puVar7 = 1;
      FUN_10002d00(this,(int)local_20);
LAB_10002a14:
      puVar7 = (undefined1 *)FUN_10002b80((int)local_18);
      *puVar7 = 1;
      goto LAB_10002a23;
    }
  }
  else {
    piVar4 = (int *)FUN_10006080(local_20);
    local_1c = (_Container_proxy *)*piVar4;
    pcVar3 = (char *)FUN_10002b80((int)local_1c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined1 *)FUN_10002b80((int)local_1c);
      *puVar7 = 1;
      puVar7 = (undefined1 *)FUN_10002b80((int)local_20);
      *puVar7 = 0;
      FUN_10002eb0(this,(int)local_20);
      piVar4 = (int *)FUN_10006080(local_20);
      local_1c = (_Container_proxy *)*piVar4;
    }
    pcVar3 = (char *)FUN_10002b90((int)local_1c);
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      pcVar3 = (char *)FUN_10002b80(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10006080(local_1c);
        pcVar3 = (char *)FUN_10002b80(*piVar4);
        if (*pcVar3 == '\x01') {
          puVar7 = (undefined1 *)FUN_10002b80((int)local_1c);
          *puVar7 = 0;
          local_18 = local_20;
          p_Var1 = local_18;
          goto LAB_10002696;
        }
      }
      piVar4 = (int *)FUN_10006080(local_1c);
      pcVar3 = (char *)FUN_10002b80(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10002bb0((int)local_1c);
        puVar7 = (undefined1 *)FUN_10002b80(*piVar4);
        *puVar7 = 1;
        puVar7 = (undefined1 *)FUN_10002b80((int)local_1c);
        *puVar7 = 0;
        FUN_10002d00(this,(int)local_1c);
        piVar4 = (int *)FUN_10006080(local_20);
        local_1c = (_Container_proxy *)*piVar4;
      }
      puVar7 = (undefined1 *)FUN_10002b80((int)local_20);
      puVar8 = (undefined1 *)FUN_10002b80((int)local_1c);
      *puVar8 = *puVar7;
      puVar7 = (undefined1 *)FUN_10002b80((int)local_20);
      *puVar7 = 1;
      piVar4 = (int *)FUN_10006080(local_1c);
      puVar7 = (undefined1 *)FUN_10002b80(*piVar4);
      *puVar7 = 1;
      FUN_10002eb0(this,(int)local_20);
      goto LAB_10002a14;
    }
    local_18 = local_20;
    p_Var1 = local_18;
  }
LAB_10002696:
  local_18 = p_Var1;
  local_20 = local_18;
  piVar4 = (int *)FUN_10002ba0((int)local_18);
  local_20 = (_Container_proxy *)*piVar4;
  goto LAB_100026a7;
}



/* ---- FUN_10002a90 @ 10002a90 size=88 ---- */

void __fastcall FUN_10002a90(void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10005350((int)param_1);
  FUN_10002c60(param_1,(_Container_proxy *)*puVar1);
  puVar1 = (undefined4 *)FUN_10005350((int)param_1);
  *puVar1 = *(undefined4 *)((int)param_1 + 0x18);
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  puVar1 = (undefined4 *)FUN_10002ce0((int)param_1);
  *puVar1 = *(undefined4 *)((int)param_1 + 0x18);
  puVar1 = (undefined4 *)FUN_10005330((int)param_1);
  *puVar1 = *(undefined4 *)((int)param_1 + 0x18);
  return;
}



/* ---- FUN_10002af0 @ 10002af0 size=19 ---- */

void __fastcall FUN_10002af0(int *param_1)

{
  FUN_10003120(param_1);
  return;
}



/* ---- FUN_10002b10 @ 10002b10 size=35 ---- */

bool __thiscall FUN_10002b10(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10003190(this,param_1);
  return (bool)('\x01' - bVar1);
}



/* ---- FUN_10002b40 @ 10002b40 size=19 ---- */

void __fastcall FUN_10002b40(undefined4 *param_1)

{
  FUN_10002b60(param_1);
  return;
}



/* ---- FUN_10002b60 @ 10002b60 size=19 ---- */

void __fastcall FUN_10002b60(undefined4 *param_1)

{
  FUN_100030b0(param_1);
  return;
}



/* ---- FUN_10002b80 @ 10002b80 size=11 ---- */

int __cdecl FUN_10002b80(int param_1)

{
  return param_1 + 0x14;
}



/* ---- FUN_10002b90 @ 10002b90 size=11 ---- */

int __cdecl FUN_10002b90(int param_1)

{
  return param_1 + 0x15;
}



/* ---- FUN_10002ba0 @ 10002ba0 size=11 ---- */

int __cdecl FUN_10002ba0(int param_1)

{
  return param_1 + 4;
}



/* ---- FUN_10002bb0 @ 10002bb0 size=11 ---- */

int __cdecl FUN_10002bb0(int param_1)

{
  return param_1 + 8;
}



/* ---- FUN_10002bc0 @ 10002bc0 size=109 ---- */

int __thiscall FUN_10002bc0(void *this,undefined4 param_1)

{
  undefined1 auStack_1d [13];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ca58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10003820(auStack_1d + -3);
  FUN_10006040(param_1,(char)this);
  local_8 = 0;
  FUN_100032b0((int)this);
  ExceptionList = local_10;
  return (int)this;
}



/* ---- FUN_10002c30 @ 10002c30 size=47 ---- */

undefined4 * __thiscall
FUN_10002c30(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  
  puVar2 = _Vector_iterator<>(local_c,param_3,this);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_10002c60 @ 10002c60 size=122 ---- */

void __thiscall FUN_10002c60(void *this,_Container_proxy *param_1)

{
  _Container_proxy *p_Var1;
  char *pcVar2;
  undefined4 *puVar3;
  _Container_proxy *local_8;
  
  local_8 = param_1;
  while( true ) {
    pcVar2 = (char *)FUN_10002b90((int)local_8);
    if (*pcVar2 != '\0') break;
    puVar3 = (undefined4 *)FUN_10002bb0((int)local_8);
    FUN_10002c60(this,(_Container_proxy *)*puVar3);
    puVar3 = (undefined4 *)FUN_10006080(local_8);
    p_Var1 = (_Container_proxy *)*puVar3;
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)((int)this + 0xc),local_8);
    FUN_100030e0(local_8);
    local_8 = p_Var1;
  }
  return;
}



/* ---- FUN_10002ce0 @ 10002ce0 size=26 ---- */

void __fastcall FUN_10002ce0(int param_1)

{
  FUN_10006080(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ---- FUN_10002d00 @ 10002d00 size=304 ---- */

void __thiscall FUN_10002d00(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  piVar2 = (int *)FUN_10002bb0(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_10006080(iVar1);
  puVar4 = (undefined4 *)FUN_10002bb0(param_1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10006080(iVar1);
  pcVar5 = (char *)FUN_10002b90(*piVar2);
  if (*pcVar5 == '\0') {
    piVar2 = (int *)FUN_10006080(iVar1);
    piVar2 = (int *)FUN_10002ba0(*piVar2);
    *piVar2 = param_1;
  }
  puVar3 = (undefined4 *)FUN_10002ba0(param_1);
  puVar4 = (undefined4 *)FUN_10002ba0(iVar1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10005350((int)this);
  if (param_1 == *piVar2) {
    piVar2 = (int *)FUN_10005350((int)this);
    *piVar2 = iVar1;
  }
  else {
    puVar3 = (undefined4 *)FUN_10002ba0(param_1);
    piVar2 = (int *)FUN_10006080(*puVar3);
    if (param_1 == *piVar2) {
      puVar3 = (undefined4 *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10006080(*puVar3);
      *piVar2 = iVar1;
    }
    else {
      piVar2 = (int *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10002bb0(*piVar2);
      *piVar2 = iVar1;
    }
  }
  piVar2 = (int *)FUN_10006080(iVar1);
  *piVar2 = param_1;
  piVar2 = (int *)FUN_10002ba0(param_1);
  *piVar2 = iVar1;
  return;
}



/* ---- FUN_10002e30 @ 10002e30 size=57 ---- */

int __cdecl FUN_10002e30(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  while( true ) {
    piVar1 = (int *)FUN_10002bb0(param_1);
    pcVar2 = (char *)FUN_10002b90(*piVar1);
    if (*pcVar2 != '\0') break;
    piVar1 = (int *)FUN_10002bb0(param_1);
    param_1 = *piVar1;
  }
  return param_1;
}



/* ---- FUN_10002e70 @ 10002e70 size=57 ---- */

undefined4 __cdecl FUN_10002e70(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  while( true ) {
    piVar1 = (int *)FUN_10006080(param_1);
    pcVar2 = (char *)FUN_10002b90(*piVar1);
    if (*pcVar2 != '\0') break;
    puVar3 = (undefined4 *)FUN_10006080(param_1);
    param_1 = *puVar3;
  }
  return param_1;
}



/* ---- FUN_10002eb0 @ 10002eb0 size=304 ---- */

void __thiscall FUN_10002eb0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  piVar2 = (int *)FUN_10006080(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_10002bb0(iVar1);
  puVar4 = (undefined4 *)FUN_10006080(param_1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10002bb0(iVar1);
  pcVar5 = (char *)FUN_10002b90(*piVar2);
  if (*pcVar5 == '\0') {
    piVar2 = (int *)FUN_10002bb0(iVar1);
    piVar2 = (int *)FUN_10002ba0(*piVar2);
    *piVar2 = param_1;
  }
  puVar3 = (undefined4 *)FUN_10002ba0(param_1);
  puVar4 = (undefined4 *)FUN_10002ba0(iVar1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10005350((int)this);
  if (param_1 == *piVar2) {
    piVar2 = (int *)FUN_10005350((int)this);
    *piVar2 = iVar1;
  }
  else {
    piVar2 = (int *)FUN_10002ba0(param_1);
    piVar2 = (int *)FUN_10002bb0(*piVar2);
    if (param_1 == *piVar2) {
      piVar2 = (int *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10002bb0(*piVar2);
      *piVar2 = iVar1;
    }
    else {
      puVar3 = (undefined4 *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10006080(*puVar3);
      *piVar2 = iVar1;
    }
  }
  piVar2 = (int *)FUN_10002bb0(iVar1);
  *piVar2 = param_1;
  piVar2 = (int *)FUN_10002ba0(param_1);
  *piVar2 = iVar1;
  return;
}



/* ---- FUN_10002fe0 @ 10002fe0 size=208 ---- */

void __fastcall FUN_10002fe0(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  _Container_proxy *p_Var3;
  undefined4 local_2c [2];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  piVar1 = FUN_10002280(param_1,local_14);
  local_c = *piVar1;
  local_8 = piVar1[1];
  puVar2 = FUN_10002250(param_1,local_24);
  local_1c = *puVar2;
  local_18 = puVar2[1];
  FUN_10003200(param_1,local_2c,local_1c,local_18,local_c);
  p_Var3 = (_Container_proxy *)FUN_10006080(*(undefined4 *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  p_Var3 = (_Container_proxy *)FUN_10002ba0(*(int *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  p_Var3 = (_Container_proxy *)FUN_10002bb0(*(int *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  FUN_100030e0(*(void **)((int)param_1 + 0x18));
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_100030b0 @ 100030b0 size=38 ---- */

void __fastcall FUN_100030b0(undefined4 *param_1)

{
  FUN_100030e0((void *)*param_1);
  FUN_100010d0();
  return;
}



/* ---- FUN_100030e0 @ 100030e0 size=25 ---- */

void FUN_100030e0(void *param_1)

{
  operator_delete(param_1);
  return;
}



/* ---- _Vector_iterator<> @ 10003100 size=32 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base12 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base12 const *)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall _Vector_iterator<>(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_10003320(this,param_1,param_2);
  return this;
}



/* ---- FUN_10003120 @ 10003120 size=72 ---- */

void __fastcall FUN_10003120(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10001170(param_1);
  if (!bVar1) {
    _invalid_parameter_noinfo();
  }
  iVar2 = FUN_10001120(param_1);
  if (param_1[1] == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  FUN_10005810(param_1[1]);
  return;
}



/* ---- FUN_10003170 @ 10003170 size=22 ---- */

int * __fastcall FUN_10003170(int *param_1)

{
  FUN_10003360(param_1);
  return param_1;
}



/* ---- FUN_10003190 @ 10003190 size=70 ---- */

bool __thiscall FUN_10003190(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10001170(this);
  if (bVar1) {
    bVar1 = FUN_10001150(this,param_1);
    if (bVar1) goto LAB_100031bf;
  }
  _invalid_parameter_noinfo();
LAB_100031bf:
  return *(int *)((int)this + 4) == param_1[1];
}



/* ---- FUN_100031e0 @ 100031e0 size=17 ---- */

undefined4 __fastcall FUN_100031e0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ---- FUN_10003200 @ 10003200 size=173 ---- */

/* WARNING: Variable defined which should be unmapped: param_2 */

undefined4 * __thiscall
FUN_10003200(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_24 [2];
  int local_1c [2];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  piVar2 = FUN_10002250(param_1,local_c);
  bVar1 = FUN_10003190(&param_3,piVar2);
  if (bVar1) {
    piVar2 = FUN_10002280(param_1,local_14);
    bVar1 = FUN_10003190(&param_5,piVar2);
    if (bVar1) {
      FUN_10002a90(param_1);
      FUN_10002250(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_10002b10(&param_3,&param_5), bVar1) {
    piVar2 = FUN_100035d0(&param_3,local_1c);
    FUN_100022b0(param_1,local_24,*piVar2,piVar2[1]);
  }
  FUN_10002c30(param_1,param_2,param_3,param_4);
  return param_2;
}



/* ---- FUN_100032b0 @ 100032b0 size=101 ---- */

void __fastcall FUN_100032b0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_10003460();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  puVar2 = (undefined1 *)FUN_10002b90(*(int *)(param_1 + 0x18));
  *puVar2 = 1;
  puVar3 = (undefined4 *)FUN_10005350(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_10002ce0(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_10005330(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_10003320 @ 10003320 size=57 ---- */

undefined4 * __thiscall FUN_10003320(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_100057c0(this);
  *(undefined4 *)((int)this + 4) = param_1;
  if (param_2 == (undefined4 *)0x0) {
    _invalid_parameter_noinfo();
  }
  FUN_10001100(this,param_2);
  return this;
}



/* ---- FUN_10003360 @ 10003360 size=215 ---- */

void __fastcall FUN_10003360(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = FUN_10001170(param_1);
  if (!bVar1) {
    _invalid_parameter_noinfo();
  }
  pcVar2 = (char *)FUN_10002b90(param_1[1]);
  if (*pcVar2 == '\0') {
    piVar3 = (int *)FUN_10002bb0(param_1[1]);
    pcVar2 = (char *)FUN_10002b90(*piVar3);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)FUN_10002bb0(param_1[1]);
      iVar5 = FUN_10002e70(*puVar4);
      param_1[1] = iVar5;
    }
    else {
      while( true ) {
        piVar3 = (int *)FUN_10002ba0(param_1[1]);
        iVar5 = *piVar3;
        pcVar2 = (char *)FUN_10002b90(iVar5);
        if (*pcVar2 != '\0') break;
        piVar3 = (int *)FUN_10002bb0(iVar5);
        if (param_1[1] != *piVar3) break;
        param_1[1] = iVar5;
      }
      param_1[1] = iVar5;
    }
  }
  else {
    _invalid_parameter_noinfo();
  }
  return;
}



/* ---- FUN_10003440 @ 10003440 size=22 ---- */

undefined4 * __fastcall FUN_10003440(undefined4 *param_1)

{
  FUN_100010e0(param_1);
  return param_1;
}



/* ---- FUN_10003460 @ 10003460 size=202 ---- */

void FUN_10003460(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c930;
  local_10 = ExceptionList;
  uStack_3c = DAT_10011018 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_1c = FUN_10003610(1);
  local_18 = 0;
  local_8 = 0;
  local_20 = 0;
  puVar3 = &local_20;
  uVar1 = FUN_10006080(local_1c);
  FUN_10006960(uVar1,puVar3);
  local_18 = local_18 + 1;
  local_24 = 0;
  puVar3 = &local_24;
  iVar2 = FUN_10002ba0(local_1c);
  FUN_10006960(iVar2,puVar3);
  local_18 = local_18 + 1;
  local_28 = 0;
  puVar3 = &local_28;
  iVar2 = FUN_10002bb0(local_1c);
  FUN_10006960(iVar2,puVar3);
  FUN_1000358d();
  return;
}



/* ---- Catch_All@1000352a @ 1000352a size=86 ---- */

void Catch_All_1000352a(void)

{
  _Container_proxy *p_Var1;
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x14)) {
    p_Var1 = (_Container_proxy *)FUN_10002ba0(*(int *)(unaff_EBP + -0x18));
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)(*(int *)(unaff_EBP + -0x28) + 0x10),p_Var1);
  }
  if (0 < *(int *)(unaff_EBP + -0x14)) {
    p_Var1 = (_Container_proxy *)FUN_10006080(*(undefined4 *)(unaff_EBP + -0x18));
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)(*(int *)(unaff_EBP + -0x28) + 0x10),p_Var1);
  }
  FUN_100030e0(*(void **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_1000358d @ 1000358d size=58 ---- */

undefined4 FUN_1000358d(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar1 = (undefined1 *)FUN_10002b80(*(int *)(unaff_EBP + -0x18));
  *puVar1 = 1;
  puVar1 = (undefined1 *)FUN_10002b90(*(int *)(unaff_EBP + -0x18));
  *puVar1 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* ---- FUN_100035d0 @ 100035d0 size=54 ---- */

int * __thiscall FUN_100035d0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  FUN_10003170(this);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}



/* ---- FUN_10003610 @ 10003610 size=27 ---- */

void FUN_10003610(uint param_1)

{
  FUN_10003830(param_1);
  return;
}



/* ---- FUN_10003630 @ 10003630 size=27 ---- */

void FUN_10003630(uint param_1)

{
  FUN_10003880(param_1);
  return;
}



/* ---- FUN_10003650 @ 10003650 size=17 ---- */

void FUN_10003650(void)

{
  FUN_10003980();
  return;
}



/* ---- FUN_10003670 @ 10003670 size=17 ---- */

void __cdecl FUN_10003670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  FUN_100014f0(param_1);
  return;
}



/* ---- FUN_10003690 @ 10003690 size=21 ---- */

void __cdecl
FUN_10003690(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FUN_10001400(param_1,param_2);
  return;
}



/* ---- FUN_100036b0 @ 100036b0 size=21 ---- */

void __cdecl FUN_100036b0(_THandle *param_1,undefined4 *param_2)

{
  FUN_10003990(param_1,param_2);
  return;
}



/* ---- FUN_100036d0 @ 100036d0 size=21 ---- */

void __cdecl
FUN_100036d0(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FUN_10001470(param_1,param_2);
  return;
}



/* ---- FUN_100036f0 @ 100036f0 size=21 ---- */

void __cdecl FUN_100036f0(_THandle *param_1,undefined4 *param_2)

{
  FUN_100039d0(param_1,param_2);
  return;
}



/* ---- FUN_10003710 @ 10003710 size=17 ---- */

void FUN_10003710(void)

{
  FUN_10003a10();
  return;
}



/* ---- FUN_10003730 @ 10003730 size=21 ---- */

void __cdecl FUN_10003730(void *param_1,int *param_2)

{
  FUN_10001520(param_1,param_1,param_2);
  return;
}



/* ---- FUN_10003750 @ 10003750 size=21 ---- */

void __cdecl FUN_10003750(_THandle *param_1,undefined4 *param_2)

{
  FUN_10003a20(param_1,param_2);
  return;
}



/* ---- FUN_10003770 @ 10003770 size=21 ---- */

void __cdecl FUN_10003770(void *param_1,int *param_2)

{
  FUN_10001590(param_1,param_1,param_2);
  return;
}



/* ---- FUN_10003790 @ 10003790 size=21 ---- */

void __cdecl FUN_10003790(_THandle *param_1,undefined8 *param_2)

{
  FUN_10003a60(param_1,param_2);
  return;
}



/* ---- FUN_100037b0 @ 100037b0 size=17 ---- */

void __cdecl FUN_100037b0(int *param_1)

{
  FUN_10001600(param_1);
  return;
}



/* ---- FUN_100037d0 @ 100037d0 size=28 ---- */

void __cdecl FUN_100037d0(int param_1,char *param_2,int param_3)

{
  _itoa_s(param_1,param_2,0x10,param_3);
  return;
}



/* ---- FUN_100037f0 @ 100037f0 size=42 ---- */

void __cdecl FUN_100037f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return;
}



/* ---- FUN_10003820 @ 10003820 size=16 ---- */

undefined4 __fastcall FUN_10003820(undefined4 param_1)

{
  return param_1;
}



/* ---- FUN_10003830 @ 10003830 size=77 ---- */

void __cdecl FUN_10003830(uint param_1)

{
  bad_alloc local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x18) {
    std::bad_alloc::bad_alloc(local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_10,(ThrowInfo *)&DAT_1000e208);
  }
  operator_new(param_1 * 0x18);
  return;
}



/* ---- FUN_10003880 @ 10003880 size=77 ---- */

void __cdecl FUN_10003880(uint param_1)

{
  bad_alloc local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    std::bad_alloc::bad_alloc(local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_10,(ThrowInfo *)&DAT_1000e208);
  }
  operator_new(param_1 << 2);
  return;
}



/* ---- bad_alloc @ 100038d0 size=38 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(class std::bad_alloc const &)
   
   Library: Visual Studio 2005 Debug */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1)

{
  std::exception::exception((exception *)this,(exception *)param_1);
                    /* inlined constructor or destructor (approx location) for std::bad_alloc */
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10003900 @ 10003900 size=85 ---- */

undefined4 __cdecl FUN_10003900(undefined4 param_1)

{
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 3;
  local_c = param_1;
  for (local_8 = 0; local_8 < local_10; local_8 = local_8 + 1) {
    FUN_100037f0((undefined1 *)((int)&local_c + local_8),(undefined1 *)((int)&local_c + local_10));
    local_10 = local_10 + -1;
  }
  return local_c;
}



/* ---- FUN_10003960 @ 10003960 size=17 ---- */

void __cdecl FUN_10003960(undefined4 param_1)

{
  FUN_10003900(param_1);
  return;
}



/* ---- FUN_10003980 @ 10003980 size=10 ---- */

undefined4 FUN_10003980(void)

{
  return 4;
}



/* ---- FUN_10003990 @ 10003990 size=52 ---- */

bool __cdecl FUN_10003990(_THandle *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = FUN_10003900(*param_2);
  iVar1 = XStream::Write(param_1,&local_8,4);
  return iVar1 == 4;
}



/* ---- FUN_100039d0 @ 100039d0 size=59 ---- */

bool __cdecl FUN_100039d0(_THandle *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = XStream::Read(param_1,&local_8,4);
  if (iVar1 == 4) {
    uVar2 = FUN_10003960(local_8);
    *param_2 = uVar2;
  }
  return iVar1 == 4;
}



/* ---- FUN_10003a10 @ 10003a10 size=10 ---- */

undefined4 FUN_10003a10(void)

{
  return 8;
}



/* ---- FUN_10003a20 @ 10003a20 size=61 ---- */

bool __cdecl FUN_10003a20(_THandle *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 local_c;
  
  local_c = FUN_10003ab0(*param_2,param_2[1]);
  iVar1 = XStream::Write(param_1,&local_c,8);
  return iVar1 == 8;
}



/* ---- FUN_10003a60 @ 10003a60 size=75 ---- */

bool __cdecl FUN_10003a60(_THandle *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = XStream::Read(param_1,&local_c,8);
  if (iVar1 == 8) {
    uVar2 = FUN_10003b10(local_c,local_8);
    *param_2 = uVar2;
  }
  return iVar1 == 8;
}



/* ---- FUN_10003ab0 @ 10003ab0 size=94 ---- */

undefined8 __cdecl FUN_10003ab0(undefined4 param_1,undefined4 param_2)

{
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_18 = 7;
  local_14 = param_1;
  local_10 = param_2;
  for (local_8 = 0; local_8 < local_18; local_8 = local_8 + 1) {
    FUN_100037f0((undefined1 *)((int)&local_14 + local_8),(undefined1 *)((int)&local_14 + local_18))
    ;
    local_18 = local_18 + -1;
  }
  return CONCAT44(local_10,local_14);
}



/* ---- FUN_10003b10 @ 10003b10 size=21 ---- */

undefined8 __cdecl FUN_10003b10(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10003ab0(param_1,param_2);
  return uVar1;
}



/* ---- FUN_10003b30 @ 10003b30 size=14 ---- */

undefined4 __fastcall FUN_10003b30(undefined4 param_1)

{
  return param_1;
}



/* ---- bad_alloc @ 10003b40 size=39 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2005 Debug */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  std::exception::exception((exception *)this,&PTR_s_bad_allocation_100110d0,1);
                    /* inlined constructor or destructor (approx location) for std::bad_alloc */
  this->vftablePtr = &vftable;
  return this;
}



/* ---- length_error @ 10003b70 size=37 ---- */

length_error * __thiscall
std::length_error::length_error
          (length_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- ~length_error @ 10003ba0 size=28 ---- */

void __thiscall std::length_error::~length_error(length_error *this)

{
  this->vftablePtr = &vftable;
  logic_error::~logic_error((logic_error *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 10003bc0 size=44 ---- */

exception * __thiscall
std::length_error::scalar_deleting_destructor(length_error *this,uint param_1)

{
  ~length_error(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}



/* ---- FUN_10003bf0 @ 10003bf0 size=19 ---- */

void __fastcall FUN_10003bf0(void *param_1)

{
  FID_conflict__CAtlWinModule(param_1);
  return;
}



/* ---- FUN_10003c10 @ 10003c10 size=111 ---- */

int __fastcall FUN_10003c10(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c817;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XSystem::Threading::AutoResetEvent::AutoResetEvent((AutoResetEvent *)(param_1 + 4),false);
  local_8 = 0;
  FUN_100047e0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  local_8 = CONCAT31(local_8._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2c));
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_10003c80 @ 10003c80 size=20 ---- */

void __fastcall
FUN_10003c80(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  return;
}



/* ---- FUN_10003ca0 @ 10003ca0 size=41 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_10003ca0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}



/* ---- FUN_10003cd0 @ 10003cd0 size=44 ---- */

void * __thiscall FUN_10003cd0(void *this,uint param_1)

{
  FUN_10003d00((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10003d00 @ 10003d00 size=106 ---- */

void __fastcall FUN_10003d00(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1000c817;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2c));
  local_8 = local_8 & 0xffffff00;
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  local_8 = 0xffffffff;
  XSystem::Threading::AutoResetEvent::~AutoResetEvent((AutoResetEvent *)(param_1 + 4));
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10003d70 @ 10003d70 size=37 ---- */

void * __fastcall FUN_10003d70(void *param_1)

{
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_10003b30(&local_5);
  FUN_10004a90(param_1,&local_6);
  return param_1;
}



/* ---- FUN_10003da0 @ 10003da0 size=253 ---- */

int __thiscall
FUN_10003da0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  int *extraout_EAX;
  undefined4 local_58 [2];
  int local_50;
  int local_4c;
  undefined4 local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [36];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cb78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10005150(this,&local_18,param_1);
  piVar2 = FUN_10003f30(this,local_20);
  uVar3 = FUN_10004950(&local_18,piVar2);
  if ((uVar3 & 0xff) == 0) {
    iVar4 = FUN_100031e0((int)&local_18);
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_10004a70(iVar4);
    cVar1 = FUN_10005570(param_1,pbVar5);
    if (cVar1 == '\0') goto LAB_10003e81;
  }
  local_48 = 0;
  local_50 = local_18;
  local_4c = local_14;
  pbVar6 = FUN_100056b0(local_44,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  *)param_1,&local_48);
  local_8 = 0;
  FUN_10004b30(this,local_58,local_50,local_4c,pbVar6);
  local_18 = *extraout_EAX;
  local_14 = extraout_EAX[1];
  local_8 = 0xffffffff;
  FUN_100049f0(local_44);
LAB_10003e81:
  iVar4 = FUN_10005650(&local_18);
  ExceptionList = local_10;
  return iVar4 + 0x20;
}



/* ---- FID_conflict:~CAtlWinModule @ 10003ea0 size=83 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall ATL::CAtlWinModule::~CAtlWinModule(void)
    public: __thiscall CPaneContainerGC::~CPaneContainerGC(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void __thiscall FID_conflict__CAtlWinModule(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cba8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100054a0(this);
  local_8 = 0xffffffff;
  FUN_10004a10(this);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10003f00 @ 10003f00 size=39 ---- */

void * __thiscall FUN_10003f00(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10002ce0((int)this);
  _Vector_iterator<>(param_1,*puVar1,this);
  return param_1;
}



/* ---- FUN_10003f30 @ 10003f30 size=35 ---- */

void * __thiscall FUN_10003f30(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(undefined4 *)((int)this + 0x18),this);
  return param_1;
}



/* ---- FUN_10003f60 @ 10003f60 size=1988 ---- */

undefined4 * __thiscall FUN_10003f60(void *this,undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  void *local_70;
  void *local_6c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [28];
  out_of_range local_48 [2];
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ca89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_100031e0((int)&param_2);
  pcVar3 = (char *)FUN_10004a60(iVar2);
  if (*pcVar3 != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_64,"invalid map/set<T> iterator");
    local_8 = 0;
    std::out_of_range::out_of_range
              (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_64);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1000e1d0);
  }
  local_14 = (void *)FUN_100031e0((int)&param_2);
  FUN_10005690(&param_2);
  local_1c = local_14;
  piVar4 = (int *)FUN_10006080(local_14);
  pcVar3 = (char *)FUN_10004a60(*piVar4);
  if (*pcVar3 == '\0') {
    piVar4 = (int *)FUN_10002bb0((int)local_1c);
    pcVar3 = (char *)FUN_10004a60(*piVar4);
    if (*pcVar3 == '\0') {
      local_1c = (void *)FUN_100031e0((int)&param_2);
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      local_18 = (void *)*piVar4;
    }
    else {
      piVar4 = (int *)FUN_10006080(local_1c);
      local_18 = (void *)*piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_10002bb0((int)local_1c);
    local_18 = (void *)*piVar4;
  }
  if (local_1c == local_14) {
    piVar4 = (int *)FUN_10002ba0((int)local_14);
    local_20 = (void *)*piVar4;
    pcVar3 = (char *)FUN_10004a60((int)local_18);
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10002ba0((int)local_18);
      *piVar4 = (int)local_20;
    }
    piVar4 = (int *)FUN_10005350((int)this);
    if ((void *)*piVar4 == local_14) {
      piVar4 = (int *)FUN_10005350((int)this);
      *piVar4 = (int)local_18;
    }
    else {
      piVar4 = (int *)FUN_10006080(local_20);
      if ((void *)*piVar4 == local_14) {
        piVar4 = (int *)FUN_10006080(local_20);
        *piVar4 = (int)local_18;
      }
      else {
        piVar4 = (int *)FUN_10002bb0((int)local_20);
        *piVar4 = (int)local_18;
      }
    }
    piVar4 = (int *)FUN_10002ce0((int)this);
    if ((void *)*piVar4 == local_14) {
      pcVar3 = (char *)FUN_10004a60((int)local_18);
      if (*pcVar3 == '\0') {
        local_6c = (void *)FUN_100052f0(local_18);
      }
      else {
        local_6c = local_20;
      }
      piVar4 = (int *)FUN_10002ce0((int)this);
      *piVar4 = (int)local_6c;
    }
    piVar4 = (int *)FUN_10005330((int)this);
    if ((void *)*piVar4 == local_14) {
      pcVar3 = (char *)FUN_10004a60((int)local_18);
      if (*pcVar3 == '\0') {
        local_70 = (void *)FUN_100052b0((int)local_18);
      }
      else {
        local_70 = local_20;
      }
      piVar4 = (int *)FUN_10005330((int)this);
      *piVar4 = (int)local_70;
    }
  }
  else {
    piVar4 = (int *)FUN_10006080(local_14);
    piVar4 = (int *)FUN_10002ba0(*piVar4);
    *piVar4 = (int)local_1c;
    puVar5 = (undefined4 *)FUN_10006080(local_14);
    puVar6 = (undefined4 *)FUN_10006080(local_1c);
    *puVar6 = *puVar5;
    piVar4 = (int *)FUN_10002bb0((int)local_14);
    if (local_1c == (void *)*piVar4) {
      local_20 = local_1c;
    }
    else {
      piVar4 = (int *)FUN_10002ba0((int)local_1c);
      local_20 = (void *)*piVar4;
      pcVar3 = (char *)FUN_10004a60((int)local_18);
      if (*pcVar3 == '\0') {
        piVar4 = (int *)FUN_10002ba0((int)local_18);
        *piVar4 = (int)local_20;
      }
      piVar4 = (int *)FUN_10006080(local_20);
      *piVar4 = (int)local_18;
      puVar5 = (undefined4 *)FUN_10002bb0((int)local_14);
      puVar6 = (undefined4 *)FUN_10002bb0((int)local_1c);
      *puVar6 = *puVar5;
      piVar4 = (int *)FUN_10002bb0((int)local_14);
      piVar4 = (int *)FUN_10002ba0(*piVar4);
      *piVar4 = (int)local_1c;
    }
    piVar4 = (int *)FUN_10005350((int)this);
    if ((void *)*piVar4 == local_14) {
      piVar4 = (int *)FUN_10005350((int)this);
      *piVar4 = (int)local_1c;
    }
    else {
      puVar5 = (undefined4 *)FUN_10002ba0((int)local_14);
      piVar4 = (int *)FUN_10006080(*puVar5);
      if ((void *)*piVar4 == local_14) {
        puVar5 = (undefined4 *)FUN_10002ba0((int)local_14);
        piVar4 = (int *)FUN_10006080(*puVar5);
        *piVar4 = (int)local_1c;
      }
      else {
        piVar4 = (int *)FUN_10002ba0((int)local_14);
        piVar4 = (int *)FUN_10002bb0(*piVar4);
        *piVar4 = (int)local_1c;
      }
    }
    puVar5 = (undefined4 *)FUN_10002ba0((int)local_14);
    puVar6 = (undefined4 *)FUN_10002ba0((int)local_1c);
    *puVar6 = *puVar5;
    puVar7 = (undefined1 *)FUN_10004a50((int)local_14);
    puVar8 = (undefined1 *)FUN_10004a50((int)local_1c);
    FUN_100037f0(puVar8,puVar7);
  }
  pcVar3 = (char *)FUN_10004a50((int)local_14);
  if (*pcVar3 != '\x01') {
LAB_100046d3:
    FUN_10005590(local_14);
    FUN_100030e0(local_14);
    if (*(int *)((int)this + 0x1c) != 0) {
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
    }
    FUN_10004b00(this,param_1,param_2,param_3);
    ExceptionList = local_10;
    return param_1;
  }
LAB_10004357:
  piVar4 = (int *)FUN_10005350((int)this);
  if ((local_18 == (void *)*piVar4) ||
     (pcVar3 = (char *)FUN_10004a50((int)local_18), *pcVar3 != '\x01')) goto LAB_100046c4;
  piVar4 = (int *)FUN_10006080(local_20);
  if (local_18 == (void *)*piVar4) {
    piVar4 = (int *)FUN_10002bb0((int)local_20);
    local_1c = (void *)*piVar4;
    pcVar3 = (char *)FUN_10004a50((int)local_1c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined1 *)FUN_10004a50((int)local_1c);
      *puVar7 = 1;
      puVar7 = (undefined1 *)FUN_10004a50((int)local_20);
      *puVar7 = 0;
      FUN_10005180(this,(int)local_20);
      piVar4 = (int *)FUN_10002bb0((int)local_20);
      local_1c = (void *)*piVar4;
    }
    pcVar3 = (char *)FUN_10004a60((int)local_1c);
    pvVar1 = local_20;
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10006080(local_1c);
      pcVar3 = (char *)FUN_10004a50(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10002bb0((int)local_1c);
        pcVar3 = (char *)FUN_10004a50(*piVar4);
        if (*pcVar3 == '\x01') {
          puVar7 = (undefined1 *)FUN_10004a50((int)local_1c);
          *puVar7 = 0;
          pvVar1 = local_20;
          goto LAB_10004346;
        }
      }
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      pcVar3 = (char *)FUN_10004a50(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10006080(local_1c);
        puVar7 = (undefined1 *)FUN_10004a50(*piVar4);
        *puVar7 = 1;
        puVar7 = (undefined1 *)FUN_10004a50((int)local_1c);
        *puVar7 = 0;
        FUN_10005370(this,(int)local_1c);
        piVar4 = (int *)FUN_10002bb0((int)local_20);
        local_1c = (void *)*piVar4;
      }
      puVar7 = (undefined1 *)FUN_10004a50((int)local_20);
      puVar8 = (undefined1 *)FUN_10004a50((int)local_1c);
      *puVar8 = *puVar7;
      puVar7 = (undefined1 *)FUN_10004a50((int)local_20);
      *puVar7 = 1;
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      puVar7 = (undefined1 *)FUN_10004a50(*piVar4);
      *puVar7 = 1;
      FUN_10005180(this,(int)local_20);
LAB_100046c4:
      puVar7 = (undefined1 *)FUN_10004a50((int)local_18);
      *puVar7 = 1;
      goto LAB_100046d3;
    }
  }
  else {
    piVar4 = (int *)FUN_10006080(local_20);
    local_1c = (void *)*piVar4;
    pcVar3 = (char *)FUN_10004a50((int)local_1c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined1 *)FUN_10004a50((int)local_1c);
      *puVar7 = 1;
      puVar7 = (undefined1 *)FUN_10004a50((int)local_20);
      *puVar7 = 0;
      FUN_10005370(this,(int)local_20);
      piVar4 = (int *)FUN_10006080(local_20);
      local_1c = (void *)*piVar4;
    }
    pcVar3 = (char *)FUN_10004a60((int)local_1c);
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10002bb0((int)local_1c);
      pcVar3 = (char *)FUN_10004a50(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10006080(local_1c);
        pcVar3 = (char *)FUN_10004a50(*piVar4);
        if (*pcVar3 == '\x01') {
          puVar7 = (undefined1 *)FUN_10004a50((int)local_1c);
          *puVar7 = 0;
          local_18 = local_20;
          pvVar1 = local_18;
          goto LAB_10004346;
        }
      }
      piVar4 = (int *)FUN_10006080(local_1c);
      pcVar3 = (char *)FUN_10004a50(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10002bb0((int)local_1c);
        puVar7 = (undefined1 *)FUN_10004a50(*piVar4);
        *puVar7 = 1;
        puVar7 = (undefined1 *)FUN_10004a50((int)local_1c);
        *puVar7 = 0;
        FUN_10005180(this,(int)local_1c);
        piVar4 = (int *)FUN_10006080(local_20);
        local_1c = (void *)*piVar4;
      }
      puVar7 = (undefined1 *)FUN_10004a50((int)local_20);
      puVar8 = (undefined1 *)FUN_10004a50((int)local_1c);
      *puVar8 = *puVar7;
      puVar7 = (undefined1 *)FUN_10004a50((int)local_20);
      *puVar7 = 1;
      piVar4 = (int *)FUN_10006080(local_1c);
      puVar7 = (undefined1 *)FUN_10004a50(*piVar4);
      *puVar7 = 1;
      FUN_10005370(this,(int)local_20);
      goto LAB_100046c4;
    }
    local_18 = local_20;
    pvVar1 = local_18;
  }
LAB_10004346:
  local_18 = pvVar1;
  local_20 = local_18;
  piVar4 = (int *)FUN_10002ba0((int)local_18);
  local_20 = (void *)*piVar4;
  goto LAB_10004357;
}



/* ---- FUN_10004740 @ 10004740 size=147 ---- */

undefined4 * __thiscall
FUN_10004740(void *this,undefined4 *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  undefined4 *local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [12];
  undefined4 local_c [2];
  
  FUN_10005150(this,local_c,param_2);
  piVar3 = FUN_10003f30(this,local_18);
  uVar4 = FUN_10004950(local_c,piVar3);
  if ((uVar4 & 0xff) == 0) {
    iVar5 = FUN_100031e0((int)local_c);
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_10004a70(iVar5);
    cVar2 = FUN_10005570(param_2,pbVar6);
    if (cVar2 == '\0') {
      local_28 = local_c;
      goto LAB_100047b4;
    }
  }
  local_28 = FUN_10003f30(this,local_20);
LAB_100047b4:
  uVar1 = local_28[1];
  *param_1 = *local_28;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_100047e0 @ 100047e0 size=33 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall
FUN_100047e0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



/* ---- FUN_10004810 @ 10004810 size=40 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_10004810(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined4 *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(this,param_1);
  *(undefined4 *)((int)this + 0x1c) = *param_2;
  return this;
}



/* ---- FUN_10004840 @ 10004840 size=112 ---- */

undefined4 * __thiscall FUN_10004840(void *this,undefined4 param_1,char param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10003b30(this);
  local_8 = 0;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = 0;
  if (param_2 == '\x01') {
    FUN_100055b0(this);
  }
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_100048b0 @ 100048b0 size=95 ---- */

void __fastcall FUN_100048b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000c908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100055f0(param_1);
  }
  local_8 = 0xffffffff;
  FUN_100010d0();
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10004910 @ 10004910 size=22 ---- */

undefined4 * __fastcall FUN_10004910(undefined4 *param_1)

{
  _String_const_iterator<>(param_1);
  return param_1;
}



/* ---- FUN_10004930 @ 10004930 size=19 ---- */

void __fastcall FUN_10004930(int *param_1)

{
  FUN_10005650(param_1);
  return;
}



/* ---- FUN_10004950 @ 10004950 size=76 ---- */

undefined4 __thiscall FUN_10004950(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10001170(this);
  if ((!bVar1) || (bVar1 = FUN_10001150(this,param_1), !bVar1)) {
    _invalid_parameter_noinfo();
  }
  return CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),*(int *)((int)this + 4) == param_1[1]);
}



/* ---- FUN_100049a0 @ 100049a0 size=35 ---- */

bool __thiscall FUN_100049a0(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10004950(this,param_1);
  return (bool)('\x01' - ((uVar1 & 0xff) != 0));
}



/* ---- FUN_100049d0 @ 100049d0 size=24 ---- */

int FUN_100049d0(void)

{
  if (DAT_1001174c == 0) {
    FUN_100056e0();
  }
  return DAT_1001174c;
}



/* ---- FUN_100049f0 @ 100049f0 size=19 ---- */

void __fastcall
FUN_100049f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  FUN_10003c80(param_1);
  return;
}



/* ---- FUN_10004a10 @ 10004a10 size=19 ---- */

void __fastcall FUN_10004a10(undefined4 *param_1)

{
  FUN_10004a30(param_1);
  return;
}



/* ---- FUN_10004a30 @ 10004a30 size=19 ---- */

void __fastcall FUN_10004a30(undefined4 *param_1)

{
  FUN_10002b40(param_1);
  return;
}



/* ---- FUN_10004a50 @ 10004a50 size=11 ---- */

int __cdecl FUN_10004a50(int param_1)

{
  return param_1 + 0x30;
}



/* ---- FUN_10004a60 @ 10004a60 size=11 ---- */

int __cdecl FUN_10004a60(int param_1)

{
  return param_1 + 0x31;
}



/* ---- FUN_10004a70 @ 10004a70 size=26 ---- */

void __cdecl FUN_10004a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005810(param_1);
  FUN_10006080(iVar1);
  return;
}



/* ---- FUN_10004a90 @ 10004a90 size=109 ---- */

int __thiscall FUN_10004a90(void *this,undefined4 param_1)

{
  undefined1 auStack_1d [13];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ca58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10003820(auStack_1d + -3);
  FUN_10006040(param_1,(char)this);
  local_8 = 0;
  FUN_10005ac0((int)this);
  ExceptionList = local_10;
  return (int)this;
}



/* ---- FUN_10004b00 @ 10004b00 size=47 ---- */

undefined4 * __thiscall
FUN_10004b00(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  
  puVar2 = _Vector_iterator<>(local_c,param_3,this);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_10004b30 @ 10004b30 size=1543 ---- */

/* WARNING: Removing unreachable block (ram,0x10004b7b) */
/* WARNING: Removing unreachable block (ram,0x10004bf0) */
/* WARNING: Removing unreachable block (ram,0x10004c69) */
/* WARNING: Removing unreachable block (ram,0x10004c9e) */
/* WARNING: Removing unreachable block (ram,0x10004ce2) */
/* WARNING: Removing unreachable block (ram,0x10004d2a) */
/* WARNING: Removing unreachable block (ram,0x10004d05) */
/* WARNING: Removing unreachable block (ram,0x10004d52) */
/* WARNING: Removing unreachable block (ram,0x10004d87) */
/* WARNING: Removing unreachable block (ram,0x10004db6) */
/* WARNING: Removing unreachable block (ram,0x10004de7) */
/* WARNING: Removing unreachable block (ram,0x10004e2f) */
/* WARNING: Removing unreachable block (ram,0x10004e0a) */
/* WARNING: Removing unreachable block (ram,0x10004c0c) */
/* WARNING: Removing unreachable block (ram,0x10004c3f) */
/* WARNING: Removing unreachable block (ram,0x10004c64) */
/* WARNING: Removing unreachable block (ram,0x10004b97) */
/* WARNING: Removing unreachable block (ram,0x10004bc8) */
/* WARNING: Removing unreachable block (ram,0x10004beb) */
/* WARNING: Removing unreachable block (ram,0x10004e52) */
/* WARNING: Variable defined which should be unmapped: param_2 */

undefined4 * __thiscall
FUN_10004b30(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  char *pcVar8;
  int *this;
  undefined4 *extraout_EAX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar9;
  undefined1 local_48 [12];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  int local_c;
  undefined4 local_8;
  
  _String_const_iterator<>(&local_c);
  iVar3 = FUN_10005820((int)param_1);
  if (iVar3 == 0) {
    FUN_10005b30(param_1,param_2,'\x01',param_1[6],param_5);
    return param_2;
  }
  piVar4 = FUN_10003f00(param_1,local_2c);
  uVar5 = FUN_10004950(&param_3,piVar4);
  if ((uVar5 & 0xff) == 0) {
    piVar4 = FUN_10003f30(param_1,local_34);
    uVar5 = FUN_10004950(&param_3,piVar4);
    if ((uVar5 & 0xff) == 0) {
      iVar3 = FUN_100031e0((int)&param_3);
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_10004a70(iVar3);
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_10006080(param_5);
      cVar2 = FUN_10005570(pbVar7,pbVar6);
      if (cVar2 != '\0') {
        local_c = param_3;
        local_8 = param_4;
        pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 FUN_10006080(param_5);
        piVar4 = FUN_10006140(&local_c);
        iVar3 = FUN_100031e0((int)piVar4);
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 FUN_10004a70(iVar3);
        cVar2 = FUN_10005570(pbVar7,pbVar6);
        if (cVar2 != '\0') {
          iVar3 = FUN_100031e0((int)&local_c);
          piVar4 = (int *)FUN_10002bb0(iVar3);
          pcVar8 = (char *)FUN_10004a60(*piVar4);
          if (*pcVar8 == '\0') {
            pbVar9 = param_5;
            iVar3 = FUN_100031e0((int)&param_3);
            FUN_10005b30(param_1,param_2,'\x01',iVar3,pbVar9);
            return param_2;
          }
          pbVar9 = param_5;
          iVar3 = FUN_100031e0((int)&local_c);
          FUN_10005b30(param_1,param_2,'\0',iVar3,pbVar9);
          return param_2;
        }
      }
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_10006080(param_5);
      iVar3 = FUN_100031e0((int)&param_3);
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_10004a70(iVar3);
      cVar2 = FUN_10005570(pbVar7,pbVar6);
      if (cVar2 != '\0') {
        local_c = param_3;
        local_8 = param_4;
        piVar4 = FUN_10003f30(param_1,local_3c);
        this = FUN_10005690(&local_c);
        uVar5 = FUN_10004950(this,piVar4);
        if ((uVar5 & 0xff) == 0) {
          iVar3 = FUN_100031e0((int)&local_c);
          pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   FUN_10004a70(iVar3);
          pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   FUN_10006080(param_5);
          cVar2 = FUN_10005570(pbVar7,pbVar6);
          if (cVar2 == '\0') goto LAB_10005128;
        }
        iVar3 = FUN_100031e0((int)&param_3);
        piVar4 = (int *)FUN_10002bb0(iVar3);
        pcVar8 = (char *)FUN_10004a60(*piVar4);
        if (*pcVar8 == '\0') {
          pbVar9 = param_5;
          iVar3 = FUN_100031e0((int)&local_c);
          FUN_10005b30(param_1,param_2,'\x01',iVar3,pbVar9);
          return param_2;
        }
        pbVar9 = param_5;
        iVar3 = FUN_100031e0((int)&param_3);
        FUN_10005b30(param_1,param_2,'\0',iVar3,pbVar9);
        return param_2;
      }
    }
    else {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_10006080(param_5);
      piVar4 = (int *)FUN_10005330((int)param_1);
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               FUN_10004a70(*piVar4);
      cVar2 = FUN_10005570(pbVar7,pbVar6);
      if (cVar2 != '\0') {
        pbVar9 = param_5;
        piVar4 = (int *)FUN_10005330((int)param_1);
        FUN_10005b30(param_1,param_2,'\0',*piVar4,pbVar9);
        return param_2;
      }
    }
  }
  else {
    iVar3 = FUN_100031e0((int)&param_3);
    pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_10004a70(iVar3);
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_10006080(param_5);
    cVar2 = FUN_10005570(pbVar7,pbVar6);
    if (cVar2 != '\0') {
      pbVar9 = param_5;
      iVar3 = FUN_100031e0((int)&param_3);
      FUN_10005b30(param_1,param_2,'\x01',iVar3,pbVar9);
      return param_2;
    }
  }
LAB_10005128:
  FUN_10005840(param_1,local_48,param_5);
  uVar1 = extraout_EAX[1];
  *param_2 = *extraout_EAX;
  param_2[1] = uVar1;
  return param_2;
}



/* ---- FUN_10005150 @ 10005150 size=41 ---- */

void * __thiscall
FUN_10005150(void *this,void *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10005fb0(this,param_2);
  _Vector_iterator<>(param_1,iVar1,this);
  return param_1;
}



/* ---- FUN_10005180 @ 10005180 size=304 ---- */

void __thiscall FUN_10005180(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  piVar2 = (int *)FUN_10002bb0(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_10006080(iVar1);
  puVar4 = (undefined4 *)FUN_10002bb0(param_1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10006080(iVar1);
  pcVar5 = (char *)FUN_10004a60(*piVar2);
  if (*pcVar5 == '\0') {
    piVar2 = (int *)FUN_10006080(iVar1);
    piVar2 = (int *)FUN_10002ba0(*piVar2);
    *piVar2 = param_1;
  }
  puVar3 = (undefined4 *)FUN_10002ba0(param_1);
  puVar4 = (undefined4 *)FUN_10002ba0(iVar1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10005350((int)this);
  if (param_1 == *piVar2) {
    piVar2 = (int *)FUN_10005350((int)this);
    *piVar2 = iVar1;
  }
  else {
    puVar3 = (undefined4 *)FUN_10002ba0(param_1);
    piVar2 = (int *)FUN_10006080(*puVar3);
    if (param_1 == *piVar2) {
      puVar3 = (undefined4 *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10006080(*puVar3);
      *piVar2 = iVar1;
    }
    else {
      piVar2 = (int *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10002bb0(*piVar2);
      *piVar2 = iVar1;
    }
  }
  piVar2 = (int *)FUN_10006080(iVar1);
  *piVar2 = param_1;
  piVar2 = (int *)FUN_10002ba0(param_1);
  *piVar2 = iVar1;
  return;
}



/* ---- FUN_100052b0 @ 100052b0 size=57 ---- */

int __cdecl FUN_100052b0(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  while( true ) {
    piVar1 = (int *)FUN_10002bb0(param_1);
    pcVar2 = (char *)FUN_10004a60(*piVar1);
    if (*pcVar2 != '\0') break;
    piVar1 = (int *)FUN_10002bb0(param_1);
    param_1 = *piVar1;
  }
  return param_1;
}



/* ---- FUN_100052f0 @ 100052f0 size=57 ---- */

undefined4 __cdecl FUN_100052f0(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  while( true ) {
    piVar1 = (int *)FUN_10006080(param_1);
    pcVar2 = (char *)FUN_10004a60(*piVar1);
    if (*pcVar2 != '\0') break;
    puVar3 = (undefined4 *)FUN_10006080(param_1);
    param_1 = *puVar3;
  }
  return param_1;
}



/* ---- FUN_10005330 @ 10005330 size=26 ---- */

void __fastcall FUN_10005330(int param_1)

{
  FUN_10002bb0(*(int *)(param_1 + 0x18));
  return;
}



/* ---- FUN_10005350 @ 10005350 size=26 ---- */

void __fastcall FUN_10005350(int param_1)

{
  FUN_10002ba0(*(int *)(param_1 + 0x18));
  return;
}



/* ---- FUN_10005370 @ 10005370 size=304 ---- */

void __thiscall FUN_10005370(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  piVar2 = (int *)FUN_10006080(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_10002bb0(iVar1);
  puVar4 = (undefined4 *)FUN_10006080(param_1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10002bb0(iVar1);
  pcVar5 = (char *)FUN_10004a60(*piVar2);
  if (*pcVar5 == '\0') {
    piVar2 = (int *)FUN_10002bb0(iVar1);
    piVar2 = (int *)FUN_10002ba0(*piVar2);
    *piVar2 = param_1;
  }
  puVar3 = (undefined4 *)FUN_10002ba0(param_1);
  puVar4 = (undefined4 *)FUN_10002ba0(iVar1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10005350((int)this);
  if (param_1 == *piVar2) {
    piVar2 = (int *)FUN_10005350((int)this);
    *piVar2 = iVar1;
  }
  else {
    piVar2 = (int *)FUN_10002ba0(param_1);
    piVar2 = (int *)FUN_10002bb0(*piVar2);
    if (param_1 == *piVar2) {
      piVar2 = (int *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10002bb0(*piVar2);
      *piVar2 = iVar1;
    }
    else {
      puVar3 = (undefined4 *)FUN_10002ba0(param_1);
      piVar2 = (int *)FUN_10006080(*puVar3);
      *piVar2 = iVar1;
    }
  }
  piVar2 = (int *)FUN_10002bb0(iVar1);
  *piVar2 = param_1;
  piVar2 = (int *)FUN_10002ba0(param_1);
  *piVar2 = iVar1;
  return;
}



/* ---- FUN_100054a0 @ 100054a0 size=208 ---- */

void __fastcall FUN_100054a0(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  _Container_proxy *p_Var3;
  undefined4 local_2c [2];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  piVar1 = FUN_10003f30(param_1,local_14);
  local_c = *piVar1;
  local_8 = piVar1[1];
  puVar2 = FUN_10003f00(param_1,local_24);
  local_1c = *puVar2;
  local_18 = puVar2[1];
  FUN_10005a10(param_1,local_2c,local_1c,local_18,local_c);
  p_Var3 = (_Container_proxy *)FUN_10006080(*(undefined4 *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  p_Var3 = (_Container_proxy *)FUN_10002ba0(*(int *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  p_Var3 = (_Container_proxy *)FUN_10002bb0(*(int *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  FUN_100030e0(*(void **)((int)param_1 + 0x18));
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_10005570 @ 10005570 size=29 ---- */

void FUN_10005570(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                 basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FUN_10006ae0(param_1,param_2);
  return;
}



/* ---- FUN_10005590 @ 10005590 size=25 ---- */

void FUN_10005590(void *param_1)

{
  FUN_10006b40(param_1);
  return;
}



/* ---- FUN_100055b0 @ 100055b0 size=64 ---- */

void __fastcall FUN_100055b0(undefined4 *param_1)

{
  char *local_8;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    local_8 = "[ScopedLock::Lock()] locked_ must be false.";
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_1000e25c);
  }
  XSystem::Threading::CriticalSection::Lock((CriticalSection *)*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* ---- FUN_100055f0 @ 100055f0 size=63 ---- */

void __fastcall FUN_100055f0(undefined4 *param_1)

{
  char *local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    local_8 = "[ScopedLock::Unlock()] locked_ must be true.";
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8,(ThrowInfo *)&DAT_1000e25c);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  XSystem::Threading::CriticalSection::Unlock((CriticalSection *)*param_1);
  return;
}



/* ---- _Vector_iterator<> @ 10005630 size=32 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base12 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base12 const *)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall _Vector_iterator<>(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_100060b0(this,param_1,param_2);
  return this;
}



/* ---- FUN_10005650 @ 10005650 size=19 ---- */

void __fastcall FUN_10005650(int *param_1)

{
  FUN_100060f0(param_1);
  return;
}



/* ---- _String_const_iterator<> @ 10005670 size=32 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >(void)
    public: __thiscall std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_String_const_iterator<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(void)
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >(void)
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >(void)
     6 names - too many to list
   
   Library: Visual Studio */

undefined4 * __fastcall _String_const_iterator<>(undefined4 *param_1)

{
  FUN_100057c0(param_1);
  param_1[1] = 0;
  return param_1;
}



/* ---- FUN_10005690 @ 10005690 size=22 ---- */

int * __fastcall FUN_10005690(int *param_1)

{
  FUN_10006160(param_1);
  return param_1;
}



/* ---- FUN_100056b0 @ 100056b0 size=39 ---- */

void * __thiscall
FUN_100056b0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
            undefined4 *param_2)

{
  FUN_100057e0(this,param_1);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}



/* ---- FUN_100056e0 @ 100056e0 size=221 ---- */

void FUN_100056e0(void)

{
  void *local_30;
  bad_alloc local_2c [3];
  void *local_20;
  void *local_1c;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cc13;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004840(local_18,&DAT_10011760,'\x01');
  local_8 = 0;
  if (DAT_1001174c == (void *)0x0) {
    if (DAT_10011750 == '\x01') {
      FUN_10006290();
    }
    local_20 = operator_new(0x2c);
    local_8._0_1_ = 1;
    if (local_20 == (void *)0x0) {
      local_30 = (void *)0x0;
    }
    else {
      local_30 = FUN_1000a940(local_20);
    }
    local_1c = local_30;
    local_8 = (uint)local_8._1_3_ << 8;
    DAT_1001174c = local_30;
    if (local_30 == (void *)0x0) {
      std::bad_alloc::bad_alloc(local_2c);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_2c,(ThrowInfo *)&DAT_1000e208);
    }
    _atexit(FUN_10006240);
  }
  local_8 = 0xffffffff;
  FUN_100048b0(local_18);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_100057c0 @ 100057c0 size=22 ---- */

undefined4 * __fastcall FUN_100057c0(undefined4 *param_1)

{
  FUN_10003440(param_1);
  return param_1;
}



/* ---- FUN_100057e0 @ 100057e0 size=41 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_100057e0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(this,param_1);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}



/* ---- FUN_10005810 @ 10005810 size=11 ---- */

int __cdecl FUN_10005810(int param_1)

{
  return param_1 + 0xc;
}



/* ---- FUN_10005820 @ 10005820 size=17 ---- */

undefined4 __fastcall FUN_10005820(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ---- FUN_10005840 @ 10005840 size=440 ---- */

/* WARNING: Removing unreachable block (ram,0x100058dc) */
/* WARNING: Variable defined which should be unmapped: param_2 */

void * __thiscall
FUN_10005840(undefined4 *param_1,void *param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int local_50;
  undefined1 local_45;
  undefined1 local_44 [11];
  undefined1 local_39;
  undefined1 local_38 [11];
  undefined1 local_2d;
  undefined1 local_2c [20];
  int local_18 [2];
  int local_10;
  int local_c;
  char local_5;
  
  piVar2 = (int *)FUN_10005350((int)param_1);
  local_10 = *piVar2;
  local_c = param_1[6];
  local_5 = '\x01';
  while (pcVar3 = (char *)FUN_10004a60(local_10), *pcVar3 == '\0') {
    local_c = local_10;
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_10004a70(local_10);
    pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_10006080(param_3);
    local_5 = FUN_10005570(pbVar5,pbVar4);
    if (local_5 == '\0') {
      piVar2 = (int *)FUN_10002bb0(local_10);
      local_50 = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_10006080(local_10);
      local_50 = *piVar2;
    }
    local_10 = local_50;
  }
  _Vector_iterator<>(local_18,local_c,param_1);
  if (local_5 != '\0') {
    piVar2 = FUN_10003f00(param_1,local_2c);
    uVar6 = FUN_10004950(local_18,piVar2);
    if ((uVar6 & 0xff) != 0) {
      local_2d = 1;
      puVar9 = &local_2d;
      puVar8 = FUN_10005b30(param_1,local_38,'\x01',local_c,param_3);
      FUN_10006820(param_2,puVar8,puVar9);
      return param_2;
    }
    FUN_10006690(local_18);
  }
  pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_10006080(param_3);
  iVar7 = FUN_100031e0((int)local_18);
  pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)FUN_10004a70(iVar7);
  cVar1 = FUN_10005570(pbVar5,pbVar4);
  if (cVar1 == '\0') {
    local_45 = 0;
    FUN_10006820(param_2,local_18,&local_45);
  }
  else {
    local_39 = 1;
    puVar9 = &local_39;
    puVar8 = FUN_10005b30(param_1,local_44,local_5,local_c,param_3);
    FUN_10006820(param_2,puVar8,puVar9);
  }
  return param_2;
}



/* ---- FUN_10005a10 @ 10005a10 size=173 ---- */

/* WARNING: Variable defined which should be unmapped: param_2 */

undefined4 * __thiscall
FUN_10005a10(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_24 [2];
  int local_1c [2];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  piVar2 = FUN_10003f00(param_1,local_c);
  uVar3 = FUN_10004950(&param_3,piVar2);
  if ((uVar3 & 0xff) != 0) {
    piVar2 = FUN_10003f30(param_1,local_14);
    uVar3 = FUN_10004950(&param_5,piVar2);
    if ((uVar3 & 0xff) != 0) {
      FUN_10006390((int)param_1);
      FUN_10003f00(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_100049a0(&param_3,&param_5), bVar1) {
    piVar2 = FUN_100066b0(&param_3,local_1c);
    FUN_10003f60(param_1,local_24,*piVar2,piVar2[1]);
  }
  FUN_10004b00(param_1,param_2,param_3,param_4);
  return param_2;
}



/* ---- FUN_10005ac0 @ 10005ac0 size=101 ---- */

void __fastcall FUN_10005ac0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_100063f0();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  puVar2 = (undefined1 *)FUN_10004a60(*(int *)(param_1 + 0x18));
  *puVar2 = 1;
  puVar3 = (undefined4 *)FUN_10005350(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_10002ce0(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_10005330(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_10005b30 @ 10005b30 size=1126 ---- */

void * __thiscall
FUN_10005b30(void *this,void *param_1,char param_2,int param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [28];
  length_error local_40 [2];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cb49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_10006370();
  if (iVar1 - 1U <= *(uint *)((int)this + 0x1c)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_5c,"map/set<T> too long");
    local_8 = 0;
    std::length_error::length_error
              (local_40,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_5c);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_40,(ThrowInfo *)&DAT_1000e298);
  }
  local_14 = FUN_10006560(*(undefined4 *)((int)this + 0x18),param_3,
                          *(undefined4 *)((int)this + 0x18),param_4,0);
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  if (param_3 == *(int *)((int)this + 0x18)) {
    piVar2 = (int *)FUN_10005350((int)this);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_10002ce0((int)this);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_10005330((int)this);
    *piVar2 = local_14;
  }
  else if (param_2 == '\0') {
    piVar2 = (int *)FUN_10002bb0(param_3);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_10005330((int)this);
    if (param_3 == *piVar2) {
      piVar2 = (int *)FUN_10005330((int)this);
      *piVar2 = local_14;
    }
  }
  else {
    piVar2 = (int *)FUN_10006080(param_3);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_10002ce0((int)this);
    if (param_3 == *piVar2) {
      piVar2 = (int *)FUN_10002ce0((int)this);
      *piVar2 = local_14;
    }
  }
  local_18 = local_14;
  while( true ) {
    piVar2 = (int *)FUN_10002ba0(local_18);
    pcVar3 = (char *)FUN_10004a50(*piVar2);
    if (*pcVar3 != '\0') break;
    piVar2 = (int *)FUN_10002ba0(local_18);
    piVar4 = (int *)FUN_10002ba0(local_18);
    puVar5 = (undefined4 *)FUN_10002ba0(*piVar4);
    piVar4 = (int *)FUN_10006080(*puVar5);
    if (*piVar2 == *piVar4) {
      piVar2 = (int *)FUN_10002ba0(local_18);
      piVar2 = (int *)FUN_10002ba0(*piVar2);
      piVar2 = (int *)FUN_10002bb0(*piVar2);
      iVar1 = *piVar2;
      pcVar3 = (char *)FUN_10004a50(iVar1);
      if (*pcVar3 == '\0') {
        piVar2 = (int *)FUN_10002ba0(local_18);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 1;
        puVar6 = (undefined1 *)FUN_10004a50(iVar1);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        local_18 = *piVar2;
      }
      else {
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002bb0(*piVar2);
        if (local_18 == *piVar2) {
          piVar2 = (int *)FUN_10002ba0(local_18);
          local_18 = *piVar2;
          FUN_10005180(this,local_18);
        }
        piVar2 = (int *)FUN_10002ba0(local_18);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        FUN_10005370(this,*piVar2);
      }
    }
    else {
      piVar2 = (int *)FUN_10002ba0(local_18);
      puVar5 = (undefined4 *)FUN_10002ba0(*piVar2);
      piVar2 = (int *)FUN_10006080(*puVar5);
      iVar1 = *piVar2;
      pcVar3 = (char *)FUN_10004a50(iVar1);
      if (*pcVar3 == '\0') {
        piVar2 = (int *)FUN_10002ba0(local_18);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 1;
        puVar6 = (undefined1 *)FUN_10004a50(iVar1);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        local_18 = *piVar2;
      }
      else {
        puVar5 = (undefined4 *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10006080(*puVar5);
        if (local_18 == *piVar2) {
          piVar2 = (int *)FUN_10002ba0(local_18);
          local_18 = *piVar2;
          FUN_10005370(this,local_18);
        }
        piVar2 = (int *)FUN_10002ba0(local_18);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10002ba0(local_18);
        piVar2 = (int *)FUN_10002ba0(*piVar2);
        FUN_10005180(this,*piVar2);
      }
    }
  }
  piVar2 = (int *)FUN_10005350((int)this);
  puVar6 = (undefined1 *)FUN_10004a50(*piVar2);
  *puVar6 = 1;
  _Vector_iterator<>(param_1,local_14,this);
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_10005fb0 @ 10005fb0 size=138 ---- */

int __thiscall
FUN_10005fb0(void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  int local_c;
  int local_8;
  
  piVar2 = (int *)FUN_10005350((int)this);
  local_c = *piVar2;
  local_8 = *(int *)((int)this + 0x18);
  while (pcVar3 = (char *)FUN_10004a60(local_c), *pcVar3 == '\0') {
    pbVar5 = param_1;
    pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_10004a70(local_c);
    cVar1 = FUN_10005570(pbVar4,pbVar5);
    if (cVar1 == '\0') {
      local_8 = local_c;
      piVar2 = (int *)FUN_10006080(local_c);
      local_c = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_10002bb0(local_c);
      local_c = *piVar2;
    }
  }
  return local_8;
}



/* ---- FUN_10006040 @ 10006040 size=60 ---- */

void * FUN_10006040(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)&puStack_10;
  FUN_10003820(&puStack_10);
  FUN_10006650(local_c,param_1);
  puStack_10 = &param_2;
  FUN_10003820((int)local_c + 0x14);
  return local_c;
}



/* ---- FUN_10006080 @ 10006080 size=8 ---- */

undefined4 __cdecl FUN_10006080(undefined4 param_1)

{
  return param_1;
}



/* ---- destroy @ 10006090 size=25 ---- */

/* Library Function - Single Match
    public: void __thiscall std::allocator<struct std::_Container_proxy>::destroy(struct
   std::_Container_proxy *)
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void __thiscall
std::allocator<std::_Container_proxy>::destroy
          (allocator<std::_Container_proxy> *this,_Container_proxy *param_1)

{
  FUN_10001090();
  return;
}



/* ---- FUN_100060b0 @ 100060b0 size=61 ---- */

undefined4 * __thiscall FUN_100060b0(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_100057c0(this);
  *(undefined4 *)((int)this + 4) = param_1;
  if (param_2 == (undefined4 *)0x0) {
    _invalid_parameter_noinfo();
  }
  FUN_10001100(this,param_2);
  return this;
}



/* ---- FUN_100060f0 @ 100060f0 size=80 ---- */

void __fastcall FUN_100060f0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10001170(param_1);
  if (!bVar1) {
    _invalid_parameter_noinfo();
  }
  iVar2 = FUN_10001120(param_1);
  if (param_1[1] == *(int *)(iVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  FUN_10005810(param_1[1]);
  return;
}



/* ---- FUN_10006140 @ 10006140 size=22 ---- */

int * __fastcall FUN_10006140(int *param_1)

{
  FUN_100066f0(param_1);
  return param_1;
}



/* ---- FUN_10006160 @ 10006160 size=219 ---- */

void __fastcall FUN_10006160(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = FUN_10001170(param_1);
  if (!bVar1) {
    _invalid_parameter_noinfo();
  }
  pcVar2 = (char *)FUN_10004a60(param_1[1]);
  if (*pcVar2 == '\0') {
    piVar3 = (int *)FUN_10002bb0(param_1[1]);
    pcVar2 = (char *)FUN_10004a60(*piVar3);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)FUN_10002bb0(param_1[1]);
      iVar5 = FUN_100052f0(*puVar4);
      param_1[1] = iVar5;
    }
    else {
      while( true ) {
        piVar3 = (int *)FUN_10002ba0(param_1[1]);
        iVar5 = *piVar3;
        pcVar2 = (char *)FUN_10004a60(iVar5);
        if ((*pcVar2 != '\0') || (piVar3 = (int *)FUN_10002bb0(iVar5), param_1[1] != *piVar3))
        break;
        param_1[1] = iVar5;
      }
      param_1[1] = iVar5;
    }
  }
  else {
    _invalid_parameter_noinfo();
  }
  return;
}



/* ---- FUN_10006240 @ 10006240 size=69 ---- */

void FUN_10006240(void)

{
  if (DAT_1001174c != (void *)0x0) {
    FUN_10006340(DAT_1001174c,1);
  }
  DAT_1001174c = (void *)0x0;
  DAT_10011750 = 1;
  return;
}



/* ---- FUN_10006290 @ 10006290 size=84 ---- */

void FUN_10006290(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [28];
  logic_error local_38 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c8d9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_54,"[XSystem::XTL::Singleton] Dead reference detected.");
  local_8 = 0;
  std::logic_error::logic_error
            (local_38,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_54);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_1000e2b4);
}



/* ---- length_error @ 10006310 size=37 ---- */

length_error * __thiscall std::length_error::length_error(length_error *this,exception *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10006340 @ 10006340 size=44 ---- */

int * __thiscall FUN_10006340(void *this,uint param_1)

{
  FUN_1000a9d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10006370 @ 10006370 size=22 ---- */

void FUN_10006370(void)

{
  max_size();
  return;
}



/* ---- FUN_10006390 @ 10006390 size=88 ---- */

void __fastcall FUN_10006390(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10005350(param_1);
  FUN_10006850((void *)*puVar1);
  puVar1 = (undefined4 *)FUN_10005350(param_1);
  *puVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined4 *)FUN_10002ce0(param_1);
  *puVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar1 = (undefined4 *)FUN_10005330(param_1);
  *puVar1 = *(undefined4 *)(param_1 + 0x18);
  return;
}



/* ---- FUN_100063f0 @ 100063f0 size=202 ---- */

void FUN_100063f0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c8b0;
  local_10 = ExceptionList;
  uStack_3c = DAT_10011018 ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_1c = FUN_10006940(1);
  local_18 = 0;
  local_8 = 0;
  local_20 = 0;
  puVar3 = &local_20;
  uVar1 = FUN_10006080(local_1c);
  FUN_10006960(uVar1,puVar3);
  local_18 = local_18 + 1;
  local_24 = 0;
  puVar3 = &local_24;
  iVar2 = FUN_10002ba0(local_1c);
  FUN_10006960(iVar2,puVar3);
  local_18 = local_18 + 1;
  local_28 = 0;
  puVar3 = &local_28;
  iVar2 = FUN_10002bb0(local_1c);
  FUN_10006960(iVar2,puVar3);
  FUN_1000651d();
  return;
}



/* ---- Catch_All@100064ba @ 100064ba size=86 ---- */

void Catch_All_100064ba(void)

{
  _Container_proxy *p_Var1;
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x14)) {
    p_Var1 = (_Container_proxy *)FUN_10002ba0(*(int *)(unaff_EBP + -0x18));
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)(*(int *)(unaff_EBP + -0x28) + 0x10),p_Var1);
  }
  if (0 < *(int *)(unaff_EBP + -0x14)) {
    p_Var1 = (_Container_proxy *)FUN_10006080(*(undefined4 *)(unaff_EBP + -0x18));
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)(*(int *)(unaff_EBP + -0x28) + 0x10),p_Var1);
  }
  FUN_100030e0(*(void **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_1000651d @ 1000651d size=58 ---- */

undefined4 FUN_1000651d(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar1 = (undefined1 *)FUN_10004a50(*(int *)(unaff_EBP + -0x18));
  *puVar1 = 1;
  puVar1 = (undefined1 *)FUN_10004a60(*(int *)(unaff_EBP + -0x18));
  *puVar1 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* ---- FUN_10006560 @ 10006560 size=156 ---- */

void FUN_10006560(undefined4 param_1,undefined4 param_2,undefined4 param_3,
                 basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                 *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000ca31;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_10006940(1);
  local_8 = 0;
  this = (void *)FUN_10001080(0x34,uVar1);
  local_8._0_1_ = 1;
  if (this != (void *)0x0) {
    FUN_10006980(this,param_1,param_2,param_3,param_4,param_5);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10006623();
  return;
}



/* ---- Catch_All@100065fc @ 100065fc size=26 ---- */

void Catch_All_100065fc(void)

{
  int unaff_EBP;
  
  FUN_100030e0(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



/* ---- FUN_10006623 @ 10006623 size=30 ---- */

undefined4 FUN_10006623(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}



/* ---- FUN_10006650 @ 10006650 size=60 ---- */

int __thiscall FUN_10006650(void *this,undefined4 param_1)

{
  undefined1 auStack_d [9];
  
  FUN_10003820(auStack_d + -3);
  FUN_100068d0(param_1,(char)this);
  FUN_10003820((int)this + 0x10);
  return (int)this;
}



/* ---- FUN_10006690 @ 10006690 size=22 ---- */

int * __fastcall FUN_10006690(int *param_1)

{
  FUN_10006140(param_1);
  return param_1;
}



/* ---- FUN_100066b0 @ 100066b0 size=54 ---- */

int * __thiscall FUN_100066b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  FUN_10005690(this);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}



/* ---- FUN_100066f0 @ 100066f0 size=294 ---- */

void __fastcall FUN_100066f0(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  bVar1 = FUN_10001170(param_1);
  if (!bVar1) {
    _invalid_parameter_noinfo();
  }
  pcVar2 = (char *)FUN_10004a60(param_1[1]);
  if (*pcVar2 == '\0') {
    piVar3 = (int *)FUN_10006080(param_1[1]);
    pcVar2 = (char *)FUN_10004a60(*piVar3);
    if (*pcVar2 == '\0') {
      piVar3 = (int *)FUN_10006080(param_1[1]);
      iVar4 = FUN_100052b0(*piVar3);
      param_1[1] = iVar4;
    }
    else {
      while( true ) {
        piVar3 = (int *)FUN_10002ba0(param_1[1]);
        iVar4 = *piVar3;
        pcVar2 = (char *)FUN_10004a60(iVar4);
        if ((*pcVar2 != '\0') || (piVar3 = (int *)FUN_10006080(iVar4), param_1[1] != *piVar3))
        break;
        param_1[1] = iVar4;
      }
      pcVar2 = (char *)FUN_10004a60(param_1[1]);
      if (*pcVar2 == '\0') {
        param_1[1] = iVar4;
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
  }
  else {
    piVar3 = (int *)FUN_10002bb0(param_1[1]);
    param_1[1] = *piVar3;
    pcVar2 = (char *)FUN_10004a60(param_1[1]);
    if (*pcVar2 != '\0') {
      _invalid_parameter_noinfo();
    }
  }
  return;
}



/* ---- FUN_10006820 @ 10006820 size=43 ---- */

undefined4 * __thiscall FUN_10006820(void *this,undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined1 *)((int)this + 8) = *param_2;
  return this;
}



/* ---- FUN_10006850 @ 10006850 size=122 ---- */

void FUN_10006850(void *param_1)

{
  void *pvVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *local_8;
  
  local_8 = param_1;
  while( true ) {
    pcVar2 = (char *)FUN_10004a60((int)local_8);
    if (*pcVar2 != '\0') break;
    puVar3 = (undefined4 *)FUN_10002bb0((int)local_8);
    FUN_10006850((void *)*puVar3);
    puVar3 = (undefined4 *)FUN_10006080(local_8);
    pvVar1 = (void *)*puVar3;
    FUN_10005590(local_8);
    FUN_100030e0(local_8);
    local_8 = pvVar1;
  }
  return;
}



/* ---- FUN_100068d0 @ 100068d0 size=63 ---- */

int FUN_100068d0(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puStack_10;
  int local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)&puStack_10;
  FUN_10003820(&puStack_10);
  FUN_10006a00();
  puStack_10 = &param_2;
  FUN_10003820(local_c + 0xc);
  return local_c;
}



/* ---- max_size @ 10006910 size=44 ---- */

/* WARNING: Removing unreachable block (ram,0x1000692e) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<unsigned short>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<wchar_t>::max_size(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 max_size(void)

{
  return 0x71c71c7;
}



/* ---- FUN_10006940 @ 10006940 size=27 ---- */

void FUN_10006940(uint param_1)

{
  FUN_10006b50(param_1);
  return;
}



/* ---- FUN_10006960 @ 10006960 size=29 ---- */

void FUN_10006960(undefined4 param_1,undefined4 *param_2)

{
  FUN_10006ba0(param_1,param_2);
  return;
}



/* ---- FUN_10006980 @ 10006980 size=73 ---- */

undefined4 * __thiscall
FUN_10006980(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
            undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  FUN_100069d0((void *)((int)this + 0xc),param_4);
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}



/* ---- FUN_100069d0 @ 100069d0 size=40 ---- */

void * __thiscall
FUN_100069d0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  FUN_100057e0(this,param_1);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}



/* ---- FUN_10006a00 @ 10006a00 size=41 ---- */

undefined4 * FUN_10006a00(void)

{
  undefined1 auStack_10 [4];
  undefined4 *local_c;
  undefined1 *local_8;
  
  local_8 = auStack_10;
  FUN_10003820(auStack_10);
  FUN_10006a30(local_c);
  return local_c;
}



/* ---- FUN_10006a30 @ 10006a30 size=174 ---- */

undefined4 * __fastcall FUN_10006a30(undefined4 *param_1)

{
  undefined4 uVar1;
  void *this;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c9f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10003b30(param_1);
  local_8 = 0;
  FUN_10003820(param_1 + 1);
  uVar1 = FUN_10003630(1);
  this = (void *)FUN_10001080(4,uVar1);
  if (this == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_100010a0(this,param_1);
  }
  *param_1 = local_24;
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_10006ae0 @ 10006ae0 size=89 ---- */

undefined1 __cdecl
FUN_10006ae0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
  if ((!bVar1) &&
     ((bVar1 = std::operator<<char,std::char_traits<char>,std::allocator<char>_>(param_2,param_1),
      bVar1 || (*(int *)(param_2 + 0x1c) <= *(int *)(param_1 + 0x1c))))) {
    return 0;
  }
  return 1;
}



/* ---- FUN_10006b40 @ 10006b40 size=15 ---- */

void __cdecl FUN_10006b40(void *param_1)

{
  FUN_10006be0(param_1,0);
  return;
}



/* ---- FUN_10006b50 @ 10006b50 size=77 ---- */

void __cdecl FUN_10006b50(uint param_1)

{
  bad_alloc local_10 [3];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x34) {
    std::bad_alloc::bad_alloc(local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_10,(ThrowInfo *)&DAT_1000e208);
  }
  operator_new(param_1 * 0x34);
  return;
}



/* ---- FUN_10006ba0 @ 10006ba0 size=64 ---- */

void __cdecl FUN_10006ba0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10001080(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}



/* ---- FUN_10006be0 @ 10006be0 size=44 ---- */

CDHtmlElementEventSink * __thiscall FUN_10006be0(void *this,uint param_1)

{
  CDHtmlElementEventSink::~CDHtmlElementEventSink(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- ~CDHtmlElementEventSink @ 10006c10 size=22 ---- */

/* Library Function - Single Match
    public: __thiscall CDHtmlElementEventSink::~CDHtmlElementEventSink(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug */

void __thiscall CDHtmlElementEventSink::~CDHtmlElementEventSink(CDHtmlElementEventSink *this)

{
  FUN_100049f0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(this + 0xc));
  return;
}



/* ---- scalar_deleting_destructor @ 10006c30 size=44 ---- */

undefined4 * __thiscall
TPACK::Connector::Impl::Socket::scalar_deleting_destructor(Socket *this,uint param_1)

{
  ~Socket(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10006c60 @ 10006c60 size=146 ---- */

undefined4 __fastcall FUN_10006c60(int param_1)

{
  undefined4 uVar1;
  _THandle *p_Var2;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c9c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004840(local_18,param_1,'\x01');
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    p_Var2 = XSystem::ThreadPool::CreateHandle(*(uint *)(param_1 + 8));
    *(_THandle **)(param_1 + 0xc) = p_Var2;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_8 = 0xffffffff;
  FUN_100048b0(local_18);
  ExceptionList = local_10;
  return uVar1;
}



/* ---- FUN_10006d00 @ 10006d00 size=165 ---- */

void __fastcall FUN_10006d00(int param_1)

{
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004840(local_18,param_1,'\x01');
  local_8 = 0;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if (*(int *)(param_1 + 4) == 0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (*(char *)(param_1 + 0x10) == '\0')) {
      XSystem::ThreadPool::DestroyHandle(*(_THandle **)(param_1 + 0xc));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  local_8 = 0xffffffff;
  FUN_100048b0(local_18);
  ExceptionList = local_10;
  return;
}



/* ---- scalar_deleting_destructor @ 10006db0 size=44 ---- */

undefined4 * __thiscall
TPACK::Connector::Impl::TCPSocket::scalar_deleting_destructor(TCPSocket *this,uint param_1)

{
  ~TCPSocket(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10006de0 @ 10006de0 size=17 ---- */

void FUN_10006de0(void)

{
  int iVar1;
  
  iVar1 = FUN_10006e20();
  FUN_10006c60(iVar1);
  return;
}



/* ---- FUN_10006e00 @ 10006e00 size=17 ---- */

void FUN_10006e00(void)

{
  int iVar1;
  
  iVar1 = FUN_10006e20();
  FUN_10006d00(iVar1);
  return;
}



/* ---- FUN_10006e20 @ 10006e20 size=10 ---- */

void FUN_10006e20(void)

{
  FUN_10006e30();
  return;
}



/* ---- FUN_10006e30 @ 10006e30 size=24 ---- */

int FUN_10006e30(void)

{
  if (DAT_10011754 == 0) {
    FUN_10006e50();
  }
  return DAT_10011754;
}



/* ---- FUN_10006e50 @ 10006e50 size=221 ---- */

void FUN_10006e50(void)

{
  CriticalSection *local_30;
  bad_alloc local_2c [3];
  CriticalSection *local_20;
  CriticalSection *local_1c;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cc13;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004840(local_18,&DAT_10011764,'\x01');
  local_8 = 0;
  if (DAT_10011754 == (CriticalSection *)0x0) {
    if (DAT_10011758 == '\x01') {
      FUN_10006290();
    }
    local_20 = operator_new(0x14);
    local_8._0_1_ = 1;
    if (local_20 == (CriticalSection *)0x0) {
      local_30 = (CriticalSection *)0x0;
    }
    else {
      local_30 = FUN_10006fb0(local_20);
    }
    local_1c = local_30;
    local_8 = (uint)local_8._1_3_ << 8;
    DAT_10011754 = local_30;
    if (local_30 == (CriticalSection *)0x0) {
      std::bad_alloc::bad_alloc(local_2c);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_2c,(ThrowInfo *)&DAT_1000e208);
    }
    _atexit(FUN_10006f30);
  }
  local_8 = 0xffffffff;
  FUN_100048b0(local_18);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10006f30 @ 10006f30 size=69 ---- */

void FUN_10006f30(void)

{
  if (DAT_10011754 != (void *)0x0) {
    FUN_10006f80(DAT_10011754,1);
  }
  DAT_10011754 = (void *)0x0;
  DAT_10011758 = 1;
  return;
}



/* ---- FUN_10006f80 @ 10006f80 size=44 ---- */

CriticalSection * __thiscall FUN_10006f80(void *this,uint param_1)

{
  FUN_10007000(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10006fb0 @ 10006fb0 size=65 ---- */

CriticalSection * __fastcall FUN_10006fb0(CriticalSection *param_1)

{
  XSystem::Threading::CriticalSection::CriticalSection(param_1,4000);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = (CriticalSection)0x0;
  return param_1;
}



/* ---- FUN_10007000 @ 10007000 size=84 ---- */

void __fastcall FUN_10007000(CriticalSection *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cb19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10006d00((int)param_1);
  local_8 = 0xffffffff;
  XSystem::Threading::CriticalSection::~CriticalSection(param_1);
  ExceptionList = local_10;
  return;
}



/* ---- scalar_deleting_destructor @ 10007060 size=44 ---- */

undefined4 * __thiscall
TPACK::Connector::Impl::Delivery::scalar_deleting_destructor(Delivery *this,uint param_1)

{
  ~Delivery(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- _XDRRequestHeader @ 10007090 size=142 ---- */

_XDRRequestHeader * __thiscall _XDRRequestHeader::_XDRRequestHeader(_XDRRequestHeader *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->_XDRRequestHeader_data).offset_0x0 = 0;
  (this->_XDRRequestHeader_data).offset_0x4 = 0xe359d7a;
  _XDRCommonHeader::_XDRCommonHeader((_XDRCommonHeader *)&(this->_XDRRequestHeader_data).field_0x8);
  (this->_XDRRequestHeader_data).offset_0x6c = 0;
  (this->_XDRRequestHeader_data).offset_0x74 = 0;
  (this->_XDRRequestHeader_data).offset_0x78 = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~_XDRRequestHeader @ 10007120 size=95 ---- */

/* Library Function - Multiple Matches With Different Base Names
    protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >(void)
    protected: virtual __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(void)
    protected: virtual __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)
    public: virtual __thiscall CXMLParser::~CXMLParser(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012
   ***** Removed Bad FID Symbol(s) ***** */

void __thiscall _XDRRequestHeader::~_XDRRequestHeader(_XDRRequestHeader *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  _XDRCommonHeader::~_XDRCommonHeader((_XDRCommonHeader *)&(this->_XDRRequestHeader_data).field_0x8)
  ;
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10007180 size=55 ---- */

void __thiscall _XDRRequestHeader::vfunction2(_XDRRequestHeader *this)

{
  (**(code **)(*(int *)&(this->_XDRRequestHeader_data).field_0x8 + 4))();
  (this->_XDRRequestHeader_data).offset_0x6c = 0;
  (this->_XDRRequestHeader_data).offset_0x74 = 0;
  (this->_XDRRequestHeader_data).offset_0x78 = 0;
  return;
}



/* ---- vfunction3 @ 100071c0 size=16 ---- */

undefined4 __thiscall _XDRRequestHeader::vfunction3(_XDRRequestHeader *this)

{
  return 0xe359d7a;
}



/* ---- vfunction4 @ 100071d0 size=16 ---- */

char * __thiscall _XDRRequestHeader::vfunction4(_XDRRequestHeader *this)

{
  return "_XDRRequestHeader";
}



/* ---- vfunction5 @ 100071e0 size=118 ---- */

int __thiscall _XDRRequestHeader::vfunction5(_XDRRequestHeader *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if ((this->_XDRRequestHeader_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->_XDRRequestHeader_data).field_0x8);
  iVar2 = FUN_10003650();
  iVar3 = FUN_10003710();
  return iVar3 + iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 10007260 size=146 ---- */

uint __thiscall _XDRRequestHeader::vfunction6(_XDRRequestHeader *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->_XDRRequestHeader_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->_XDRRequestHeader_data).offset_0x4), (uVar1 & 0xff) == 0)
     ) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003730(param_1,(int *)&(this->_XDRRequestHeader_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036b0(param_1,&(this->_XDRRequestHeader_data).offset_0x6c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10003750(param_1,&(this->_XDRRequestHeader_data).offset_0x74);
      uVar2 = (uint3)(uVar1 >> 8);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = (uint)uVar2 << 8;
      }
      else {
        uVar1 = CONCAT31(uVar2,1);
      }
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10007300 size=146 ---- */

uint __thiscall _XDRRequestHeader::vfunction7(_XDRRequestHeader *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->_XDRRequestHeader_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->_XDRRequestHeader_data).offset_0x4), (uVar1 & 0xff) == 0)
     ) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003770(param_1,(int *)&(this->_XDRRequestHeader_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036f0(param_1,&(this->_XDRRequestHeader_data).offset_0x6c);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10003790(param_1,(undefined8 *)&(this->_XDRRequestHeader_data).offset_0x74);
      uVar2 = (uint3)(uVar1 >> 8);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = (uint)uVar2 << 8;
      }
      else {
        uVar1 = CONCAT31(uVar2,1);
      }
    }
  }
  return uVar1;
}



/* ---- vfunction8 @ 100073a0 size=22 ---- */

void __thiscall XDRTPackLoginResponse::vfunction8(XDRTPackLoginResponse *this,undefined1 param_1)

{
  (this->XDRTPackLoginResponse_data).offset_0x0 = param_1;
  return;
}



/* ---- scalar_deleting_destructor @ 100073c0 size=44 ---- */

void * __thiscall
_XDRRequestHeader::scalar_deleting_destructor(_XDRRequestHeader *this,uint param_1)

{
  ~_XDRRequestHeader(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- XDRAuthSessionRequest @ 100073f0 size=134 ---- */

XDRAuthSessionRequest * __thiscall
XDRAuthSessionRequest::XDRAuthSessionRequest(XDRAuthSessionRequest *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000caf3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRAuthSessionRequest_data).offset_0x0 = 0;
  (this->XDRAuthSessionRequest_data).offset_0x4 = 0xcf7bd9a;
  _XDRRequestHeader::_XDRRequestHeader
            ((_XDRRequestHeader *)&(this->XDRAuthSessionRequest_data).field_0xc);
  local_8 = CONCAT31(local_8._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRAuthSessionRequest_data).field_0x8c);
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRAuthSessionRequest @ 10007480 size=114 ---- */

void __thiscall XDRAuthSessionRequest::~XDRAuthSessionRequest(XDRAuthSessionRequest *this)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1000caf3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRAuthSessionRequest_data).field_0x8c);
  local_8 = local_8 & 0xffffff00;
  _XDRRequestHeader::~_XDRRequestHeader
            ((_XDRRequestHeader *)&(this->XDRAuthSessionRequest_data).field_0xc);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10007500 size=45 ---- */

void __thiscall XDRAuthSessionRequest::vfunction2(XDRAuthSessionRequest *this)

{
  (**(code **)(*(int *)&(this->XDRAuthSessionRequest_data).field_0xc + 4))();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRAuthSessionRequest_data).field_0x8c,0);
  return;
}



/* ---- vfunction3 @ 10007530 size=16 ---- */

undefined4 __thiscall XDRAuthSessionRequest::vfunction3(XDRAuthSessionRequest *this)

{
  return 0xcf7bd9a;
}



/* ---- vfunction4 @ 10007540 size=16 ---- */

char * __thiscall XDRAuthSessionRequest::vfunction4(XDRAuthSessionRequest *this)

{
  return "XDRAuthSessionRequest";
}



/* ---- vfunction5 @ 10007550 size=100 ---- */

int __thiscall XDRAuthSessionRequest::vfunction5(XDRAuthSessionRequest *this)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRAuthSessionRequest_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->XDRAuthSessionRequest_data).field_0xc);
  iVar2 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->XDRAuthSessionRequest_data).field_0x8c);
  return iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 100075c0 size=119 ---- */

uint __thiscall XDRAuthSessionRequest::vfunction6(XDRAuthSessionRequest *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRAuthSessionRequest_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->XDRAuthSessionRequest_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003730(param_1,(int *)&(this->XDRAuthSessionRequest_data).field_0xc);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->XDRAuthSessionRequest_data).field_0x8c);
    uVar2 = (uint3)(uVar1 >> 8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10007640 size=119 ---- */

uint __thiscall XDRAuthSessionRequest::vfunction7(XDRAuthSessionRequest *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRAuthSessionRequest_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->XDRAuthSessionRequest_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003770(param_1,(int *)&(this->XDRAuthSessionRequest_data).field_0xc);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->XDRAuthSessionRequest_data).field_0x8c);
    uVar2 = (uint3)(uVar1 >> 8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  return uVar1;
}



/* ---- vfunction9 @ 100076c0 size=17 ---- */

undefined1 __thiscall XDRTPackLoginResponse::vfunction9(XDRTPackLoginResponse *this)

{
  return (this->XDRTPackLoginResponse_data).offset_0x0;
}



/* ---- scalar_deleting_destructor @ 100076e0 size=44 ---- */

undefined4 * __thiscall
XDRAuthSessionRequest::scalar_deleting_destructor(XDRAuthSessionRequest *this,uint param_1)

{
  ~XDRAuthSessionRequest(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- XDRTPackLoginRequest @ 10007710 size=115 ---- */

XDRTPackLoginRequest * __thiscall
XDRTPackLoginRequest::XDRTPackLoginRequest(XDRTPackLoginRequest *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRTPackLoginRequest_data).offset_0x0 = 0;
  (this->XDRTPackLoginRequest_data).offset_0x4 = 0xb60835a;
  _XDRRequestHeader::_XDRRequestHeader
            ((_XDRRequestHeader *)&(this->XDRTPackLoginRequest_data).field_0xc);
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRTPackLoginRequest @ 10007790 size=95 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CMFCListCtrl::~CMFCListCtrl(void)
   
   Library: Visual Studio 2010 Debug
   ***** Removed Bad FID Symbol ***** */

void __thiscall XDRTPackLoginRequest::~XDRTPackLoginRequest(XDRTPackLoginRequest *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  _XDRRequestHeader::~_XDRRequestHeader
            ((_XDRRequestHeader *)&(this->XDRTPackLoginRequest_data).field_0xc);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 100077f0 size=28 ---- */

void __thiscall XDRTPackLogoutRequest::vfunction2(XDRTPackLogoutRequest *this)

{
  (**(code **)(*(int *)&(this->XDRTPackLogoutRequest_data).field_0xc + 4))();
  return;
}



/* ---- vfunction3 @ 10007810 size=16 ---- */

undefined4 __thiscall XDRTPackLoginRequest::vfunction3(XDRTPackLoginRequest *this)

{
  return 0xb60835a;
}



/* ---- vfunction4 @ 10007820 size=16 ---- */

char * __thiscall XDRTPackLoginRequest::vfunction4(XDRTPackLoginRequest *this)

{
  return "XDRTPackLoginRequest";
}



/* ---- scalar_deleting_destructor @ 10007830 size=44 ---- */

undefined4 * __thiscall
XDRTPackLoginRequest::scalar_deleting_destructor(XDRTPackLoginRequest *this,uint param_1)

{
  ~XDRTPackLoginRequest(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- XDRTPackLogoutRequest @ 10007860 size=115 ---- */

XDRTPackLogoutRequest * __thiscall
XDRTPackLogoutRequest::XDRTPackLogoutRequest(XDRTPackLogoutRequest *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRTPackLogoutRequest_data).offset_0x0 = 0;
  (this->XDRTPackLogoutRequest_data).offset_0x4 = 0xa4e052a;
  _XDRRequestHeader::_XDRRequestHeader
            ((_XDRRequestHeader *)&(this->XDRTPackLogoutRequest_data).field_0xc);
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRTPackLogoutRequest @ 100078e0 size=95 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CMFCListCtrl::~CMFCListCtrl(void)
   
   Library: Visual Studio 2010 Debug
   ***** Removed Bad FID Symbol ***** */

void __thiscall XDRTPackLogoutRequest::~XDRTPackLogoutRequest(XDRTPackLogoutRequest *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  _XDRRequestHeader::~_XDRRequestHeader
            ((_XDRRequestHeader *)&(this->XDRTPackLogoutRequest_data).field_0xc);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction3 @ 10007940 size=16 ---- */

undefined4 __thiscall XDRTPackLogoutRequest::vfunction3(XDRTPackLogoutRequest *this)

{
  return 0xa4e052a;
}



/* ---- vfunction4 @ 10007950 size=16 ---- */

char * __thiscall XDRTPackLogoutRequest::vfunction4(XDRTPackLogoutRequest *this)

{
  return "XDRTPackLogoutRequest";
}



/* ---- vfunction5 @ 10007960 size=76 ---- */

int __thiscall XDRTPackLogoutRequest::vfunction5(XDRTPackLogoutRequest *this)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRTPackLogoutRequest_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->XDRTPackLogoutRequest_data).field_0xc);
  return iVar1 + local_8;
}



/* ---- vfunction6 @ 100079b0 size=86 ---- */

bool __thiscall XDRTPackLogoutRequest::vfunction6(XDRTPackLogoutRequest *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->XDRTPackLogoutRequest_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_100036b0(param_1,&(this->XDRTPackLogoutRequest_data).offset_0x4), cVar1 == '\0'))
  {
    return false;
  }
  cVar1 = FUN_10003730(param_1,(int *)&(this->XDRTPackLogoutRequest_data).field_0xc);
  return cVar1 != '\0';
}



/* ---- vfunction7 @ 10007a10 size=86 ---- */

bool __thiscall XDRTPackLogoutRequest::vfunction7(XDRTPackLogoutRequest *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->XDRTPackLogoutRequest_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_100036f0(param_1,&(this->XDRTPackLogoutRequest_data).offset_0x4), cVar1 == '\0'))
  {
    return false;
  }
  cVar1 = FUN_10003770(param_1,(int *)&(this->XDRTPackLogoutRequest_data).field_0xc);
  return cVar1 != '\0';
}



/* ---- scalar_deleting_destructor @ 10007a70 size=44 ---- */

undefined4 * __thiscall
XDRTPackLogoutRequest::scalar_deleting_destructor(XDRTPackLogoutRequest *this,uint param_1)

{
  ~XDRTPackLogoutRequest(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- XDRDetectGhostCheckResponse @ 10007aa0 size=58 ---- */

XDRDetectGhostCheckResponse * __thiscall
XDRDetectGhostCheckResponse::XDRDetectGhostCheckResponse(XDRDetectGhostCheckResponse *this)

{
  XDR::IMessage::IMessage((IMessage *)this);
  this->vftablePtr = &vftable;
  (this->XDRDetectGhostCheckResponse_data).offset_0x0 = 0;
  (this->XDRDetectGhostCheckResponse_data).offset_0x4 = 0x425714a;
  (this->XDRDetectGhostCheckResponse_data).offset_0x8 = 0;
  return this;
}



/* ---- ~XDRDetectGhostCheckResponse @ 10007ae0 size=28 ---- */

void __thiscall
XDRDetectGhostCheckResponse::~XDRDetectGhostCheckResponse(XDRDetectGhostCheckResponse *this)

{
  this->vftablePtr = &vftable;
  XDR::IMessage::~IMessage((IMessage *)this);
  return;
}



/* ---- vfunction3 @ 10007b00 size=16 ---- */

undefined4 __thiscall XDRDetectGhostCheckResponse::vfunction3(XDRDetectGhostCheckResponse *this)

{
  return 0x425714a;
}



/* ---- vfunction4 @ 10007b10 size=16 ---- */

char * __thiscall XDRDetectGhostCheckResponse::vfunction4(XDRDetectGhostCheckResponse *this)

{
  return "XDRDetectGhostCheckResponse";
}



/* ---- vfunction7 @ 10007b20 size=86 ---- */

bool __thiscall
XDRDetectGhostCheckResponse::vfunction7(XDRDetectGhostCheckResponse *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->XDRDetectGhostCheckResponse_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_100036f0(param_1,&(this->XDRDetectGhostCheckResponse_data).offset_0x4),
     cVar1 == '\0')) {
    return false;
  }
  cVar1 = FUN_100036f0(param_1,&(this->XDRDetectGhostCheckResponse_data).offset_0x8);
  return cVar1 != '\0';
}



/* ---- scalar_deleting_destructor @ 10007b80 size=44 ---- */

undefined4 * __thiscall
XDRDetectGhostCheckResponse::scalar_deleting_destructor
          (XDRDetectGhostCheckResponse *this,uint param_1)

{
  ~XDRDetectGhostCheckResponse(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- scalar_deleting_destructor @ 10007bb0 size=44 ---- */

undefined4 * __thiscall
TPACK::Connector::Impl::XDRDelivery::scalar_deleting_destructor(XDRDelivery *this,uint param_1)

{
  ~XDRDelivery(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10007be0 @ 10007be0 size=161 ---- */

uint __thiscall FUN_10007be0(void *this,int *param_1)

{
  uint extraout_EAX;
  uint uVar1;
  _THandle *p_Var2;
  undefined4 uVar3;
  undefined4 extraout_EAX_00;
  uint3 uVar4;
  undefined4 local_c;
  int local_8;
  
  if (*(int *)((int)this + 4) == 0) {
    XPlatform::SetLastError(0x40104);
    uVar1 = extraout_EAX & 0xffffff00;
  }
  else {
    p_Var2 = XStream::CreateHandle();
    if (p_Var2 == (_THandle *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x10))();
      local_c = Ordinal_8(uVar3);
      XStream::Write(p_Var2,&local_c,4);
      (**(code **)(*param_1 + 0x14))(p_Var2);
      local_8 = (**(code **)(**(int **)((int)this + 4) + 0xc))(p_Var2);
      XStream::DestroyHandle(p_Var2);
      uVar4 = (uint3)((uint)extraout_EAX_00 >> 8);
      if (local_8 < 0) {
        uVar1 = (uint)uVar4 << 8;
      }
      else {
        uVar1 = CONCAT31(uVar4,1);
      }
    }
  }
  return uVar1;
}



/* ---- scalar_deleting_destructor @ 10007c90 size=44 ---- */

undefined4 * __thiscall
TPACK::Connector::Impl::Dispatcher::scalar_deleting_destructor(Dispatcher *this,uint param_1)

{
  ~Dispatcher(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- XDRAuthSessionResponse @ 10007cc0 size=115 ---- */

XDRAuthSessionResponse * __thiscall
XDRAuthSessionResponse::XDRAuthSessionResponse(XDRAuthSessionResponse *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRAuthSessionResponse_data).offset_0x0 = 0;
  (this->XDRAuthSessionResponse_data).offset_0x4 = 0xa36b7ba;
  _XDRResponseHeader::_XDRResponseHeader
            ((_XDRResponseHeader *)&(this->XDRAuthSessionResponse_data).field_0x8);
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRAuthSessionResponse @ 10007d40 size=95 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CMFCListCtrl::~CMFCListCtrl(void)
   
   Library: Visual Studio 2010 Debug
   ***** Removed Bad FID Symbol ***** */

void __thiscall XDRAuthSessionResponse::~XDRAuthSessionResponse(XDRAuthSessionResponse *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  _XDRResponseHeader::~_XDRResponseHeader
            ((_XDRResponseHeader *)&(this->XDRAuthSessionResponse_data).field_0x8);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10007da0 size=28 ---- */

void __thiscall XDRAuthSessionResponse::vfunction2(XDRAuthSessionResponse *this)

{
  (**(code **)(*(int *)&(this->XDRAuthSessionResponse_data).field_0x8 + 4))();
  return;
}



/* ---- vfunction3 @ 10007dc0 size=16 ---- */

undefined4 __thiscall XDRAuthSessionResponse::vfunction3(XDRAuthSessionResponse *this)

{
  return 0xa36b7ba;
}



/* ---- vfunction4 @ 10007dd0 size=16 ---- */

char * __thiscall XDRAuthSessionResponse::vfunction4(XDRAuthSessionResponse *this)

{
  return "XDRAuthSessionResponse";
}



/* ---- vfunction5 @ 10007de0 size=76 ---- */

int __thiscall XDRAuthSessionResponse::vfunction5(XDRAuthSessionResponse *this)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRAuthSessionResponse_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->XDRAuthSessionResponse_data).field_0x8);
  return iVar1 + local_8;
}



/* ---- vfunction6 @ 10007e30 size=86 ---- */

bool __thiscall XDRAuthSessionResponse::vfunction6(XDRAuthSessionResponse *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->XDRAuthSessionResponse_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_100036b0(param_1,&(this->XDRAuthSessionResponse_data).offset_0x4), cVar1 == '\0'))
  {
    return false;
  }
  cVar1 = FUN_10003730(param_1,(int *)&(this->XDRAuthSessionResponse_data).field_0x8);
  return cVar1 != '\0';
}



/* ---- vfunction7 @ 10007e90 size=86 ---- */

bool __thiscall XDRAuthSessionResponse::vfunction7(XDRAuthSessionResponse *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->XDRAuthSessionResponse_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_100036f0(param_1,&(this->XDRAuthSessionResponse_data).offset_0x4), cVar1 == '\0'))
  {
    return false;
  }
  cVar1 = FUN_10003770(param_1,(int *)&(this->XDRAuthSessionResponse_data).field_0x8);
  return cVar1 != '\0';
}



/* ---- scalar_deleting_destructor @ 10007ef0 size=44 ---- */

undefined4 * __thiscall
XDRAuthSessionResponse::scalar_deleting_destructor(XDRAuthSessionResponse *this,uint param_1)

{
  ~XDRAuthSessionResponse(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- XDRTPackLogoutResponse @ 10007f20 size=128 ---- */

XDRTPackLogoutResponse * __thiscall
XDRTPackLogoutResponse::XDRTPackLogoutResponse(XDRTPackLogoutResponse *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRTPackLogoutResponse_data).offset_0x0 = 0;
  (this->XDRTPackLogoutResponse_data).offset_0x4 = 0xbdd2b3a;
  _XDRResponseHeader::_XDRResponseHeader
            ((_XDRResponseHeader *)&(this->XDRTPackLogoutResponse_data).field_0x8);
  (this->XDRTPackLogoutResponse_data).offset_0x7c = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRTPackLogoutResponse @ 10007fa0 size=95 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CMFCListCtrl::~CMFCListCtrl(void)
   
   Library: Visual Studio 2010 Debug
   ***** Removed Bad FID Symbol ***** */

void __thiscall XDRTPackLogoutResponse::~XDRTPackLogoutResponse(XDRTPackLogoutResponse *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000cab8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0;
  _XDRResponseHeader::~_XDRResponseHeader
            ((_XDRResponseHeader *)&(this->XDRTPackLogoutResponse_data).field_0x8);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10008000 size=41 ---- */

void __thiscall XDRTPackLogoutResponse::vfunction2(XDRTPackLogoutResponse *this)

{
  (**(code **)(*(int *)&(this->XDRTPackLogoutResponse_data).field_0x8 + 4))();
  (this->XDRTPackLogoutResponse_data).offset_0x7c = 0;
  return;
}



/* ---- vfunction3 @ 10008030 size=16 ---- */

undefined4 __thiscall XDRTPackLogoutResponse::vfunction3(XDRTPackLogoutResponse *this)

{
  return 0xbdd2b3a;
}



/* ---- vfunction4 @ 10008040 size=16 ---- */

char * __thiscall XDRTPackLogoutResponse::vfunction4(XDRTPackLogoutResponse *this)

{
  return "XDRTPackLogoutResponse";
}



/* ---- vfunction5 @ 10008050 size=100 ---- */

int __thiscall XDRTPackLogoutResponse::vfunction5(XDRTPackLogoutResponse *this)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRTPackLogoutResponse_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_100037b0((int *)&(this->XDRTPackLogoutResponse_data).field_0x8);
  iVar2 = FUN_10003650();
  return iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 100080c0 size=119 ---- */

uint __thiscall XDRTPackLogoutResponse::vfunction6(XDRTPackLogoutResponse *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRTPackLogoutResponse_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->XDRTPackLogoutResponse_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003730(param_1,(int *)&(this->XDRTPackLogoutResponse_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036b0(param_1,&(this->XDRTPackLogoutResponse_data).offset_0x7c);
    uVar2 = (uint3)(uVar1 >> 8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10008140 size=119 ---- */

uint __thiscall XDRTPackLogoutResponse::vfunction7(XDRTPackLogoutResponse *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRTPackLogoutResponse_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->XDRTPackLogoutResponse_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003770(param_1,(int *)&(this->XDRTPackLogoutResponse_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036f0(param_1,&(this->XDRTPackLogoutResponse_data).offset_0x7c);
    uVar2 = (uint3)(uVar1 >> 8);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = (uint)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  return uVar1;
}



/* ---- scalar_deleting_destructor @ 100081c0 size=44 ---- */

undefined4 * __thiscall
XDRTPackLogoutResponse::scalar_deleting_destructor(XDRTPackLogoutResponse *this,uint param_1)

{
  ~XDRTPackLogoutResponse(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- XDRDetectGhostCheckRequest @ 100081f0 size=58 ---- */

XDRDetectGhostCheckRequest * __thiscall
XDRDetectGhostCheckRequest::XDRDetectGhostCheckRequest(XDRDetectGhostCheckRequest *this)

{
  XDR::IMessage::IMessage((IMessage *)this);
  this->vftablePtr = &vftable;
  (this->XDRDetectGhostCheckRequest_data).offset_0x0 = 0;
  (this->XDRDetectGhostCheckRequest_data).offset_0x4 = 0x3d6f36a;
  (this->XDRDetectGhostCheckRequest_data).offset_0x8 = 0;
  return this;
}



/* ---- ~XDRDetectGhostCheckRequest @ 10008230 size=28 ---- */

void __thiscall
XDRDetectGhostCheckRequest::~XDRDetectGhostCheckRequest(XDRDetectGhostCheckRequest *this)

{
  this->vftablePtr = &vftable;
  XDR::IMessage::~IMessage((IMessage *)this);
  return;
}



/* ---- vfunction2 @ 10008250 size=21 ---- */

void __thiscall XDRDetectGhostCheckResponse::vfunction2(XDRDetectGhostCheckResponse *this)

{
  (this->XDRDetectGhostCheckResponse_data).offset_0x8 = 0;
  return;
}



/* ---- vfunction3 @ 10008270 size=16 ---- */

undefined4 __thiscall XDRDetectGhostCheckRequest::vfunction3(XDRDetectGhostCheckRequest *this)

{
  return 0x3d6f36a;
}



/* ---- vfunction4 @ 10008280 size=16 ---- */

char * __thiscall XDRDetectGhostCheckRequest::vfunction4(XDRDetectGhostCheckRequest *this)

{
  return "XDRDetectGhostCheckRequest";
}



/* ---- vfunction5 @ 10008290 size=76 ---- */

int __thiscall XDRDetectGhostCheckResponse::vfunction5(XDRDetectGhostCheckResponse *this)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRDetectGhostCheckResponse_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_10003650();
  return iVar1 + local_8;
}



/* ---- vfunction6 @ 100082e0 size=86 ---- */

bool __thiscall
XDRDetectGhostCheckResponse::vfunction6(XDRDetectGhostCheckResponse *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->XDRDetectGhostCheckResponse_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_100036b0(param_1,&(this->XDRDetectGhostCheckResponse_data).offset_0x4),
     cVar1 == '\0')) {
    return false;
  }
  cVar1 = FUN_100036b0(param_1,&(this->XDRDetectGhostCheckResponse_data).offset_0x8);
  return cVar1 != '\0';
}



/* ---- scalar_deleting_destructor @ 10008340 size=44 ---- */

undefined4 * __thiscall
XDRDetectGhostCheckRequest::scalar_deleting_destructor
          (XDRDetectGhostCheckRequest *this,uint param_1)

{
  ~XDRDetectGhostCheckRequest(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- XDRTPackLogOutUserNotice @ 10008370 size=165 ---- */

XDRTPackLogOutUserNotice * __thiscall
XDRTPackLogOutUserNotice::XDRTPackLogOutUserNotice(XDRTPackLogOutUserNotice *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->XDRTPackLogOutUserNotice_data).offset_0x0 = 0;
  (this->XDRTPackLogOutUserNotice_data).offset_0x4 = 0xb70d7ba;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x8);
  local_8._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x24);
  local_8 = CONCAT31(local_8._1_3_,2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x40);
  (this->XDRTPackLogOutUserNotice_data).offset_0x5c = 0;
  (this->XDRTPackLogOutUserNotice_data).offset_0x60 = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~XDRTPackLogOutUserNotice @ 10008420 size=128 ---- */

void __thiscall XDRTPackLogOutUserNotice::~XDRTPackLogOutUserNotice(XDRTPackLogOutUserNotice *this)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1000c890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x40);
  local_8._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x24);
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x8);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 100084a0 size=70 ---- */

void __thiscall XDRTPackLogOutUserNotice::vfunction2(XDRTPackLogOutUserNotice *this)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x8,0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x24,0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->XDRTPackLogOutUserNotice_data).field_0x40,0);
  (this->XDRTPackLogOutUserNotice_data).offset_0x5c = 0;
  (this->XDRTPackLogOutUserNotice_data).offset_0x60 = 0;
  return;
}



/* ---- vfunction3 @ 100084f0 size=16 ---- */

undefined4 __thiscall XDRTPackLogOutUserNotice::vfunction3(XDRTPackLogOutUserNotice *this)

{
  return 0xb70d7ba;
}



/* ---- vfunction4 @ 10008500 size=16 ---- */

char * __thiscall XDRTPackLogOutUserNotice::vfunction4(XDRTPackLogOutUserNotice *this)

{
  return "XDRTPackLogOutUserNotice";
}



/* ---- vfunction5 @ 10008510 size=139 ---- */

int __thiscall XDRTPackLogOutUserNotice::vfunction5(XDRTPackLogOutUserNotice *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((this->XDRTPackLogOutUserNotice_data).offset_0x0 == '\0') {
    local_8 = FUN_10003650();
  }
  iVar1 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->XDRTPackLogOutUserNotice_data).field_0x8);
  iVar2 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->XDRTPackLogOutUserNotice_data).field_0x24);
  iVar3 = FUN_10003670((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->XDRTPackLogOutUserNotice_data).field_0x40);
  iVar4 = FUN_10003710();
  return iVar4 + iVar3 + iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 100085a0 size=176 ---- */

uint __thiscall
XDRTPackLogOutUserNotice::vfunction6(XDRTPackLogOutUserNotice *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRTPackLogOutUserNotice_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036b0(param_1,&(this->XDRTPackLogOutUserNotice_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &(this->XDRTPackLogOutUserNotice_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->XDRTPackLogOutUserNotice_data).field_0x24);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10003690(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&(this->XDRTPackLogOutUserNotice_data).field_0x40);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10003750(param_1,&(this->XDRTPackLogOutUserNotice_data).offset_0x5c);
        uVar2 = (uint3)(uVar1 >> 8);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = (uint)uVar2 << 8;
        }
        else {
          uVar1 = CONCAT31(uVar2,1);
        }
      }
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10008650 size=176 ---- */

uint __thiscall
XDRTPackLogOutUserNotice::vfunction7(XDRTPackLogOutUserNotice *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->XDRTPackLogOutUserNotice_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_100036f0(param_1,&(this->XDRTPackLogOutUserNotice_data).offset_0x4),
     (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &(this->XDRTPackLogOutUserNotice_data).field_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->XDRTPackLogOutUserNotice_data).field_0x24);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_100036d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&(this->XDRTPackLogOutUserNotice_data).field_0x40);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10003790(param_1,(undefined8 *)
                                     &(this->XDRTPackLogOutUserNotice_data).offset_0x5c);
        uVar2 = (uint3)(uVar1 >> 8);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = (uint)uVar2 << 8;
        }
        else {
          uVar1 = CONCAT31(uVar2,1);
        }
      }
    }
  }
  return uVar1;
}



/* ---- scalar_deleting_destructor @ 10008700 size=44 ---- */

undefined4 * __thiscall
XDRTPackLogOutUserNotice::scalar_deleting_destructor(XDRTPackLogOutUserNotice *this,uint param_1)

{
  ~XDRTPackLogOutUserNotice(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10008730 @ 10008730 size=53 ---- */

void __thiscall
FUN_10008730(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  return;
}



/* ---- scalar_deleting_destructor @ 10008770 size=44 ---- */

undefined4 * __thiscall
TPACK::Connector::Impl::XDRDispatcher::scalar_deleting_destructor(XDRDispatcher *this,uint param_1)

{
  ~XDRDispatcher(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_100087a0 @ 100087a0 size=23 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall
FUN_100087a0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  return param_1;
}



/* ---- FUN_100087c0 @ 100087c0 size=21 ---- */

void __cdecl FUN_100087c0(undefined4 param_1)

{
  void *this;
  
  this = (void *)FUN_10006e20();
  FUN_100087e0(this,param_1);
  return;
}



/* ---- FUN_100087e0 @ 100087e0 size=53 ---- */

void __thiscall FUN_100087e0(void *this,undefined4 param_1)

{
  undefined4 local_c [2];
  
  FUN_10004840(local_c,this,'\x01');
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  FUN_100048b0(local_c);
  return;
}



/* ---- FUN_10008820 @ 10008820 size=44 ---- */

SchedulingNode * __thiscall FUN_10008820(void *this,uint param_1)

{
  Concurrency::details::SchedulingNode::~SchedulingNode(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- FUN_10008850 @ 10008850 size=44 ---- */

void * __thiscall FUN_10008850(void *this,uint param_1)

{
  FUN_10009400((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}



/* ---- Ordinal_8 @ 1000887c size=6 ---- */

void Ordinal_8(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_8();
  return;
}



/* ---- Ordinal_14 @ 10008882 size=6 ---- */

void Ordinal_14(void)

{
                    /* WARNING: Could not recover jumptable at 0x10008882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_14();
  return;
}



/* ---- __security_check_cookie @ 10008888 size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_10011018) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- what @ 10008898 size=6 ---- */

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10008898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = what(this);
  return pcVar1;
}



/* ---- purecall @ 100088a4 size=6 ---- */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x100088a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}



/* ---- operator_delete @ 100088aa size=6 ---- */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100088aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}



/* ---- FID_conflict:`vector_deleting_destructor' @ 100088b0 size=76 ---- */

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



/* ---- operator_new @ 100088fc size=6 ---- */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100088fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



/* ---- __onexit @ 10008902 size=156 ---- */

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
  
  local_8 = &DAT_1000e0c8;
  uStack_c = 0x1000890e;
  local_20[0] = decode_pointer(DAT_1001177c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_1001177c);
    local_24 = decode_pointer(DAT_10011778);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_1001177c = encode_pointer(local_20[0]);
    DAT_10011778 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_1000899e();
  }
  return p_Var1;
}



/* ---- FUN_1000899e @ 1000899e size=9 ---- */

void FUN_1000899e(void)

{
  _unlock(8);
  return;
}



/* ---- _atexit @ 100089a7 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- __CRT_INIT@12 @ 10008a0d size=550 ---- */

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
    if (DAT_10011418 < 1) {
      return 0;
    }
    DAT_10011418 = DAT_10011418 + -1;
  }
  _DAT_10011768 = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_10011770,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1001176c == 0) {
      DAT_1001176c = 1;
      iVar3 = initterm_e(&DAT_1000d1bc,&DAT_1000d1c4);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_1000d1ac,&DAT_1000d1b8);
      DAT_1001176c = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_10011770,0);
    }
    if ((DAT_10011774 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10011774), BVar4 != 0)) {
      (*DAT_10011774)(param_1,2,param_3);
    }
    DAT_10011418 = DAT_10011418 + 1;
  }
  else if (param_2 == (int *)0x0) {
    iVar3 = *(int *)((int)Self + 4);
    bVar1 = false;
    while (LVar2 = InterlockedCompareExchange((LONG *)&DAT_10011770,iVar3,0), LVar2 != 0) {
      if (LVar2 == iVar3) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_1001176c == 2) {
      param_2 = (int *)decode_pointer(DAT_1001177c);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_10011778);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_1001177c);
            piVar8 = (int *)decode_pointer(DAT_10011778);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_10011778 = encoded_null();
        DAT_1001177c = DAT_10011778;
      }
      DAT_1001176c = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_10011770,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}



/* ---- ___DllMainCRTStartup @ 10008c33 size=240 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int __fastcall ___DllMainCRTStartup(int *param_1,int *param_2,HMODULE param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  _DAT_10011020 = param_2;
  if ((param_2 == (int *)0x0) && (DAT_10011418 == 0)) {
    local_20 = 0;
    goto LAB_10008d25;
  }
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    if (PTR_1000d1f4 != (undefined *)0x0) {
      local_20 = (*(code *)PTR_1000d1f4)(param_3,param_2,param_1);
    }
    if (local_20 == 0) goto LAB_10008d25;
    local_20 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (local_20 == 0) goto LAB_10008d25;
  }
  local_20 = FUN_10009240(param_3,(int)param_2);
  if ((param_2 == (int *)0x1) && (local_20 == 0)) {
    FUN_10009240(param_3,0);
    __CRT_INIT_12(&param_3->unused,(int *)0x0,param_1);
    if (PTR_1000d1f4 != (undefined *)0x0) {
      (*(code *)PTR_1000d1f4)(param_3,0,param_1);
    }
  }
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0x3)) {
    iVar1 = __CRT_INIT_12(&param_3->unused,param_2,param_1);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    if ((local_20 != 0) && (PTR_1000d1f4 != (undefined *)0x0)) {
      local_20 = (*(code *)PTR_1000d1f4)(param_3,param_2,param_1);
    }
  }
LAB_10008d25:
  FUN_10008d3e();
  return local_20;
}



/* ---- FUN_10008d3e @ 10008d3e size=11 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008d3e(void)

{
  _DAT_10011020 = 0xffffffff;
  return;
}



/* ---- entry @ 10008d49 size=35 ---- */

void entry(HMODULE param_1,int *param_2,int *param_3)

{
  if (param_2 == (int *)0x1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- ___report_gsfailure @ 10008d6c size=262 ---- */

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
  
  _DAT_10011538 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1001153c = &uStack00000004;
  _DAT_10011478 = 0x10001;
  _DAT_10011420 = 0xc0000409;
  _DAT_10011424 = 1;
  local_32c = DAT_10011018;
  local_328 = DAT_1001101c;
  _DAT_1001142c = _local_res0;
  _DAT_10011504 = in_GS;
  _DAT_10011508 = in_FS;
  _DAT_1001150c = in_ES;
  _DAT_10011510 = in_DS;
  _DAT_10011514 = unaff_EDI;
  _DAT_10011518 = unaff_ESI;
  _DAT_1001151c = unaff_EBX;
  _DAT_10011520 = in_EDX;
  _DAT_10011524 = in_ECX;
  _DAT_10011528 = in_EAX;
  _DAT_1001152c = unaff_EBP;
  DAT_10011530 = _local_res0;
  _DAT_10011534 = in_CS;
  _DAT_10011540 = in_SS;
  DAT_10011470 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1000d1f8);
  if (DAT_10011470 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- __ArrayUnwind @ 10008e72 size=50 ---- */

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



/* ---- `eh_vector_destructor_iterator' @ 10008ed0 size=75 ---- */

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
  FUN_10008f1b();
  return;
}



/* ---- FUN_10008f1b @ 10008f1b size=24 ---- */

void FUN_10008f1b(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}



/* ---- _unlock @ 10008f34 size=6 ---- */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x10008f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}



/* ---- __dllonexit @ 10008f3a size=6 ---- */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x10008f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}



/* ---- _lock @ 10008f40 size=6 ---- */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x10008f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}



/* ---- __SEH_prolog4 @ 10008f48 size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_10011018 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 10008f8d size=20 ---- */

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



/* ---- FUN_10008fa1 @ 10008fa1 size=37 ---- */

void __cdecl
FUN_10008fa1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_10011018,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



/* ---- __ValidateImageBase @ 10009020 size=53 ---- */

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



/* ---- __FindPESection @ 10009060 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 100090b0 size=166 ---- */

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
  
  pcStack_10 = FUN_10008fa1;
  local_14 = ExceptionList;
  local_c = DAT_10011018 ^ 0x1000e150;
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



/* ---- initterm @ 1000916e size=6 ---- */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000916e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



/* ---- initterm_e @ 10009174 size=6 ---- */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}



/* ---- _amsg_exit @ 1000917a size=6 ---- */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000917a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}



/* ---- __CppXcptFilter @ 10009180 size=6 ---- */

int __cdecl __CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10009180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = __CppXcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}



/* ---- ___security_init_cookie @ 10009186 size=150 ---- */

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
  if ((DAT_10011018 == 0xbb40e64e) || ((DAT_10011018 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10011018 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10011018 == 0xbb40e64e) {
      DAT_10011018 = 0xbb40e64f;
    }
    else if ((DAT_10011018 & 0xffff0000) == 0) {
      DAT_10011018 = DAT_10011018 | DAT_10011018 << 0x10;
    }
  }
  DAT_1001101c = ~DAT_10011018;
  return;
}



/* ---- _crt_debugger_hook @ 1000921c size=6 ---- */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x1000921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}



/* ---- terminate @ 10009222 size=6 ---- */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x10009222. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



/* ---- _type_info_dtor_internal_method @ 10009228 size=6 ---- */

void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x10009228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _type_info_dtor_internal_method(this);
  return;
}



/* ---- except_handler4_common @ 1000922e size=6 ---- */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000922e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}



/* ---- FUN_10009240 @ 10009240 size=49 ---- */

BOOL FUN_10009240(HMODULE param_1,int param_2)

{
  BOOL local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    local_8 = DisableThreadLibraryCalls(param_1);
  }
  return local_8;
}



/* ---- FUN_10009280 @ 10009280 size=34 ---- */

void __fastcall FUN_10009280(LARGE_INTEGER *param_1)

{
  QueryPerformanceFrequency(param_1);
  QueryPerformanceCounter(param_1 + 1);
  return;
}



/* ---- FUN_100092b0 @ 100092b0 size=11 ---- */

void FUN_100092b0(void)

{
  return;
}



/* ---- FUN_100092c0 @ 100092c0 size=22 ---- */

LARGE_INTEGER * __fastcall FUN_100092c0(LARGE_INTEGER *param_1)

{
  FUN_10009280(param_1);
  return param_1;
}



/* ---- FUN_100092e0 @ 100092e0 size=175 ---- */

void __thiscall FUN_100092e0(void *this,char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_44;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c19a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == (char *)0x0) {
    local_44 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)this + 4);
  }
  else {
    local_44 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30,param_1);
    local_8 = 0;
  }
  local_14 = local_44;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 4),
             local_44);
  local_8 = 0xffffffff;
  if (param_1 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_30);
  }
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10009390 @ 10009390 size=23 ---- */

void __fastcall FUN_10009390(int param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  return;
}



/* ---- FUN_100093b0 @ 100093b0 size=45 ---- */

void __thiscall FUN_100093b0(void *this,int param_1)

{
  int local_c;
  
  if (param_1 < 1) {
    local_c = *(int *)this;
  }
  else {
    local_c = param_1;
  }
  *(int *)this = local_c;
  return;
}



/* ---- FUN_100093e0 @ 100093e0 size=16 ---- */

undefined4 __fastcall FUN_100093e0(undefined4 *param_1)

{
  return *param_1;
}



/* ---- FUN_100093f0 @ 100093f0 size=11 ---- */

void FUN_100093f0(void)

{
  return;
}



/* ---- FUN_10009400 @ 10009400 size=99 ---- */

void __fastcall FUN_10009400(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000c1c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_100093f0();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x20));
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10009470 @ 10009470 size=117 ---- */

undefined4 * __fastcall FUN_10009470(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c5a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 3000;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100087c0(1);
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_100094f0 @ 100094f0 size=132 ---- */

uint __cdecl FUN_100094f0(_THandle *param_1)

{
  int iVar1;
  uint uVar2;
  uint3 uVar3;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = XStream::GetLength(param_1);
  if (iVar1 < 4) {
    local_c = XStream::GetLength(param_1);
    uVar2 = 0;
    if (local_c != 0) {
      local_10 = 0;
      uVar2 = XStream::Peek(param_1,&local_10,local_c);
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    local_8 = 0;
    XStream::Peek(param_1,&local_8,4);
    local_8 = Ordinal_14(local_8);
    iVar1 = XStream::GetLength(param_1);
    uVar3 = (uint3)((uint)(iVar1 + -4) >> 8);
    if (iVar1 + -4 < local_8) {
      uVar2 = (uint)uVar3 << 8;
    }
    else {
      uVar2 = CONCAT31(uVar3,1);
    }
  }
  return uVar2;
}



/* ---- ~Dispatcher @ 10009580 size=20 ---- */

void __thiscall TPACK::Connector::Impl::Dispatcher::~Dispatcher(Dispatcher *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- Dispatcher @ 100095a0 size=23 ---- */

Dispatcher * __thiscall TPACK::Connector::Impl::Dispatcher::Dispatcher(Dispatcher *this)

{
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_100095c0 @ 100095c0 size=80 ---- */

undefined4 * __cdecl FUN_100095c0(int param_1,undefined4 param_2)

{
  XDRDispatcher *this;
  XDRDispatcher *local_14;
  
  if (param_1 == 1) {
    this = operator_new(8);
    if (this == (XDRDispatcher *)0x0) {
      local_14 = (XDRDispatcher *)0x0;
    }
    else {
      local_14 = TPACK::Connector::Impl::XDRDispatcher::XDRDispatcher(this,param_2);
    }
  }
  else {
    local_14 = (XDRDispatcher *)0x0;
  }
  return &local_14->vftablePtr;
}



/* ---- ~Delivery @ 10009610 size=20 ---- */

void __thiscall TPACK::Connector::Impl::Delivery::~Delivery(Delivery *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- Delivery @ 10009630 size=23 ---- */

Delivery * __thiscall TPACK::Connector::Impl::Delivery::Delivery(Delivery *this)

{
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10009650 @ 10009650 size=80 ---- */

undefined4 * __cdecl FUN_10009650(int param_1,undefined4 param_2)

{
  XDRDelivery *this;
  XDRDelivery *local_14;
  
  if (param_1 == 1) {
    this = operator_new(8);
    if (this == (XDRDelivery *)0x0) {
      local_14 = (XDRDelivery *)0x0;
    }
    else {
      local_14 = TPACK::Connector::Impl::XDRDelivery::XDRDelivery(this,param_2);
    }
  }
  else {
    local_14 = (XDRDelivery *)0x0;
  }
  return &local_14->vftablePtr;
}



/* ---- FUN_100096a0 @ 100096a0 size=100 ---- */

void FUN_100096a0(undefined4 param_1,_THandle *param_2,int param_3)

{
  _THandle *p_Var1;
  uint uVar2;
  
  p_Var1 = XInNetwork::Link::LockReadStream(param_2);
  while( true ) {
    uVar2 = FUN_100094f0(p_Var1);
    if ((uVar2 & 0xff) == 0) break;
    (**(code **)(**(int **)(param_3 + 0x50) + 4))(p_Var1);
  }
  XInNetwork::Link::UnlockReadStream(param_2);
  XInNetwork::Link::Recv(param_2,0x400);
  return;
}



/* ---- FUN_10009710 @ 10009710 size=47 ---- */

void FUN_10009710(undefined4 param_1,undefined4 param_2,int param_3)

{
  (**(code **)(**(int **)(param_3 + 0x50) + 8))();
  XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(param_3 + 0x4c));
  return;
}



/* ---- FUN_10009740 @ 10009740 size=110 ---- */

undefined4 __fastcall FUN_10009740(int param_1)

{
  bool bVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (param_1 + 0x2c));
  iVar4 = atoi(pcVar3);
  uVar2 = (ushort)iVar4;
  pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (param_1 + 0x10));
  bVar1 = XInNetwork::Connector::Connect(*(_THandle **)(param_1 + 8),pcVar3,uVar2);
  if (bVar1) {
    XSystem::Threading::AutoResetEvent::Wait((AutoResetEvent *)(param_1 + 0x48),10000);
    XPlatform::SetLastError(0);
    uVar5 = 0;
  }
  else {
    XPlatform::SetLastError(0x40113);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ---- FUN_100097b0 @ 100097b0 size=212 ---- */

void FUN_100097b0(undefined4 param_1,_THandle *param_2,int param_3)

{
  undefined4 local_1c [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c286;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != (_THandle *)0x0) {
    local_14 = param_3;
    if (*(int *)(param_3 + 0xc) != 0) {
      FUN_10004840(local_1c,param_3 + 4,'\x01');
      local_8 = 0;
      if (*(int *)(local_14 + 0xc) != 0) {
        XInNetwork::Link::Close(*(_THandle **)(local_14 + 0xc));
        XInNetwork::Link::Release(*(_THandle **)(local_14 + 0xc));
        *(undefined4 *)(local_14 + 0xc) = 0;
      }
      local_8 = 0xffffffff;
      FUN_100048b0(local_1c);
    }
    XInNetwork::Link::AddRef(param_2);
    *(_THandle **)(local_14 + 0xc) = param_2;
    XInNetwork::Link::Recv(*(_THandle **)(local_14 + 0xc),0x400);
    XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(local_14 + 0x48));
  }
  ExceptionList = local_10;
  return;
}



/* ---- vfunction4 @ 10009890 size=218 ---- */

undefined4 __thiscall
TPACK::Connector::Impl::TCPSocket::vfunction4(TCPSocket *this,_THandle *param_1)

{
  _XMemory *p_Var1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c2a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004840(local_18,&this->TCPSocket_data,'\x01');
  local_8 = 0;
  if ((this->TCPSocket_data).offset_0x8 == (_THandle *)0x0) {
    XPlatform::SetLastError(0x40112);
    local_20 = 0xffffffff;
    local_8 = 0xffffffff;
    FUN_100048b0(local_18);
    local_1c = local_20;
  }
  else {
    p_Var1 = XStream::GetXMemory(param_1);
    iVar2 = XInNetwork::Link::Send((this->TCPSocket_data).offset_0x8,p_Var1);
    if (iVar2 < 0) {
      local_1c = 0xffffffff;
      local_8 = 0xffffffff;
      FUN_100048b0(local_18);
    }
    else {
      XPlatform::SetLastError(0);
      local_24 = 0;
      local_8 = 0xffffffff;
      FUN_100048b0(local_18);
      local_1c = local_24;
    }
  }
  ExceptionList = local_10;
  return local_1c;
}



/* ---- vfunction3 @ 10009970 size=175 ---- */

undefined4 __thiscall TPACK::Connector::Impl::TCPSocket::vfunction3(TCPSocket *this)

{
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c2cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((this->TCPSocket_data).offset_0x8 != (_THandle *)0x0) {
    FUN_10004840(local_18,&this->TCPSocket_data,'\x01');
    local_8 = 0;
    if ((this->TCPSocket_data).offset_0x8 != (_THandle *)0x0) {
      XInNetwork::Link::Close((this->TCPSocket_data).offset_0x8);
      XSystem::Threading::AutoResetEvent::Wait
                ((AutoResetEvent *)&(this->TCPSocket_data).field_0x48,10000);
      XInNetwork::Link::Release((this->TCPSocket_data).offset_0x8);
      (this->TCPSocket_data).offset_0x8 = (_THandle *)0x0;
    }
    local_8 = 0xffffffff;
    FUN_100048b0(local_18);
  }
  XPlatform::SetLastError(0);
  ExceptionList = local_10;
  return 0;
}



/* ---- vfunction2 @ 10009a20 size=174 ---- */

void __thiscall
TPACK::Connector::Impl::TCPSocket::vfunction2(TCPSocket *this,char *param_1,char *param_2)

{
  bool bVar1;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c2ef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::empty
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     &(this->TCPSocket_data).field_0xc);
  if (bVar1) {
    FUN_10004840(local_18,&this->TCPSocket_data,'\x01');
    local_8 = 0;
    bVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::empty
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       &(this->TCPSocket_data).field_0xc);
    if (bVar1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 &(this->TCPSocket_data).field_0xc,param_1);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 &(this->TCPSocket_data).field_0x28,param_2);
    }
    local_8 = 0xffffffff;
    FUN_100048b0(local_18);
  }
  FUN_10009740((int)this);
  ExceptionList = local_10;
  return;
}



/* ---- ~TCPSocket @ 10009ad0 size=190 ---- */

void __thiscall TPACK::Connector::Impl::TCPSocket::~TCPSocket(TCPSocket *this)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1000c379;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 5;
  vfunction3(this);
  XInNetwork::Connector::DestroyHandle((this->TCPSocket_data).offset_0x4);
  FUN_10006e00();
  local_8._0_1_ = 4;
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)&(this->TCPSocket_data).field_0x48);
  local_8._0_1_ = 3;
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)&(this->TCPSocket_data).field_0x44);
  local_8._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->TCPSocket_data).field_0x28);
  local_8._0_1_ = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->TCPSocket_data).field_0xc);
  local_8 = (uint)local_8._1_3_ << 8;
  XSystem::Threading::CriticalSection::~CriticalSection((CriticalSection *)&this->TCPSocket_data);
  local_8 = 0xffffffff;
  Socket::~Socket((Socket *)this);
  ExceptionList = local_10;
  return;
}



/* ---- TCPSocket @ 10009b90 size=367 ---- */

TCPSocket * __thiscall
TPACK::Connector::Impl::TCPSocket::TCPSocket(TCPSocket *this,undefined4 param_1)

{
  _THandle *p_Var1;
  _THandle *p_Var2;
  _func_void__THandle_ptr__THandle_ptr_void_ptr *local_20;
  _func_void__THandle_ptr__THandle_ptr_void_ptr *local_1c;
  _func_void__THandle_ptr__THandle_ptr_void_ptr *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c3d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Socket::Socket((Socket *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  XSystem::Threading::CriticalSection::CriticalSection
            ((CriticalSection *)&this->TCPSocket_data,4000);
  local_8._0_1_ = 1;
  (this->TCPSocket_data).offset_0x4 = (_THandle *)0x0;
  (this->TCPSocket_data).offset_0x8 = (_THandle *)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->TCPSocket_data).field_0xc);
  local_8._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->TCPSocket_data).field_0x28);
  local_8._0_1_ = 3;
  XSystem::Threading::AutoResetEvent::AutoResetEvent
            ((AutoResetEvent *)&(this->TCPSocket_data).field_0x44,false);
  local_8._0_1_ = 4;
  XSystem::Threading::AutoResetEvent::AutoResetEvent
            ((AutoResetEvent *)&(this->TCPSocket_data).field_0x48,false);
  local_8 = CONCAT31(local_8._1_3_,5);
  (this->TCPSocket_data).offset_0x4c = param_1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::clear
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->TCPSocket_data).field_0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::clear
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->TCPSocket_data).field_0x28);
  p_Var1 = (_THandle *)FUN_10006de0();
  p_Var2 = XInNetwork::Connector::CreateHandle(p_Var1);
  (this->TCPSocket_data).offset_0x4 = p_Var2;
  if ((this->TCPSocket_data).offset_0x4 == (_THandle *)0x0) {
    local_14 = XPlatform::GetLastError();
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_14,(ThrowInfo *)&DAT_1000e2e8);
  }
  local_18 = FUN_100097b0;
  XInNetwork::Connector::SetOnConnected((this->TCPSocket_data).offset_0x4,&local_18,this);
  local_1c = FUN_10009710;
  XInNetwork::Connector::SetOnDisconnected((this->TCPSocket_data).offset_0x4,&local_1c,this);
  local_20 = FUN_100096a0;
  XInNetwork::Connector::SetOnReceived((this->TCPSocket_data).offset_0x4,&local_20,this);
  ExceptionList = local_10;
  return this;
}



/* ---- ~Socket @ 10009d00 size=20 ---- */

void __thiscall TPACK::Connector::Impl::Socket::~Socket(Socket *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- Socket @ 10009d20 size=23 ---- */

Socket * __thiscall TPACK::Connector::Impl::Socket::Socket(Socket *this)

{
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10009d40 @ 10009d40 size=141 ---- */

undefined4 * FUN_10009d40(int param_1,undefined4 param_2)

{
  TCPSocket *this;
  undefined4 *puVar1;
  TCPSocket *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000c3fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 1) {
    puVar1 = (undefined4 *)FUN_10009dda();
    return puVar1;
  }
  this = operator_new(0x54);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this == (TCPSocket *)0x0) {
    local_2c = (TCPSocket *)0x0;
  }
  else {
    local_2c = TPACK::Connector::Impl::TCPSocket::TCPSocket(this,param_2);
  }
  ExceptionList = local_10;
  return &local_2c->vftablePtr;
}



/* ---- Catch_All@10009dcd @ 10009dcd size=13 ---- */

undefined4 Catch_All_10009dcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x10009de1;
}



/* ---- FUN_10009dda @ 10009dda size=27 ---- */

undefined4 FUN_10009dda(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}



/* ---- FUN_10009e00 @ 10009e00 size=167 ---- */

bool FUN_10009e00(int param_1,uint param_2)

{
  bool local_21;
  LARGE_INTEGER local_20 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c1e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100092c0(local_20);
  local_8 = 0;
  local_21 = XSystem::Threading::AutoResetEvent::Wait((AutoResetEvent *)(param_1 + 4),param_2);
  if (local_21) {
    XPlatform::SetLastError(*(uint *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x28) != 0) {
      local_21 = false;
    }
  }
  else {
    XPlatform::SetLastError(0x40105);
    local_21 = false;
  }
  local_8 = 0xffffffff;
  FUN_100092b0();
  ExceptionList = local_10;
  return local_21;
}



/* ---- FUN_10009eb0 @ 10009eb0 size=644 ---- */

uint __thiscall FUN_10009eb0(void *this,int param_1)

{
  uint uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  _THandle *p_Var3;
  undefined4 *local_c0;
  int local_b4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_ac [28];
  undefined4 local_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8c [32];
  void *local_6c;
  undefined4 *local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [28];
  undefined4 local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [32];
  void *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c23d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = operator_new(0x4c);
  local_8 = 0;
  if (local_24 == (void *)0x0) {
    local_b4 = 0;
  }
  else {
    local_b4 = FUN_10003c10((int)local_24);
  }
  local_20 = local_b4;
  local_8 = 0xffffffff;
  *(int *)this = local_b4;
  if (*(int *)this == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    **(undefined4 **)this = 0;
    local_48 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_64,"");
    local_8 = 1;
    pbVar2 = FUN_10004810(local_44,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)local_64,&local_48);
    local_8._0_1_ = 2;
    FUN_10003ca0((void *)(*(int *)this + 8),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 pbVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_10003c80(local_44);
    local_8 = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_64);
    p_Var3 = XStream::CreateHandle();
    *(_THandle **)(*(int *)this + 0x48) = p_Var3;
    for (local_1c = 1; local_1c < param_1; local_1c = local_1c + 1) {
      local_6c = operator_new(0x4c);
      local_8 = 3;
      if (local_6c == (void *)0x0) {
        local_c0 = (undefined4 *)0x0;
      }
      else {
        local_c0 = (undefined4 *)FUN_10003c10((int)local_6c);
      }
      local_68 = local_c0;
      local_8 = 0xffffffff;
      local_18 = local_c0;
      if (local_c0 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return 0;
      }
      p_Var3 = XStream::CreateHandle();
      local_18[0x12] = p_Var3;
      *local_18 = *(undefined4 *)this;
      *(undefined4 **)this = local_18;
      local_90 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_ac,"");
      local_8 = 4;
      pbVar2 = FUN_10004810(local_8c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                      *)local_ac,&local_90);
      local_8._0_1_ = 5;
      FUN_10003ca0(local_18 + 2,
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   pbVar2);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_10003c80(local_8c);
      local_8 = 0xffffffff;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_ac);
    }
    for (local_18 = *(undefined4 **)this; local_18 != (undefined4 *)0x0;
        local_18 = (undefined4 *)*local_18) {
    }
    uVar1 = 1;
  }
  ExceptionList = local_10;
  return uVar1;
}



/* ---- FUN_1000a140 @ 1000a140 size=403 ---- */

void __fastcall FUN_1000a140(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_50 [2];
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined4 local_30 [2];
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c31a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004840(local_18,param_1 + 2,'\x01');
  local_8 = 0;
  FUN_10003f00(param_1 + 3,&local_20);
  while( true ) {
    piVar2 = FUN_10003f30(param_1 + 3,local_40);
    bVar1 = FUN_100049a0(&local_20,piVar2);
    if (!bVar1) break;
    iVar3 = FUN_10004930(&local_20);
    local_24 = *(void **)(iVar3 + 0x20);
    XStream::DestroyHandle(*(_THandle **)((int)local_24 + 0x48));
    local_48 = local_20;
    local_44 = local_1c;
    FUN_10003f60(param_1 + 3,local_50,local_20,local_1c);
    if (local_24 != (void *)0x0) {
      FUN_10003cd0(local_24,1);
    }
    piVar2 = FUN_10003f00(param_1 + 3,local_38);
    local_20 = *piVar2;
    local_1c = piVar2[1];
  }
  local_8 = 0xffffffff;
  FUN_100048b0(local_18);
  FUN_10004840(local_30,param_1 + 1,'\x01');
  local_8 = 1;
  local_28 = (void *)*param_1;
  while (local_28 != (void *)0x0) {
    *param_1 = *(int *)*param_1;
    XStream::DestroyHandle(*(_THandle **)((int)local_28 + 0x48));
    if (local_28 != (void *)0x0) {
      FUN_10003cd0(local_28,1);
    }
    local_28 = (void *)*param_1;
  }
  local_8 = 0xffffffff;
  FUN_100048b0(local_30);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_1000a2e0 @ 1000a2e0 size=433 ---- */

void __thiscall
FUN_1000a2e0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_80 [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78 [28];
  undefined4 local_5c;
  LARGE_INTEGER local_58 [2];
  undefined4 local_48 [2];
  int local_40 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [32];
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c43a;
  local_10 = ExceptionList;
  local_18 = DAT_10011018 ^ (uint)(local_38 + 0x34);
  ExceptionList = &local_10;
  local_5c = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78,param_1);
  local_8 = 0;
  FUN_10004810(local_38,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)local_78,&local_5c);
  local_8._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_78);
  FUN_100092c0(local_58);
  local_8._0_1_ = 3;
  FUN_10004840(local_48,(int)this + 8,'\x01');
  local_8._0_1_ = 4;
  FUN_10004740((void *)((int)this + 0xc),local_40,local_38);
  piVar2 = FUN_10003f30((void *)((int)this + 0xc),local_80);
  uVar3 = FUN_10004950(local_40,piVar2);
  if ((uVar3 & 0xff) == 0) {
    iVar4 = FUN_10004930(local_40);
    local_14 = *(int *)(iVar4 + 0x20);
    *(undefined4 *)(local_14 + 0x28) = param_3;
    if (param_4 != (int *)0x0) {
      cVar1 = (**(code **)(*param_4 + 0x14))(*(undefined4 *)(local_14 + 0x48));
      if (cVar1 == '\0') {
        local_8._0_1_ = 3;
        FUN_100048b0(local_48);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_100092b0();
        local_8 = 0xffffffff;
        FUN_10003c80(local_38);
        goto LAB_1000a478;
      }
    }
    XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(local_14 + 4));
    local_8._0_1_ = 3;
    FUN_100048b0(local_48);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_100092b0();
    local_8 = 0xffffffff;
    FUN_10003c80(local_38);
  }
  else {
    local_8._0_1_ = 3;
    FUN_100048b0(local_48);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_100092b0();
    local_8 = 0xffffffff;
    FUN_10003c80(local_38);
  }
LAB_1000a478:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)(local_38 + 0x34));
  return;
}



/* ---- FUN_1000a4a0 @ 1000a4a0 size=513 ---- */

undefined1 __thiscall FUN_1000a4a0(void *this,undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_94 [28];
  undefined4 local_78;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_74 [35];
  undefined1 local_51;
  undefined4 local_50 [2];
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined4 local_38 [2];
  LARGE_INTEGER local_30 [2];
  undefined4 local_20 [2];
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c48b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100092c0(local_30);
  local_8 = 0;
  FUN_10004840(local_20,(int)this + 8,'\x01');
  local_8._0_1_ = 1;
  FUN_10004740((void *)((int)this + 0xc),&local_18,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2));
  piVar2 = FUN_10003f30((void *)((int)this + 0xc),local_40);
  bVar1 = FUN_100049a0(&local_18,piVar2);
  if (bVar1) {
    local_48 = local_18;
    local_44 = local_14;
    FUN_10003f60((void *)((int)this + 0xc),local_50,local_18,local_14);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100048b0(local_20);
    local_8 = 0xffffffff;
    FUN_100092b0();
    FUN_10004840(local_38,(int)this + 4,'\x01');
    local_8 = 2;
    XSystem::Threading::AutoResetEvent::Reset((AutoResetEvent *)(param_1 + 1));
    local_78 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_94,"");
    local_8._0_1_ = 3;
    pbVar3 = FUN_10004810(local_74,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)local_94,&local_78);
    local_8._0_1_ = 4;
    FUN_10003ca0(param_1 + 2,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 pbVar3);
    local_8._0_1_ = 3;
    FUN_10003c80(local_74);
    local_8 = CONCAT31(local_8._1_3_,2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_94);
    param_1[10] = 0xffffffff;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xb),""
              );
    *param_1 = *(undefined4 *)this;
    XStream::Clear((_THandle *)param_1[0x12]);
    *(undefined4 **)this = param_1;
    local_8 = 0xffffffff;
    FUN_100048b0(local_38);
    local_51 = 1;
  }
  else {
    XPlatform::SetLastError(0x4010f);
    local_51 = 0;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100048b0(local_20);
    local_8 = 0xffffffff;
    FUN_100092b0();
  }
  ExceptionList = local_10;
  return local_51;
}



/* ---- FUN_1000a6b0 @ 1000a6b0 size=648 ---- */

bool __thiscall FUN_1000a6b0(void *this,undefined4 *param_1,char *param_2,undefined4 param_3)

{
  _THandle *p_Var1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined4 *local_a8;
  undefined1 local_9c [8];
  undefined4 local_94 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8c [28];
  undefined4 local_70;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_6c [35];
  undefined1 local_49;
  void *local_48;
  undefined4 *local_44;
  LARGE_INTEGER local_40 [2];
  undefined4 local_2c [2];
  undefined4 local_24 [2];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c4e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004910(&local_18);
  *param_1 = 0;
  FUN_10004840(local_24,(int)this + 4,'\x01');
  local_8 = 0;
  if (*(int *)this == 0) {
    local_48 = operator_new(0x4c);
    local_8._0_1_ = 1;
    if (local_48 == (void *)0x0) {
      local_a8 = (undefined4 *)0x0;
    }
    else {
      local_a8 = (undefined4 *)FUN_10003c10((int)local_48);
    }
    local_44 = local_a8;
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = local_a8;
    if (local_a8 == (undefined4 *)0x0) {
      local_49 = 0;
      local_8 = 0xffffffff;
      FUN_100048b0(local_24);
      ExceptionList = local_10;
      return (bool)local_49;
    }
    p_Var1 = XStream::CreateHandle();
    local_1c[0x12] = p_Var1;
  }
  else {
    local_1c = *(undefined4 **)this;
    *(undefined4 *)this = **(undefined4 **)this;
  }
  local_8 = 0xffffffff;
  FUN_100048b0(local_24);
  *local_1c = 0;
  local_70 = param_3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8c,param_2);
  local_8 = 2;
  pbVar2 = FUN_10004810(local_6c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  *)local_8c,&local_70);
  local_8._0_1_ = 3;
  FUN_10003ca0(local_1c + 2,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               pbVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10003c80(local_6c);
  local_8 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8c);
  local_1c[10] = 0xffffffff;
  FUN_100092c0(local_40);
  local_8 = 4;
  FUN_10004840(local_2c,(int)this + 8,'\x01');
  local_8._0_1_ = 5;
  puVar3 = FUN_10004740((void *)((int)this + 0xc),local_94,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (local_1c + 2));
  local_18 = *puVar3;
  local_14 = puVar3[1];
  piVar4 = FUN_10003f30((void *)((int)this + 0xc),local_9c);
  uVar5 = FUN_10004950(&local_18,piVar4);
  bVar6 = (uVar5 & 0xff) == 0;
  if (bVar6) {
    XPlatform::SetLastError(0x4010d);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_100048b0(local_2c);
    local_8 = 0xffffffff;
    FUN_100092b0();
  }
  else {
    puVar3 = (undefined4 *)
             FUN_10003da0((void *)((int)this + 0xc),
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (local_1c + 2));
    *puVar3 = local_1c;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_100048b0(local_2c);
    local_8 = 0xffffffff;
    FUN_100092b0();
    *param_1 = local_1c;
  }
  ExceptionList = local_10;
  return !bVar6;
}



/* ---- FUN_1000a940 @ 1000a940 size=133 ---- */

void * __fastcall FUN_1000a940(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c521;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)((int)param_1 + 4),4000);
  local_8 = 0;
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)((int)param_1 + 8),4000);
  local_8._0_1_ = 1;
  FUN_10003d70((void *)((int)param_1 + 0xc));
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10009eb0(param_1,0x20);
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_1000a9d0 @ 1000a9d0 size=118 ---- */

void __fastcall FUN_1000a9d0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1000c677;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  FUN_1000a140(param_1);
  local_8._0_1_ = 1;
  FUN_10003bf0(param_1 + 3);
  local_8 = (uint)local_8._1_3_ << 8;
  XSystem::Threading::CriticalSection::~CriticalSection((CriticalSection *)(param_1 + 2));
  local_8 = 0xffffffff;
  XSystem::Threading::CriticalSection::~CriticalSection((CriticalSection *)(param_1 + 1));
  ExceptionList = local_10;
  return;
}



/* ---- FUN_1000aa50 @ 1000aa50 size=10 ---- */

void FUN_1000aa50(void)

{
  FUN_100049d0();
  return;
}



/* ---- SetGameID @ 1000aa60 size=28 ---- */

/* void __stdcall TPACK::Environment::SetGameID(struct TPACK::Environment::_Handle *,char const *)
    */

void TPACK::Environment::SetGameID(_Handle *param_1,char *param_2)

{
                    /* 0xaa60  10  ?SetGameID@Environment@TPACK@@YGXPAU_Handle@12@PBD@Z */
  FUN_100092e0(param_1,param_2);
  return;
}



/* ---- SetTimeout @ 1000aa80 size=28 ---- */

/* void __stdcall TPACK::Environment::SetTimeout(struct TPACK::Environment::_Handle *,int) */

void TPACK::Environment::SetTimeout(_Handle *param_1,int param_2)

{
                    /* 0xaa80  11  ?SetTimeout@Environment@TPACK@@YGXPAU_Handle@12@H@Z */
  FUN_100093b0(param_1,param_2);
  return;
}



/* ---- DestroyHandle @ 1000aaa0 size=66 ---- */

/* void __stdcall TPACK::Environment::DestroyHandle(struct TPACK::Environment::_Handle *) */

void TPACK::Environment::DestroyHandle(_Handle *param_1)

{
                    /* 0xaaa0  6  ?DestroyHandle@Environment@TPACK@@YGXPAU_Handle@12@@Z */
  FUN_100093f0();
  if (param_1 != (_Handle *)0x0) {
    FUN_10008850(param_1,1);
  }
  return;
}



/* ---- CreateHandle @ 1000aaf0 size=120 ---- */

/* struct TPACK::Environment::_Handle * __stdcall TPACK::Environment::CreateHandle(void) */

_Handle * TPACK::Environment::CreateHandle(void)

{
  undefined4 *puVar1;
  _Handle *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xaaf0  4  ?CreateHandle@Environment@TPACK@@YGPAU_Handle@12@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c6c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x3c);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    local_20 = (_Handle *)0x0;
  }
  else {
    local_20 = (_Handle *)FUN_10009470(puVar1);
  }
  ExceptionList = local_10;
  return local_20;
}



/* ---- vfunction3 @ 1000ab70 size=35 ---- */

void __thiscall TPACK::Connector::Impl::XDRDispatcher::vfunction3(XDRDispatcher *this)

{
  if ((this->XDRDispatcher_data).offset_0x0 != 0) {
    FUN_10002140((void *)(this->XDRDispatcher_data).offset_0x0,0);
  }
  return;
}



/* ---- ~XDRDispatcher @ 1000aba0 size=28 ---- */

void __thiscall TPACK::Connector::Impl::XDRDispatcher::~XDRDispatcher(XDRDispatcher *this)

{
  this->vftablePtr = &vftable;
  Dispatcher::~Dispatcher((Dispatcher *)this);
  return;
}



/* ---- XDRDispatcher @ 1000abc0 size=42 ---- */

XDRDispatcher * __thiscall
TPACK::Connector::Impl::XDRDispatcher::XDRDispatcher(XDRDispatcher *this,undefined4 param_1)

{
  Dispatcher::Dispatcher((Dispatcher *)this);
  this->vftablePtr = &vftable;
  (this->XDRDispatcher_data).offset_0x0 = param_1;
  return this;
}



/* ---- vfunction2 @ 1000abf0 size=895 ---- */

void __thiscall
TPACK::Connector::Impl::XDRDispatcher::vfunction2(XDRDispatcher *this,_THandle *param_1)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  XDRAuthSessionResponse *pXVar4;
  undefined1 *puVar5;
  XDRTPackLogOutUserNotice local_2c0;
  XDRDetectGhostCheckRequest local_258;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_248 [40];
  undefined1 local_220 [136];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_198 [40];
  undefined1 local_170 [168];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_c8 [40];
  XDRAuthSessionResponse local_a0 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_7c [28];
  undefined4 local_60;
  undefined4 local_24;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c7cf;
  local_10 = ExceptionList;
  uVar2 = DAT_10011018 ^ (uint)(local_7c + 0x78);
  ExceptionList = &local_10;
  local_14 = 0;
  local_1c = uVar2;
  XStream::Read(param_1,&local_14,4);
  local_14 = Ordinal_14(local_14,uVar2);
  local_18 = 0;
  XStream::Peek(param_1,&local_18,4);
  local_18 = Ordinal_14(local_18);
  if (local_18 < 0xa36b7bb) {
    if (local_18 == 0xa36b7ba) {
      XDRAuthSessionResponse::XDRAuthSessionResponse(local_a0);
      local_8 = 0;
      bVar1 = XDRAuthSessionResponse::vfunction7(local_a0,param_1);
      if (bVar1) {
        FUN_100087a0(local_c8);
        local_8._0_1_ = 1;
        pXVar4 = local_a0;
        pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                           (local_7c);
        FUN_10008730(local_c8,pcVar3,local_60,local_24,pXVar4);
        FUN_1000b670(local_c8);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10003c80(local_c8);
      }
      local_8 = 0xffffffff;
      XDRAuthSessionResponse::~XDRAuthSessionResponse(local_a0);
      goto LAB_1000af52;
    }
    if (local_18 == 0x3d6f36a) {
      XDRDetectGhostCheckRequest::XDRDetectGhostCheckRequest(&local_258);
      local_8 = 6;
      bVar1 = XDRDetectGhostCheckResponse::vfunction7
                        ((XDRDetectGhostCheckResponse *)&local_258,param_1);
      if (bVar1) {
        FUN_1000b280((this->XDRDispatcher_data).offset_0x0);
      }
      local_8 = 0xffffffff;
      XDRDetectGhostCheckRequest::~XDRDetectGhostCheckRequest(&local_258);
      goto LAB_1000af52;
    }
    if (local_18 == 0x5e78e3a) {
      XDRTPackLoginResponse::XDRTPackLoginResponse((XDRTPackLoginResponse *)local_170);
      local_8 = 2;
      uVar2 = XDRTPackLoginResponse::vfunction7((XDRTPackLoginResponse *)local_170,param_1);
      if ((uVar2 & 0xff) != 0) {
        FUN_100087a0(local_198);
        local_8._0_1_ = 3;
        puVar5 = local_170;
        pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                           ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (local_170 + 0x24));
        FUN_10008730(local_198,pcVar3,local_170._64_4_,local_170._124_4_,puVar5);
        FUN_1000b670(local_198);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_10003c80(local_198);
      }
      local_8 = 0xffffffff;
      XDRTPackLoginResponse::~XDRTPackLoginResponse((XDRTPackLoginResponse *)local_170);
      goto LAB_1000af52;
    }
  }
  else if (local_18 == 0xb70d7ba) {
    XDRTPackLogOutUserNotice::XDRTPackLogOutUserNotice(&local_2c0);
    local_8 = 7;
    uVar2 = XDRTPackLogOutUserNotice::vfunction7(&local_2c0,param_1);
    if ((uVar2 & 0xff) != 0) {
      FUN_1000b2e0((void *)(this->XDRDispatcher_data).offset_0x0);
    }
    local_8 = 0xffffffff;
    XDRTPackLogOutUserNotice::~XDRTPackLogOutUserNotice(&local_2c0);
  }
  else if (local_18 == 0xbdd2b3a) {
    XDRTPackLogoutResponse::XDRTPackLogoutResponse((XDRTPackLogoutResponse *)local_220);
    local_8 = 4;
    uVar2 = XDRTPackLogoutResponse::vfunction7((XDRTPackLogoutResponse *)local_220,param_1);
    if ((uVar2 & 0xff) != 0) {
      FUN_100087a0(local_248);
      local_8._0_1_ = 5;
      puVar5 = local_220;
      pcVar3 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::c_str
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          (local_220 + 0x24));
      FUN_10008730(local_248,pcVar3,local_220._64_4_,local_220._124_4_,puVar5);
      FUN_1000b670(local_248);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_10003c80(local_248);
    }
    local_8 = 0xffffffff;
    XDRTPackLogoutResponse::~XDRTPackLogoutResponse((XDRTPackLogoutResponse *)local_220);
    goto LAB_1000af52;
  }
  XStream::GetLength(param_1);
  XStream::Clear(param_1);
LAB_1000af52:
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)(local_7c + 0x78));
  return;
}



/* ---- ~XDRDelivery @ 1000af70 size=28 ---- */

void __thiscall TPACK::Connector::Impl::XDRDelivery::~XDRDelivery(XDRDelivery *this)

{
  this->vftablePtr = &vftable;
  Delivery::~Delivery((Delivery *)this);
  return;
}



/* ---- XDRDelivery @ 1000af90 size=42 ---- */

XDRDelivery * __thiscall
TPACK::Connector::Impl::XDRDelivery::XDRDelivery(XDRDelivery *this,undefined4 param_1)

{
  Delivery::Delivery((Delivery *)this);
  this->vftablePtr = &vftable;
  (this->XDRDelivery_data).offset_0x0 = param_1;
  return this;
}



/* ---- vfunction5 @ 1000afc0 size=110 ---- */

uint __thiscall TPACK::Connector::Impl::XDRDelivery::vfunction5(XDRDelivery *this)

{
  undefined4 uVar1;
  undefined4 extraout_EAX;
  XDRDetectGhostCheckResponse local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c263;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDRDetectGhostCheckResponse::XDRDetectGhostCheckResponse(&local_20);
  local_8 = 0;
  local_20.XDRDetectGhostCheckResponse_data.offset_0x8 = 0;
  uVar1 = FUN_10007be0(this,(int *)&local_20);
  local_8 = 0xffffffff;
  XDRDetectGhostCheckResponse::~XDRDetectGhostCheckResponse(&local_20);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),(char)uVar1);
}



/* ---- vfunction4 @ 1000b030 size=187 ---- */

void __thiscall
TPACK::Connector::Impl::XDRDelivery::vfunction4
          (XDRDelivery *this,char *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  XDRTPackLogoutRequest local_a8 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [28];
  undefined4 local_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [48];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c5c6;
  local_10 = ExceptionList;
  local_14 = DAT_10011018 ^ (uint)(local_44 + 0x40);
  ExceptionList = &local_10;
  XDRTPackLogoutRequest::XDRTPackLogoutRequest(local_a8);
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_80,param_1);
  local_64 = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_60,param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_44,param_4);
  FUN_10007be0(this,(int *)local_a8);
  local_8 = 0xffffffff;
  XDRTPackLogoutRequest::~XDRTPackLogoutRequest(local_a8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)(local_44 + 0x40));
  return;
}



/* ---- vfunction3 @ 1000b0f0 size=187 ---- */

void __thiscall
TPACK::Connector::Impl::XDRDelivery::vfunction3
          (XDRDelivery *this,char *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  XDRTPackLoginRequest local_a8 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [28];
  undefined4 local_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [48];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c5f9;
  local_10 = ExceptionList;
  local_14 = DAT_10011018 ^ (uint)(local_44 + 0x40);
  ExceptionList = &local_10;
  XDRTPackLoginRequest::XDRTPackLoginRequest(local_a8);
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_80,param_1);
  local_64 = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_60,param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_44,param_4);
  FUN_10007be0(this,(int *)local_a8);
  local_8 = 0xffffffff;
  XDRTPackLoginRequest::~XDRTPackLoginRequest(local_a8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)(local_44 + 0x40));
  return;
}



/* ---- vfunction2 @ 1000b1b0 size=203 ---- */

void __thiscall
TPACK::Connector::Impl::XDRDelivery::vfunction2
          (XDRDelivery *this,char *param_1,undefined4 param_2,char *param_3,char *param_4,
          char *param_5)

{
  undefined1 local_c8 [72];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [44];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [36];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c62c;
  local_10 = ExceptionList;
  local_14 = DAT_10011018 ^ (uint)(local_38 + 0x34);
  ExceptionList = &local_10;
  XDRAuthSessionRequest::XDRAuthSessionRequest((XDRAuthSessionRequest *)local_c8);
  local_8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_c8 + 0x28),
             param_1);
  local_c8._68_4_ = param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_80,param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_64,param_4);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_38,param_5);
  FUN_10007be0(this,(int *)local_c8);
  local_8 = 0xffffffff;
  XDRAuthSessionRequest::~XDRAuthSessionRequest((XDRAuthSessionRequest *)local_c8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)(local_38 + 0x34));
  return;
}



/* ---- FUN_1000b280 @ 1000b280 size=37 ---- */

void __fastcall FUN_1000b280(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10002160(param_1);
  (**(code **)(*piVar1 + 0x10))();
  return;
}



/* ---- FUN_1000b2b0 @ 1000b2b0 size=42 ---- */

void __fastcall FUN_1000b2b0(void *param_1)

{
  (**(code **)(**(int **)((int)param_1 + 0x28) + 8))();
  FUN_10002140(param_1,0);
  return;
}



/* ---- FUN_1000b2e0 @ 1000b2e0 size=29 ---- */

void __fastcall FUN_1000b2e0(void *param_1)

{
  FUN_10002140(param_1,2);
  FUN_1000b2b0(param_1);
  return;
}



/* ---- FUN_1000b300 @ 1000b300 size=372 ---- */

void __fastcall FUN_1000b300(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_28 [2];
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  while( true ) {
    FUN_10002250((void *)(param_1 + 4),&local_c);
    piVar2 = FUN_10002280((void *)(param_1 + 4),local_18);
    bVar1 = FUN_10002b10(&local_c,piVar2);
    if (!bVar1) break;
    iVar3 = FUN_10002af0(&local_c);
    local_10 = *(undefined4 **)(iVar3 + 4);
    local_20 = local_c;
    local_1c = local_8;
    FUN_100022b0((void *)(param_1 + 4),local_28,local_c,local_8);
    if (local_10 != (undefined4 *)0x0) {
      (**(code **)*local_10)(1);
    }
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(int *)(param_1 + 0x30) != 0) && (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(int *)(param_1 + 0x28) != 0) && (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* ---- FUN_1000b480 @ 1000b480 size=231 ---- */

void __thiscall FUN_1000b480(void *this,void *param_1,ushort param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  char acStack_12 [14];
  
  uVar1 = DAT_10011018 ^ (uint)(acStack_12 + 0xe);
  puVar2 = FUN_100095c0(1,this);
  *(undefined4 **)((int)this + 0x30) = puVar2;
  if (*(int *)((int)this + 0x30) != 0) {
    puVar2 = FUN_10009d40(1,*(undefined4 *)((int)this + 0x30));
    *(undefined4 **)((int)this + 0x28) = puVar2;
    if (*(int *)((int)this + 0x28) != 0) {
      iVar3 = 1;
      puVar2 = FUN_10009650(1,*(undefined4 *)((int)this + 0x28));
      *(undefined4 **)(iVar3 + 0x2c) = puVar2;
      if (*(int *)(iVar3 + 0x2c) != 0) {
        FUN_100037d0((uint)param_2,acStack_12 + -6,10);
        iVar3 = (**(code **)(**(int **)((int)param_1 + 0x28) + 4))();
        if (-1 < iVar3) {
          FUN_10002140(param_1,1);
        }
      }
    }
  }
  __security_check_cookie(uVar1 ^ (uint)(acStack_12 + 0xe));
  return;
}



/* ---- FUN_1000b570 @ 1000b570 size=152 ---- */

undefined4 * __thiscall FUN_1000b570(void *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c547;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  FUN_100021c0((void *)((int)this + 4));
  local_8 = 0;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_10002a90((void *)((int)this + 4));
  FUN_10002140(this,0);
  ExceptionList = local_10;
  return this;
}



/* ---- ~SchedulingNode @ 1000b610 size=86 ---- */

/* Library Function - Single Match
    public: __thiscall Concurrency::details::SchedulingNode::~SchedulingNode(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall Concurrency::details::SchedulingNode::~SchedulingNode(SchedulingNode *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000c69d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_1000b300((int)this);
  local_8 = 0xffffffff;
  FUN_100021a0(this + 4);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_1000b670 @ 1000b670 size=61 ---- */

void FUN_1000b670(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *this;
  
  piVar1 = (int *)FUN_10002180((int)param_1);
  uVar2 = FUN_10002100((int)param_1);
  uVar3 = FUN_10005820((int)param_1);
  pcVar4 = (char *)FUN_100020e0(param_1);
  this = (void *)FUN_1000aa50();
  FUN_1000a2e0(this,pcVar4,uVar3,uVar2,piVar1);
  return;
}



/* ---- FUN_1000b6b0 @ 1000b6b0 size=722 ---- */

void __thiscall FUN_1000b6b0(void *this,int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 **ppuVar10;
  LONG LVar11;
  char *local_e4;
  XDRTPackLoginResponse local_d8;
  uint local_2c;
  LARGE_INTEGER local_28 [2];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c6f1;
  local_10 = ExceptionList;
  local_2c = DAT_10011018 ^ (int)local_28 + 0x24U;
  ExceptionList = &local_10;
  *param_2 = 0x40109;
  if (param_1 == 0) {
    XPlatform::SetLastError(0x40104);
  }
  else {
    iVar3 = FUN_10002120((int)this);
    if (iVar3 == 3) {
      local_e4 = "TPACK::Connector::Impl::Connector::LogoutTPack";
      LVar4 = InterlockedIncrement(this);
      ppuVar10 = &local_14;
      LVar11 = LVar4;
      pvVar5 = (void *)FUN_1000aa50();
      bVar1 = FUN_1000a6b0(pvVar5,ppuVar10,local_e4,LVar11);
      if (bVar1) {
        FUN_100092c0(local_28);
        local_8 = 0;
        piVar6 = (int *)FUN_10002160((int)this);
        iVar3 = FUN_10002180((int)this);
        uVar7 = FUN_10009390(iVar3);
        cVar2 = (**(code **)(*piVar6 + 0xc))
                          ("TPACK::Connector::Impl::Connector::LogoutTPack",LVar4,uVar7,param_1);
        if (cVar2 == '\0') {
          pvVar5 = (void *)FUN_1000aa50();
          FUN_1000a4a0(pvVar5,local_14);
          local_8 = 0xffffffff;
          FUN_100092b0();
        }
        else {
          puVar8 = (undefined4 *)FUN_10002180((int)this);
          uVar9 = FUN_100093e0(puVar8);
          puVar8 = local_14;
          FUN_1000aa50();
          bVar1 = FUN_10009e00((int)puVar8,uVar9);
          if (bVar1) {
            XDRTPackLoginResponse::XDRTPackLoginResponse(&local_d8);
            local_8._0_1_ = 1;
            XDRTPackLoginResponse::vfunction7(&local_d8,(_THandle *)local_14[0x12]);
            if (local_d8.XDRTPackLoginResponse_data._120_4_ == 0) {
              *param_2 = local_d8.XDRTPackLoginResponse_data.offset_0x98;
              if (local_d8.XDRTPackLoginResponse_data.offset_0x98 == 0) {
                FUN_10002140(this,2);
                pvVar5 = (void *)FUN_1000aa50();
                FUN_1000a4a0(pvVar5,local_14);
                local_8 = (uint)local_8._1_3_ << 8;
                XDRTPackLoginResponse::~XDRTPackLoginResponse(&local_d8);
                local_8 = 0xffffffff;
                FUN_100092b0();
              }
              else {
                pvVar5 = (void *)FUN_1000aa50();
                FUN_1000a4a0(pvVar5,local_14);
                local_8 = (uint)local_8._1_3_ << 8;
                XDRTPackLoginResponse::~XDRTPackLoginResponse(&local_d8);
                local_8 = 0xffffffff;
                FUN_100092b0();
              }
            }
            else {
              pvVar5 = (void *)FUN_1000aa50();
              FUN_1000a4a0(pvVar5,local_14);
              local_8 = (uint)local_8._1_3_ << 8;
              XDRTPackLoginResponse::~XDRTPackLoginResponse(&local_d8);
              local_8 = 0xffffffff;
              FUN_100092b0();
            }
          }
          else {
            pvVar5 = (void *)FUN_1000aa50();
            FUN_1000a4a0(pvVar5,local_14);
            local_8 = 0xffffffff;
            FUN_100092b0();
          }
        }
      }
      else {
        XPlatform::SetLastError(0x40101);
      }
    }
    else {
      XPlatform::SetLastError(0x40114);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_2c ^ (int)local_28 + 0x24U);
  return;
}



/* ---- FUN_1000b990 @ 1000b990 size=752 ---- */

void __thiscall FUN_1000b990(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 **ppuVar10;
  LONG LVar11;
  char *local_e4;
  XDRTPackLoginResponse local_d8;
  uint local_2c;
  LARGE_INTEGER local_28 [2];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c72c;
  local_10 = ExceptionList;
  local_2c = DAT_10011018 ^ (int)local_28 + 0x24U;
  ExceptionList = &local_10;
  *param_2 = 0x40109;
  *param_3 = 0;
  param_3[1] = 0;
  if (param_1 == 0) {
    XPlatform::SetLastError(0x40104);
  }
  else {
    iVar3 = FUN_10002120((int)this);
    if (iVar3 == 2) {
      local_e4 = "TPACK::Connector::Impl::Connector::LoginTPack";
      LVar4 = InterlockedIncrement(this);
      ppuVar10 = &local_14;
      LVar11 = LVar4;
      pvVar5 = (void *)FUN_1000aa50();
      bVar1 = FUN_1000a6b0(pvVar5,ppuVar10,local_e4,LVar11);
      if (bVar1) {
        FUN_100092c0(local_28);
        local_8 = 0;
        piVar6 = (int *)FUN_10002160((int)this);
        iVar3 = FUN_10002180((int)this);
        uVar7 = FUN_10009390(iVar3);
        cVar2 = (**(code **)(*piVar6 + 8))
                          ("TPACK::Connector::Impl::Connector::LoginTPack",LVar4,uVar7,param_1);
        if (cVar2 == '\0') {
          pvVar5 = (void *)FUN_1000aa50();
          FUN_1000a4a0(pvVar5,local_14);
          local_8 = 0xffffffff;
          FUN_100092b0();
        }
        else {
          puVar8 = (undefined4 *)FUN_10002180((int)this);
          uVar9 = FUN_100093e0(puVar8);
          puVar8 = local_14;
          FUN_1000aa50();
          bVar1 = FUN_10009e00((int)puVar8,uVar9);
          if (bVar1) {
            XDRTPackLoginResponse::XDRTPackLoginResponse(&local_d8);
            local_8._0_1_ = 1;
            XDRTPackLoginResponse::vfunction7(&local_d8,(_THandle *)local_14[0x12]);
            if (local_d8.XDRTPackLoginResponse_data._120_4_ == 0) {
              *param_2 = local_d8.XDRTPackLoginResponse_data.offset_0x98;
              if (local_d8.XDRTPackLoginResponse_data.offset_0x98 == 0) {
                *param_3 = local_d8.XDRTPackLoginResponse_data.offset_0x9c;
                param_3[1] = local_d8.XDRTPackLoginResponse_data.offset_0xa0;
                FUN_10002140(this,3);
                pvVar5 = (void *)FUN_1000aa50();
                FUN_1000a4a0(pvVar5,local_14);
                local_8 = (uint)local_8._1_3_ << 8;
                XDRTPackLoginResponse::~XDRTPackLoginResponse(&local_d8);
                local_8 = 0xffffffff;
                FUN_100092b0();
              }
              else {
                pvVar5 = (void *)FUN_1000aa50();
                FUN_1000a4a0(pvVar5,local_14);
                local_8 = (uint)local_8._1_3_ << 8;
                XDRTPackLoginResponse::~XDRTPackLoginResponse(&local_d8);
                local_8 = 0xffffffff;
                FUN_100092b0();
              }
            }
            else {
              pvVar5 = (void *)FUN_1000aa50();
              FUN_1000a4a0(pvVar5,local_14);
              local_8 = (uint)local_8._1_3_ << 8;
              XDRTPackLoginResponse::~XDRTPackLoginResponse(&local_d8);
              local_8 = 0xffffffff;
              FUN_100092b0();
            }
          }
          else {
            pvVar5 = (void *)FUN_1000aa50();
            FUN_1000a4a0(pvVar5,local_14);
            local_8 = 0xffffffff;
            FUN_100092b0();
          }
        }
      }
      else {
        XPlatform::SetLastError(0x40101);
      }
    }
    else {
      XPlatform::SetLastError(0x40114);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_2c ^ (int)local_28 + 0x24U);
  return;
}



/* ---- FUN_1000bc80 @ 1000bc80 size=456 ---- */

uint __thiscall FUN_1000bc80(void *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar3;
  uint extraout_EAX_01;
  LONG LVar4;
  void *pvVar5;
  uint extraout_EAX_02;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  LONG LVar11;
  char *local_34;
  LARGE_INTEGER local_28 [2];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c75c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    XPlatform::SetLastError(0x40104);
    uVar8 = extraout_EAX & 0xffffff00;
  }
  else if (param_2 == 0) {
    XPlatform::SetLastError(0x40104);
    uVar8 = extraout_EAX_00 & 0xffffff00;
  }
  else {
    iVar3 = FUN_10002120((int)this);
    if (iVar3 == 0) {
      XPlatform::SetLastError(0x40112);
      uVar8 = extraout_EAX_01 & 0xffffff00;
    }
    else {
      local_34 = "TPACK::Connector::Impl::Connector::AuthSession";
      LVar4 = InterlockedIncrement(this);
      ppuVar10 = &local_14;
      LVar11 = LVar4;
      pvVar5 = (void *)FUN_1000aa50();
      bVar1 = FUN_1000a6b0(pvVar5,ppuVar10,local_34,LVar11);
      if (bVar1) {
        FUN_100092c0(local_28);
        local_8 = 0;
        piVar6 = (int *)FUN_10002160((int)this);
        iVar3 = FUN_10002180((int)this);
        uVar7 = FUN_10009390(iVar3);
        cVar2 = (**(code **)(*piVar6 + 4))
                          ("TPACK::Connector::Impl::Connector::AuthSession",LVar4,uVar7,param_1,
                           param_2);
        if (cVar2 == '\0') {
          pvVar5 = (void *)FUN_1000aa50();
          FUN_1000a4a0(pvVar5,local_14);
          local_8 = 0xffffffff;
          uVar8 = FUN_100092b0();
          uVar8 = uVar8 & 0xffffff00;
        }
        else {
          puVar9 = (undefined4 *)FUN_10002180((int)this);
          uVar8 = FUN_100093e0(puVar9);
          puVar9 = local_14;
          FUN_1000aa50();
          bVar1 = FUN_10009e00((int)puVar9,uVar8);
          if (bVar1) {
            FUN_10002140(this,2);
            pvVar5 = (void *)FUN_1000aa50();
            FUN_1000a4a0(pvVar5,local_14);
            local_8 = 0xffffffff;
            uVar7 = FUN_100092b0();
            uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),1);
          }
          else {
            pvVar5 = (void *)FUN_1000aa50();
            FUN_1000a4a0(pvVar5,local_14);
            local_8 = 0xffffffff;
            uVar8 = FUN_100092b0();
            uVar8 = uVar8 & 0xffffff00;
          }
        }
      }
      else {
        XPlatform::SetLastError(0x40101);
        uVar8 = extraout_EAX_02 & 0xffffff00;
      }
    }
  }
  ExceptionList = local_10;
  return uVar8;
}



/* ---- Disconnect @ 1000be50 size=30 ---- */

/* void __stdcall TPACK::Connector::Disconnect(struct TPACK::Connector::_Handle *) */

void TPACK::Connector::Disconnect(_Handle *param_1)

{
                    /* 0xbe50  7  ?Disconnect@Connector@TPACK@@YGXPAU_Handle@12@@Z */
  if (param_1 != (_Handle *)0x0) {
    FUN_1000b2b0(param_1);
  }
  return;
}



/* ---- Connect @ 1000be70 size=64 ---- */

/* bool __stdcall TPACK::Connector::Connect(struct TPACK::Connector::_Handle *,char const *,unsigned
   short) */

bool TPACK::Connector::Connect(_Handle *param_1,char *param_2,ushort param_3)

{
  undefined1 uVar1;
  
                    /* 0xbe70  2  ?Connect@Connector@TPACK@@YG_NPAU_Handle@12@PBDG@Z */
  if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    uVar1 = 0;
  }
  else if (param_1 == (_Handle *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000b480(param_1,param_2,param_3);
  }
  return (bool)uVar1;
}



/* ---- CreateHandle @ 1000beb0 size=159 ---- */

/* struct TPACK::Connector::_Handle * __stdcall TPACK::Connector::CreateHandle(struct
   TPACK::Environment::_Handle *) */

_Handle * TPACK::Connector::CreateHandle(_Handle *param_1)

{
  void *this;
  _Handle *p_Var1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xbeb0  3
                       ?CreateHandle@Connector@TPACK@@YGPAU_Handle@12@PAU3Environment@2@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000c56d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    ExceptionList = local_10;
    return (_Handle *)0x0;
  }
  local_8 = 0;
  this = operator_new(0x38);
  local_8._0_1_ = 1;
  if (this != (void *)0x0) {
    FUN_1000b570(this,param_1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  p_Var1 = (_Handle *)FUN_1000bf5c();
  return p_Var1;
}



/* ---- Catch_All@1000bf4f @ 1000bf4f size=13 ---- */

undefined4 Catch_All_1000bf4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x1000bf63;
}



/* ---- FUN_1000bf5c @ 1000bf5c size=51 ---- */

undefined4 FUN_1000bf5c(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    XPlatform::SetLastError(0x40108);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}



/* ---- DestroyHandle @ 1000bf90 size=64 ---- */

/* void __stdcall TPACK::Connector::DestroyHandle(struct TPACK::Connector::_Handle *) */

void TPACK::Connector::DestroyHandle(_Handle *param_1)

{
                    /* 0xbf90  5  ?DestroyHandle@Connector@TPACK@@YGXPAU_Handle@12@@Z */
  if ((param_1 != (_Handle *)0x0) && (param_1 != (_Handle *)0x0)) {
    FUN_10008820(param_1,1);
  }
  return;
}



/* ---- LogoutTPack @ 1000bfd0 size=111 ---- */

/* bool __stdcall TPACK::Connector::LogoutTPack(struct TPACK::Connector::_Handle *,char const *,int
   &) */

bool TPACK::Connector::LogoutTPack(_Handle *param_1,char *param_2,int *param_3)

{
  undefined1 uVar1;
  
                    /* 0xbfd0  9  ?LogoutTPack@Connector@TPACK@@YG_NPAU_Handle@12@PBDAAH@Z */
  if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    uVar1 = 0;
  }
  else if (param_2 == (char *)0x0) {
    XPlatform::SetLastError(0x40104);
    uVar1 = 0;
  }
  else if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000b6b0(param_1,(int)param_2,param_3);
    FUN_1000b2b0(param_1);
  }
  return (bool)uVar1;
}



/* ---- LoginTPack @ 1000c040 size=145 ---- */

/* bool __stdcall TPACK::Connector::LoginTPack(struct TPACK::Connector::_Handle *,char const *,int
   &,__int64 &) */

bool TPACK::Connector::LoginTPack(_Handle *param_1,char *param_2,int *param_3,__int64 *param_4)

{
  bool bVar1;
  char cVar2;
  
                    /* 0xc040  8  ?LoginTPack@Connector@TPACK@@YG_NPAU_Handle@12@PBDAAHAA_J@Z */
  *param_3 = 0x40116;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else if (param_2 == (char *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else {
    cVar2 = FUN_1000b990(param_1,(int)param_2,param_3,(undefined4 *)param_4);
    if (cVar2 == '\0') {
      FUN_1000b2b0(param_1);
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}



/* ---- AuthSession @ 1000c0e0 size=137 ---- */

/* bool __stdcall TPACK::Connector::AuthSession(struct TPACK::Connector::_Handle *,char const *,char
   const *) */

bool TPACK::Connector::AuthSession(_Handle *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  
                    /* 0xc0e0  1  ?AuthSession@Connector@TPACK@@YG_NPAU_Handle@12@PBD1@Z */
  if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else if (param_2 == (char *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else if (param_3 == (char *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x40104);
    bVar1 = false;
  }
  else {
    uVar2 = FUN_1000bc80(param_1,(int)param_2,(int)param_3);
    if ((uVar2 & 0xff) == 0) {
      FUN_1000b2b0(param_1);
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}



/* ---- _CxxThrowException @ 1000c170 size=6 ---- */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x1000c170. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



/* ---- Unwind@1000c180 @ 1000c180 size=26 ---- */

void Unwind_1000c180(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x1000c193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x2c))
  ;
  return;
}



/* ---- Unwind@1000c1b5 @ 1000c1b5 size=12 ---- */

void Unwind_1000c1b5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c1bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c1dc @ 1000c1dc size=8 ---- */

void Unwind_1000c1dc(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c1ff @ 1000c1ff size=11 ---- */

void Unwind_1000c1ff(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@1000c20a @ 1000c20a size=9 ---- */

void Unwind_1000c20a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c20d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x60))
  ;
  return;
}



/* ---- Unwind@1000c213 @ 1000c213 size=8 ---- */

void Unwind_1000c213(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x40));
  return;
}



/* ---- Unwind@1000c21b @ 1000c21b size=11 ---- */

void Unwind_1000c21b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x68));
  return;
}



/* ---- Unwind@1000c226 @ 1000c226 size=12 ---- */

void Unwind_1000c226(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0xa8))
  ;
  return;
}



/* ---- Unwind@1000c232 @ 1000c232 size=11 ---- */

void Unwind_1000c232(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x88));
  return;
}



/* ---- Unwind@1000c25b @ 1000c25b size=8 ---- */

void Unwind_1000c25b(void)

{
  int unaff_EBP;
  
  XDRDetectGhostCheckResponse::~XDRDetectGhostCheckResponse
            ((XDRDetectGhostCheckResponse *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@1000c27e @ 1000c27e size=8 ---- */

void Unwind_1000c27e(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@1000c2a1 @ 1000c2a1 size=8 ---- */

void Unwind_1000c2a1(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000c2c4 @ 1000c2c4 size=8 ---- */

void Unwind_1000c2c4(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000c2e7 @ 1000c2e7 size=8 ---- */

void Unwind_1000c2e7(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000c30a @ 1000c30a size=8 ---- */

void Unwind_1000c30a(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000c312 @ 1000c312 size=8 ---- */

void Unwind_1000c312(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x2c));
  return;
}



/* ---- Unwind@1000c335 @ 1000c335 size=8 ---- */

void Unwind_1000c335(void)

{
  int unaff_EBP;
  
  TPACK::Connector::Impl::Socket::~Socket(*(Socket **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000c33d @ 1000c33d size=12 ---- */

void Unwind_1000c33d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c349 @ 1000c349 size=12 ---- */

void Unwind_1000c349(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- Unwind@1000c355 @ 1000c355 size=12 ---- */

void Unwind_1000c355(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c35b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



/* ---- Unwind@1000c361 @ 1000c361 size=12 ---- */

void Unwind_1000c361(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}



/* ---- Unwind@1000c36d @ 1000c36d size=12 ---- */

void Unwind_1000c36d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0x4c));
  return;
}



/* ---- Unwind@1000c394 @ 1000c394 size=8 ---- */

void Unwind_1000c394(void)

{
  int unaff_EBP;
  
  TPACK::Connector::Impl::Socket::~Socket(*(Socket **)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@1000c39c @ 1000c39c size=12 ---- */

void Unwind_1000c39c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c3a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x20) + 4));
  return;
}



/* ---- Unwind@1000c3a8 @ 1000c3a8 size=12 ---- */

void Unwind_1000c3a8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x20) + 0x10));
  return;
}



/* ---- Unwind@1000c3b4 @ 1000c3b4 size=12 ---- */

void Unwind_1000c3b4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c3ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x20) + 0x2c));
  return;
}



/* ---- Unwind@1000c3c0 @ 1000c3c0 size=12 ---- */

void Unwind_1000c3c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x20) + 0x48));
  return;
}



/* ---- Unwind@1000c3cc @ 1000c3cc size=12 ---- */

void Unwind_1000c3cc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x20) + 0x4c));
  return;
}



/* ---- Unwind@1000c3f3 @ 1000c3f3 size=11 ---- */

void Unwind_1000c3f3(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@1000c419 @ 1000c419 size=9 ---- */

void Unwind_1000c419(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x74))
  ;
  return;
}



/* ---- Unwind@1000c422 @ 1000c422 size=8 ---- */

void Unwind_1000c422(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@1000c42a @ 1000c42a size=8 ---- */

void Unwind_1000c42a(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c432 @ 1000c432 size=8 ---- */

void Unwind_1000c432(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x44));
  return;
}



/* ---- Unwind@1000c45f @ 1000c45f size=8 ---- */

void Unwind_1000c45f(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c467 @ 1000c467 size=8 ---- */

void Unwind_1000c467(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@1000c46f @ 1000c46f size=8 ---- */

void Unwind_1000c46f(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@1000c477 @ 1000c477 size=12 ---- */

void Unwind_1000c477(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x90))
  ;
  return;
}



/* ---- Unwind@1000c483 @ 1000c483 size=8 ---- */

void Unwind_1000c483(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x70));
  return;
}



/* ---- Unwind@1000c4a9 @ 1000c4a9 size=8 ---- */

void Unwind_1000c4a9(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@1000c4b1 @ 1000c4b1 size=11 ---- */

void Unwind_1000c4b1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x44));
  return;
}



/* ---- Unwind@1000c4bc @ 1000c4bc size=12 ---- */

void Unwind_1000c4bc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x88))
  ;
  return;
}



/* ---- Unwind@1000c4c8 @ 1000c4c8 size=8 ---- */

void Unwind_1000c4c8(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x68));
  return;
}



/* ---- Unwind@1000c4d0 @ 1000c4d0 size=8 ---- */

void Unwind_1000c4d0(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c4d8 @ 1000c4d8 size=8 ---- */

void Unwind_1000c4d8(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@1000c4fe @ 1000c4fe size=12 ---- */

void Unwind_1000c4fe(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c50a @ 1000c50a size=12 ---- */

void Unwind_1000c50a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@1000c516 @ 1000c516 size=11 ---- */

void Unwind_1000c516(void)

{
  int unaff_EBP;
  
  FUN_10003bf0((void *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@1000c53c @ 1000c53c size=11 ---- */

void Unwind_1000c53c(void)

{
  int unaff_EBP;
  
  FUN_100021a0((void *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c562 @ 1000c562 size=11 ---- */

void Unwind_1000c562(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@1000c588 @ 1000c588 size=12 ---- */

void Unwind_1000c588(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c58e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c594 @ 1000c594 size=12 ---- */

void Unwind_1000c594(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x20));
  return;
}



/* ---- Unwind@1000c5bb @ 1000c5bb size=11 ---- */

void Unwind_1000c5bb(void)

{
  int unaff_EBP;
  
  XDRTPackLogoutRequest::~XDRTPackLogoutRequest((XDRTPackLogoutRequest *)(unaff_EBP + -0xa4));
  return;
}



/* ---- Unwind@1000c5ee @ 1000c5ee size=11 ---- */

void Unwind_1000c5ee(void)

{
  int unaff_EBP;
  
  XDRTPackLoginRequest::~XDRTPackLoginRequest((XDRTPackLoginRequest *)(unaff_EBP + -0xa4));
  return;
}



/* ---- Unwind@1000c621 @ 1000c621 size=11 ---- */

void Unwind_1000c621(void)

{
  int unaff_EBP;
  
  XDRAuthSessionRequest::~XDRAuthSessionRequest((XDRAuthSessionRequest *)(unaff_EBP + -0xc4));
  return;
}



/* ---- Unwind@1000c654 @ 1000c654 size=12 ---- */

void Unwind_1000c654(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c660 @ 1000c660 size=12 ---- */

void Unwind_1000c660(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@1000c66c @ 1000c66c size=11 ---- */

void Unwind_1000c66c(void)

{
  int unaff_EBP;
  
  FUN_10003bf0((void *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@1000c692 @ 1000c692 size=11 ---- */

void Unwind_1000c692(void)

{
  int unaff_EBP;
  
  FUN_100021a0((void *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c6b8 @ 1000c6b8 size=11 ---- */

void Unwind_1000c6b8(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@1000c6de @ 1000c6de size=8 ---- */

void Unwind_1000c6de(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c6e6 @ 1000c6e6 size=11 ---- */

void Unwind_1000c6e6(void)

{
  int unaff_EBP;
  
  XDRTPackLoginResponse::~XDRTPackLoginResponse((XDRTPackLoginResponse *)(unaff_EBP + -0xd4));
  return;
}



/* ---- Unwind@1000c719 @ 1000c719 size=8 ---- */

void Unwind_1000c719(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c721 @ 1000c721 size=11 ---- */

void Unwind_1000c721(void)

{
  int unaff_EBP;
  
  XDRTPackLoginResponse::~XDRTPackLoginResponse((XDRTPackLoginResponse *)(unaff_EBP + -0xd4));
  return;
}



/* ---- Unwind@1000c754 @ 1000c754 size=8 ---- */

void Unwind_1000c754(void)

{
  FUN_100092b0();
  return;
}



/* ---- Unwind@1000c777 @ 1000c777 size=11 ---- */

void Unwind_1000c777(void)

{
  int unaff_EBP;
  
  XDRAuthSessionResponse::~XDRAuthSessionResponse((XDRAuthSessionResponse *)(unaff_EBP + -0x9c));
  return;
}



/* ---- Unwind@1000c782 @ 1000c782 size=11 ---- */

void Unwind_1000c782(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0xc4));
  return;
}



/* ---- Unwind@1000c78d @ 1000c78d size=11 ---- */

void Unwind_1000c78d(void)

{
  int unaff_EBP;
  
  XDRTPackLoginResponse::~XDRTPackLoginResponse((XDRTPackLoginResponse *)(unaff_EBP + -0x16c));
  return;
}



/* ---- Unwind@1000c798 @ 1000c798 size=11 ---- */

void Unwind_1000c798(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x194));
  return;
}



/* ---- Unwind@1000c7a3 @ 1000c7a3 size=11 ---- */

void Unwind_1000c7a3(void)

{
  int unaff_EBP;
  
  XDRTPackLogoutResponse::~XDRTPackLogoutResponse((XDRTPackLogoutResponse *)(unaff_EBP + -0x21c));
  return;
}



/* ---- Unwind@1000c7ae @ 1000c7ae size=11 ---- */

void Unwind_1000c7ae(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x244));
  return;
}



/* ---- Unwind@1000c7b9 @ 1000c7b9 size=11 ---- */

void Unwind_1000c7b9(void)

{
  int unaff_EBP;
  
  XDRDetectGhostCheckRequest::~XDRDetectGhostCheckRequest
            ((XDRDetectGhostCheckRequest *)(unaff_EBP + -0x254));
  return;
}



/* ---- Unwind@1000c7c4 @ 1000c7c4 size=11 ---- */

void Unwind_1000c7c4(void)

{
  int unaff_EBP;
  
  XDRTPackLogOutUserNotice::~XDRTPackLogOutUserNotice
            ((XDRTPackLogOutUserNotice *)(unaff_EBP + -700));
  return;
}



/* ---- Unwind@1000c800 @ 1000c800 size=12 ---- */

void Unwind_1000c800(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}



/* ---- Unwind@1000c80c @ 1000c80c size=11 ---- */

void Unwind_1000c80c(void)

{
  int unaff_EBP;
  
  FUN_10003c80((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (*(int *)(unaff_EBP + -0x10) + 8));
  return;
}



/* ---- Unwind@1000c840 @ 1000c840 size=9 ---- */

void Unwind_1000c840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000c870 @ 1000c870 size=8 ---- */

void Unwind_1000c870(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000c878 @ 1000c878 size=12 ---- */

void Unwind_1000c878(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@1000c884 @ 1000c884 size=12 ---- */

void Unwind_1000c884(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x28));
  return;
}



/* ---- Unwind@1000c8d0 @ 1000c8d0 size=9 ---- */

void Unwind_1000c8d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x50))
  ;
  return;
}



/* ---- Unwind@1000c900 @ 1000c900 size=8 ---- */

void Unwind_1000c900(void)

{
  FUN_100010d0();
  return;
}



/* ---- Unwind@1000c950 @ 1000c950 size=8 ---- */

void Unwind_1000c950(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000c958 @ 1000c958 size=12 ---- */

void Unwind_1000c958(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



/* ---- Unwind@1000c964 @ 1000c964 size=12 ---- */

void Unwind_1000c964(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000c96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



/* ---- Unwind@1000c990 @ 1000c990 size=8 ---- */

void Unwind_1000c990(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000c9c0 @ 1000c9c0 size=8 ---- */

void Unwind_1000c9c0(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000c9f0 @ 1000c9f0 size=8 ---- */

void Unwind_1000c9f0(void)

{
  FUN_100010d0();
  return;
}



/* ---- Unwind@1000ca20 @ 1000ca20 size=17 ---- */

void Unwind_1000ca20(void)

{
  FUN_10001090();
  return;
}



/* ---- Unwind@1000ca50 @ 1000ca50 size=8 ---- */

void Unwind_1000ca50(void)

{
  int unaff_EBP;
  
  FUN_10004a10(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000ca80 @ 1000ca80 size=9 ---- */

void Unwind_1000ca80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000ca83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x60))
  ;
  return;
}



/* ---- Unwind@1000cab0 @ 1000cab0 size=8 ---- */

void Unwind_1000cab0(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000cae0 @ 1000cae0 size=8 ---- */

void Unwind_1000cae0(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000cae8 @ 1000cae8 size=11 ---- */

void Unwind_1000cae8(void)

{
  int unaff_EBP;
  
  _XDRRequestHeader::~_XDRRequestHeader((_XDRRequestHeader *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- Unwind@1000cb10 @ 1000cb10 size=9 ---- */

void Unwind_1000cb10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000cb13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection(*(CriticalSection **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000cb40 @ 1000cb40 size=9 ---- */

void Unwind_1000cb40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1000cb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(unaff_EBP + -0x58))
  ;
  return;
}



/* ---- Unwind@1000cb70 @ 1000cb70 size=8 ---- */

void Unwind_1000cb70(void)

{
  int unaff_EBP;
  
  FUN_100049f0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (unaff_EBP + -0x40));
  return;
}



/* ---- Unwind@1000cba0 @ 1000cba0 size=8 ---- */

void Unwind_1000cba0(void)

{
  int unaff_EBP;
  
  FUN_10004a10(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000cbd0 @ 1000cbd0 size=8 ---- */

void Unwind_1000cbd0(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@1000cbd8 @ 1000cbd8 size=11 ---- */

void Unwind_1000cbd8(void)

{
  int unaff_EBP;
  
  _XDRResponseHeader::~_XDRResponseHeader((_XDRResponseHeader *)(*(int *)(unaff_EBP + -0x10) + 0xc))
  ;
  return;
}



/* ---- Unwind@1000cc00 @ 1000cc00 size=8 ---- */

void Unwind_1000cc00(void)

{
  int unaff_EBP;
  
  FUN_100048b0((undefined4 *)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@1000cc08 @ 1000cc08 size=11 ---- */

void Unwind_1000cc08(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c));
  return;
}



/* ---- FUN_1000cc30 @ 1000cc30 size=34 ---- */

void FUN_1000cc30(void)

{
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)&DAT_10011760,4000);
  _atexit(FUN_1000cc90);
  return;
}



/* ---- FUN_1000cc60 @ 1000cc60 size=34 ---- */

void FUN_1000cc60(void)

{
  XSystem::Threading::CriticalSection::CriticalSection((CriticalSection *)&DAT_10011764,4000);
  _atexit(FUN_1000cca0);
  return;
}



/* ---- FUN_1000cc90 @ 1000cc90 size=16 ---- */

void FUN_1000cc90(void)

{
  XSystem::Threading::CriticalSection::~CriticalSection((CriticalSection *)&DAT_10011760);
  return;
}



/* ---- FUN_1000cca0 @ 1000cca0 size=16 ---- */

void FUN_1000cca0(void)

{
  XSystem::Threading::CriticalSection::~CriticalSection((CriticalSection *)&DAT_10011764);
  return;
}


// total=552 ok=552 failed=0
