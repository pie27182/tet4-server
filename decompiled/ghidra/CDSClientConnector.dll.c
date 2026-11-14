// Module: CDSClientConnector.dll
// ImageBase: 10000000
// Decompiled by Ghidra 12.2 (headless, default analysis)
// Functions below are in address order. Each block header gives the entry address and size.

/* ---- FUN_10001000 @ 10001000 size=44 ---- */

void * __thiscall FUN_10001000(void *this,uint param_1)

{
  FUN_100161c0(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- FUN_10001030 @ 10001030 size=44 ---- */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_10001030(void *this,uint param_1)

{
  FUN_10014f30(this);
  if ((param_1 & 1) != 0) {
    FUN_10015260(this);
  }
  return this;
}



/* ---- bad_alloc @ 10001060 size=37 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(char const *)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- ~bad_alloc @ 10001090 size=28 ---- */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  this->vftablePtr = &vftable;
  exception::~exception((exception *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 100010b0 size=44 ---- */

exception * __thiscall std::bad_alloc::scalar_deleting_destructor(bad_alloc *this,uint param_1)

{
  ~bad_alloc(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return (exception *)this;
}



/* ---- FUN_100010e0 @ 100010e0 size=8 ---- */

undefined4 __cdecl FUN_100010e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



/* ---- FUN_100010f0 @ 100010f0 size=15 ---- */

void __cdecl FUN_100010f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* ---- length @ 10001100 size=17 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned int __cdecl std::char_traits<char>::length(char const *)
    public: static unsigned int __cdecl std::char_traits<unsigned short>::length(unsigned short
   const *)
    public: static unsigned int __cdecl std::char_traits<wchar_t>::length(wchar_t const *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2010 Release */

void __cdecl length(char *param_1)

{
  _strlen(param_1);
  return;
}



/* ---- FID_conflict:_Move_s @ 10001120 size=32 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: static unsigned short * __cdecl std::char_traits<unsigned short>::_Copy_s(unsigned short
   *,unsigned int,unsigned short const *,unsigned int)
    public: static wchar_t * __cdecl std::char_traits<wchar_t>::_Copy_s(wchar_t *,unsigned
   int,wchar_t const *,unsigned int)
    public: static char * __cdecl std::char_traits<char>::_Move_s(char *,unsigned int,char const
   *,unsigned int)
    public: static unsigned short * __cdecl std::char_traits<unsigned short>::_Move_s(unsigned short
   *,unsigned int,unsigned short const *,unsigned int)
     5 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

ushort * __cdecl FID_conflict__Move_s(ushort *param_1,uint param_2,ushort *param_3,uint param_4)

{
  _memcpy_s(param_1,param_2,param_3,param_4);
  return param_1;
}



/* ---- FID_conflict:_Move_s @ 10001140 size=32 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: static unsigned short * __cdecl std::char_traits<unsigned short>::_Copy_s(unsigned short
   *,unsigned int,unsigned short const *,unsigned int)
    public: static wchar_t * __cdecl std::char_traits<wchar_t>::_Copy_s(wchar_t *,unsigned
   int,wchar_t const *,unsigned int)
    public: static char * __cdecl std::char_traits<char>::_Move_s(char *,unsigned int,char const
   *,unsigned int)
    public: static unsigned short * __cdecl std::char_traits<unsigned short>::_Move_s(unsigned short
   *,unsigned int,unsigned short const *,unsigned int)
     5 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

ushort * __cdecl FID_conflict__Move_s(ushort *param_1,uint param_2,ushort *param_3,uint param_4)

{
  _memmove_s(param_1,param_2,param_3,param_4);
  return param_1;
}



/* ---- assign @ 10001160 size=26 ---- */

/* Library Function - Single Match
    public: static char * __cdecl std::char_traits<char>::assign(char *,unsigned int,char)
   
   Libraries: Visual Studio 2008, Visual Studio 2010, Visual Studio 2012, Visual Studio 2015 */

char * __cdecl std::char_traits<char>::assign(char *param_1,uint param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = _memset(param_1,(int)param_3,param_2);
  return pcVar1;
}



/* ---- FUN_10001180 @ 10001180 size=24 ---- */

undefined4 * __thiscall FUN_10001180(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return this;
}



/* ---- FUN_100011a0 @ 100011a0 size=16 ---- */

undefined4 __fastcall FUN_100011a0(undefined4 *param_1)

{
  return *param_1;
}



/* ---- FUN_100011b0 @ 100011b0 size=23 ---- */

undefined4 * __fastcall FUN_100011b0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



/* ---- FUN_100011d0 @ 100011d0 size=23 ---- */

void __thiscall FUN_100011d0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}



/* ---- FUN_100011f0 @ 100011f0 size=46 ---- */

undefined4 __fastcall FUN_100011f0(int *param_1)

{
  undefined4 local_c;
  
  if (*param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_100011a0((undefined4 *)*param_1);
  }
  return local_c;
}



/* ---- FUN_10001220 @ 10001220 size=28 ---- */

bool __thiscall FUN_10001220(void *this,int *param_1)

{
  return *(int *)this == *param_1;
}



/* ---- FID_conflict:runtime_error @ 10001240 size=104 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::logic_error::logic_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void * __thiscall
FID_conflict_runtime_error
          (void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception(this);
  local_8 = 0;
                    /* inlined constructor or destructor (approx location) for std::logic_error */
  *(logic_error_vftable **)this = &std::logic_error::vftable;
  FUN_10001dc0((void *)((int)this + 0xc),(allocator<char> *)param_1);
  ExceptionList = local_10;
  return this;
}



/* ---- ~logic_error @ 100012b0 size=39 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall std::logic_error::~logic_error(void)
    public: virtual __thiscall std::runtime_error::~runtime_error(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug
   ***** Resolved FID Conflict ***** */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  this->vftablePtr = &vftable;
  FUN_10001e00(&this->logic_error_data);
  exception::~exception((exception *)this);
  return;
}



/* ---- what @ 100012e0 size=22 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual char const * __thiscall std::logic_error::what(void)const 
    public: virtual char const * __thiscall std::runtime_error::what(void)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void __thiscall what(void *this)

{
  FUN_10001e70((void *)((int)this + 0xc));
  return;
}



/* ---- scalar_deleting_destructor @ 10001300 size=44 ---- */

void * __thiscall std::logic_error::scalar_deleting_destructor(logic_error *this,uint param_1)

{
  ~logic_error(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- FID_conflict:length_error @ 10001330 size=37 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::ios_base::failure::failure(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::invalid_argument::invalid_argument(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::length_error::length_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::out_of_range::out_of_range(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void * __thiscall
FID_conflict_length_error
          (void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  FID_conflict_runtime_error(this,param_1);
                    /* inlined constructor or destructor (approx location) for std::length_error */
  *(length_error_vftable **)this = &std::length_error::vftable;
  return this;
}



/* ---- ~length_error @ 10001360 size=28 ---- */

void __thiscall std::length_error::~length_error(length_error *this)

{
  this->vftablePtr = &vftable;
  logic_error::~logic_error((logic_error *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 10001380 size=44 ---- */

undefined4 * __thiscall
std::length_error::scalar_deleting_destructor(length_error *this,uint param_1)

{
  ~length_error(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return &this->vftablePtr;
}



/* ---- FID_conflict:length_error @ 100013b0 size=37 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::ios_base::failure::failure(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::invalid_argument::invalid_argument(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::length_error::length_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::out_of_range::out_of_range(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void * __thiscall
FID_conflict_length_error
          (void *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  FID_conflict_runtime_error(this,param_1);
                    /* inlined constructor or destructor (approx location) for std::out_of_range */
  *(out_of_range_vftable **)this = &std::out_of_range::vftable;
  return this;
}



/* ---- ~out_of_range @ 100013e0 size=28 ---- */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  this->vftablePtr = &vftable;
  logic_error::~logic_error((logic_error *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 10001400 size=44 ---- */

undefined4 * __thiscall
std::out_of_range::scalar_deleting_destructor(out_of_range *this,uint param_1)

{
  ~out_of_range(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return &this->vftablePtr;
}



/* ---- out_of_range @ 10001430 size=37 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::ios_base::failure::failure(class std::ios_base::failure const &)
    public: __thiscall std::invalid_argument::invalid_argument(class std::invalid_argument const &)
    public: __thiscall std::length_error::length_error(class std::length_error const &)
    public: __thiscall std::out_of_range::out_of_range(class std::out_of_range const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug
   ***** Resolved FID Conflict ***** */

out_of_range * __thiscall std::out_of_range::out_of_range(out_of_range *this,undefined4 *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- logic_error @ 10001460 size=111 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::logic_error::logic_error(class std::logic_error const &)
    public: __thiscall std::runtime_error::runtime_error(class std::runtime_error const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug
   ***** Resolved FID Conflict ***** */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  exception::exception((exception *)this,(exception *)param_1);
  local_8 = 0;
  this->vftablePtr = &vftable;
  FUN_10001dc0(&this->logic_error_data,(allocator<char> *)(param_1 + 3));
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_100014d0 @ 100014d0 size=164 ---- */

uint * __thiscall FUN_100014d0(void *this,uint param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016b4c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 5) = 1;
  XSystem::Threading::AutoResetEvent::AutoResetEvent((AutoResetEvent *)((int)this + 0x14),false);
  local_8 = 0;
  XSystem::Threading::Interlocked::Increment((int *)&DAT_1001eb80);
  uVar1 = DAT_1001eb80 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  *(uint *)this = uVar1;
  *(uint *)((int)this + 8) = param_1;
  FUN_10014b80(*(void **)((int)this + 8),*(undefined4 *)this);
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_10001580 @ 10001580 size=175 ---- */

uint * __thiscall FUN_10001580(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016b4c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)((int)this + 5) = 0;
  *(uint *)((int)this + 0xc) = param_2;
  *(uint *)((int)this + 0x10) = param_3;
  XSystem::Threading::AutoResetEvent::AutoResetEvent((AutoResetEvent *)((int)this + 0x14),false);
  local_8 = 0;
  XSystem::Threading::Interlocked::Increment((int *)&DAT_1001eb80);
  uVar1 = DAT_1001eb80 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  *(uint *)this = uVar1;
  *(uint *)((int)this + 8) = param_1;
  FUN_10014b80(*(void **)((int)this + 8),*(undefined4 *)this);
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_10001630 @ 10001630 size=23 ---- */

void __fastcall FUN_10001630(int param_1)

{
  XSystem::Threading::AutoResetEvent::~AutoResetEvent((AutoResetEvent *)(param_1 + 0x14));
  return;
}



/* ---- FUN_10001650 @ 10001650 size=44 ---- */

bool __thiscall FUN_10001650(void *this,uint param_1)

{
  bool bVar1;
  
  if (*(char *)((int)this + 4) == '\0') {
    bVar1 = XSystem::Threading::AutoResetEvent::Wait((AutoResetEvent *)((int)this + 0x14),param_1);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ---- ~IMessage @ 10001680 size=20 ---- */

void __thiscall XDR::IMessage::~IMessage(IMessage *this)

{
  this->vftablePtr = &vftable;
  return;
}



/* ---- scalar_deleting_destructor @ 100016a0 size=44 ---- */

undefined4 * __thiscall XDR::IMessage::scalar_deleting_destructor(IMessage *this,uint param_1)

{
  ~IMessage(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- FUN_100016d0 @ 100016d0 size=16 ---- */

allocator<char> * __cdecl FUN_100016d0(allocator<char> *param_1)

{
  basic_string<>(param_1);
  return param_1;
}



/* ---- FUN_100016e0 @ 100016e0 size=109 ---- */

uint __cdecl FUN_100016e0(_THandle *param_1,void *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  char *pcVar2;
  uint uVar3;
  uint local_8;
  
  local_8 = FUN_10001e90((int)param_2);
  if ((int)local_8 < 0x19001) {
    bVar1 = FUN_10005440(param_1,&local_8);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      if (0 < (int)local_8) {
        uVar3 = local_8;
        pcVar2 = FUN_10001e40(param_2,0);
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



/* ---- FUN_10001750 @ 10001750 size=117 ---- */

int __cdecl
FUN_10001750(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  bVar1 = FUN_10005480(param_1,&local_8);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    if ((int)local_8 < 0x19001) {
      if (0 < (int)local_8) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                  (param_2,local_8);
        uVar4 = local_8;
        pcVar3 = FUN_10001e40(param_2,0);
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



/* ---- FUN_100017d0 @ 100017d0 size=34 ---- */

int __cdecl FUN_100017d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10001e90(param_1);
  iVar2 = FUN_100054c0();
  return iVar2 + iVar1;
}



/* ---- IMessage @ 10001800 size=23 ---- */

IMessage * __thiscall XDR::IMessage::IMessage(IMessage *this)

{
  this->vftablePtr = &vftable;
  return this;
}



/* ---- CDS_ReqSelect @ 10001820 size=181 ---- */

CDS_ReqSelect * __thiscall CDS_ReqSelect::CDS_ReqSelect(CDS_ReqSelect *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016e89;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->CDS_ReqSelect_data).offset_0x0 = 0;
  (this->CDS_ReqSelect_data).offset_0x4 = 0x5740f6a;
  basic_string<>((allocator<char> *)&(this->CDS_ReqSelect_data).field_0xc);
  local_8._0_1_ = 1;
  FUN_10001ed0(&(this->CDS_ReqSelect_data).offset_0x28);
  local_8._0_1_ = 2;
  basic_string<>((allocator<char> *)&(this->CDS_ReqSelect_data).field_0x40);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_10001ed0(&(this->CDS_ReqSelect_data).offset_0x5c);
  basic_string<>((allocator<char> *)&(this->CDS_ReqSelect_data).field_0x74);
  (this->CDS_ReqSelect_data).offset_0x8 = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~CDS_ReqSelect @ 100018e0 size=83 ---- */

/* Library Function - Single Match
    public: virtual __thiscall CCommandLineInfo::~CCommandLineInfo(void)
   
   Library: Visual Studio 2010 Debug
   ***** Removed Bad FID Symbol ***** */

void __thiscall CDS_ReqSelect::~CDS_ReqSelect(CDS_ReqSelect *this)

{
  this->vftablePtr = &vftable;
  FUN_10001e00(&(this->CDS_ReqSelect_data).field_0x74);
  ~function<>(&(this->CDS_ReqSelect_data).offset_0x5c);
  FUN_10001e00(&(this->CDS_ReqSelect_data).field_0x40);
  ~function<>(&(this->CDS_ReqSelect_data).offset_0x28);
  FUN_10001e00(&(this->CDS_ReqSelect_data).field_0xc);
  XDR::IMessage::~IMessage((IMessage *)this);
  return;
}



/* ---- vfunction2 @ 10001940 size=82 ---- */

void __thiscall CDS_ReqSelect::vfunction2(CDS_ReqSelect *this)

{
  (this->CDS_ReqSelect_data).offset_0x8 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CDS_ReqSelect_data).field_0xc,0);
  FUN_100020f0(&(this->CDS_ReqSelect_data).offset_0x28);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CDS_ReqSelect_data).field_0x40,0);
  FUN_100020f0(&(this->CDS_ReqSelect_data).offset_0x5c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             &(this->CDS_ReqSelect_data).field_0x74,0);
  return;
}



/* ---- vfunction3 @ 100019a0 size=16 ---- */

undefined4 __thiscall CDS_ReqSelect::vfunction3(CDS_ReqSelect *this)

{
  return 0x5740f6a;
}



/* ---- vfunction4 @ 100019b0 size=16 ---- */

char * __thiscall CDS_ReqSelect::vfunction4(CDS_ReqSelect *this)

{
  return "CDS_ReqSelect";
}



/* ---- vfunction5 @ 100019c0 size=181 ---- */

int __thiscall CDS_ReqSelect::vfunction5(CDS_ReqSelect *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  if ((this->CDS_ReqSelect_data).offset_0x0 == '\0') {
    local_8 = FUN_100054d0();
  }
  iVar1 = FUN_100054d0();
  iVar2 = FUN_10005590((int)&(this->CDS_ReqSelect_data).field_0xc);
  iVar3 = FUN_100054f0(&(this->CDS_ReqSelect_data).offset_0x28);
  iVar4 = FUN_10005590((int)&(this->CDS_ReqSelect_data).field_0x40);
  iVar5 = FUN_100054f0(&(this->CDS_ReqSelect_data).offset_0x5c);
  iVar6 = FUN_10005590((int)&(this->CDS_ReqSelect_data).field_0x74);
  return iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 10001a80 size=242 ---- */

uint __thiscall CDS_ReqSelect::vfunction6(CDS_ReqSelect *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->CDS_ReqSelect_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_10005510(param_1,&(this->CDS_ReqSelect_data).offset_0x4), (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10005510(param_1,&(this->CDS_ReqSelect_data).offset_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100055b0(param_1,&(this->CDS_ReqSelect_data).field_0xc);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10005530(param_1,&(this->CDS_ReqSelect_data).offset_0x28);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_100055b0(param_1,&(this->CDS_ReqSelect_data).field_0x40);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = uVar1 & 0xffffff00;
        }
        else {
          uVar1 = FUN_10005530(param_1,&(this->CDS_ReqSelect_data).offset_0x5c);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = uVar1 & 0xffffff00;
          }
          else {
            uVar1 = FUN_100055b0(param_1,&(this->CDS_ReqSelect_data).field_0x74);
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
    }
  }
  return uVar1;
}



/* ---- vfunction7 @ 10001b80 size=242 ---- */

uint __thiscall CDS_ReqSelect::vfunction7(CDS_ReqSelect *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->CDS_ReqSelect_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_10005550(param_1,&(this->CDS_ReqSelect_data).offset_0x4), (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10005550(param_1,&(this->CDS_ReqSelect_data).offset_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_100055d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &(this->CDS_ReqSelect_data).field_0xc);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10005570(param_1,&(this->CDS_ReqSelect_data).offset_0x28);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_100055d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&(this->CDS_ReqSelect_data).field_0x40);
        if ((uVar1 & 0xff) == 0) {
          uVar1 = uVar1 & 0xffffff00;
        }
        else {
          uVar1 = FUN_10005570(param_1,&(this->CDS_ReqSelect_data).offset_0x5c);
          if ((uVar1 & 0xff) == 0) {
            uVar1 = uVar1 & 0xffffff00;
          }
          else {
            uVar1 = FUN_100055d0(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)&(this->CDS_ReqSelect_data).field_0x74);
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
    }
  }
  return uVar1;
}



/* ---- vfunction9 @ 10001c80 size=17 ---- */

undefined1 __thiscall CDS_ReqSelect::vfunction9(CDS_ReqSelect *this)

{
  return (this->CDS_ReqSelect_data).offset_0x0;
}



/* ---- scalar_deleting_destructor @ 10001ca0 size=44 ---- */

undefined4 * __thiscall CDS_ReqSelect::scalar_deleting_destructor(CDS_ReqSelect *this,uint param_1)

{
  ~CDS_ReqSelect(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10001cd0 @ 10001cd0 size=19 ---- */

void __fastcall FUN_10001cd0(void *param_1)

{
  FID_conflict__CAtlWinModule(param_1);
  return;
}



/* ---- FUN_10001cf0 @ 10001cf0 size=44 ---- */

undefined4 * __thiscall FUN_10001cf0(void *this,uint param_1)

{
  FUN_10015360(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- FUN_10001d20 @ 10001d20 size=44 ---- */

void * __thiscall FUN_10001d20(void *this,uint param_1)

{
  FUN_10001630((int)this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- basic_string<> @ 10001d50 size=44 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(void)
    public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(void)
    public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void)
   
   Library: Visual Studio 2003 Debug */

allocator<char> * __fastcall basic_string<>(allocator<char> *param_1)

{
  undefined1 auStack_13 [3];
  allocator<char> *paVar1;
  
  paVar1 = param_1;
  allocator<>(auStack_13 + 3);
  _String_val<>(param_1,SUB41(paVar1,0));
  FUN_10002ce0(param_1,'\0',0);
  return param_1;
}



/* ---- basic_string<> @ 10001d80 size=58 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(char const *)
    public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(unsigned short const *)
    public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(wchar_t const *)
   
   Library: Visual Studio 2003 Debug */

allocator<char> * __thiscall basic_string<>(void *this,char *param_1)

{
  undefined1 auStack_13 [3];
  void *pvVar1;
  
  pvVar1 = this;
  allocator<>(auStack_13 + 3);
  _String_val<>(this,SUB41(pvVar1,0));
  FUN_10002ce0(this,'\0',0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(this,param_1);
  return this;
}



/* ---- FUN_10001dc0 @ 10001dc0 size=61 ---- */

basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> * __thiscall
FUN_10001dc0(void *this,allocator<char> *param_1)

{
  FUN_10002db0(this,param_1);
  FUN_10002ce0(this,'\0',0);
  std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign
            (this,(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                   *)param_1,0,DAT_10019d74);
  return this;
}



/* ---- FUN_10001e00 @ 10001e00 size=23 ---- */

void __fastcall FUN_10001e00(void *param_1)

{
  FUN_10002ce0(param_1,'\x01',0);
  return;
}



/* ---- operator= @ 10001e20 size=25 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::operator=(char const *)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  pbVar1 = assign(this,param_1);
  return pbVar1;
}



/* ---- FUN_10001e40 @ 10001e40 size=40 ---- */

char * __thiscall FUN_10001e40(void *this,uint param_1)

{
  char *pcVar1;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_1000add8();
  }
  pcVar1 = FID_conflict__Myptr(this);
  return pcVar1 + param_1;
}



/* ---- FUN_10001e70 @ 10001e70 size=19 ---- */

void __fastcall FUN_10001e70(void *param_1)

{
  FID_conflict__Myptr(param_1);
  return;
}



/* ---- FUN_10001e90 @ 10001e90 size=17 ---- */

undefined4 __fastcall FUN_10001e90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ---- resize @ 10001eb0 size=27 ---- */

/* Library Function - Single Match
    public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::resize(unsigned int)
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual Studio 2010 Release */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1)

{
  resize(this,param_1,'\0');
  return;
}



/* ---- FUN_10001ed0 @ 10001ed0 size=101 ---- */

undefined4 * __fastcall FUN_10001ed0(undefined4 *param_1)

{
  undefined1 auStackY_a0 [128];
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016e38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = param_1;
  allocator<>(auStackY_a0 + 0x80);
  FUN_10007940(param_1,SUB41(puVar1,0));
  local_8 = 0;
  FUN_10002ed0(param_1,0);
  ExceptionList = local_10;
  return param_1;
}



/* ---- ~function<> @ 10001f40 size=27 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::function<bool __cdecl(unsigned int const &)>::~function<bool
   __cdecl(unsigned int const &)>(void)
    public: __thiscall std::function<bool __cdecl(enum Concurrency::agent_status const
   &)>::~function<bool __cdecl(enum Concurrency::agent_status const &)>(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __fastcall ~function<>(undefined4 *param_1)

{
  FUN_10002f80(param_1);
  FUN_10002b20(param_1);
  return;
}



/* ---- FUN_10001f60 @ 10001f60 size=392 ---- */

void * __thiscall FUN_10001f60(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  if (this != param_1) {
    iVar1 = FUN_10002e10((int)param_1);
    if (iVar1 == 0) {
      FUN_100020f0(this);
    }
    else {
      uVar2 = FUN_10002e10((int)param_1);
      uVar3 = FUN_10002e10((int)this);
      if (uVar3 < uVar2) {
        uVar2 = FUN_10002e10((int)param_1);
        uVar3 = FUN_10002dd0((int)this);
        if (uVar3 < uVar2) {
          if (*(int *)((int)this + 0xc) != 0) {
            FUN_10002f50(this,*(void **)((int)this + 0xc),*(void **)((int)this + 0x10));
            FUN_10007b50(*(void **)((int)this + 0xc));
          }
          uVar2 = FUN_10002e10((int)param_1);
          uVar2 = FUN_10002ed0(this,uVar2);
          if ((uVar2 & 0xff) != 0) {
            uVar5 = do_is(this,*(undefined4 *)((int)param_1 + 0xc),
                          *(undefined4 *)((int)param_1 + 0x10),*(int *)((int)this + 0xc));
            *(undefined4 *)((int)this + 0x10) = uVar5;
          }
        }
        else {
          iVar1 = FUN_10002e10((int)this);
          iVar1 = iVar1 * 0x1c + *(int *)((int)param_1 + 0xc);
          FUN_100056a0((uint3)iVar1,*(undefined4 *)((int)param_1 + 0xc),iVar1,
                       *(int *)((int)this + 0xc));
          uVar5 = do_is(this,iVar1,*(undefined4 *)((int)param_1 + 0x10),*(int *)((int)this + 0x10));
          *(undefined4 *)((int)this + 0x10) = uVar5;
        }
      }
      else {
        pvVar4 = (void *)FUN_100056a0((uint3)*(undefined4 *)((int)param_1 + 0x10),
                                      *(undefined4 *)((int)param_1 + 0xc),
                                      *(undefined4 *)((int)param_1 + 0x10),*(int *)((int)this + 0xc)
                                     );
        FUN_10002f50(this,pvVar4,*(void **)((int)this + 0x10));
        iVar1 = FUN_10002e10((int)param_1);
        *(int *)((int)this + 0x10) = iVar1 * 0x1c + *(int *)((int)this + 0xc);
      }
    }
  }
  return this;
}



/* ---- FUN_100020f0 @ 100020f0 size=87 ---- */

void __fastcall FUN_100020f0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 local_2c [2];
  undefined1 local_24 [8];
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  puVar1 = FUN_10008e20(param_1,local_14);
  local_c = *puVar1;
  local_8 = puVar1[1];
  puVar1 = FUN_100075e0(param_1,local_24);
  local_1c = *puVar1;
  local_18 = puVar1[1];
  FUN_10002e30(param_1,local_2c,local_1c,local_18,local_c,local_8);
  return;
}



/* ---- FUN_10002150 @ 10002150 size=37 ---- */

void * __fastcall FUN_10002150(void *param_1)

{
  allocator<char> *paVar1;
  byte local_6;
  undefined1 local_5;
  
  paVar1 = (allocator<char> *)allocator<>(&local_5);
  FUN_100030b0(param_1,&local_6,paVar1);
  return param_1;
}



/* ---- FUN_10002180 @ 10002180 size=177 ---- */

int __thiscall FUN_10002180(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *extraout_EAX;
  undefined4 local_30 [2];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  FUN_100037a0(this,&local_c,param_1);
  piVar2 = FUN_10003120(this,local_14);
  bVar1 = FUN_10003c40(&local_c,piVar2);
  if (!bVar1) {
    iVar3 = FUN_10003c90((int)&local_c);
    piVar2 = (int *)FUN_10003060(iVar3);
    bVar1 = FUN_10003be0(param_1,piVar2);
    if (!bVar1) goto LAB_10002220;
  }
  local_20 = 0;
  local_28 = local_c;
  local_24 = local_8;
  puVar4 = FUN_10003cb0(local_1c,param_1,&local_20);
  FUN_10003180(this,local_30,local_28,local_24,puVar4);
  local_c = *extraout_EAX;
  local_8 = extraout_EAX[1];
LAB_10002220:
  iVar3 = FUN_10003c00(&local_c);
  return iVar3 + 4;
}



/* ---- FID_conflict:~CAtlWinModule @ 10002240 size=83 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall ATL::CAtlWinModule::~CAtlWinModule(void)
    public: __thiscall CPaneContainerGC::~CPaneContainerGC(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void __thiscall FID_conflict__CAtlWinModule(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10017018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_10003b10(this);
  local_8 = 0xffffffff;
  FUN_10002b40(this);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_100022a0 @ 100022a0 size=1987 ---- */

undefined4 * __thiscall FUN_100022a0(void *this,undefined4 *param_1,int param_2,undefined4 param_3)

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
  undefined1 local_48 [40];
  _Container_proxy *local_20;
  _Container_proxy *local_1c;
  _Container_proxy *local_18;
  _Container_proxy *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016e08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_10003c90((int)&param_2);
  pcVar3 = (char *)FUN_10003050(iVar2);
  if (*pcVar3 != '\0') {
    basic_string<>(local_64,"invalid map/set<T> iterator");
    local_8 = 0;
    FID_conflict_length_error(local_48,local_64);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_48,&DAT_1001a968);
  }
  local_14 = (_Container_proxy *)FUN_10003c90((int)&param_2);
  FUN_10003c20(&param_2);
  local_1c = local_14;
  piVar4 = (int *)FUN_10003080(local_14);
  pcVar3 = (char *)FUN_10003050(*piVar4);
  if (*pcVar3 == '\0') {
    piVar4 = (int *)FUN_100030a0((int)local_1c);
    pcVar3 = (char *)FUN_10003050(*piVar4);
    if (*pcVar3 == '\0') {
      local_1c = (_Container_proxy *)FUN_10003c90((int)&param_2);
      piVar4 = (int *)FUN_100030a0((int)local_1c);
      local_18 = (_Container_proxy *)*piVar4;
    }
    else {
      piVar4 = (int *)FUN_10003080(local_1c);
      local_18 = (_Container_proxy *)*piVar4;
    }
  }
  else {
    piVar4 = (int *)FUN_100030a0((int)local_1c);
    local_18 = (_Container_proxy *)*piVar4;
  }
  if (local_1c == local_14) {
    piVar4 = (int *)FUN_10003090((int)local_14);
    local_20 = (_Container_proxy *)*piVar4;
    pcVar3 = (char *)FUN_10003050((int)local_18);
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10003090((int)local_18);
      *piVar4 = (int)local_20;
    }
    piVar4 = (int *)FUN_100039c0((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      piVar4 = (int *)FUN_100039c0((int)this);
      *piVar4 = (int)local_18;
    }
    else {
      piVar4 = (int *)FUN_10003080(local_20);
      if ((_Container_proxy *)*piVar4 == local_14) {
        piVar4 = (int *)FUN_10003080(local_20);
        *piVar4 = (int)local_18;
      }
      else {
        piVar4 = (int *)FUN_100030a0((int)local_20);
        *piVar4 = (int)local_18;
      }
    }
    piVar4 = (int *)FUN_100037d0((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      pcVar3 = (char *)FUN_10003050((int)local_18);
      if (*pcVar3 == '\0') {
        local_6c = (_Container_proxy *)FUN_10003960(local_18);
      }
      else {
        local_6c = local_20;
      }
      piVar4 = (int *)FUN_100037d0((int)this);
      *piVar4 = (int)local_6c;
    }
    piVar4 = (int *)FUN_100039a0((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      pcVar3 = (char *)FUN_10003050((int)local_18);
      if (*pcVar3 == '\0') {
        local_70 = (_Container_proxy *)FUN_10003920((int)local_18);
      }
      else {
        local_70 = local_20;
      }
      piVar4 = (int *)FUN_100039a0((int)this);
      *piVar4 = (int)local_70;
    }
  }
  else {
    piVar4 = (int *)FUN_10003080(local_14);
    piVar4 = (int *)FUN_10003090(*piVar4);
    *piVar4 = (int)local_1c;
    puVar5 = (undefined4 *)FUN_10003080(local_14);
    puVar6 = (undefined4 *)FUN_10003080(local_1c);
    *puVar6 = *puVar5;
    piVar4 = (int *)FUN_100030a0((int)local_14);
    if (local_1c == (_Container_proxy *)*piVar4) {
      local_20 = local_1c;
    }
    else {
      piVar4 = (int *)FUN_10003090((int)local_1c);
      local_20 = (_Container_proxy *)*piVar4;
      pcVar3 = (char *)FUN_10003050((int)local_18);
      if (*pcVar3 == '\0') {
        piVar4 = (int *)FUN_10003090((int)local_18);
        *piVar4 = (int)local_20;
      }
      piVar4 = (int *)FUN_10003080(local_20);
      *piVar4 = (int)local_18;
      puVar5 = (undefined4 *)FUN_100030a0((int)local_14);
      puVar6 = (undefined4 *)FUN_100030a0((int)local_1c);
      *puVar6 = *puVar5;
      piVar4 = (int *)FUN_100030a0((int)local_14);
      piVar4 = (int *)FUN_10003090(*piVar4);
      *piVar4 = (int)local_1c;
    }
    piVar4 = (int *)FUN_100039c0((int)this);
    if ((_Container_proxy *)*piVar4 == local_14) {
      piVar4 = (int *)FUN_100039c0((int)this);
      *piVar4 = (int)local_1c;
    }
    else {
      puVar5 = (undefined4 *)FUN_10003090((int)local_14);
      piVar4 = (int *)FUN_10003080(*puVar5);
      if ((_Container_proxy *)*piVar4 == local_14) {
        puVar5 = (undefined4 *)FUN_10003090((int)local_14);
        piVar4 = (int *)FUN_10003080(*puVar5);
        *piVar4 = (int)local_1c;
      }
      else {
        piVar4 = (int *)FUN_10003090((int)local_14);
        piVar4 = (int *)FUN_100030a0(*piVar4);
        *piVar4 = (int)local_1c;
      }
    }
    puVar5 = (undefined4 *)FUN_10003090((int)local_14);
    puVar6 = (undefined4 *)FUN_10003090((int)local_1c);
    *puVar6 = *puVar5;
    puVar7 = (undefined1 *)FUN_10003040((int)local_14);
    puVar8 = (undefined1 *)FUN_10003040((int)local_1c);
    FUN_10005740(puVar8,puVar7);
  }
  pcVar3 = (char *)FUN_10003040((int)local_14);
  if (*pcVar3 != '\x01') {
LAB_10002a11:
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)((int)this + 0xc),local_14);
    FUN_10007b50(local_14);
    if (*(int *)((int)this + 0x1c) != 0) {
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
    }
    FUN_10003150(this,param_1,param_2,param_3);
    ExceptionList = local_10;
    return param_1;
  }
LAB_10002695:
  piVar4 = (int *)FUN_100039c0((int)this);
  if ((local_18 == (_Container_proxy *)*piVar4) ||
     (pcVar3 = (char *)FUN_10003040((int)local_18), *pcVar3 != '\x01')) goto LAB_10002a02;
  piVar4 = (int *)FUN_10003080(local_20);
  if (local_18 == (_Container_proxy *)*piVar4) {
    piVar4 = (int *)FUN_100030a0((int)local_20);
    local_1c = (_Container_proxy *)*piVar4;
    pcVar3 = (char *)FUN_10003040((int)local_1c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined1 *)FUN_10003040((int)local_1c);
      *puVar7 = 1;
      puVar7 = (undefined1 *)FUN_10003040((int)local_20);
      *puVar7 = 0;
      FUN_100037f0(this,(int)local_20);
      piVar4 = (int *)FUN_100030a0((int)local_20);
      local_1c = (_Container_proxy *)*piVar4;
    }
    pcVar3 = (char *)FUN_10003050((int)local_1c);
    p_Var1 = local_20;
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_10003080(local_1c);
      pcVar3 = (char *)FUN_10003040(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_100030a0((int)local_1c);
        pcVar3 = (char *)FUN_10003040(*piVar4);
        if (*pcVar3 == '\x01') {
          puVar7 = (undefined1 *)FUN_10003040((int)local_1c);
          *puVar7 = 0;
          p_Var1 = local_20;
          goto LAB_10002684;
        }
      }
      piVar4 = (int *)FUN_100030a0((int)local_1c);
      pcVar3 = (char *)FUN_10003040(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10003080(local_1c);
        puVar7 = (undefined1 *)FUN_10003040(*piVar4);
        *puVar7 = 1;
        puVar7 = (undefined1 *)FUN_10003040((int)local_1c);
        *puVar7 = 0;
        FUN_100039e0(this,(int)local_1c);
        piVar4 = (int *)FUN_100030a0((int)local_20);
        local_1c = (_Container_proxy *)*piVar4;
      }
      puVar7 = (undefined1 *)FUN_10003040((int)local_20);
      puVar8 = (undefined1 *)FUN_10003040((int)local_1c);
      *puVar8 = *puVar7;
      puVar7 = (undefined1 *)FUN_10003040((int)local_20);
      *puVar7 = 1;
      piVar4 = (int *)FUN_100030a0((int)local_1c);
      puVar7 = (undefined1 *)FUN_10003040(*piVar4);
      *puVar7 = 1;
      FUN_100037f0(this,(int)local_20);
LAB_10002a02:
      puVar7 = (undefined1 *)FUN_10003040((int)local_18);
      *puVar7 = 1;
      goto LAB_10002a11;
    }
  }
  else {
    piVar4 = (int *)FUN_10003080(local_20);
    local_1c = (_Container_proxy *)*piVar4;
    pcVar3 = (char *)FUN_10003040((int)local_1c);
    if (*pcVar3 == '\0') {
      puVar7 = (undefined1 *)FUN_10003040((int)local_1c);
      *puVar7 = 1;
      puVar7 = (undefined1 *)FUN_10003040((int)local_20);
      *puVar7 = 0;
      FUN_100039e0(this,(int)local_20);
      piVar4 = (int *)FUN_10003080(local_20);
      local_1c = (_Container_proxy *)*piVar4;
    }
    pcVar3 = (char *)FUN_10003050((int)local_1c);
    if (*pcVar3 == '\0') {
      piVar4 = (int *)FUN_100030a0((int)local_1c);
      pcVar3 = (char *)FUN_10003040(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_10003080(local_1c);
        pcVar3 = (char *)FUN_10003040(*piVar4);
        if (*pcVar3 == '\x01') {
          puVar7 = (undefined1 *)FUN_10003040((int)local_1c);
          *puVar7 = 0;
          local_18 = local_20;
          p_Var1 = local_18;
          goto LAB_10002684;
        }
      }
      piVar4 = (int *)FUN_10003080(local_1c);
      pcVar3 = (char *)FUN_10003040(*piVar4);
      if (*pcVar3 == '\x01') {
        piVar4 = (int *)FUN_100030a0((int)local_1c);
        puVar7 = (undefined1 *)FUN_10003040(*piVar4);
        *puVar7 = 1;
        puVar7 = (undefined1 *)FUN_10003040((int)local_1c);
        *puVar7 = 0;
        FUN_100037f0(this,(int)local_1c);
        piVar4 = (int *)FUN_10003080(local_20);
        local_1c = (_Container_proxy *)*piVar4;
      }
      puVar7 = (undefined1 *)FUN_10003040((int)local_20);
      puVar8 = (undefined1 *)FUN_10003040((int)local_1c);
      *puVar8 = *puVar7;
      puVar7 = (undefined1 *)FUN_10003040((int)local_20);
      *puVar7 = 1;
      piVar4 = (int *)FUN_10003080(local_1c);
      puVar7 = (undefined1 *)FUN_10003040(*piVar4);
      *puVar7 = 1;
      FUN_100039e0(this,(int)local_20);
      goto LAB_10002a02;
    }
    local_18 = local_20;
    p_Var1 = local_18;
  }
LAB_10002684:
  local_18 = p_Var1;
  local_20 = local_18;
  piVar4 = (int *)FUN_10003090((int)local_18);
  local_20 = (_Container_proxy *)*piVar4;
  goto LAB_10002695;
}



/* ---- FUN_10002a80 @ 10002a80 size=147 ---- */

undefined4 * __thiscall FUN_10002a80(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [12];
  undefined4 local_c [2];
  
  FUN_100037a0(this,local_c,param_2);
  piVar3 = FUN_10003120(this,local_18);
  bVar2 = FUN_10003c40(local_c,piVar3);
  if (!bVar2) {
    iVar4 = FUN_10003c90((int)local_c);
    piVar3 = (int *)FUN_10003060(iVar4);
    bVar2 = FUN_10003be0(param_2,piVar3);
    if (!bVar2) {
      local_28 = local_c;
      goto LAB_10002af4;
    }
  }
  local_28 = FUN_10003120(this,local_20);
LAB_10002af4:
  uVar1 = local_28[1];
  *param_1 = *local_28;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_10002b20 @ 10002b20 size=19 ---- */

void __fastcall FUN_10002b20(undefined4 *param_1)

{
  FUN_10003000(param_1);
  return;
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
  FUN_10002b80(param_1);
  return;
}



/* ---- FUN_10002b80 @ 10002b80 size=19 ---- */

void __fastcall FUN_10002b80(undefined4 *param_1)

{
  FUN_10002b20(param_1);
  return;
}



/* ---- assign @ 10002ba0 size=182 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> > & __thiscall std::basic_string<char,struct
   std::char_traits<char>,class std::_DebugHeapAllocator<char> >::assign(class
   std::basic_string<char,struct std::char_traits<char>,class std::_DebugHeapAllocator<char> > const
   &,unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
          *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint local_8;
  
  uVar2 = FUN_10001e90((int)param_1);
  if (uVar2 < param_2) {
    FUN_1000a896();
  }
  iVar3 = FUN_10001e90((int)param_1);
  local_8 = iVar3 - param_2;
  if (param_3 < local_8) {
    local_8 = param_3;
  }
  if (this == (basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *)param_1)
  {
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
               param_2 + local_8,DAT_10019d74);
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,0,param_2);
  }
  else {
    bVar1 = _Grow(this,local_8,false);
    if (bVar1) {
      uVar6 = local_8;
      pcVar4 = FID_conflict__Myptr(param_1);
      pcVar4 = pcVar4 + param_2;
      uVar2 = *(uint *)(this + 0x18);
      pcVar5 = FID_conflict__Myptr(this);
      _Traits_helper::copy_s<std::char_traits<char>_>(pcVar5,uVar2,pcVar4,uVar6);
      _Eos(this,local_8);
    }
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *)
         this;
}



/* ---- assign @ 10002c60 size=38 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const *)
   
   Library: Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar2;
  
  uVar1 = length(param_1);
  pbVar2 = basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign
                     ((basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *)
                      this,param_1,uVar1);
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)pbVar2;
}



/* ---- resize @ 10002c90 size=68 ---- */

/* Library Function - Single Match
    public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::resize(unsigned int,char)
   
   Library: Visual Studio 2008 Debug */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          char param_2)

{
  if (*(uint *)(this + 0x14) < param_1) {
    append(this,param_1 - *(int *)(this + 0x14),param_2);
  }
  else {
    erase(this,param_1,DAT_10019d74);
  }
  return;
}



/* ---- FUN_10002ce0 @ 10002ce0 size=118 ---- */

void __thiscall FUN_10002ce0(void *this,char param_1,uint param_2)

{
  char *pcVar1;
  
  if ((param_1 != '\0') && (0xf < *(uint *)((int)this + 0x18))) {
    pcVar1 = *(char **)((int)this + 4);
    if (param_2 != 0) {
      std::_Traits_helper::copy_s<std::char_traits<char>_>
                ((char *)((int)this + 4),0x10,pcVar1,param_2);
    }
    FUN_10007b50(pcVar1);
  }
  *(undefined4 *)((int)this + 0x18) = 0xf;
  std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos(this,param_2)
  ;
  return;
}



/* ---- FID_conflict:_Myptr @ 10002d60 size=45 ---- */

/* Library Function - Multiple Matches With Different Base Names
    protected: char * __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Myptr(void)
    protected: char * __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Myptr(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

char * __thiscall FID_conflict__Myptr(void *this)

{
  char *local_c;
  
  if (*(uint *)((int)this + 0x18) < 0x10) {
    local_c = (char *)((int)this + 4);
  }
  else {
    local_c = *(char **)((int)this + 4);
  }
  return local_c;
}



/* ---- _String_val<> @ 10002d90 size=28 ---- */

/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall std::_String_val<char,class std::allocator<char> >::_String_val<char,class
   std::allocator<char> >(class std::allocator<char>)
    protected: __thiscall std::_String_val<unsigned short,class std::allocator<unsigned short>
   >::_String_val<unsigned short,class std::allocator<unsigned short> >(class
   std::allocator<unsigned short>)
    protected: __thiscall std::_String_val<wchar_t,class std::allocator<wchar_t>
   >::_String_val<wchar_t,class std::allocator<wchar_t> >(class std::allocator<wchar_t>)
   
   Library: Visual Studio 2003 Debug */

allocator<char> * __thiscall _String_val<>(allocator<char> *param_1,allocator<char> param_2)

{
  std::allocator<char>::allocator<char>(param_1,&param_2);
  return param_1;
}



/* ---- FUN_10002db0 @ 10002db0 size=28 ---- */

allocator<char> * __thiscall FUN_10002db0(void *this,allocator<char> *param_1)

{
  std::allocator<char>::allocator<char>(this,param_1);
  return this;
}



/* ---- FUN_10002dd0 @ 10002dd0 size=57 ---- */

int __fastcall FUN_10002dd0(int param_1)

{
  int local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_c = 0;
  }
  else {
    local_c = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) / 0x1c;
  }
  return local_c;
}



/* ---- FUN_10002e10 @ 10002e10 size=31 ---- */

int __fastcall FUN_10002e10(int param_1)

{
  return (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c;
}



/* ---- FUN_10002e30 @ 10002e30 size=145 ---- */

undefined4 * __thiscall
FUN_10002e30(void *this,undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            uint param_5)

{
  bool bVar1;
  void *pvVar2;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_10009510(this,&local_c,param_2,param_3);
  FUN_10009510(this,&local_14,param_4,param_5);
  bVar1 = FUN_10003fb0(&local_c,&local_14);
  if (bVar1) {
    pvVar2 = (void *)FUN_100056a0((uint3)*(undefined4 *)((int)this + 0x10),local_10,
                                  *(undefined4 *)((int)this + 0x10),local_8);
    FUN_10002f50(this,pvVar2,*(void **)((int)this + 0x10));
    *(void **)((int)this + 0x10) = pvVar2;
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}



/* ---- FUN_10002ed0 @ 10002ed0 size=126 ---- */

uint __thiscall FUN_10002ed0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    uVar1 = FUN_10003f70();
    if (uVar1 < param_1) {
      this = (void *)FUN_10009970();
    }
    else {
      uVar2 = FUN_10003f90(param_1);
      *(undefined4 *)((int)this + 0xc) = uVar2;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
      *(uint *)((int)this + 0x14) = param_1 * 0x1c + *(int *)((int)this + 0xc);
    }
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}



/* ---- FUN_10002f50 @ 10002f50 size=36 ---- */

void __thiscall FUN_10002f50(void *this,void *param_1,void *param_2)

{
  FUN_10005770(param_1,param_2,(int)this + 8);
  return;
}



/* ---- FUN_10002f80 @ 10002f80 size=113 ---- */

void __fastcall FUN_10002f80(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_10002f50(param_1,*(void **)((int)param_1 + 0xc),*(void **)((int)param_1 + 0x10));
    FUN_10007b50(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  return;
}



/* ---- FUN_10003000 @ 10003000 size=38 ---- */

void __fastcall FUN_10003000(undefined4 *param_1)

{
  FUN_10007b50((void *)*param_1);
  FUN_10006d60();
  return;
}



/* ---- allocator<> @ 10003030 size=14 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::allocator<char>::allocator<char>(void)
    public: __thiscall std::allocator<unsigned short>::allocator<unsigned short>(void)
    public: __thiscall std::allocator<wchar_t>::allocator<wchar_t>(void)
   
   Library: Visual Studio 2003 Debug */

undefined4 __fastcall allocator<>(undefined4 param_1)

{
  return param_1;
}



/* ---- FUN_10003040 @ 10003040 size=11 ---- */

int __cdecl FUN_10003040(int param_1)

{
  return param_1 + 0x14;
}



/* ---- FUN_10003050 @ 10003050 size=11 ---- */

int __cdecl FUN_10003050(int param_1)

{
  return param_1 + 0x15;
}



/* ---- FUN_10003060 @ 10003060 size=26 ---- */

void __cdecl FUN_10003060(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10003fe0(param_1);
  FUN_10003080(iVar1);
  return;
}



/* ---- FUN_10003080 @ 10003080 size=8 ---- */

undefined4 __cdecl FUN_10003080(undefined4 param_1)

{
  return param_1;
}



/* ---- FUN_10003090 @ 10003090 size=11 ---- */

int __cdecl FUN_10003090(int param_1)

{
  return param_1 + 4;
}



/* ---- FUN_100030a0 @ 100030a0 size=11 ---- */

int __cdecl FUN_100030a0(int param_1)

{
  return param_1 + 8;
}



/* ---- FUN_100030b0 @ 100030b0 size=109 ---- */

undefined4 * __thiscall FUN_100030b0(void *this,byte *param_1,allocator<char> *param_2)

{
  allocator<char> aaStack_1d [13];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016c38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::allocator<char>::allocator<char>(aaStack_1d + -3,param_2);
  FUN_10004840(this,param_1,SUB41(this,0));
  local_8 = 0;
  FUN_100042c0((int)this);
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_10003120 @ 10003120 size=35 ---- */

void * __thiscall FUN_10003120(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(undefined4 *)((int)this + 0x18),this);
  return param_1;
}



/* ---- FUN_10003150 @ 10003150 size=47 ---- */

undefined4 * __thiscall
FUN_10003150(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

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



/* ---- FUN_10003180 @ 10003180 size=1543 ---- */

/* WARNING: Removing unreachable block (ram,0x100031cb) */
/* WARNING: Removing unreachable block (ram,0x10003240) */
/* WARNING: Removing unreachable block (ram,0x100032b9) */
/* WARNING: Removing unreachable block (ram,0x100032ee) */
/* WARNING: Removing unreachable block (ram,0x10003332) */
/* WARNING: Removing unreachable block (ram,0x1000337a) */
/* WARNING: Removing unreachable block (ram,0x10003355) */
/* WARNING: Removing unreachable block (ram,0x100033a2) */
/* WARNING: Removing unreachable block (ram,0x100033d7) */
/* WARNING: Removing unreachable block (ram,0x10003406) */
/* WARNING: Removing unreachable block (ram,0x10003437) */
/* WARNING: Removing unreachable block (ram,0x1000347f) */
/* WARNING: Removing unreachable block (ram,0x1000345a) */
/* WARNING: Removing unreachable block (ram,0x1000325c) */
/* WARNING: Removing unreachable block (ram,0x1000328f) */
/* WARNING: Removing unreachable block (ram,0x100032b4) */
/* WARNING: Removing unreachable block (ram,0x100031e7) */
/* WARNING: Removing unreachable block (ram,0x10003218) */
/* WARNING: Removing unreachable block (ram,0x1000323b) */
/* WARNING: Removing unreachable block (ram,0x100034a2) */
/* WARNING: Variable defined which should be unmapped: param_2 */

undefined4 * __thiscall
FUN_10003180(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *extraout_EAX;
  undefined4 *puVar7;
  undefined1 local_48 [12];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  int local_c;
  undefined4 local_8;
  
  _String_const_iterator<>(&local_c);
  iVar3 = FUN_10004020((int)param_1);
  if (iVar3 == 0) {
    FUN_10004330(param_1,param_2,'\x01',param_1[6],param_5);
    return param_2;
  }
  piVar4 = FUN_10003ff0(param_1,local_2c);
  bVar2 = FUN_10003c40(&param_3,piVar4);
  if (bVar2) {
    iVar3 = FUN_10003c90((int)&param_3);
    piVar4 = (int *)FUN_10003060(iVar3);
    piVar5 = (int *)FUN_10003080(param_5);
    bVar2 = FUN_10003be0(piVar5,piVar4);
    if (bVar2) {
      puVar7 = param_5;
      iVar3 = FUN_10003c90((int)&param_3);
      FUN_10004330(param_1,param_2,'\x01',iVar3,puVar7);
      return param_2;
    }
  }
  else {
    piVar4 = FUN_10003120(param_1,local_34);
    bVar2 = FUN_10003c40(&param_3,piVar4);
    if (bVar2) {
      piVar4 = (int *)FUN_10003080(param_5);
      piVar5 = (int *)FUN_100039a0((int)param_1);
      piVar5 = (int *)FUN_10003060(*piVar5);
      bVar2 = FUN_10003be0(piVar5,piVar4);
      if (bVar2) {
        puVar7 = param_5;
        piVar4 = (int *)FUN_100039a0((int)param_1);
        FUN_10004330(param_1,param_2,'\0',*piVar4,puVar7);
        return param_2;
      }
    }
    else {
      iVar3 = FUN_10003c90((int)&param_3);
      piVar4 = (int *)FUN_10003060(iVar3);
      piVar5 = (int *)FUN_10003080(param_5);
      bVar2 = FUN_10003be0(piVar5,piVar4);
      if (bVar2) {
        local_c = param_3;
        local_8 = param_4;
        piVar4 = (int *)FUN_10003080(param_5);
        piVar5 = FUN_10004930(&local_c);
        iVar3 = FUN_10003c90((int)piVar5);
        piVar5 = (int *)FUN_10003060(iVar3);
        bVar2 = FUN_10003be0(piVar5,piVar4);
        if (bVar2) {
          iVar3 = FUN_10003c90((int)&local_c);
          piVar4 = (int *)FUN_100030a0(iVar3);
          pcVar6 = (char *)FUN_10003050(*piVar4);
          if (*pcVar6 == '\0') {
            puVar7 = param_5;
            iVar3 = FUN_10003c90((int)&param_3);
            FUN_10004330(param_1,param_2,'\x01',iVar3,puVar7);
            return param_2;
          }
          puVar7 = param_5;
          iVar3 = FUN_10003c90((int)&local_c);
          FUN_10004330(param_1,param_2,'\0',iVar3,puVar7);
          return param_2;
        }
      }
      piVar4 = (int *)FUN_10003080(param_5);
      iVar3 = FUN_10003c90((int)&param_3);
      piVar5 = (int *)FUN_10003060(iVar3);
      bVar2 = FUN_10003be0(piVar5,piVar4);
      if (bVar2) {
        local_c = param_3;
        local_8 = param_4;
        piVar4 = FUN_10003120(param_1,local_3c);
        piVar5 = FUN_10003c20(&local_c);
        bVar2 = FUN_10003c40(piVar5,piVar4);
        if (!bVar2) {
          iVar3 = FUN_10003c90((int)&local_c);
          piVar4 = (int *)FUN_10003060(iVar3);
          piVar5 = (int *)FUN_10003080(param_5);
          bVar2 = FUN_10003be0(piVar5,piVar4);
          if (!bVar2) goto LAB_10003778;
        }
        iVar3 = FUN_10003c90((int)&param_3);
        piVar4 = (int *)FUN_100030a0(iVar3);
        pcVar6 = (char *)FUN_10003050(*piVar4);
        if (*pcVar6 == '\0') {
          puVar7 = param_5;
          iVar3 = FUN_10003c90((int)&local_c);
          FUN_10004330(param_1,param_2,'\x01',iVar3,puVar7);
          return param_2;
        }
        puVar7 = param_5;
        iVar3 = FUN_10003c90((int)&param_3);
        FUN_10004330(param_1,param_2,'\0',iVar3,puVar7);
        return param_2;
      }
    }
  }
LAB_10003778:
  FUN_10004040(param_1,local_48,param_5);
  uVar1 = extraout_EAX[1];
  *param_2 = *extraout_EAX;
  param_2[1] = uVar1;
  return param_2;
}



/* ---- FUN_100037a0 @ 100037a0 size=41 ---- */

void * __thiscall FUN_100037a0(void *this,void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100047b0(this,param_2);
  _Vector_iterator<>(param_1,iVar1,this);
  return param_1;
}



/* ---- FUN_100037d0 @ 100037d0 size=26 ---- */

void __fastcall FUN_100037d0(int param_1)

{
  FUN_10003080(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* ---- FUN_100037f0 @ 100037f0 size=304 ---- */

void __thiscall FUN_100037f0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  piVar2 = (int *)FUN_100030a0(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_10003080(iVar1);
  puVar4 = (undefined4 *)FUN_100030a0(param_1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_10003080(iVar1);
  pcVar5 = (char *)FUN_10003050(*piVar2);
  if (*pcVar5 == '\0') {
    piVar2 = (int *)FUN_10003080(iVar1);
    piVar2 = (int *)FUN_10003090(*piVar2);
    *piVar2 = param_1;
  }
  puVar3 = (undefined4 *)FUN_10003090(param_1);
  puVar4 = (undefined4 *)FUN_10003090(iVar1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_100039c0((int)this);
  if (param_1 == *piVar2) {
    piVar2 = (int *)FUN_100039c0((int)this);
    *piVar2 = iVar1;
  }
  else {
    puVar3 = (undefined4 *)FUN_10003090(param_1);
    piVar2 = (int *)FUN_10003080(*puVar3);
    if (param_1 == *piVar2) {
      puVar3 = (undefined4 *)FUN_10003090(param_1);
      piVar2 = (int *)FUN_10003080(*puVar3);
      *piVar2 = iVar1;
    }
    else {
      piVar2 = (int *)FUN_10003090(param_1);
      piVar2 = (int *)FUN_100030a0(*piVar2);
      *piVar2 = iVar1;
    }
  }
  piVar2 = (int *)FUN_10003080(iVar1);
  *piVar2 = param_1;
  piVar2 = (int *)FUN_10003090(param_1);
  *piVar2 = iVar1;
  return;
}



/* ---- FUN_10003920 @ 10003920 size=57 ---- */

int __cdecl FUN_10003920(int param_1)

{
  int *piVar1;
  char *pcVar2;
  
  while( true ) {
    piVar1 = (int *)FUN_100030a0(param_1);
    pcVar2 = (char *)FUN_10003050(*piVar1);
    if (*pcVar2 != '\0') break;
    piVar1 = (int *)FUN_100030a0(param_1);
    param_1 = *piVar1;
  }
  return param_1;
}



/* ---- FUN_10003960 @ 10003960 size=57 ---- */

undefined4 __cdecl FUN_10003960(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  while( true ) {
    piVar1 = (int *)FUN_10003080(param_1);
    pcVar2 = (char *)FUN_10003050(*piVar1);
    if (*pcVar2 != '\0') break;
    puVar3 = (undefined4 *)FUN_10003080(param_1);
    param_1 = *puVar3;
  }
  return param_1;
}



/* ---- FUN_100039a0 @ 100039a0 size=26 ---- */

void __fastcall FUN_100039a0(int param_1)

{
  FUN_100030a0(*(int *)(param_1 + 0x18));
  return;
}



/* ---- FUN_100039c0 @ 100039c0 size=26 ---- */

void __fastcall FUN_100039c0(int param_1)

{
  FUN_10003090(*(int *)(param_1 + 0x18));
  return;
}



/* ---- FUN_100039e0 @ 100039e0 size=304 ---- */

void __thiscall FUN_100039e0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  piVar2 = (int *)FUN_10003080(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_100030a0(iVar1);
  puVar4 = (undefined4 *)FUN_10003080(param_1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_100030a0(iVar1);
  pcVar5 = (char *)FUN_10003050(*piVar2);
  if (*pcVar5 == '\0') {
    piVar2 = (int *)FUN_100030a0(iVar1);
    piVar2 = (int *)FUN_10003090(*piVar2);
    *piVar2 = param_1;
  }
  puVar3 = (undefined4 *)FUN_10003090(param_1);
  puVar4 = (undefined4 *)FUN_10003090(iVar1);
  *puVar4 = *puVar3;
  piVar2 = (int *)FUN_100039c0((int)this);
  if (param_1 == *piVar2) {
    piVar2 = (int *)FUN_100039c0((int)this);
    *piVar2 = iVar1;
  }
  else {
    piVar2 = (int *)FUN_10003090(param_1);
    piVar2 = (int *)FUN_100030a0(*piVar2);
    if (param_1 == *piVar2) {
      piVar2 = (int *)FUN_10003090(param_1);
      piVar2 = (int *)FUN_100030a0(*piVar2);
      *piVar2 = iVar1;
    }
    else {
      puVar3 = (undefined4 *)FUN_10003090(param_1);
      piVar2 = (int *)FUN_10003080(*puVar3);
      *piVar2 = iVar1;
    }
  }
  piVar2 = (int *)FUN_100030a0(iVar1);
  *piVar2 = param_1;
  piVar2 = (int *)FUN_10003090(param_1);
  *piVar2 = iVar1;
  return;
}



/* ---- FUN_10003b10 @ 10003b10 size=208 ---- */

void __fastcall FUN_10003b10(void *param_1)

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
  
  piVar1 = FUN_10003120(param_1,local_14);
  local_c = *piVar1;
  local_8 = piVar1[1];
  puVar2 = FUN_10003ff0(param_1,local_24);
  local_1c = *puVar2;
  local_18 = puVar2[1];
  FUN_10004210(param_1,local_2c,local_1c,local_18,local_c);
  p_Var3 = (_Container_proxy *)FUN_10003080(*(undefined4 *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  p_Var3 = (_Container_proxy *)FUN_10003090(*(int *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  p_Var3 = (_Container_proxy *)FUN_100030a0(*(int *)((int)param_1 + 0x18));
  std::allocator<std::_Container_proxy>::destroy
            ((allocator<std::_Container_proxy> *)((int)param_1 + 0x10),p_Var3);
  FUN_10007b50(*(void **)((int)param_1 + 0x18));
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_10003be0 @ 10003be0 size=28 ---- */

bool FUN_10003be0(int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}



/* ---- FUN_10003c00 @ 10003c00 size=19 ---- */

void __fastcall FUN_10003c00(int *param_1)

{
  FUN_100048e0(param_1);
  return;
}



/* ---- FUN_10003c20 @ 10003c20 size=22 ---- */

int * __fastcall FUN_10003c20(int *param_1)

{
  FUN_10004950(param_1);
  return param_1;
}



/* ---- FUN_10003c40 @ 10003c40 size=69 ---- */

bool __thiscall FUN_10003c40(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10008c90(this);
  if (bVar1) {
    bVar1 = FUN_10001220(this,param_1);
    if (bVar1) goto LAB_10003c6e;
  }
  FUN_1000add8();
LAB_10003c6e:
  return *(int *)((int)this + 4) == param_1[1];
}



/* ---- FUN_10003c90 @ 10003c90 size=17 ---- */

undefined4 __fastcall FUN_10003c90(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* ---- FUN_10003cb0 @ 10003cb0 size=37 ---- */

undefined4 * __thiscall FUN_10003cb0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return this;
}



/* ---- append @ 10003ce0 size=115 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(unsigned int,char)
   
   Library: Visual Studio 2008 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          char param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((uint)(DAT_10019d74 - *(int *)(this + 0x14)) <= param_1) {
    FUN_1000a85e();
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(this + 0x14);
    bVar2 = basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Grow
                      ((basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *)
                       this,iVar1 + param_1,false);
    if (bVar2) {
      _Chassign(this,*(uint *)(this + 0x14),param_1,param_2);
      basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos
                ((basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *)this,
                 iVar1 + param_1);
    }
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}



/* ---- assign @ 10003d60 size=132 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> > & __thiscall std::basic_string<char,struct
   std::char_traits<char>,class std::_DebugHeapAllocator<char> >::assign(char const *,unsigned int)
   
   Library: Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,
          char *param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = FID_conflict__Inside(this,param_1);
  if (bVar1) {
    pcVar2 = FID_conflict__Myptr(this);
    this = (basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *)
           assign(this,(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                        *)this,(int)param_1 - (int)pcVar2,param_2);
  }
  else {
    bVar1 = _Grow(this,param_2,false);
    if (bVar1) {
      uVar3 = *(uint *)(this + 0x18);
      uVar4 = param_2;
      pcVar2 = FID_conflict__Myptr(this);
      _Traits_helper::copy_s<std::char_traits<char>_>(pcVar2,uVar3,param_1,uVar4);
      _Eos(this,param_2);
    }
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *)
         this;
}



/* ---- erase @ 10003df0 size=148 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::erase(unsigned int,unsigned int)
   
   Library: Visual Studio 2008 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          uint param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  if (*(uint *)(this + 0x14) < param_1) {
    FUN_1000a896();
  }
  if (*(int *)(this + 0x14) - param_1 < param_2) {
    param_2 = *(int *)(this + 0x14) - param_1;
  }
  if (param_2 != 0) {
    uVar4 = (*(int *)(this + 0x14) - param_1) - param_2;
    pcVar1 = FID_conflict__Myptr(this);
    pcVar1 = pcVar1 + param_2 + param_1;
    uVar2 = *(int *)(this + 0x18) - param_1;
    pcVar3 = FID_conflict__Myptr(this);
    _Traits_helper::move_s<std::char_traits<char>_>(pcVar3 + param_1,uVar2,pcVar1,uVar4);
    basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos
              ((basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *)this,
               *(int *)(this + 0x14) - param_2);
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}



/* ---- _Eos @ 10003e90 size=52 ---- */

/* Library Function - Single Match
    protected: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Eos(unsigned int)
   
   Library: Visual Studio 2005 Debug */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos
          (basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,
          uint param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 local_5;
  
  local_5 = 0;
  *(uint *)(this + 0x14) = param_1;
  puVar2 = &local_5;
  pcVar1 = FID_conflict__Myptr(this);
  FUN_100010f0(pcVar1 + param_1,puVar2);
  return;
}



/* ---- _Grow @ 10003ed0 size=148 ---- */

/* Library Function - Single Match
    protected: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Grow(unsigned int,bool)
   
   Library: Visual Studio 2005 Debug */

bool __thiscall
std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Grow
          (basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,
          uint param_1,bool param_2)

{
  uint uVar1;
  uint local_c;
  
  uVar1 = FID_conflict_max_size(this);
  if (uVar1 < param_1) {
    FUN_1000a85e();
  }
  if (*(uint *)(this + 0x18) < param_1) {
    FUN_10004af0(this,param_1);
  }
  else if ((param_2) && (param_1 < 0x10)) {
    if (param_1 < *(uint *)(this + 0x14)) {
      local_c = param_1;
    }
    else {
      local_c = *(uint *)(this + 0x14);
    }
    FUN_10002ce0(this,'\x01',local_c);
  }
  else if (param_1 == 0) {
    _Eos(this,0);
  }
  return param_1 != 0;
}



/* ---- FUN_10003f70 @ 10003f70 size=22 ---- */

void FUN_10003f70(void)

{
  max_size();
  return;
}



/* ---- FUN_10003f90 @ 10003f90 size=27 ---- */

void FUN_10003f90(uint param_1)

{
  FUN_100057f0(param_1);
  return;
}



/* ---- FUN_10003fb0 @ 10003fb0 size=35 ---- */

bool __thiscall FUN_10003fb0(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10004ce0(this,param_1);
  return (bool)('\x01' - ((uVar1 & 0xff) != 0));
}



/* ---- FUN_10003fe0 @ 10003fe0 size=11 ---- */

int __cdecl FUN_10003fe0(int param_1)

{
  return param_1 + 0xc;
}



/* ---- FUN_10003ff0 @ 10003ff0 size=39 ---- */

void * __thiscall FUN_10003ff0(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100037d0((int)this);
  _Vector_iterator<>(param_1,*puVar1,this);
  return param_1;
}



/* ---- FUN_10004020 @ 10004020 size=17 ---- */

undefined4 __fastcall FUN_10004020(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* ---- FUN_10004040 @ 10004040 size=440 ---- */

/* WARNING: Removing unreachable block (ram,0x100040dc) */
/* WARNING: Variable defined which should be unmapped: param_2 */

void * __thiscall FUN_10004040(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
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
  
  piVar2 = (int *)FUN_100039c0((int)param_1);
  local_10 = *piVar2;
  local_c = param_1[6];
  local_5 = '\x01';
  while (pcVar3 = (char *)FUN_10003050(local_10), *pcVar3 == '\0') {
    local_c = local_10;
    piVar2 = (int *)FUN_10003060(local_10);
    piVar4 = (int *)FUN_10003080(param_3);
    local_5 = FUN_10003be0(piVar4,piVar2);
    if ((bool)local_5) {
      piVar2 = (int *)FUN_10003080(local_10);
      local_50 = *piVar2;
    }
    else {
      piVar2 = (int *)FUN_100030a0(local_10);
      local_50 = *piVar2;
    }
    local_10 = local_50;
  }
  _Vector_iterator<>(local_18,local_c,param_1);
  if (local_5 != '\0') {
    piVar2 = FUN_10003ff0(param_1,local_2c);
    bVar1 = FUN_10003c40(local_18,piVar2);
    if (bVar1) {
      local_2d = 1;
      puVar7 = &local_2d;
      puVar6 = FUN_10004330(param_1,local_38,'\x01',local_c,param_3);
      FUN_10005230(param_2,puVar6,puVar7);
      return param_2;
    }
    FUN_10005040(local_18);
  }
  piVar2 = (int *)FUN_10003080(param_3);
  iVar5 = FUN_10003c90((int)local_18);
  piVar4 = (int *)FUN_10003060(iVar5);
  bVar1 = FUN_10003be0(piVar4,piVar2);
  if (bVar1) {
    local_39 = 1;
    puVar7 = &local_39;
    puVar6 = FUN_10004330(param_1,local_44,local_5,local_c,param_3);
    FUN_10005230(param_2,puVar6,puVar7);
  }
  else {
    local_45 = 0;
    FUN_10005230(param_2,local_18,&local_45);
  }
  return param_2;
}



/* ---- FUN_10004210 @ 10004210 size=173 ---- */

/* WARNING: Variable defined which should be unmapped: param_2 */

undefined4 * __thiscall
FUN_10004210(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 local_24 [2];
  int local_1c [2];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  piVar2 = FUN_10003ff0(param_1,local_c);
  bVar1 = FUN_10003c40(&param_3,piVar2);
  if (bVar1) {
    piVar2 = FUN_10003120(param_1,local_14);
    bVar1 = FUN_10003c40(&param_5,piVar2);
    if (bVar1) {
      FUN_10004d50(param_1);
      FUN_10003ff0(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_100050e0(&param_3,&param_5), bVar1) {
    piVar2 = FUN_100050a0(&param_3,local_1c);
    FUN_100022a0(param_1,local_24,*piVar2,piVar2[1]);
  }
  FUN_10003150(param_1,param_2,param_3,param_4);
  return param_2;
}



/* ---- FUN_100042c0 @ 100042c0 size=101 ---- */

void __fastcall FUN_100042c0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_10004db0();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  puVar2 = (undefined1 *)FUN_10003050(*(int *)(param_1 + 0x18));
  *puVar2 = 1;
  puVar3 = (undefined4 *)FUN_100039c0(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_100037d0(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_100039a0(param_1);
  *puVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* ---- FUN_10004330 @ 10004330 size=1125 ---- */

void * __thiscall
FUN_10004330(void *this,void *param_1,char param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_5c [28];
  undefined1 local_40 [40];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016dd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_10004d30();
  if (iVar1 - 1U <= *(uint *)((int)this + 0x1c)) {
    basic_string<>(local_5c,"map/set<T> too long");
    local_8 = 0;
    FID_conflict_length_error(local_40,local_5c);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_40,&DAT_1001a9a4);
  }
  local_14 = FUN_10004f20(*(undefined4 *)((int)this + 0x18),param_3,
                          *(undefined4 *)((int)this + 0x18),param_4,0);
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  if (param_3 == *(int *)((int)this + 0x18)) {
    piVar2 = (int *)FUN_100039c0((int)this);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_100037d0((int)this);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_100039a0((int)this);
    *piVar2 = local_14;
  }
  else if (param_2 == '\0') {
    piVar2 = (int *)FUN_100030a0(param_3);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_100039a0((int)this);
    if (param_3 == *piVar2) {
      piVar2 = (int *)FUN_100039a0((int)this);
      *piVar2 = local_14;
    }
  }
  else {
    piVar2 = (int *)FUN_10003080(param_3);
    *piVar2 = local_14;
    piVar2 = (int *)FUN_100037d0((int)this);
    if (param_3 == *piVar2) {
      piVar2 = (int *)FUN_100037d0((int)this);
      *piVar2 = local_14;
    }
  }
  local_18 = local_14;
  while( true ) {
    piVar2 = (int *)FUN_10003090(local_18);
    pcVar3 = (char *)FUN_10003040(*piVar2);
    if (*pcVar3 != '\0') break;
    piVar2 = (int *)FUN_10003090(local_18);
    piVar4 = (int *)FUN_10003090(local_18);
    puVar5 = (undefined4 *)FUN_10003090(*piVar4);
    piVar4 = (int *)FUN_10003080(*puVar5);
    if (*piVar2 == *piVar4) {
      piVar2 = (int *)FUN_10003090(local_18);
      piVar2 = (int *)FUN_10003090(*piVar2);
      piVar2 = (int *)FUN_100030a0(*piVar2);
      iVar1 = *piVar2;
      pcVar3 = (char *)FUN_10003040(iVar1);
      if (*pcVar3 == '\0') {
        piVar2 = (int *)FUN_10003090(local_18);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 1;
        puVar6 = (undefined1 *)FUN_10003040(iVar1);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        local_18 = *piVar2;
      }
      else {
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_100030a0(*piVar2);
        if (local_18 == *piVar2) {
          piVar2 = (int *)FUN_10003090(local_18);
          local_18 = *piVar2;
          FUN_100037f0(this,local_18);
        }
        piVar2 = (int *)FUN_10003090(local_18);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        FUN_100039e0(this,*piVar2);
      }
    }
    else {
      piVar2 = (int *)FUN_10003090(local_18);
      puVar5 = (undefined4 *)FUN_10003090(*piVar2);
      piVar2 = (int *)FUN_10003080(*puVar5);
      iVar1 = *piVar2;
      pcVar3 = (char *)FUN_10003040(iVar1);
      if (*pcVar3 == '\0') {
        piVar2 = (int *)FUN_10003090(local_18);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 1;
        puVar6 = (undefined1 *)FUN_10003040(iVar1);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        local_18 = *piVar2;
      }
      else {
        puVar5 = (undefined4 *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003080(*puVar5);
        if (local_18 == *piVar2) {
          piVar2 = (int *)FUN_10003090(local_18);
          local_18 = *piVar2;
          FUN_100039e0(this,local_18);
        }
        piVar2 = (int *)FUN_10003090(local_18);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 1;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        puVar6 = (undefined1 *)FUN_10003040(*piVar2);
        *puVar6 = 0;
        piVar2 = (int *)FUN_10003090(local_18);
        piVar2 = (int *)FUN_10003090(*piVar2);
        FUN_100037f0(this,*piVar2);
      }
    }
  }
  piVar2 = (int *)FUN_100039c0((int)this);
  puVar6 = (undefined1 *)FUN_10003040(*piVar2);
  *puVar6 = 1;
  _Vector_iterator<>(param_1,local_14,this);
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_100047b0 @ 100047b0 size=138 ---- */

int __thiscall FUN_100047b0(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  piVar2 = (int *)FUN_100039c0((int)this);
  local_c = *piVar2;
  local_8 = *(int *)((int)this + 0x18);
  while (pcVar3 = (char *)FUN_10003050(local_c), *pcVar3 == '\0') {
    piVar2 = param_1;
    piVar4 = (int *)FUN_10003060(local_c);
    bVar1 = FUN_10003be0(piVar4,piVar2);
    if (bVar1) {
      piVar2 = (int *)FUN_100030a0(local_c);
      local_c = *piVar2;
    }
    else {
      local_8 = local_c;
      piVar2 = (int *)FUN_10003080(local_c);
      local_c = *piVar2;
    }
  }
  return local_8;
}



/* ---- FUN_10004840 @ 10004840 size=60 ---- */

undefined4 * __thiscall FUN_10004840(undefined4 *param_1,byte *param_2,allocator<char> param_3)

{
  undefined4 *puVar1;
  allocator<char> aaStack_a [6];
  
  puVar1 = param_1;
  std::allocator<char>::allocator<char>(aaStack_a + -6,&param_3);
  FUN_10005000(param_1,param_2,SUB41(puVar1,0));
  std::allocator<char>::allocator<char>((allocator<char> *)(param_1 + 5),&param_3);
  return param_1;
}



/* ---- destroy @ 10004880 size=25 ---- */

/* Library Function - Single Match
    public: void __thiscall std::allocator<struct std::_Container_proxy>::destroy(struct
   std::_Container_proxy *)
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void __thiscall
std::allocator<std::_Container_proxy>::destroy
          (allocator<std::_Container_proxy> *this,_Container_proxy *param_1)

{
  FUN_10005840();
  return;
}



/* ---- _Vector_iterator<> @ 100048a0 size=32 ---- */

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
  FUN_10005060(this,param_1,param_2);
  return this;
}



/* ---- _String_const_iterator<> @ 100048c0 size=32 ---- */

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
  FUN_10007a60(param_1);
  param_1[1] = 0;
  return param_1;
}



/* ---- FUN_100048e0 @ 100048e0 size=70 ---- */

void __fastcall FUN_100048e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  iVar2 = FUN_100011f0(param_1);
  if (param_1[1] == *(int *)(iVar2 + 0x18)) {
    FUN_1000add8();
  }
  FUN_10003fe0(param_1[1]);
  return;
}



/* ---- FUN_10004930 @ 10004930 size=22 ---- */

int * __fastcall FUN_10004930(int *param_1)

{
  FUN_10005110(param_1);
  return param_1;
}



/* ---- FUN_10004950 @ 10004950 size=213 ---- */

void __fastcall FUN_10004950(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  pcVar2 = (char *)FUN_10003050(param_1[1]);
  if (*pcVar2 == '\0') {
    piVar3 = (int *)FUN_100030a0(param_1[1]);
    pcVar2 = (char *)FUN_10003050(*piVar3);
    if (*pcVar2 == '\0') {
      puVar4 = (undefined4 *)FUN_100030a0(param_1[1]);
      iVar5 = FUN_10003960(*puVar4);
      param_1[1] = iVar5;
    }
    else {
      while( true ) {
        piVar3 = (int *)FUN_10003090(param_1[1]);
        iVar5 = *piVar3;
        pcVar2 = (char *)FUN_10003050(iVar5);
        if (*pcVar2 != '\0') break;
        piVar3 = (int *)FUN_100030a0(iVar5);
        if (param_1[1] != *piVar3) break;
        param_1[1] = iVar5;
      }
      param_1[1] = iVar5;
    }
  }
  else {
    FUN_1000add8();
  }
  return;
}



/* ---- length_error @ 10004a30 size=37 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::ios_base::failure::failure(class std::ios_base::failure const &)
    public: __thiscall std::invalid_argument::invalid_argument(class std::invalid_argument const &)
    public: __thiscall std::length_error::length_error(class std::length_error const &)
    public: __thiscall std::out_of_range::out_of_range(class std::out_of_range const &)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug
   ***** Resolved FID Conflict ***** */

length_error * __thiscall std::length_error::length_error(length_error *this,undefined4 *param_1)

{
  logic_error::logic_error((logic_error *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FID_conflict:max_size @ 10004a60 size=51 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: unsigned int __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::max_size(void)const 
    public: unsigned int __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::max_size(void)const 
    public: unsigned int __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::max_size(void)const 
    public: unsigned int __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::max_size(void)const 
   
   Library: Visual Studio 2003 Debug */

uint __thiscall FID_conflict_max_size(void *this)

{
  uint local_10;
  
  local_10 = std::allocator<char>::max_size(this);
  if (local_10 < 2) {
    local_10 = 1;
  }
  else {
    local_10 = local_10 - 1;
  }
  return local_10;
}



/* ---- _Chassign @ 10004aa0 size=74 ---- */

/* Library Function - Single Match
    protected: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Chassign(unsigned int,unsigned int,char)
   
   Library: Visual Studio 2008 Debug */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Chassign
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,
          uint param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  if (param_2 == 1) {
    pcVar2 = &param_3;
    pcVar1 = FID_conflict__Myptr(this);
    FUN_100010f0(pcVar1 + param_1,pcVar2);
  }
  else {
    cVar3 = param_3;
    pcVar2 = FID_conflict__Myptr(this);
    char_traits<char>::assign(pcVar2 + param_1,param_2,cVar3);
  }
  return;
}



/* ---- FUN_10004af0 @ 10004af0 size=184 ---- */

void __thiscall FUN_10004af0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016c10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = param_1 | 0xf;
  uVar1 = FID_conflict_max_size(this);
  if (uVar1 < local_1c) {
    local_1c = param_1;
  }
  else if (local_1c / 3 < *(uint *)((int)this + 0x18) >> 1) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar2 = FID_conflict_max_size(this);
    if (*(uint *)((int)this + 0x18) <= uVar2 - (uVar1 >> 1)) {
      local_1c = (*(uint *)((int)this + 0x18) >> 1) + *(int *)((int)this + 0x18);
    }
  }
  local_8 = 0;
  std::allocator<char>::allocate(this,local_1c + 1);
  FUN_10004c05();
  return;
}



/* ---- Catch_All@10004ba8 @ 10004ba8 size=39 ---- */

void Catch_All_10004ba8(void)

{
  char *pcVar1;
  int unaff_EBP;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  pcVar1 = std::allocator<char>::allocate
                     (*(allocator<char> **)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x18) + 1);
  *(char **)(unaff_EBP + -0x24) = pcVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
  FUN_10004bf1();
  return;
}



/* ---- Catch_All@10004bcf @ 10004bcf size=21 ---- */

void Catch_All_10004bcf(void)

{
  int unaff_EBP;
  
  FUN_10002ce0(*(void **)(unaff_EBP + -0x1c),'\x01',0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10004bf1 @ 10004bf1 size=20 ---- */

undefined4 FUN_10004bf1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  return 0x10004c0c;
}



/* ---- FUN_10004c05 @ 10004c05 size=107 ---- */

void FUN_10004c05(void)

{
  char *pcVar1;
  int unaff_EBP;
  uint uVar2;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    uVar2 = *(uint *)(unaff_EBP + 0xc);
    pcVar1 = FID_conflict__Myptr(*(void **)(unaff_EBP + -0x1c));
    std::_Traits_helper::copy_s<std::char_traits<char>_>
              (*(char **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x18) + 1,pcVar1,uVar2);
  }
  FUN_10002ce0(*(void **)(unaff_EBP + -0x1c),'\x01',0);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18) = *(undefined4 *)(unaff_EBP + -0x18);
  std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos
            (*(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> **)
              (unaff_EBP + -0x1c),*(uint *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FID_conflict:_Inside @ 10004c70 size=57 ---- */

/* Library Function - Multiple Matches With Different Base Names
    protected: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Inside(char const *)
    protected: bool __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Inside(char const *)
   
   Library: Visual Studio 2008 Debug */

bool __thiscall FID_conflict__Inside(void *this,char *param_1)

{
  char *pcVar1;
  
  if (((param_1 == (char *)0x0) || (pcVar1 = FID_conflict__Myptr(this), param_1 < pcVar1)) ||
     (pcVar1 = FID_conflict__Myptr(this), pcVar1 + *(int *)((int)this + 0x14) <= param_1)) {
    return false;
  }
  return true;
}



/* ---- max_size @ 10004cb0 size=44 ---- */

/* WARNING: Removing unreachable block (ram,0x10004cce) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<unsigned short>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<wchar_t>::max_size(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 max_size(void)

{
  return 0x9249249;
}



/* ---- FUN_10004ce0 @ 10004ce0 size=75 ---- */

undefined4 __thiscall FUN_10004ce0(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10008c90(this);
  if ((!bVar1) || (bVar1 = FUN_10001220(this,param_1), !bVar1)) {
    FUN_1000add8();
  }
  return CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),*(int *)((int)this + 4) == param_1[1]);
}



/* ---- FUN_10004d30 @ 10004d30 size=22 ---- */

void FUN_10004d30(void)

{
  max_size();
  return;
}



/* ---- FUN_10004d50 @ 10004d50 size=88 ---- */

void __fastcall FUN_10004d50(void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100039c0((int)param_1);
  FUN_100052b0(param_1,(_Container_proxy *)*puVar1);
  puVar1 = (undefined4 *)FUN_100039c0((int)param_1);
  *puVar1 = *(undefined4 *)((int)param_1 + 0x18);
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  puVar1 = (undefined4 *)FUN_100037d0((int)param_1);
  *puVar1 = *(undefined4 *)((int)param_1 + 0x18);
  puVar1 = (undefined4 *)FUN_100039a0((int)param_1);
  *puVar1 = *(undefined4 *)((int)param_1 + 0x18);
  return;
}



/* ---- FUN_10004db0 @ 10004db0 size=202 ---- */

void FUN_10004db0(void)

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
  puStack_c = &LAB_10016bc0;
  local_10 = ExceptionList;
  uStack_3c = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_1c = FUN_100099f0(1);
  local_18 = 0;
  local_8 = 0;
  local_20 = 0;
  puVar3 = &local_20;
  uVar1 = FUN_10003080(local_1c);
  FUN_100053a0(uVar1,puVar3);
  local_18 = local_18 + 1;
  local_24 = 0;
  puVar3 = &local_24;
  iVar2 = FUN_10003090(local_1c);
  FUN_100053a0(iVar2,puVar3);
  local_18 = local_18 + 1;
  local_28 = 0;
  puVar3 = &local_28;
  iVar2 = FUN_100030a0(local_1c);
  FUN_100053a0(iVar2,puVar3);
  FUN_10004edd();
  return;
}



/* ---- Catch_All@10004e7a @ 10004e7a size=86 ---- */

void Catch_All_10004e7a(void)

{
  _Container_proxy *p_Var1;
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x14)) {
    p_Var1 = (_Container_proxy *)FUN_10003090(*(int *)(unaff_EBP + -0x18));
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)(*(int *)(unaff_EBP + -0x28) + 0x10),p_Var1);
  }
  if (0 < *(int *)(unaff_EBP + -0x14)) {
    p_Var1 = (_Container_proxy *)FUN_10003080(*(undefined4 *)(unaff_EBP + -0x18));
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)(*(int *)(unaff_EBP + -0x28) + 0x10),p_Var1);
  }
  FUN_10007b50(*(void **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10004edd @ 10004edd size=58 ---- */

undefined4 FUN_10004edd(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar1 = (undefined1 *)FUN_10003040(*(int *)(unaff_EBP + -0x18));
  *puVar1 = 1;
  puVar1 = (undefined1 *)FUN_10003050(*(int *)(unaff_EBP + -0x18));
  *puVar1 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}



/* ---- FUN_10004f20 @ 10004f20 size=142 ---- */

void FUN_10004f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_100099f0(1);
  local_8 = 0;
  this = (void *)FUN_100010e0(0x18,uVar1);
  if (this != (void *)0x0) {
    FUN_100053c0(this,param_1,param_2,param_3,param_4,param_5);
  }
  FUN_10004fd5();
  return;
}



/* ---- Catch_All@10004fae @ 10004fae size=26 ---- */

void Catch_All_10004fae(void)

{
  int unaff_EBP;
  
  FUN_10007b50(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10004fd5 @ 10004fd5 size=30 ---- */

undefined4 FUN_10004fd5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}



/* ---- FUN_10005000 @ 10005000 size=60 ---- */

undefined4 * __thiscall FUN_10005000(undefined4 *param_1,byte *param_2,allocator<char> param_3)

{
  undefined4 *puVar1;
  allocator<char> aaStack_a [6];
  
  puVar1 = param_1;
  std::allocator<char>::allocator<char>(aaStack_a + -6,&param_3);
  FUN_10005330(param_1,param_2,SUB41(puVar1,0));
  std::allocator<char>::allocator<char>((allocator<char> *)(param_1 + 4),&param_3);
  return param_1;
}



/* ---- FUN_10005040 @ 10005040 size=22 ---- */

int * __fastcall FUN_10005040(int *param_1)

{
  FUN_10004930(param_1);
  return param_1;
}



/* ---- FUN_10005060 @ 10005060 size=56 ---- */

undefined4 * __thiscall FUN_10005060(void *this,undefined4 param_1,undefined4 *param_2)

{
  FUN_10007a60(this);
  *(undefined4 *)((int)this + 4) = param_1;
  if (param_2 == (undefined4 *)0x0) {
    FUN_1000add8();
  }
  FUN_100011d0(this,param_2);
  return this;
}



/* ---- FUN_100050a0 @ 100050a0 size=54 ---- */

int * __thiscall FUN_100050a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  FUN_10003c20(this);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}



/* ---- FUN_100050e0 @ 100050e0 size=35 ---- */

bool __thiscall FUN_100050e0(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10003c40(this,param_1);
  return (bool)('\x01' - bVar1);
}



/* ---- FUN_10005110 @ 10005110 size=287 ---- */

void __fastcall FUN_10005110(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  pcVar2 = (char *)FUN_10003050(param_1[1]);
  if (*pcVar2 == '\0') {
    piVar3 = (int *)FUN_10003080(param_1[1]);
    pcVar2 = (char *)FUN_10003050(*piVar3);
    if (*pcVar2 == '\0') {
      piVar3 = (int *)FUN_10003080(param_1[1]);
      iVar4 = FUN_10003920(*piVar3);
      param_1[1] = iVar4;
    }
    else {
      while( true ) {
        piVar3 = (int *)FUN_10003090(param_1[1]);
        iVar4 = *piVar3;
        pcVar2 = (char *)FUN_10003050(iVar4);
        if ((*pcVar2 != '\0') || (piVar3 = (int *)FUN_10003080(iVar4), param_1[1] != *piVar3))
        break;
        param_1[1] = iVar4;
      }
      pcVar2 = (char *)FUN_10003050(param_1[1]);
      if (*pcVar2 == '\0') {
        param_1[1] = iVar4;
      }
      else {
        FUN_1000add8();
      }
    }
  }
  else {
    piVar3 = (int *)FUN_100030a0(param_1[1]);
    param_1[1] = *piVar3;
    pcVar2 = (char *)FUN_10003050(param_1[1]);
    if (*pcVar2 != '\0') {
      FUN_1000add8();
    }
  }
  return;
}



/* ---- FUN_10005230 @ 10005230 size=43 ---- */

undefined4 * __thiscall FUN_10005230(void *this,undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined1 *)((int)this + 8) = *param_2;
  return this;
}



/* ---- allocate @ 10005260 size=27 ---- */

/* Library Function - Single Match
    public: char * __thiscall std::allocator<char>::allocate(unsigned int)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = _Allocate<char>(param_1,(char *)0x0);
  return pcVar1;
}



/* ---- max_size @ 10005280 size=44 ---- */

/* WARNING: Removing unreachable block (ram,0x1000529e) */
/* Library Function - Single Match
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
   
   Library: Visual Studio 2003 Debug */

uint __thiscall std::allocator<char>::max_size(allocator<char> *this)

{
  return 0xffffffff;
}



/* ---- FUN_100052b0 @ 100052b0 size=122 ---- */

void __thiscall FUN_100052b0(void *this,_Container_proxy *param_1)

{
  _Container_proxy *p_Var1;
  char *pcVar2;
  undefined4 *puVar3;
  _Container_proxy *local_8;
  
  local_8 = param_1;
  while( true ) {
    pcVar2 = (char *)FUN_10003050((int)local_8);
    if (*pcVar2 != '\0') break;
    puVar3 = (undefined4 *)FUN_100030a0((int)local_8);
    FUN_100052b0(this,(_Container_proxy *)*puVar3);
    puVar3 = (undefined4 *)FUN_10003080(local_8);
    p_Var1 = (_Container_proxy *)*puVar3;
    std::allocator<std::_Container_proxy>::destroy
              ((allocator<std::_Container_proxy> *)((int)this + 0xc),local_8);
    FUN_10007b50(local_8);
    local_8 = p_Var1;
  }
  return;
}



/* ---- FUN_10005330 @ 10005330 size=63 ---- */

undefined4 * __thiscall FUN_10005330(undefined4 *param_1,byte *param_2,allocator<char> param_3)

{
  undefined4 *puVar1;
  allocator<char> aaStack_a [6];
  
  puVar1 = param_1;
  std::allocator<char>::allocator<char>(aaStack_a + -6,&param_3);
  FUN_10005410(param_1,(uint)*param_2,SUB41(puVar1,0));
  std::allocator<char>::allocator<char>((allocator<char> *)(param_1 + 3),&param_3);
  return param_1;
}



/* ---- max_size @ 10005370 size=44 ---- */

/* WARNING: Removing unreachable block (ram,0x1000538e) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<unsigned short>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<wchar_t>::max_size(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 max_size(void)

{
  return 0x1fffffff;
}



/* ---- FUN_100053a0 @ 100053a0 size=29 ---- */

void FUN_100053a0(undefined4 param_1,undefined4 *param_2)

{
  FUN_100058a0(param_1,param_2);
  return;
}



/* ---- FUN_100053c0 @ 100053c0 size=75 ---- */

undefined4 * __thiscall
FUN_100053c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  uVar1 = param_4[1];
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}



/* ---- FUN_10005410 @ 10005410 size=41 ---- */

undefined4 * __thiscall FUN_10005410(undefined4 *param_1,undefined4 param_2,allocator<char> param_3)

{
  allocator<char> aaStack_d [9];
  
  std::allocator<char>::allocator<char>(aaStack_d + -3,&param_3);
  FUN_10007aa0(param_1,SUB41(param_1,0));
  return param_1;
}



/* ---- FUN_10005440 @ 10005440 size=52 ---- */

bool __cdecl FUN_10005440(_THandle *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = FUN_10005610(*param_2);
  iVar1 = XStream::Write(param_1,&local_8,4);
  return iVar1 == 4;
}



/* ---- FUN_10005480 @ 10005480 size=59 ---- */

bool __cdecl FUN_10005480(_THandle *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = XStream::Read(param_1,&local_8,4);
  if (iVar1 == 4) {
    uVar2 = FUN_10005910(local_8);
    *param_2 = uVar2;
  }
  return iVar1 == 4;
}



/* ---- FUN_100054c0 @ 100054c0 size=10 ---- */

undefined4 FUN_100054c0(void)

{
  return 4;
}



/* ---- FUN_100054d0 @ 100054d0 size=17 ---- */

void FUN_100054d0(void)

{
  FUN_100054c0();
  return;
}



/* ---- FUN_100054f0 @ 100054f0 size=17 ---- */

void __cdecl FUN_100054f0(void *param_1)

{
  FUN_10005930(param_1);
  return;
}



/* ---- FUN_10005510 @ 10005510 size=21 ---- */

void __cdecl FUN_10005510(_THandle *param_1,undefined4 *param_2)

{
  FUN_10005440(param_1,param_2);
  return;
}



/* ---- FUN_10005530 @ 10005530 size=21 ---- */

void __cdecl FUN_10005530(_THandle *param_1,void *param_2)

{
  FUN_100059a0(param_1,param_2);
  return;
}



/* ---- FUN_10005550 @ 10005550 size=21 ---- */

void __cdecl FUN_10005550(_THandle *param_1,undefined4 *param_2)

{
  FUN_10005480(param_1,param_2);
  return;
}



/* ---- FUN_10005570 @ 10005570 size=21 ---- */

void __cdecl FUN_10005570(_THandle *param_1,void *param_2)

{
  FUN_10005a40(param_1,param_2);
  return;
}



/* ---- FUN_10005590 @ 10005590 size=17 ---- */

void __cdecl FUN_10005590(int param_1)

{
  FUN_100017d0(param_1);
  return;
}



/* ---- FUN_100055b0 @ 100055b0 size=21 ---- */

void __cdecl FUN_100055b0(_THandle *param_1,void *param_2)

{
  FUN_100016e0(param_1,param_2);
  return;
}



/* ---- FUN_100055d0 @ 100055d0 size=21 ---- */

void __cdecl
FUN_100055d0(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  FUN_10001750(param_1,param_2);
  return;
}



/* ---- FUN_100055f0 @ 100055f0 size=27 ---- */

void __cdecl FUN_100055f0(int param_1,char *param_2,int param_3)

{
  __itoa_s(param_1,param_2,0x10,param_3);
  return;
}



/* ---- FUN_10005610 @ 10005610 size=85 ---- */

undefined4 __cdecl FUN_10005610(undefined4 param_1)

{
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = 3;
  local_c = param_1;
  for (local_8 = 0; local_8 < local_10; local_8 = local_8 + 1) {
    FUN_10005740((undefined1 *)((int)&local_c + local_8),(undefined1 *)((int)&local_c + local_10));
    local_10 = local_10 + -1;
  }
  return local_c;
}



/* ---- copy_s<std::char_traits<char>_> @ 10005670 size=45 ---- */

/* Library Function - Single Match
    char * __cdecl std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *,unsigned
   int,char const *,unsigned int)
   
   Library: Visual Studio 2008 Debug */

char * __cdecl
std::_Traits_helper::copy_s<std::char_traits<char>_>
          (char *param_1,uint param_2,char *param_3,uint param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 in_ECX;
  
  uVar1 = _Char_traits_cat<>(in_ECX);
  pcVar2 = FID_conflict_copy_s<std::char_traits<wchar_t>_>(param_1,param_2,param_3,param_4,uVar1);
  return pcVar2;
}



/* ---- FUN_100056a0 @ 100056a0 size=104 ---- */

void __thiscall FUN_100056a0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar3;
  int iVar4;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = _Char_traits_cat<>(&param_4);
  uStack_8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_8);
  FUN_10008b80((int)&uStack_8 + 1);
  iVar4 = param_4;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_1000a110(&param_3);
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_1000a110(&param_2);
  FUN_10005b60(pbVar3,pbVar2,iVar4);
  return;
}



/* ---- do_is @ 10005710 size=40 ---- */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned short>::do_is(unsigned
   short const *,unsigned short const *,short *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_is(wchar_t const *,wchar_t
   const *,short *)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2015 Release */

void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_10005bc0(param_1,param_2,param_3,(int)this + 8);
  return;
}



/* ---- FUN_10005740 @ 10005740 size=42 ---- */

void __cdecl FUN_10005740(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return;
}



/* ---- FUN_10005770 @ 10005770 size=52 ---- */

void __cdecl FUN_10005770(void *param_1,void *param_2,undefined4 param_3)

{
  _Char_traits_cat<>(&param_1);
  _Destroy_range<>(param_1,param_2);
  return;
}



/* ---- move_s<std::char_traits<char>_> @ 100057b0 size=45 ---- */

/* Library Function - Single Match
    char * __cdecl std::_Traits_helper::move_s<struct std::char_traits<char> >(char *,unsigned
   int,char const *,unsigned int)
   
   Library: Visual Studio 2008 Debug */

char * __cdecl
std::_Traits_helper::move_s<std::char_traits<char>_>
          (char *param_1,uint param_2,char *param_3,uint param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 in_ECX;
  
  uVar1 = _Char_traits_cat<>(in_ECX);
  pcVar2 = FID_conflict_copy_s<std::char_traits<wchar_t>_>(param_1,param_2,param_3,param_4,uVar1);
  return pcVar2;
}



/* ---- allocator<char> @ 100057e0 size=16 ---- */

/* Library Function - Single Match
    public: __thiscall std::allocator<char>::allocator<char>(class std::allocator<char> const &)
   
   Library: Visual Studio 2003 Debug */

allocator<char> * __thiscall
std::allocator<char>::allocator<char>(allocator<char> *this,allocator<char> *param_1)

{
  return this;
}



/* ---- FUN_100057f0 @ 100057f0 size=77 ---- */

void __cdecl FUN_100057f0(uint param_1)

{
  bad_alloc local_10;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x1c) {
    std::bad_alloc::bad_alloc(&local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10,&DAT_1001a9dc);
  }
  FUN_1000a903(param_1 * 0x1c);
  return;
}



/* ---- FUN_10005840 @ 10005840 size=5 ---- */

void FUN_10005840(void)

{
  return;
}



/* ---- _Allocate<char> @ 10005850 size=74 ---- */

/* Library Function - Single Match
    char * __cdecl std::_Allocate<char>(unsigned int,char *)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

char * __cdecl std::_Allocate<char>(uint param_1,char *param_2)

{
  char *pcVar1;
  bad_alloc local_10;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((int)(0xffffffff / (ulonglong)param_1) == 0) {
    bad_alloc::bad_alloc(&local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10,&DAT_1001a9dc);
  }
  pcVar1 = (char *)FUN_1000a903(param_1);
  return pcVar1;
}



/* ---- FUN_100058a0 @ 100058a0 size=64 ---- */

void __cdecl FUN_100058a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100010e0(4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}



/* ---- bad_alloc @ 100058e0 size=37 ---- */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_10005910 @ 10005910 size=17 ---- */

void __cdecl FUN_10005910(undefined4 param_1)

{
  FUN_10005610(param_1);
  return;
}



/* ---- FUN_10005930 @ 10005930 size=103 ---- */

int __cdecl FUN_10005930(void *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_18 [8];
  int local_10 [2];
  int local_8;
  
  local_8 = FUN_100054c0();
  FUN_10005dd0(param_1,local_10);
  while( true ) {
    piVar2 = FUN_100080e0(param_1,local_18);
    bVar1 = FUN_10003fb0(local_10,piVar2);
    if (!bVar1) break;
    iVar3 = FUN_10005ea0(local_10);
    iVar3 = FUN_10005590(iVar3);
    local_8 = iVar3 + local_8;
    FUN_10005ef0(local_10);
  }
  return local_8;
}



/* ---- FUN_100059a0 @ 100059a0 size=147 ---- */

uint __cdecl FUN_100059a0(_THandle *param_1,void *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  int *piVar2;
  undefined3 extraout_var_00;
  void *pvVar3;
  uint3 extraout_var_01;
  undefined1 local_18 [8];
  int local_10 [2];
  uint local_8;
  
  local_8 = FUN_10002e10((int)param_2);
  if ((int)local_8 < 0x19001) {
    bVar1 = FUN_10005440(param_1,&local_8);
    if (bVar1) {
      FUN_10005dd0(param_2,local_10);
      while( true ) {
        piVar2 = FUN_100080e0(param_2,local_18);
        bVar1 = FUN_10003fb0(local_10,piVar2);
        if (!bVar1) break;
        pvVar3 = (void *)FUN_10005ea0(local_10);
        bVar1 = FUN_10005f50(param_1,pvVar3);
        if (!bVar1) {
          return (uint)extraout_var_01 << 8;
        }
        FUN_10005ef0(local_10);
      }
      local_8 = CONCAT31(extraout_var_00,1);
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



/* ---- FUN_10005a40 @ 10005a40 size=253 ---- */

void __cdecl FUN_10005a40(_THandle *param_1,void *param_2)

{
  bool bVar1;
  allocator<char> local_38 [28];
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016fe8;
  local_10 = ExceptionList;
  local_1c = DAT_1001d02c ^ (uint)(local_38 + 0x34);
  ExceptionList = &local_10;
  local_14 = 0;
  bVar1 = FUN_10005480(param_1,&local_14);
  if ((bVar1) && ((int)local_14 < 0x19001)) {
    FUN_10005c70(param_2,local_14);
    for (local_18 = 0; local_18 < (int)local_14; local_18 = local_18 + 1) {
      FUN_100016d0(local_38);
      local_8 = 0;
      bVar1 = FUN_10005f80(param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)local_38);
      if (!bVar1) {
        local_8 = 0xffffffff;
        FUN_10001e00(local_38);
        break;
      }
      FUN_10005e00(param_2,local_38);
      local_8 = 0xffffffff;
      FUN_10001e00(local_38);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)(local_38 + 0x34));
  return;
}



/* ---- FID_conflict:copy_s<std::char_traits<wchar_t>_> @ 10005b40 size=29 ---- */

/* Library Function - Multiple Matches With Different Base Names
    unsigned short * __cdecl std::_Traits_helper::copy_s<struct std::char_traits<unsigned short>
   >(unsigned short *,unsigned int,unsigned short const *,unsigned int,struct
   std::_Secure_char_traits_tag)
    wchar_t * __cdecl std::_Traits_helper::copy_s<struct std::char_traits<wchar_t> >(wchar_t
   *,unsigned int,wchar_t const *,unsigned int,struct std::_Secure_char_traits_tag)
    char * __cdecl std::_Traits_helper::move_s<struct std::char_traits<char> >(char *,unsigned
   int,char const *,unsigned int,struct std::_Secure_char_traits_tag)
    unsigned short * __cdecl std::_Traits_helper::move_s<struct std::char_traits<unsigned short>
   >(unsigned short *,unsigned int,unsigned short const *,unsigned int,struct
   std::_Secure_char_traits_tag)
     5 names - too many to list
   
   Library: Visual Studio 2008 Debug */

char * __cdecl
FID_conflict_copy_s<std::char_traits<wchar_t>_>
          (ushort *param_1,uint param_2,ushort *param_3,uint param_4)

{
  ushort *puVar1;
  
  puVar1 = FID_conflict__Move_s(param_1,param_2,param_3,param_4);
  return (char *)puVar1;
}



/* ---- FUN_10005b60 @ 10005b60 size=90 ---- */

int __cdecl
FUN_10005b60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = (((int)param_2 - (int)param_1) / 0x1c) * 0x1c + param_3;
  pvVar2 = (void *)FUN_1000a110(&param_3);
  FUN_100065a0(param_1,param_2,pvVar2);
  return iVar1;
}



/* ---- FUN_10005bc0 @ 10005bc0 size=84 ---- */

void __cdecl FUN_10005bc0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  allocator<char> *paVar1;
  allocator<char> *paVar2;
  int iVar3;
  
  _Char_traits_cat<>(&param_3);
  iVar3 = param_3;
  paVar1 = (allocator<char> *)FUN_1000a110(&param_2);
  paVar2 = (allocator<char> *)FUN_1000a110(&param_1);
  FUN_1000a580(paVar2,paVar1,iVar3);
  return;
}



/* ---- _Destroy_range<> @ 10005c20 size=38 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Wrap_alloc<class std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > &,struct std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Wrap_alloc<class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > > &,struct
   std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > >(class Concurrency::details::_ContextCallback *,class
   Concurrency::details::_ContextCallback *,struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > &,struct std::_Nonscalar_ptr_iterator_tag)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl _Destroy_range<>(void *param_1,void *param_2)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    FUN_10005e80(param_1);
  }
  return;
}



/* ---- FID_conflict:copy_s<std::char_traits<wchar_t>_> @ 10005c50 size=29 ---- */

/* Library Function - Multiple Matches With Different Base Names
    unsigned short * __cdecl std::_Traits_helper::copy_s<struct std::char_traits<unsigned short>
   >(unsigned short *,unsigned int,unsigned short const *,unsigned int,struct
   std::_Secure_char_traits_tag)
    wchar_t * __cdecl std::_Traits_helper::copy_s<struct std::char_traits<wchar_t> >(wchar_t
   *,unsigned int,wchar_t const *,unsigned int,struct std::_Secure_char_traits_tag)
    char * __cdecl std::_Traits_helper::move_s<struct std::char_traits<char> >(char *,unsigned
   int,char const *,unsigned int,struct std::_Secure_char_traits_tag)
    unsigned short * __cdecl std::_Traits_helper::move_s<struct std::char_traits<unsigned short>
   >(unsigned short *,unsigned int,unsigned short const *,unsigned int,struct
   std::_Secure_char_traits_tag)
     5 names - too many to list
   
   Library: Visual Studio 2008 Debug */

char * __cdecl
FID_conflict_copy_s<std::char_traits<wchar_t>_>
          (ushort *param_1,uint param_2,ushort *param_3,uint param_4)

{
  ushort *puVar1;
  
  puVar1 = FID_conflict__Move_s(param_1,param_2,param_3,param_4);
  return (char *)puVar1;
}



/* ---- FUN_10005c70 @ 10005c70 size=164 ---- */

void __thiscall FUN_10005c70(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uStack_40;
  undefined1 local_2c [8];
  undefined1 local_24 [12];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016fc0;
  local_10 = ExceptionList;
  uStack_40 = DAT_1001d02c ^ (uint)(local_24 + 0x20);
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  uVar1 = FUN_10003f70();
  if (uVar1 < param_1) {
    FUN_10009970();
  }
  else {
    uVar1 = FUN_10002dd0((int)this);
    if (uVar1 < param_1) {
      pvVar2 = (void *)FUN_10003f90(param_1);
      local_8 = 0;
      local_18 = pvVar2;
      puVar3 = FUN_10008e20(this,local_24);
      uVar5 = puVar3[1];
      uVar4 = (undefined1)*puVar3;
      puVar3 = FUN_100075e0(this,local_2c);
      FUN_100065e0(this,(char)*puVar3,puVar3[1],uVar4,uVar5,pvVar2);
      FUN_10005d3d();
      return;
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@10005d14 @ 10005d14 size=28 ---- */

void Catch_All_10005d14(void)

{
  int unaff_EBP;
  
  FUN_10007b50(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10005d3d @ 10005d3d size=147 ---- */

void FUN_10005d3d(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_10002e10(*(int *)(unaff_EBP + -0x2c));
  *(int *)(unaff_EBP + -0x18) = iVar1;
  if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0xc) != 0) {
    FUN_10002f50(*(void **)(unaff_EBP + -0x2c),*(void **)(*(int *)(unaff_EBP + -0x2c) + 0xc),
                 *(void **)(*(int *)(unaff_EBP + -0x2c) + 0x10));
    FUN_10007b50(*(void **)(*(int *)(unaff_EBP + -0x2c) + 0xc));
  }
  *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x14) =
       *(int *)(unaff_EBP + 8) * 0x1c + *(int *)(unaff_EBP + -0x14);
  *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x10) =
       *(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FUN_10005dd0 @ 10005dd0 size=35 ---- */

void * __thiscall FUN_10005dd0(void *this,void *param_1)

{
  FUN_10009a50(param_1,*(uint *)((int)this + 0xc),this);
  return param_1;
}



/* ---- FUN_10005e00 @ 10005e00 size=115 ---- */

void __thiscall FUN_10005e00(void *this,allocator<char> *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c [2];
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;
  
  uVar1 = FUN_10002e10((int)this);
  uVar2 = FUN_10002dd0((int)this);
  if (uVar1 < uVar2) {
    iVar3 = FUN_10006030(this,*(int *)((int)this + 0x10),1,param_1);
    *(int *)((int)this + 0x10) = iVar3;
  }
  else {
    puVar4 = FUN_10008e20(this,local_14);
    local_c = *puVar4;
    local_8 = puVar4[1];
    FUN_10005fb0(this,local_1c,local_c,local_8,param_1);
  }
  return;
}



/* ---- FUN_10005e80 @ 10005e80 size=25 ---- */

void FUN_10005e80(void *param_1)

{
  FUN_10006610(param_1);
  return;
}



/* ---- FUN_10005ea0 @ 10005ea0 size=69 ---- */

int __fastcall FUN_10005ea0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  iVar2 = FUN_100011f0(param_1);
  if (*(uint *)(iVar2 + 0x10) <= (uint)param_1[1]) {
    FUN_1000add8();
  }
  return param_1[1];
}



/* ---- FUN_10005ef0 @ 10005ef0 size=81 ---- */

int * __fastcall FUN_10005ef0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  iVar2 = FUN_100011f0(param_1);
  if (*(uint *)(iVar2 + 0x10) <= (uint)param_1[1]) {
    FUN_1000add8();
  }
  param_1[1] = param_1[1] + 0x1c;
  return param_1;
}



/* ---- FUN_10005f50 @ 10005f50 size=34 ---- */

bool __cdecl FUN_10005f50(_THandle *param_1,void *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100016e0(param_1,param_2);
  return (uVar1 & 0xff) != 0;
}



/* ---- FUN_10005f80 @ 10005f80 size=34 ---- */

bool __cdecl
FUN_10005f80(_THandle *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_10001750(param_1,param_2);
  return (uVar1 & 0xff) != 0;
}



/* ---- FUN_10005fb0 @ 10005fb0 size=118 ---- */

undefined4 * __thiscall
FUN_10005fb0(void *this,undefined4 *param_1,undefined4 param_2,int param_3,allocator<char> *param_4)

{
  int iVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  int local_8;
  
  iVar1 = FUN_10002e10((int)this);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    piVar2 = FUN_100075e0(this,local_10);
    local_20 = FUN_100064b0(&param_2,piVar2);
  }
  local_8 = local_20;
  FUN_10006070(this,param_2,param_3,1,param_4);
  puVar3 = param_1;
  iVar1 = local_8;
  this_00 = FUN_100075e0(this,local_18);
  FUN_10006470(this_00,puVar3,iVar1);
  return param_1;
}



/* ---- FUN_10006030 @ 10006030 size=49 ---- */

int __thiscall FUN_10006030(void *this,int param_1,int param_2,allocator<char> *param_3)

{
  FUN_10006620(param_1,param_2,param_3,(int)this + 8);
  return param_2 * 0x1c + param_1;
}



/* ---- FUN_10006070 @ 10006070 size=358 ---- */

void __thiscall
FUN_10006070(void *this,undefined4 param_1,int param_2,uint param_3,allocator<char> *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uStack_7c;
  uint local_6c;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  abStack_64 [28];
  int iStack_48;
  allocator<char> aaStack_44 [28];
  uint local_28;
  int local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016f90;
  local_10 = ExceptionList;
  uStack_7c = DAT_1001d02c ^ (uint)(aaStack_44 + 0x40);
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_28 = uStack_7c;
  local_18 = FUN_10002dd0((int)this);
  if (param_3 != 0) {
    iVar1 = FUN_10002e10((int)this);
    iVar2 = FUN_10003f70();
    if ((uint)(iVar2 - iVar1) < param_3) {
      FUN_10009970();
    }
    else {
      iVar1 = FUN_10002e10((int)this);
      if (local_18 < iVar1 + param_3) {
        uVar4 = local_18 >> 1;
        iVar1 = FUN_10003f70();
        if (iVar1 - uVar4 < local_18) {
          local_6c = 0;
        }
        else {
          local_6c = (local_18 >> 1) + local_18;
        }
        local_18 = local_6c;
        iVar1 = FUN_10002e10((int)this);
        if (local_18 < iVar1 + param_3) {
          iVar1 = FUN_10002e10((int)this);
          local_18 = iVar1 + param_3;
        }
        local_20 = (void *)FUN_10003f90(local_18);
        local_1c = (param_2 - *(int *)((int)this + 0xc)) / 0x1c;
        local_24 = 0;
        local_8 = 0;
        FUN_10006030(this,(int)(local_1c * 0x1c + (int)local_20),param_3,param_4);
        local_24 = local_24 + 1;
        do_is(this,*(undefined4 *)((int)this + 0xc),param_2,local_20);
        local_24 = local_24 + 1;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),
              (void *)((local_1c + param_3) * 0x1c + (int)local_20));
        FUN_10006245();
        return;
      }
      if ((uint)((*(int *)((int)this + 0x10) - param_2) / 0x1c) < param_3) {
        FUN_10001dc0(aaStack_44,param_4);
        local_8 = 2;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),(void *)(param_3 * 0x1c + param_2));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_10006030(this,*(int *)((int)this + 0x10),
                     param_3 - (*(int *)((int)this + 0x10) - param_2) / 0x1c,aaStack_44);
        FUN_1000637b();
        return;
      }
      FUN_10001dc0(abStack_64,param_4);
      local_8 = 5;
      iStack_48 = *(int *)((int)this + 0x10);
      uVar3 = do_is(this,iStack_48 + param_3 * -0x1c,iStack_48,*(void **)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = uVar3;
      iVar1 = iStack_48 + param_3 * -0x1c;
      FUN_100066d0((uint3)iVar1,param_2,iVar1,iStack_48);
      FUN_100066a0(param_2,param_3 * 0x1c + param_2,abStack_64);
      local_8 = 0xffffffff;
      FUN_10001e00(abStack_64);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_28 ^ (uint)(aaStack_44 + 0x40));
  return;
}



/* ---- Catch_All@100061d6 @ 100061d6 size=98 ---- */

void Catch_All_100061d6(void)

{
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x20)) {
    FUN_10002f50(*(void **)(unaff_EBP + -100),*(void **)(unaff_EBP + -0x1c),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x1c)));
  }
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    FUN_10002f50(*(void **)(unaff_EBP + -100),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x1c)),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x1c) +
                         *(int *)(unaff_EBP + 0x10) * 0x1c));
  }
  FUN_10007b50(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10006245 @ 10006245 size=135 ---- */

void FUN_10006245(void)

{
  int iVar1;
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  iVar1 = FUN_10002e10(*(int *)(unaff_EBP - 100));
  *(int *)(unaff_EBP + 0x10) = iVar1 + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(*(int *)(unaff_EBP - 100) + 0xc) != 0) {
    FUN_10002f50(*(void **)(unaff_EBP - 100),*(void **)(*(int *)(unaff_EBP - 100) + 0xc),
                 *(void **)(*(int *)(unaff_EBP - 100) + 0x10));
    FUN_10007b50(*(void **)(*(int *)(unaff_EBP - 100) + 0xc));
  }
  *(int *)(*(int *)(unaff_EBP - 100) + 0x14) =
       *(int *)(unaff_EBP - 0x14) * 0x1c + *(int *)(unaff_EBP - 0x1c);
  *(int *)(*(int *)(unaff_EBP - 100) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x1c + *(int *)(unaff_EBP - 0x1c);
  *(undefined4 *)(*(int *)(unaff_EBP - 100) + 0xc) = *(undefined4 *)(unaff_EBP - 0x1c);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x10006465;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x24) ^ unaff_EBP);
  return;
}



/* ---- Catch_All@10006346 @ 10006346 size=40 ---- */

void Catch_All_10006346(void)

{
  int unaff_EBP;
  
  FUN_10002f50(*(void **)(unaff_EBP + -100),
               (void *)(*(int *)(unaff_EBP + 0x10) * 0x1c + *(int *)(unaff_EBP + 0xc)),
               (void *)(*(int *)(unaff_EBP + 0x10) * 0x1c +
                       *(int *)(*(int *)(unaff_EBP + -100) + 0x10)));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000637b @ 1000637b size=106 ---- */

void FUN_1000637b(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 2;
  *(int *)(*(int *)(unaff_EBP - 100) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x1c + *(int *)(*(int *)(unaff_EBP - 100) + 0x10);
  FUN_100066a0(*(undefined4 *)(unaff_EBP + 0xc),
               *(int *)(*(int *)(unaff_EBP - 100) + 0x10) + *(int *)(unaff_EBP + 0x10) * -0x1c,
               (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                *)(unaff_EBP - 0x40));
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  FUN_10001e00((void *)(unaff_EBP - 0x40));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x10006465;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x24) ^ unaff_EBP);
  return;
}



/* ---- FUN_10006470 @ 10006470 size=57 ---- */

undefined4 * __thiscall FUN_10006470(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)this;
  local_8 = *(undefined4 *)((int)this + 4);
  puVar2 = FUN_10006500(&local_c,param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_100064b0 @ 100064b0 size=76 ---- */

int __thiscall FUN_100064b0(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10008c90(this);
  if ((!bVar1) || (bVar1 = FUN_10001220(this,param_1), !bVar1)) {
    FUN_1000add8();
  }
  return (*(int *)((int)this + 4) - param_1[1]) / 0x1c;
}



/* ---- FUN_10006500 @ 10006500 size=28 ---- */

void * __thiscall FUN_10006500(void *this,int param_1)

{
  FUN_10006520(this,param_1);
  return this;
}



/* ---- FUN_10006520 @ 10006520 size=119 ---- */

int * __thiscall FUN_10006520(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = FUN_10008c90(this);
  if (!bVar2) {
    FUN_1000add8();
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = FUN_100011f0(this);
  if ((*(uint *)(iVar3 + 0x10) < (uint)(param_1 * 0x1c + iVar1)) ||
     (iVar1 = *(int *)((int)this + 4), iVar3 = FUN_100011f0(this),
     (uint)(param_1 * 0x1c + iVar1) < *(uint *)(iVar3 + 0xc))) {
    FUN_1000add8();
  }
  *(int *)((int)this + 4) = param_1 * 0x1c + *(int *)((int)this + 4);
  return this;
}



/* ---- FUN_100065a0 @ 100065a0 size=50 ---- */

void * __cdecl
FUN_100065a0(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_10006770(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  return param_3;
}



/* ---- FUN_100065e0 @ 100065e0 size=48 ---- */

void __thiscall
FUN_100065e0(void *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            void *param_5)

{
  FUN_100067d0(param_1,param_2,param_3,param_4,param_5,(int)this + 8);
  return;
}



/* ---- FUN_10006610 @ 10006610 size=15 ---- */

void __cdecl FUN_10006610(void *param_1)

{
  FUN_10006740(param_1,0);
  return;
}



/* ---- FUN_10006620 @ 10006620 size=66 ---- */

void __cdecl FUN_10006620(int param_1,int param_2,allocator<char> *param_3,undefined4 param_4)

{
  _Char_traits_cat<>(&param_1);
  FUN_10006820(param_1,param_2,param_3);
  return;
}



/* ---- do_is @ 10006670 size=40 ---- */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned short>::do_is(unsigned
   short const *,unsigned short const *,short *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_is(wchar_t const *,wchar_t
   const *,short *)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2015 Release */

void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  FUN_100068e0(param_1,param_2,param_3,(int)this + 8);
  return;
}



/* ---- FUN_100066a0 @ 100066a0 size=43 ---- */

void __cdecl
FUN_100066a0(undefined4 param_1,undefined4 param_2,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_3)

{
  void *pvVar1;
  void *pvVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar3;
  
  pbVar3 = param_3;
  pvVar1 = (void *)FUN_1000a110(&param_2);
  pvVar2 = (void *)FUN_1000a110(&param_1);
  _Destroy_range<>(pvVar2,pvVar1,pbVar3);
  return;
}



/* ---- FUN_100066d0 @ 100066d0 size=100 ---- */

void __thiscall FUN_100066d0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = _Char_traits_cat<>(&param_4);
  uStack_8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_8);
  pbVar2 = (byte *)FUN_10008b80((int)&uStack_8 + 1);
  uVar5 = (uint)*pbVar2;
  iVar6 = param_4;
  pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_1000a110(&param_3);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_1000a110(&param_2);
  FUN_10006960(pbVar4,pbVar3,iVar6,uVar5,uVar1);
  return;
}



/* ---- FUN_10006740 @ 10006740 size=44 ---- */

void * __thiscall FUN_10006740(void *this,uint param_1)

{
  FUN_10001e00(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- FUN_10006770 @ 10006770 size=25 ---- */

void __thiscall
FUN_10006770(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_1)

{
  FUN_100067b0(this,param_1);
  return;
}



/* ---- FUN_10006790 @ 10006790 size=29 ---- */

void FUN_10006790(undefined4 param_1,allocator<char> *param_2)

{
  FUN_100069c0(param_1,param_2);
  return;
}



/* ---- FUN_100067b0 @ 100067b0 size=29 ---- */

void __thiscall
FUN_100067b0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign
            (this,param_1,0,0xffffffff);
  return;
}



/* ---- FUN_100067d0 @ 100067d0 size=80 ---- */

void __cdecl
FUN_100067d0(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            void *param_5,undefined4 param_6)

{
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar2;
  void *pvVar3;
  
  _Char_traits_cat<>(&param_5);
  pvVar3 = param_5;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_10006a40((int)&param_3);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_10006a40((int)&param_1);
  FUN_10006a60(pbVar2,pbVar1,pvVar3);
  return;
}



/* ---- FUN_10006820 @ 10006820 size=101 ---- */

void FUN_10006820(int param_1,int param_2,allocator<char> *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10016db0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10006790(param_1,param_3);
    param_1 = param_1 + 0x1c;
  }
  FUN_100068bc();
  return;
}



/* ---- Catch_All@10006885 @ 10006885 size=2 ---- */

void Catch_All_10006885(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_10006887();
  return;
}



/* ---- FUN_10006887 @ 10006887 size=9 ---- */

void FUN_10006887(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_10006887();
  return;
}



/* ---- FUN_10006890 @ 10006890 size=31 ---- */

void FUN_10006890(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_10006887();
  return;
}



/* ---- FUN_100068bc @ 100068bc size=25 ---- */

void FUN_100068bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FUN_100068e0 @ 100068e0 size=80 ---- */

void __cdecl FUN_100068e0(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar2;
  void *pvVar3;
  
  _Char_traits_cat<>(&param_3);
  pvVar3 = param_3;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_1000a110(&param_2);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )FUN_1000a110(&param_1);
  FUN_10006a60(pbVar2,pbVar1,pvVar3);
  return;
}



/* ---- _Destroy_range<> @ 10006930 size=38 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Wrap_alloc<class std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > &,struct std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Wrap_alloc<class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > > &,struct
   std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > >(class Concurrency::details::_ContextCallback *,class
   Concurrency::details::_ContextCallback *,struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > &,struct std::_Nonscalar_ptr_iterator_tag)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl
_Destroy_range<>(void *param_1,void *param_2,
                basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    FUN_10006770(param_1,param_3);
  }
  return;
}



/* ---- FUN_10006960 @ 10006960 size=87 ---- */

int __cdecl
FUN_10006960(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = param_3 + (((int)param_2 - (int)param_1) / 0x1c) * -0x1c;
  pvVar1 = (void *)FUN_1000a110(&param_3);
  FUN_10006b60(param_1,param_2,pvVar1);
  return iVar2;
}



/* ---- FUN_100069c0 @ 100069c0 size=125 ---- */

void __cdecl FUN_100069c0(undefined4 param_1,allocator<char> *param_2)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016ca1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_100010e0(0x1c,param_1);
  local_8 = 0;
  if (this != (void *)0x0) {
    FUN_10001dc0(this,param_2);
  }
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10006a40 @ 10006a40 size=25 ---- */

void __cdecl FUN_10006a40(int param_1)

{
  FUN_1000a720(param_1);
  return;
}



/* ---- FUN_10006a60 @ 10006a60 size=136 ---- */

void FUN_10006a60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                  *param_1,
                 basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *param_2,void *param_3)

{
  uint uStack_4c;
  allocator<char> local_38 [28];
  uint local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016d88;
  local_10 = ExceptionList;
  uStack_4c = DAT_1001d02c ^ (uint)(local_38 + 0x34);
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_18 = param_3;
  local_1c = uStack_4c;
  basic_string<>(local_38);
  local_8 = 1;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_10006790(param_3,local_38);
    iter_swap<>(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  FUN_10006b1f();
  return;
}



/* ---- Catch_All@10006ae8 @ 10006ae8 size=2 ---- */

void Catch_All_10006ae8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_10006aea();
  return;
}



/* ---- FUN_10006aea @ 10006aea size=9 ---- */

void FUN_10006aea(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_10006aea();
  return;
}



/* ---- FUN_10006af3 @ 10006af3 size=31 ---- */

void FUN_10006af3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_10006aea();
  return;
}



/* ---- FUN_10006b1f @ 10006b1f size=59 ---- */

void FUN_10006b1f(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 0;
  *(undefined4 *)(unaff_EBP - 0x38) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  FUN_10001e00((void *)(unaff_EBP - 0x34));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x10006b56;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x18) ^ unaff_EBP);
  return;
}



/* ---- FUN_10006b60 @ 10006b60 size=52 ---- */

void * __cdecl
FUN_10006b60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_2,void *param_3)

{
  while (param_1 != param_2) {
    param_2 = param_2 + -0x1c;
    param_3 = (void *)((int)param_3 + -0x1c);
    iter_swap<>(param_3,param_2);
  }
  return param_3;
}



/* ---- iter_swap<> @ 10006ba0 size=21 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::iter_swap<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *>(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *)
    void __cdecl std::iter_swap<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *>(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl
iter_swap<>(void *param_1,
           basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
           *param_2)

{
  swap<>(param_1,param_2);
  return;
}



/* ---- swap<> @ 10006bc0 size=17 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::swap<struct Concurrency::details::_Task_impl<unsigned char> >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > &,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > &)
    void __cdecl std::swap<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState *> > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > &,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > &)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl
swap<>(void *param_1,
      basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
      *param_2)

{
  FUN_10006be0(param_1,param_2);
  return;
}



/* ---- FUN_10006be0 @ 10006be0 size=322 ---- */

void __thiscall
FUN_10006be0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
            *param_1)

{
  char cVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_48 [28];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016d58;
  local_10 = ExceptionList;
  local_18 = DAT_1001d02c ^ (uint)(local_48 + 0x44);
  ExceptionList = &local_10;
  if (this != param_1) {
    cVar1 = FUN_1000a850();
    if (cVar1 == '\0') {
      FUN_10001dc0(local_48,this);
      local_8 = 0;
      FUN_10006770(this,param_1);
      FUN_10006770(param_1,local_48);
      local_8 = 0xffffffff;
      FUN_10001e00(local_48);
    }
    else {
      local_28 = *(undefined4 *)((int)this + 4);
      local_24 = *(undefined4 *)((int)this + 8);
      local_20 = *(undefined4 *)((int)this + 0xc);
      local_1c = *(undefined4 *)((int)this + 0x10);
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 4) = local_28;
      *(undefined4 *)(param_1 + 8) = local_24;
      *(undefined4 *)(param_1 + 0xc) = local_20;
      *(undefined4 *)(param_1 + 0x10) = local_1c;
      local_14 = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = local_14;
      local_2c = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = local_2c;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)(local_48 + 0x44));
  return;
}



/* ---- scalar_deleting_destructor @ 10006d30 size=44 ---- */

undefined4 * __thiscall
CDS::ClientConnector::Impl::Socket::scalar_deleting_destructor(Socket *this,uint param_1)

{
  ~Socket(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10006d60 @ 10006d60 size=11 ---- */

void FUN_10006d60(void)

{
  return;
}



/* ---- FUN_10006d70 @ 10006d70 size=105 ---- */

bool __thiscall FUN_10006d70(void *this,undefined4 param_1,int *param_2)

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



/* ---- FUN_10006de0 @ 10006de0 size=105 ---- */

bool __thiscall FUN_10006de0(void *this,undefined4 param_1,int *param_2)

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



/* ---- FUN_10006e50 @ 10006e50 size=78 ---- */

undefined4 __cdecl FUN_10006e50(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x1c))(1);
  uVar2 = (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x1c))(uVar1);
  return uVar2;
}



/* ---- StrList @ 10006ea0 size=115 ---- */

StrList * __thiscall StrList::StrList(StrList *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016f58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->StrList_data).offset_0x0 = 0;
  (this->StrList_data).offset_0x4 = 0xb7206aa;
  FUN_10001ed0(&(this->StrList_data).offset_0x8);
  ExceptionList = local_10;
  return this;
}



/* ---- ~StrList @ 10006f20 size=39 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall std::_Func_impl<struct std::_Callable_obj<class
   <lambda_399686a4a5619bf4b18c998976ba8b81>,0>,class std::allocator<class
   std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct
   std::_Nil>::~_Func_impl<struct std::_Callable_obj<class
   <lambda_399686a4a5619bf4b18c998976ba8b81>,0>,class std::allocator<class
   std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>(void)
    public: virtual __thiscall std::_Func_impl<struct std::_Callable_obj<class
   <lambda_9ab38a79c03e1e04423ad6818173354b>,0>,class std::allocator<class
   std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct
   std::_Nil>::~_Func_impl<struct std::_Callable_obj<class
   <lambda_9ab38a79c03e1e04423ad6818173354b>,0>,class std::allocator<class
   std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil> >,void,struct std::_Nil,struct std::_Nil,struct
   std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>(void)
    public: virtual __thiscall CCommandLineInfo::~CCommandLineInfo(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2012 Debug, Visual
   Studio 2012 Release
   ***** Removed Bad FID Symbol(s) ***** */

void __thiscall StrList::~StrList(StrList *this)

{
  this->vftablePtr = &vftable;
  ~function<>(&(this->StrList_data).offset_0x8);
  XDR::IMessage::~IMessage((IMessage *)this);
  return;
}



/* ---- vfunction2 @ 10006f50 size=22 ---- */

void __thiscall StrList::vfunction2(StrList *this)

{
  FUN_100020f0(&(this->StrList_data).offset_0x8);
  return;
}



/* ---- vfunction3 @ 10006f70 size=16 ---- */

undefined4 __thiscall StrList::vfunction3(StrList *this)

{
  return 0xb7206aa;
}



/* ---- vfunction4 @ 10006f80 size=16 ---- */

char * __thiscall StrList::vfunction4(StrList *this)

{
  return "StrList";
}



/* ---- vfunction5 @ 10006f90 size=76 ---- */

int __thiscall StrList::vfunction5(StrList *this)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if ((this->StrList_data).offset_0x0 == '\0') {
    local_8 = FUN_100054d0();
  }
  iVar1 = FUN_100054f0(&(this->StrList_data).offset_0x8);
  return iVar1 + local_8;
}



/* ---- vfunction6 @ 10006fe0 size=86 ---- */

bool __thiscall StrList::vfunction6(StrList *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->StrList_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_10005510(param_1,&(this->StrList_data).offset_0x4), cVar1 == '\0')) {
    return false;
  }
  cVar1 = FUN_10005530(param_1,&(this->StrList_data).offset_0x8);
  return cVar1 != '\0';
}



/* ---- vfunction7 @ 10007040 size=86 ---- */

bool __thiscall StrList::vfunction7(StrList *this,_THandle *param_1)

{
  char cVar1;
  
  if (((this->StrList_data).offset_0x0 == '\0') &&
     (cVar1 = FUN_10005550(param_1,&(this->StrList_data).offset_0x4), cVar1 == '\0')) {
    return false;
  }
  cVar1 = FUN_10005570(param_1,&(this->StrList_data).offset_0x8);
  return cVar1 != '\0';
}



/* ---- vfunction8 @ 100070a0 size=22 ---- */

void __thiscall CDS_ReqSelect::vfunction8(CDS_ReqSelect *this,undefined1 param_1)

{
  (this->CDS_ReqSelect_data).offset_0x0 = param_1;
  return;
}



/* ---- scalar_deleting_destructor @ 100070c0 size=44 ---- */

void * __thiscall StrList::scalar_deleting_destructor(StrList *this,uint param_1)

{
  ~StrList(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- CDS_AnsSelect @ 100070f0 size=150 ---- */

CDS_AnsSelect * __thiscall CDS_AnsSelect::CDS_AnsSelect(CDS_AnsSelect *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016f33;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XDR::IMessage::IMessage((IMessage *)this);
  local_8 = 0;
  this->vftablePtr = &vftable;
  (this->CDS_AnsSelect_data).offset_0x0 = 0;
  (this->CDS_AnsSelect_data).offset_0x4 = 0x8d1a6da;
  FUN_10001ed0(&(this->CDS_AnsSelect_data).offset_0x10);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10007550(&(this->CDS_AnsSelect_data).offset_0x28);
  (this->CDS_AnsSelect_data).offset_0x8 = 0;
  (this->CDS_AnsSelect_data).offset_0xc = 0;
  ExceptionList = local_10;
  return this;
}



/* ---- ~CDS_AnsSelect @ 10007190 size=207 ---- */

void __thiscall CDS_AnsSelect::~CDS_AnsSelect(CDS_AnsSelect *this)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  wchar_t *pwVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10016d2e;
  local_10 = ExceptionList;
  uVar3 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 2;
  while (bVar2 = FUN_10007610((int)&(this->CDS_AnsSelect_data).offset_0x28), !bVar2) {
    pwVar4 = std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::back
                       ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                        &(this->CDS_AnsSelect_data).offset_0x28);
    puVar1 = *(undefined4 **)pwVar4;
    FUN_10007660(&(this->CDS_AnsSelect_data).offset_0x28);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1,uVar3);
    }
  }
  local_8._0_1_ = 1;
  FUN_100075c0(&(this->CDS_AnsSelect_data).offset_0x28);
  local_8 = (uint)local_8._1_3_ << 8;
  ~function<>(&(this->CDS_AnsSelect_data).offset_0x10);
  local_8 = 0xffffffff;
  XDR::IMessage::~IMessage((IMessage *)this);
  ExceptionList = local_10;
  return;
}



/* ---- vfunction2 @ 10007260 size=135 ---- */

void __thiscall CDS_AnsSelect::vfunction2(CDS_AnsSelect *this)

{
  undefined4 *puVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  (this->CDS_AnsSelect_data).offset_0x8 = 0;
  (this->CDS_AnsSelect_data).offset_0xc = 0;
  FUN_100020f0(&(this->CDS_AnsSelect_data).offset_0x10);
  while (bVar2 = FUN_10007610((int)&(this->CDS_AnsSelect_data).offset_0x28), !bVar2) {
    pwVar3 = std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::back
                       ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                        &(this->CDS_AnsSelect_data).offset_0x28);
    puVar1 = *(undefined4 **)pwVar3;
    FUN_10007660(&(this->CDS_AnsSelect_data).offset_0x28);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



/* ---- vfunction3 @ 100072f0 size=16 ---- */

undefined4 __thiscall CDS_AnsSelect::vfunction3(CDS_AnsSelect *this)

{
  return 0x8d1a6da;
}



/* ---- vfunction4 @ 10007300 size=16 ---- */

char * __thiscall CDS_AnsSelect::vfunction4(CDS_AnsSelect *this)

{
  return "CDS_AnsSelect";
}



/* ---- vfunction5 @ 10007310 size=139 ---- */

int __thiscall CDS_AnsSelect::vfunction5(CDS_AnsSelect *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((this->CDS_AnsSelect_data).offset_0x0 == '\0') {
    local_8 = FUN_100054d0();
  }
  iVar1 = FUN_100054d0();
  iVar2 = FUN_100054d0();
  iVar3 = FUN_100054f0(&(this->CDS_AnsSelect_data).offset_0x10);
  iVar4 = FUN_10007ce0(&(this->CDS_AnsSelect_data).offset_0x28);
  return iVar4 + iVar3 + iVar2 + iVar1 + local_8;
}



/* ---- vfunction6 @ 100073a0 size=176 ---- */

uint __thiscall CDS_AnsSelect::vfunction6(CDS_AnsSelect *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->CDS_AnsSelect_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_10005510(param_1,&(this->CDS_AnsSelect_data).offset_0x4), (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10005510(param_1,&(this->CDS_AnsSelect_data).offset_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_10005510(param_1,&(this->CDS_AnsSelect_data).offset_0xc);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10005530(param_1,&(this->CDS_AnsSelect_data).offset_0x10);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10007d00(param_1,&(this->CDS_AnsSelect_data).offset_0x28);
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



/* ---- vfunction7 @ 10007450 size=176 ---- */

uint __thiscall CDS_AnsSelect::vfunction7(CDS_AnsSelect *this,_THandle *param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  if (((this->CDS_AnsSelect_data).offset_0x0 == '\0') &&
     (uVar1 = FUN_10005550(param_1,&(this->CDS_AnsSelect_data).offset_0x4), (uVar1 & 0xff) == 0)) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_10005550(param_1,&(this->CDS_AnsSelect_data).offset_0x8);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = FUN_10005550(param_1,&(this->CDS_AnsSelect_data).offset_0xc);
    if ((uVar1 & 0xff) == 0) {
      uVar1 = uVar1 & 0xffffff00;
    }
    else {
      uVar1 = FUN_10005570(param_1,&(this->CDS_AnsSelect_data).offset_0x10);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        uVar1 = FUN_10007d20(param_1,&(this->CDS_AnsSelect_data).offset_0x28);
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



/* ---- scalar_deleting_destructor @ 10007500 size=44 ---- */

undefined4 * __thiscall CDS_AnsSelect::scalar_deleting_destructor(CDS_AnsSelect *this,uint param_1)

{
  ~CDS_AnsSelect(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return &this->vftablePtr;
}



/* ---- FUN_10007530 @ 10007530 size=30 ---- */

void __fastcall FUN_10007530(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(param_1 + 0x14));
  return;
}



/* ---- FUN_10007550 @ 10007550 size=101 ---- */

undefined4 * __fastcall FUN_10007550(undefined4 *param_1)

{
  undefined1 auStackY_a0 [128];
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016e38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = param_1;
  allocator<>(auStackY_a0 + 0x80);
  FUN_10007940(param_1,SUB41(puVar1,0));
  local_8 = 0;
  FUN_10007820(param_1,0);
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_100075c0 @ 100075c0 size=27 ---- */

void __fastcall FUN_100075c0(undefined4 *param_1)

{
  FUN_100078d0(param_1);
  FUN_10002b20(param_1);
  return;
}



/* ---- FUN_100075e0 @ 100075e0 size=35 ---- */

void * __thiscall FUN_100075e0(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(uint *)((int)this + 0xc),this);
  return param_1;
}



/* ---- FUN_10007610 @ 10007610 size=26 ---- */

bool __fastcall FUN_10007610(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_10007800(param_1);
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- back @ 10007630 size=45 ---- */

/* Library Function - Single Match
    public: wchar_t & __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::back(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

wchar_t * __thiscall
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::back
          (basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *this)

{
  void *this_00;
  int *piVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_14 [2];
  undefined1 local_c [8];
  
  iVar4 = 1;
  puVar3 = local_14;
  this_00 = FUN_10008e20(this,local_c);
  piVar1 = FUN_10007a20(this_00,puVar3,iVar4);
  pwVar2 = (wchar_t *)FUN_10008f80(piVar1);
  return pwVar2;
}



/* ---- FUN_10007660 @ 10007660 size=66 ---- */

void __fastcall FUN_10007660(void *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10007610((int)param_1);
  if (!bVar1) {
    FUN_100078a0(param_1,*(int *)((int)param_1 + 0x10) + -4,*(undefined4 *)((int)param_1 + 0x10));
    *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + -4;
  }
  return;
}



/* ---- FUN_100076b0 @ 100076b0 size=112 ---- */

undefined4 * __thiscall FUN_100076b0(void *this,undefined4 param_1,char param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016b78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  allocator<>(this);
  local_8 = 0;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = 0;
  if (param_2 == '\x01') {
    FUN_10007980(this);
  }
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_10007720 @ 10007720 size=95 ---- */

void __fastcall FUN_10007720(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10016b78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100079c0(param_1);
  }
  local_8 = 0xffffffff;
  FUN_10006d60();
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10007780 @ 10007780 size=19 ---- */

void __fastcall FUN_10007780(int *param_1)

{
  FUN_10003c00(param_1);
  return;
}



/* ---- FUN_100077a0 @ 100077a0 size=22 ---- */

undefined4 * __fastcall FUN_100077a0(undefined4 *param_1)

{
  _String_const_iterator<>(param_1);
  return param_1;
}



/* ---- FUN_100077c0 @ 100077c0 size=54 ---- */

int * __thiscall FUN_100077c0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  FUN_10007a00(this);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}



/* ---- FUN_10007800 @ 10007800 size=26 ---- */

int __fastcall FUN_10007800(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
}



/* ---- FUN_10007820 @ 10007820 size=126 ---- */

uint __thiscall FUN_10007820(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    uVar1 = FUN_10007a80();
    if (uVar1 < param_1) {
      this = (void *)FUN_10009970();
    }
    else {
      uVar2 = FUN_10007b70(param_1);
      *(undefined4 *)((int)this + 0xc) = uVar2;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
      *(uint *)((int)this + 0x14) = *(int *)((int)this + 0xc) + param_1 * 4;
    }
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}



/* ---- FUN_100078a0 @ 100078a0 size=36 ---- */

void __thiscall FUN_100078a0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_10007d40(param_1,param_2,(int)this + 8);
  return;
}



/* ---- FUN_100078d0 @ 100078d0 size=106 ---- */

void __fastcall FUN_100078d0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_100078a0(param_1,*(undefined4 *)((int)param_1 + 0xc),*(undefined4 *)((int)param_1 + 0x10));
    FUN_10007b50(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  return;
}



/* ---- FUN_10007940 @ 10007940 size=56 ---- */

undefined4 * __thiscall FUN_10007940(undefined4 *param_1,allocator<char> param_2)

{
  undefined4 *puVar1;
  allocator<char> aaStack_a [6];
  
  puVar1 = param_1;
  std::allocator<char>::allocator<char>(aaStack_a + -6,&param_2);
  FUN_10007aa0(param_1,SUB41(puVar1,0));
  std::allocator<char>::allocator<char>((allocator<char> *)(param_1 + 2),&param_2);
  return param_1;
}



/* ---- FUN_10007980 @ 10007980 size=64 ---- */

void __fastcall FUN_10007980(undefined4 *param_1)

{
  char *local_8;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    local_8 = "[ScopedLock::Lock()] locked_ must be false.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_1001aa30);
  }
  XSystem::Threading::CriticalSection::Lock((CriticalSection *)*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* ---- FUN_100079c0 @ 100079c0 size=63 ---- */

void __fastcall FUN_100079c0(undefined4 *param_1)

{
  char *local_8;
  
  if (*(char *)(param_1 + 1) == '\0') {
    local_8 = "[ScopedLock::Unlock()] locked_ must be true.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_1001aa30);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  XSystem::Threading::CriticalSection::Unlock((CriticalSection *)*param_1);
  return;
}



/* ---- FUN_10007a00 @ 10007a00 size=22 ---- */

int * __fastcall FUN_10007a00(int *param_1)

{
  FUN_10007bb0(param_1);
  return param_1;
}



/* ---- FUN_10007a20 @ 10007a20 size=57 ---- */

undefined4 * __thiscall FUN_10007a20(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)this;
  local_8 = *(undefined4 *)((int)this + 4);
  puVar2 = (undefined4 *)FUN_10007b90(&local_c,param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_10007a60 @ 10007a60 size=22 ---- */

undefined4 * __fastcall FUN_10007a60(undefined4 *param_1)

{
  FUN_10009c20(param_1);
  return param_1;
}



/* ---- FUN_10007a80 @ 10007a80 size=22 ---- */

void FUN_10007a80(void)

{
  max_size();
  return;
}



/* ---- FUN_10007aa0 @ 10007aa0 size=174 ---- */

undefined4 * __thiscall FUN_10007aa0(undefined4 *param_1,allocator<char> param_2)

{
  undefined4 uVar1;
  void *this;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016be8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  allocator<>(param_1);
  local_8 = 0;
  std::allocator<char>::allocator<char>((allocator<char> *)(param_1 + 1),&param_2);
  uVar1 = FUN_10007b70(1);
  this = (void *)FUN_100010e0(4,uVar1);
  if (this == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_10001180(this,param_1);
  }
  *param_1 = local_24;
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_10007b50 @ 10007b50 size=25 ---- */

void FUN_10007b50(void *param_1)

{
  FUN_1000a8dd(param_1);
  return;
}



/* ---- FUN_10007b70 @ 10007b70 size=27 ---- */

void FUN_10007b70(uint param_1)

{
  FUN_10007d80(param_1);
  return;
}



/* ---- FUN_10007b90 @ 10007b90 size=27 ---- */

void __thiscall FUN_10007b90(void *this,int param_1)

{
  FUN_10007c40(this,-param_1);
  return;
}



/* ---- FUN_10007bb0 @ 10007bb0 size=81 ---- */

int * __fastcall FUN_10007bb0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  iVar2 = FUN_100011f0(param_1);
  if (*(uint *)(iVar2 + 0x10) <= (uint)param_1[1]) {
    FUN_1000add8();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}



/* ---- max_size @ 10007c10 size=44 ---- */

/* WARNING: Removing unreachable block (ram,0x10007c2e) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<unsigned short>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<wchar_t>::max_size(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 max_size(void)

{
  return 0x3fffffff;
}



/* ---- FUN_10007c40 @ 10007c40 size=28 ---- */

void * __thiscall FUN_10007c40(void *this,int param_1)

{
  FUN_10007c60(this,param_1);
  return this;
}



/* ---- FUN_10007c60 @ 10007c60 size=119 ---- */

int * __thiscall FUN_10007c60(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = FUN_10008c90(this);
  if (!bVar2) {
    FUN_1000add8();
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = FUN_100011f0(this);
  if ((*(uint *)(iVar3 + 0x10) < (uint)(iVar1 + param_1 * 4)) ||
     (iVar1 = *(int *)((int)this + 4), iVar3 = FUN_100011f0(this),
     (uint)(iVar1 + param_1 * 4) < *(uint *)(iVar3 + 0xc))) {
    FUN_1000add8();
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1 * 4;
  return this;
}



/* ---- FUN_10007ce0 @ 10007ce0 size=17 ---- */

void __cdecl FUN_10007ce0(void *param_1)

{
  FUN_10007dd0(param_1);
  return;
}



/* ---- FUN_10007d00 @ 10007d00 size=21 ---- */

void __cdecl FUN_10007d00(_THandle *param_1,void *param_2)

{
  FUN_10007e40(param_1,param_2);
  return;
}



/* ---- FUN_10007d20 @ 10007d20 size=21 ---- */

void __cdecl FUN_10007d20(_THandle *param_1,void *param_2)

{
  FUN_10007ee0(param_1,param_2);
  return;
}



/* ---- FUN_10007d40 @ 10007d40 size=52 ---- */

void __cdecl FUN_10007d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _Char_traits_cat<>(&param_1);
  FUN_10005840();
  return;
}



/* ---- FUN_10007d80 @ 10007d80 size=77 ---- */

void __cdecl FUN_10007d80(uint param_1)

{
  bad_alloc local_10;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    std::bad_alloc::bad_alloc(&local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10,&DAT_1001a9dc);
  }
  FUN_1000a903(param_1 << 2);
  return;
}



/* ---- FUN_10007dd0 @ 10007dd0 size=103 ---- */

int __cdecl FUN_10007dd0(void *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_18 [8];
  int local_10 [2];
  int local_8;
  
  local_8 = FUN_100054c0();
  FUN_10005dd0(param_1,local_10);
  while( true ) {
    piVar2 = FUN_100080e0(param_1,local_18);
    bVar1 = FUN_10003fb0(local_10,piVar2);
    if (!bVar1) break;
    puVar3 = (undefined4 *)FUN_10005ea0(local_10);
    iVar4 = FUN_10008270(puVar3);
    local_8 = iVar4 + local_8;
    FUN_10007bb0(local_10);
  }
  return local_8;
}



/* ---- FUN_10007e40 @ 10007e40 size=147 ---- */

uint __cdecl FUN_10007e40(_THandle *param_1,void *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  int *piVar2;
  undefined3 extraout_var_00;
  undefined4 *puVar3;
  uint3 extraout_var_01;
  undefined1 local_18 [8];
  int local_10 [2];
  uint local_8;
  
  local_8 = FUN_10007800((int)param_2);
  if ((int)local_8 < 0x19001) {
    bVar1 = FUN_10005440(param_1,&local_8);
    if (bVar1) {
      FUN_10005dd0(param_2,local_10);
      while( true ) {
        piVar2 = FUN_100080e0(param_2,local_18);
        bVar1 = FUN_10003fb0(local_10,piVar2);
        if (!bVar1) break;
        puVar3 = (undefined4 *)FUN_10005ea0(local_10);
        bVar1 = FUN_10008210(param_1,puVar3);
        if (!bVar1) {
          return (uint)extraout_var_01 << 8;
        }
        FUN_10007bb0(local_10);
      }
      local_8 = CONCAT31(extraout_var_00,1);
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



/* ---- FUN_10007ee0 @ 10007ee0 size=146 ---- */

int __cdecl FUN_10007ee0(_THandle *param_1,void *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  uint3 extraout_var_00;
  CNoTrackObject *local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  bVar1 = FUN_10005480(param_1,&local_8);
  if (bVar1) {
    if ((int)local_8 < 0x19001) {
      uVar3 = FUN_10007f80(param_2,local_8);
      for (local_c = 0; local_c < (int)local_8; local_c = local_c + 1) {
        local_10 = CProcessLocal<CControlSiteFactoryMgr>::CreateObject();
        bVar1 = FUN_10008240(param_1,&local_10);
        if (!bVar1) {
          return (uint)extraout_var_00 << 8;
        }
        uVar3 = FUN_10008110(param_2,&local_10);
      }
      iVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
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



/* ---- FUN_10007f80 @ 10007f80 size=164 ---- */

void __thiscall FUN_10007f80(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uStack_40;
  undefined1 local_2c [8];
  undefined1 local_24 [12];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016f00;
  local_10 = ExceptionList;
  uStack_40 = DAT_1001d02c ^ (uint)(local_24 + 0x20);
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  uVar1 = FUN_10007a80();
  if (uVar1 < param_1) {
    FUN_10009970();
  }
  else {
    uVar1 = FUN_10008290((int)this);
    if (uVar1 < param_1) {
      pvVar2 = (void *)FUN_10007b70(param_1);
      local_8 = 0;
      local_18 = pvVar2;
      puVar3 = FUN_10008e20(this,local_24);
      uVar5 = puVar3[1];
      uVar4 = (undefined1)*puVar3;
      puVar3 = FUN_100075e0(this,local_2c);
      FUN_100087d0(this,(char)*puVar3,puVar3[1],uVar4,uVar5,pvVar2);
      FUN_1000804d();
      return;
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@10008024 @ 10008024 size=28 ---- */

void Catch_All_10008024(void)

{
  int unaff_EBP;
  
  FUN_10007b50(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_1000804d @ 1000804d size=142 ---- */

void FUN_1000804d(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_10007800(*(int *)(unaff_EBP + -0x2c));
  *(int *)(unaff_EBP + -0x18) = iVar1;
  if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0xc) != 0) {
    FUN_100078a0(*(void **)(unaff_EBP + -0x2c),*(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0xc),
                 *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0x10));
    FUN_10007b50(*(void **)(*(int *)(unaff_EBP + -0x2c) + 0xc));
  }
  *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x14) =
       *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + 8) * 4;
  *(int *)(*(int *)(unaff_EBP + -0x2c) + 0x10) =
       *(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x18) * 4;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FUN_100080e0 @ 100080e0 size=35 ---- */

void * __thiscall FUN_100080e0(void *this,void *param_1)

{
  FUN_10009a50(param_1,*(uint *)((int)this + 0x10),this);
  return param_1;
}



/* ---- FUN_10008110 @ 10008110 size=115 ---- */

void __thiscall FUN_10008110(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c [2];
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;
  
  uVar1 = FUN_10007800((int)this);
  uVar2 = FUN_10008290((int)this);
  if (uVar1 < uVar2) {
    iVar3 = FUN_10008350(this,*(int *)((int)this + 0x10),1,param_1);
    *(int *)((int)this + 0x10) = iVar3;
  }
  else {
    puVar4 = FUN_10008e20(this,local_14);
    local_c = *puVar4;
    local_8 = puVar4[1];
    FUN_100082d0(this,local_1c,local_c,local_8,param_1);
  }
  return;
}



/* ---- CreateObject @ 10008190 size=114 ---- */

/* Library Function - Single Match
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

CNoTrackObject * __cdecl CProcessLocal<CControlSiteFactoryMgr>::CreateObject(void)

{
  StrList *this;
  StrList *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100170cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (StrList *)FUN_1000a903(0x24);
  local_8 = 0;
  if (this == (StrList *)0x0) {
    local_1c = (StrList *)0x0;
  }
  else {
    local_1c = StrList::StrList(this);
  }
  ExceptionList = local_10;
  return (CNoTrackObject *)local_1c;
}



/* ---- FUN_10008210 @ 10008210 size=36 ---- */

bool __cdecl FUN_10008210(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_10006d70((void *)*param_2,param_1,(void *)*param_2);
  return bVar1;
}



/* ---- FUN_10008240 @ 10008240 size=36 ---- */

bool __cdecl FUN_10008240(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_10006de0((void *)*param_2,param_1,(void *)*param_2);
  return bVar1;
}



/* ---- FUN_10008270 @ 10008270 size=19 ---- */

void __cdecl FUN_10008270(undefined4 *param_1)

{
  FUN_10006e50((int *)*param_1);
  return;
}



/* ---- FUN_10008290 @ 10008290 size=52 ---- */

int __fastcall FUN_10008290(int param_1)

{
  int local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc) >> 2;
  }
  return local_c;
}



/* ---- FUN_100082d0 @ 100082d0 size=118 ---- */

undefined4 * __thiscall
FUN_100082d0(void *this,undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  int local_8;
  
  iVar1 = FUN_10007800((int)this);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    piVar2 = FUN_100075e0(this,local_10);
    local_20 = FUN_10008780(&param_2,piVar2);
  }
  local_8 = local_20;
  FUN_10008390(this,param_2,param_3,1,param_4);
  puVar3 = param_1;
  iVar1 = local_8;
  this_00 = FUN_100075e0(this,local_18);
  FUN_10008740(this_00,puVar3,iVar1);
  return param_1;
}



/* ---- FUN_10008350 @ 10008350 size=49 ---- */

int __thiscall FUN_10008350(void *this,int param_1,int param_2,undefined4 *param_3)

{
  FUN_10008800(param_1,param_2,param_3,(int)this + 8);
  return param_1 + param_2 * 4;
}



/* ---- FUN_10008390 @ 10008390 size=348 ---- */

void __thiscall
FUN_10008390(void *this,undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_48;
  uint local_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016ee0;
  local_10 = ExceptionList;
  uStack_48 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  local_18 = FUN_10008290((int)this);
  if (param_3 != 0) {
    iVar1 = FUN_10007a80();
    iVar2 = FUN_10007800((int)this);
    if ((uint)(iVar1 - iVar2) < param_3) {
      FUN_10009970();
    }
    else {
      iVar1 = FUN_10007800((int)this);
      if (local_18 < iVar1 + param_3) {
        iVar1 = FUN_10007a80();
        if (iVar1 - (local_18 >> 1) < local_18) {
          local_38 = 0;
        }
        else {
          local_38 = (local_18 >> 1) + local_18;
        }
        local_18 = local_38;
        iVar1 = FUN_10007800((int)this);
        if (local_18 < iVar1 + param_3) {
          iVar1 = FUN_10007800((int)this);
          local_18 = iVar1 + param_3;
        }
        local_20 = (void *)FUN_10007b70(local_18);
        local_1c = param_2 - *(int *)((int)this + 0xc) >> 2;
        local_24 = 0;
        local_8 = 0;
        FUN_10008350(this,(int)((int)local_20 + local_1c * 4),param_3,param_4);
        local_24 = local_24 + 1;
        do_is(this,*(undefined4 *)((int)this + 0xc),param_2,local_20);
        local_24 = local_24 + 1;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),
              (void *)((int)local_20 + (local_1c + param_3) * 4));
        FUN_10008559();
        return;
      }
      if ((uint)(*(int *)((int)this + 0x10) - param_2 >> 2) < param_3) {
        uStack_28 = *param_4;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),(void *)(param_2 + param_3 * 4));
        local_8 = 2;
        FUN_10008350(this,*(int *)((int)this + 0x10),
                     param_3 - (*(int *)((int)this + 0x10) - param_2 >> 2),&uStack_28);
        FUN_10008678();
        return;
      }
      uStack_30 = *param_4;
      iStack_2c = *(int *)((int)this + 0x10);
      uVar3 = do_is(this,iStack_2c + param_3 * -4,iStack_2c,*(void **)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = uVar3;
      iVar1 = iStack_2c + param_3 * -4;
      FUN_100088b0((uint3)iVar1,param_2,iVar1,iStack_2c);
      FUN_10008880(param_2,param_2 + param_3 * 4,&uStack_30);
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@100084ec @ 100084ec size=96 ---- */

void Catch_All_100084ec(void)

{
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x20)) {
    FUN_100078a0(*(void **)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x1c),
                 *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x18) * 4);
  }
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    FUN_100078a0(*(void **)(unaff_EBP + -0x30),
                 *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x18) * 4,
                 *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x18) * 4 +
                 *(int *)(unaff_EBP + 0x10) * 4);
  }
  FUN_10007b50(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10008559 @ 10008559 size=130 ---- */

void FUN_10008559(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_10007800(*(int *)(unaff_EBP + -0x30));
  *(int *)(unaff_EBP + 0x10) = iVar1 + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(*(int *)(unaff_EBP + -0x30) + 0xc) != 0) {
    FUN_100078a0(*(void **)(unaff_EBP + -0x30),*(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0xc),
                 *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x10));
    FUN_10007b50(*(void **)(*(int *)(unaff_EBP + -0x30) + 0xc));
  }
  *(int *)(*(int *)(unaff_EBP + -0x30) + 0x14) =
       *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x14) * 4;
  *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) =
       *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 0x10) * 4;
  *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- Catch_All@10008643 @ 10008643 size=40 ---- */

void Catch_All_10008643(void)

{
  int unaff_EBP;
  
  FUN_100078a0(*(void **)(unaff_EBP + -0x30),
               *(int *)(unaff_EBP + 0xc) + *(int *)(unaff_EBP + 0x10) * 4,
               *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) + *(int *)(unaff_EBP + 0x10) * 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10008678 @ 10008678 size=78 ---- */

void FUN_10008678(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) =
       *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) + *(int *)(unaff_EBP + 0x10) * 4;
  FUN_10008880(*(undefined4 *)(unaff_EBP + 0xc),
               *(int *)(*(int *)(unaff_EBP + -0x30) + 0x10) + *(int *)(unaff_EBP + 0x10) * -4,
               (undefined4 *)(unaff_EBP + -0x24));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FUN_10008740 @ 10008740 size=57 ---- */

undefined4 * __thiscall FUN_10008740(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)this;
  local_8 = *(undefined4 *)((int)this + 4);
  puVar2 = FUN_10007c40(&local_c,param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_10008780 @ 10008780 size=71 ---- */

int __thiscall FUN_10008780(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10008c90(this);
  if ((!bVar1) || (bVar1 = FUN_10001220(this,param_1), !bVar1)) {
    FUN_1000add8();
  }
  return *(int *)((int)this + 4) - param_1[1] >> 2;
}



/* ---- FUN_100087d0 @ 100087d0 size=48 ---- */

void __thiscall
FUN_100087d0(void *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            void *param_5)

{
  FUN_10008920(param_1,param_2,param_3,param_4,param_5,(int)this + 8);
  return;
}



/* ---- FUN_10008800 @ 10008800 size=66 ---- */

void __cdecl FUN_10008800(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  _Char_traits_cat<>(&param_1);
  FUN_10008970(param_1,param_2,param_3);
  return;
}



/* ---- do_is @ 10008850 size=40 ---- */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned short>::do_is(unsigned
   short const *,unsigned short const *,short *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_is(wchar_t const *,wchar_t
   const *,short *)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2015 Release */

void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  FUN_10008990(param_1,param_2,param_3,(int)this + 8);
  return;
}



/* ---- FUN_10008880 @ 10008880 size=43 ---- */

void __cdecl FUN_10008880(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_3;
  puVar1 = (undefined4 *)FUN_1000a110(&param_2);
  puVar2 = (undefined4 *)FUN_1000a110(&param_1);
  FUN_100089e0(puVar2,puVar1,puVar3);
  return;
}



/* ---- FUN_100088b0 @ 100088b0 size=100 ---- */

void __thiscall FUN_100088b0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = _Char_traits_cat<>(&param_4);
  uStack_8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_8);
  puVar2 = (undefined1 *)FUN_10008b80((int)&uStack_8 + 1);
  uVar1 = *puVar2;
  iVar5 = param_4;
  iVar3 = FUN_1000a110(&param_3);
  pvVar4 = (void *)FUN_1000a110(&param_2);
  FUN_10008a10(pvVar4,iVar3,iVar5,uVar1);
  return;
}



/* ---- FUN_10008920 @ 10008920 size=80 ---- */

void __cdecl
FUN_10008920(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            void *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  _Char_traits_cat<>(&param_5);
  pvVar3 = param_5;
  uVar4 = param_6;
  uVar1 = FUN_10006a40((int)&param_3);
  uVar2 = FUN_10006a40((int)&param_1);
  FUN_10008a60(uVar2,uVar1,pvVar3,uVar4);
  return;
}



/* ---- FUN_10008970 @ 10008970 size=25 ---- */

void __cdecl FUN_10008970(undefined4 param_1,int param_2,undefined4 *param_3)

{
  FUN_10008a80((uint3)param_2,param_1,param_2,param_3);
  return;
}



/* ---- FUN_10008990 @ 10008990 size=80 ---- */

void __cdecl FUN_10008990(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  _Char_traits_cat<>(&param_3);
  pvVar3 = param_3;
  uVar4 = param_4;
  uVar1 = FUN_1000a110(&param_2);
  uVar2 = FUN_1000a110(&param_1);
  FUN_10008a60(uVar2,uVar1,pvVar3,uVar4);
  return;
}



/* ---- FUN_100089e0 @ 100089e0 size=36 ---- */

void __cdecl FUN_100089e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}



/* ---- FUN_10008a10 @ 10008a10 size=67 ---- */

void __cdecl FUN_10008a10(void *param_1,int param_2,int param_3,undefined1 param_4)

{
  _Char_traits_cat<>(&param_3);
  FUN_10008ad0(param_1,param_2,param_3);
  return;
}



/* ---- FUN_10008a60 @ 10008a60 size=29 ---- */

void __cdecl FUN_10008a60(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  FUN_10008b20(param_1,param_2,param_3,param_4);
  return;
}



/* ---- FUN_10008a80 @ 10008a80 size=58 ---- */

void __thiscall FUN_10008a80(uint3 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  FUN_10008b80((int)&uStack_8 + 2);
  FUN_10008b90(param_2,param_3,param_4);
  return;
}



/* ---- FUN_10008ac0 @ 10008ac0 size=10 ---- */

undefined4 __cdecl FUN_10008ac0(undefined4 *param_1)

{
  return *param_1;
}



/* ---- FUN_10008ad0 @ 10008ad0 size=75 ---- */

void * __cdecl FUN_10008ad0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    _memmove_s(_Dst,iVar1 << 2,param_1,iVar1 << 2);
  }
  return _Dst;
}



/* ---- FUN_10008b20 @ 10008b20 size=84 ---- */

void __cdecl FUN_10008b20(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  _Char_traits_cat<>(&param_3);
  pvVar3 = param_3;
  iVar1 = FUN_1000a110(&param_2);
  pvVar2 = (void *)FUN_1000a110(&param_1);
  FUN_10008bd0(pvVar2,iVar1,pvVar3);
  return;
}



/* ---- FUN_10008b80 @ 10008b80 size=11 ---- */

undefined4 __cdecl FUN_10008b80(undefined4 param_1)

{
  return param_1;
}



/* ---- FUN_10008b90 @ 10008b90 size=61 ---- */

void __cdecl FUN_10008b90(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_2;
  puVar3 = param_3;
  puVar1 = (undefined4 *)FUN_1000a110(&param_1);
  FUN_10008c20(puVar1,iVar2,puVar3);
  return;
}



/* ---- FUN_10008bd0 @ 10008bd0 size=73 ---- */

void * __cdecl FUN_10008bd0(void *param_1,int param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  if (iVar1 != 0) {
    _memmove_s(param_3,iVar1 << 2,param_1,iVar1 << 2);
  }
  return (void *)((int)param_3 + iVar1 * 4);
}



/* ---- FUN_10008c20 @ 10008c20 size=43 ---- */

void __cdecl FUN_10008c20(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = *param_3;
    param_1 = param_1 + 1;
  }
  return;
}



/* ---- FUN_10008c50 @ 10008c50 size=49 ---- */

void __thiscall FUN_10008c50(void *this,undefined4 *param_1)

{
  FUN_10009e60(this,param_1);
  FUN_10009e90(*(undefined4 **)this,(undefined4 *)*param_1);
  return;
}



/* ---- FUN_10008c90 @ 10008c90 size=24 ---- */

bool __fastcall FUN_10008c90(int *param_1)

{
  return *param_1 != 0;
}



/* ---- operator+= @ 10008cb0 size=28 ---- */

/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::operator+=(char)
   
   Library: Visual Studio 2008 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  pbVar1 = append(this,1,param_1);
  return pbVar1;
}



/* ---- FUN_10008cd0 @ 10008cd0 size=87 ---- */

void __fastcall
FUN_10008cd0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 local_2c [16];
  int local_1c;
  int local_18;
  undefined4 local_c;
  int local_8;
  
  puVar1 = (undefined4 *)
           std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(param_1);
  local_c = *puVar1;
  local_8 = puVar1[1];
  piVar2 = (int *)FID_conflict_begin(param_1);
  local_1c = *piVar2;
  local_18 = piVar2[1];
  FUN_10009070(param_1,local_2c,local_1c,local_18,(char)local_c,local_8);
  return;
}



/* ---- FID_conflict:begin @ 10008d30 size=37 ---- */

/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> > __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::begin(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::begin(void)
    public: class std::_String_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::begin(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::begin(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall FID_conflict_begin(void *this)

{
  char *pcVar1;
  void *in_stack_00000004;
  
  pcVar1 = FID_conflict__Myptr(this);
  _String_iterator<>(in_stack_00000004,pcVar1,this);
  return in_stack_00000004;
}



/* ---- end @ 10008d60 size=43 ---- */

/* Library Function - Single Match
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::end(void)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  char *pcVar1;
  void *in_stack_00000004;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  pbVar2 = this;
  pcVar1 = FID_conflict__Myptr(this);
  _String_iterator<>(in_stack_00000004,pcVar1 + *(int *)(this + 0x14),pbVar2);
  return in_stack_00000004;
}



/* ---- FUN_10008d90 @ 10008d90 size=101 ---- */

undefined4 * __fastcall FUN_10008d90(undefined4 *param_1)

{
  undefined1 auStackY_a0 [128];
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016e38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = param_1;
  allocator<>(auStackY_a0 + 0x80);
  FUN_10007940(param_1,SUB41(puVar1,0));
  local_8 = 0;
  FUN_10009260(param_1,0);
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_10008e00 @ 10008e00 size=27 ---- */

void __fastcall FUN_10008e00(undefined4 *param_1)

{
  FUN_100092e0(param_1);
  FUN_10002b20(param_1);
  return;
}



/* ---- FUN_10008e20 @ 10008e20 size=35 ---- */

void * __thiscall FUN_10008e20(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(uint *)((int)this + 0x10),this);
  return param_1;
}



/* ---- FUN_10008e50 @ 10008e50 size=31 ---- */

int __fastcall FUN_10008e50(int param_1)

{
  return (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x18;
}



/* ---- FUN_10008e70 @ 10008e70 size=47 ---- */

int __thiscall FUN_10008e70(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10008e50((int)this);
  if (uVar1 <= param_1) {
    FUN_1000add8();
  }
  return param_1 * 0x18 + *(int *)((int)this + 0xc);
}



/* ---- FUN_10008ea0 @ 10008ea0 size=115 ---- */

void __thiscall FUN_10008ea0(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c [2];
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;
  
  uVar1 = FUN_10008e50((int)this);
  uVar2 = FUN_10009100((int)this);
  if (uVar1 < uVar2) {
    iVar3 = FUN_10009360(this,*(int *)((int)this + 0x10),1,param_1);
    *(int *)((int)this + 0x10) = iVar3;
  }
  else {
    puVar4 = FUN_10008e20(this,local_14);
    local_c = *puVar4;
    local_8 = puVar4[1];
    FUN_10009140(this,local_1c,local_c,local_8,param_1);
  }
  return;
}



/* ---- FUN_10008f20 @ 10008f20 size=87 ---- */

void __fastcall FUN_10008f20(void *param_1)

{
  undefined4 *puVar1;
  undefined4 local_2c [2];
  undefined1 local_24 [8];
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  puVar1 = FUN_10008e20(param_1,local_14);
  local_c = *puVar1;
  local_8 = puVar1[1];
  puVar1 = FUN_100075e0(param_1,local_24);
  local_1c = *puVar1;
  local_18 = puVar1[1];
  FUN_100091c0(param_1,local_2c,local_1c,local_18,local_c,local_8);
  return;
}



/* ---- FUN_10008f80 @ 10008f80 size=19 ---- */

void __fastcall FUN_10008f80(int *param_1)

{
  FUN_10005ea0(param_1);
  return;
}



/* ---- FUN_10008fa0 @ 10008fa0 size=54 ---- */

int * __thiscall FUN_10008fa0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  FUN_100093c0(this);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}



/* ---- FUN_10008fe0 @ 10008fe0 size=19 ---- */

void __fastcall FUN_10008fe0(int *param_1)

{
  FUN_10009420(param_1);
  return;
}



/* ---- FUN_10009000 @ 10009000 size=54 ---- */

int * __thiscall FUN_10009000(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  FUN_10009400(this);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return param_1;
}



/* ---- FUN_10009040 @ 10009040 size=35 ---- */

bool __thiscall FUN_10009040(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10009480(this,param_1);
  return (bool)('\x01' - bVar1);
}



/* ---- FUN_10009070 @ 10009070 size=129 ---- */

void * __thiscall
FUN_10009070(void *this,void *param_1,int param_2,int param_3,undefined1 param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  piVar1 = (int *)FID_conflict_begin(this);
  uVar2 = FUN_100094e0((char)param_2,param_3,*piVar1);
  uVar3 = FUN_100094e0(param_4,param_5,param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase(this,uVar2,uVar3);
  pcVar4 = FID_conflict__Myptr(this);
  _String_iterator<>(param_1,pcVar4 + uVar2,this);
  return param_1;
}



/* ---- FUN_10009100 @ 10009100 size=57 ---- */

int __fastcall FUN_10009100(int param_1)

{
  int local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_c = 0;
  }
  else {
    local_c = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) / 0x18;
  }
  return local_c;
}



/* ---- FUN_10009140 @ 10009140 size=118 ---- */

undefined4 * __thiscall
FUN_10009140(void *this,undefined4 *param_1,undefined4 param_2,int param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  int local_8;
  
  iVar1 = FUN_10008e50((int)this);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    piVar2 = FUN_100075e0(this,local_10);
    local_20 = FUN_10009b10(&param_2,piVar2);
  }
  local_8 = local_20;
  FUN_10009580(this,param_2,param_3,1,param_4);
  puVar3 = param_1;
  iVar1 = local_8;
  this_00 = FUN_100075e0(this,local_18);
  FUN_10009a10(this_00,puVar3,iVar1);
  return param_1;
}



/* ---- FUN_100091c0 @ 100091c0 size=145 ---- */

undefined4 * __thiscall
FUN_100091c0(void *this,undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            uint param_5)

{
  bool bVar1;
  void *pvVar2;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_10009510(this,&local_c,param_2,param_3);
  FUN_10009510(this,&local_14,param_4,param_5);
  bVar1 = FUN_10003fb0(&local_c,&local_14);
  if (bVar1) {
    pvVar2 = (void *)FUN_10009ec0((uint3)*(undefined4 *)((int)this + 0x10),local_10,
                                  *(undefined4 *)((int)this + 0x10),local_8);
    FUN_10009550(this,pvVar2,*(void **)((int)this + 0x10));
    *(void **)((int)this + 0x10) = pvVar2;
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return param_1;
}



/* ---- FUN_10009260 @ 10009260 size=126 ---- */

uint __thiscall FUN_10009260(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    uVar1 = FUN_10009530();
    if (uVar1 < param_1) {
      this = (void *)FUN_10009970();
    }
    else {
      uVar2 = FUN_100099f0(param_1);
      *(undefined4 *)((int)this + 0xc) = uVar2;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
      *(uint *)((int)this + 0x14) = param_1 * 0x18 + *(int *)((int)this + 0xc);
    }
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}



/* ---- FUN_100092e0 @ 100092e0 size=113 ---- */

void __fastcall FUN_100092e0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_10009550(param_1,*(void **)((int)param_1 + 0xc),*(void **)((int)param_1 + 0x10));
    FUN_10007b50(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  return;
}



/* ---- FUN_10009360 @ 10009360 size=49 ---- */

int __thiscall FUN_10009360(void *this,int param_1,int param_2,void *param_3)

{
  FUN_10009f30(param_1,param_2,param_3,(int)this + 8);
  return param_2 * 0x18 + param_1;
}



/* ---- _Vector_iterator<> @ 100093a0 size=32 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
   
   Library: Visual Studio 2012 Release */

void * __thiscall _Vector_iterator<>(void *this,uint param_1,undefined4 *param_2)

{
  FUN_10009a50(this,param_1,param_2);
  return this;
}



/* ---- FUN_100093c0 @ 100093c0 size=22 ---- */

int * __fastcall FUN_100093c0(int *param_1)

{
  FUN_10009ab0(param_1);
  return param_1;
}



/* ---- _String_iterator<> @ 100093e0 size=32 ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >(char *,struct std::_Container_base0 const *)
    public: __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char>
   > >::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >(char *,struct
   std::_Container_base0 const *)
    public: __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char>
   > >::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >(char *,struct
   std::_Container_base12 const *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall _String_iterator<>(void *this,char *param_1,void *param_2)

{
  FUN_10009b60(this,param_1,param_2);
  return this;
}



/* ---- FUN_10009400 @ 10009400 size=22 ---- */

int * __fastcall FUN_10009400(int *param_1)

{
  FUN_10009bc0(param_1);
  return param_1;
}



/* ---- FUN_10009420 @ 10009420 size=84 ---- */

int __fastcall FUN_10009420(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  if (*param_1 != -4) {
    bVar1 = FUN_10008c90(param_1);
    if (!bVar1) {
      FUN_1000add8();
    }
    pcVar2 = FID_conflict__Myptr((void *)*param_1);
    if (pcVar2 + *(int *)(*param_1 + 0x14) <= (char *)param_1[1]) {
      FUN_1000add8();
    }
  }
  return param_1[1];
}



/* ---- FUN_10009480 @ 10009480 size=83 ---- */

bool __thiscall FUN_10009480(void *this,int *param_1)

{
  bool bVar1;
  
  if ((*(int *)this != -4) &&
     ((bVar1 = FUN_10008c90(this), !bVar1 || (bVar1 = FUN_10001220(this,param_1), !bVar1)))) {
    FUN_1000add8();
  }
  return *(int *)((int)this + 4) == param_1[1];
}



/* ---- FUN_100094e0 @ 100094e0 size=41 ---- */

int __cdecl FUN_100094e0(undefined1 param_1,int param_2,int param_3)

{
  int local_8;
  
  if (param_2 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_10009d90(&param_1,&param_3);
  }
  return local_8;
}



/* ---- FUN_10009510 @ 10009510 size=32 ---- */

void * __thiscall FUN_10009510(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  _Vector_iterator<>(param_1,param_3,this);
  return param_1;
}



/* ---- FUN_10009530 @ 10009530 size=22 ---- */

void FUN_10009530(void)

{
  max_size();
  return;
}



/* ---- FUN_10009550 @ 10009550 size=36 ---- */

void __thiscall FUN_10009550(void *this,void *param_1,void *param_2)

{
  FUN_10009f80(param_1,param_2,(int)this + 8);
  return;
}



/* ---- FUN_10009580 @ 10009580 size=611 ---- */

void __thiscall FUN_10009580(void *this,undefined4 param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uStack_70;
  uint local_60;
  undefined4 local_58 [6];
  int local_40;
  undefined1 local_3c [24];
  int local_24;
  void *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017130;
  local_10 = ExceptionList;
  uStack_70 = DAT_1001d02c ^ (uint)(local_3c + 0x38);
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_18 = FUN_10009100((int)this);
  if (param_3 != 0) {
    iVar1 = FUN_10008e50((int)this);
    iVar2 = FUN_10009530();
    if ((uint)(iVar2 - iVar1) < param_3) {
      FUN_10009970();
    }
    else {
      iVar1 = FUN_10008e50((int)this);
      if (local_18 < iVar1 + param_3) {
        uVar4 = local_18 >> 1;
        iVar1 = FUN_10009530();
        if (iVar1 - uVar4 < local_18) {
          local_60 = 0;
        }
        else {
          local_60 = (local_18 >> 1) + local_18;
        }
        local_18 = local_60;
        iVar1 = FUN_10008e50((int)this);
        if (local_18 < iVar1 + param_3) {
          iVar1 = FUN_10008e50((int)this);
          local_18 = iVar1 + param_3;
        }
        local_20 = (void *)FUN_100099f0(local_18);
        local_1c = (param_2 - *(int *)((int)this + 0xc)) / 0x18;
        local_24 = 0;
        local_8 = 0;
        FUN_10009360(this,(int)(local_1c * 0x18 + (int)local_20),param_3,param_4);
        local_24 = local_24 + 1;
        do_is(this,*(undefined4 *)((int)this + 0xc),param_2,local_20);
        local_24 = local_24 + 1;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),
              (void *)((local_1c + param_3) * 0x18 + (int)local_20));
        FUN_10009752();
        return;
      }
      if ((uint)((*(int *)((int)this + 0x10) - param_2) / 0x18) < param_3) {
        FUN_10009c40(local_3c,param_4);
        local_8 = 2;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),(void *)(param_3 * 0x18 + param_2));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_10009360(this,*(int *)((int)this + 0x10),
                     param_3 - (*(int *)((int)this + 0x10) - param_2) / 0x18,local_3c);
        FUN_10009888();
        return;
      }
      FUN_10009c40(local_58,param_4);
      local_8 = 5;
      local_40 = *(int *)((int)this + 0x10);
      uVar3 = do_is(this,local_40 + param_3 * -0x18,local_40,*(void **)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = uVar3;
      iVar1 = local_40 + param_3 * -0x18;
      FUN_1000a020((uint3)iVar1,param_2,iVar1,local_40);
      FUN_10009ff0(param_2,param_3 * 0x18 + param_2,local_58);
      local_8 = 0xffffffff;
      ~function<>(local_58);
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- Catch_All@100096e3 @ 100096e3 size=98 ---- */

void Catch_All_100096e3(void)

{
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x20)) {
    FUN_10009550(*(void **)(unaff_EBP + -0x58),*(void **)(unaff_EBP + -0x1c),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x18 + *(int *)(unaff_EBP + -0x1c)));
  }
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    FUN_10009550(*(void **)(unaff_EBP + -0x58),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x18 + *(int *)(unaff_EBP + -0x1c)),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x18 + *(int *)(unaff_EBP + -0x1c) +
                         *(int *)(unaff_EBP + 0x10) * 0x18));
  }
  FUN_10007b50(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10009752 @ 10009752 size=135 ---- */

void FUN_10009752(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_10008e50(*(int *)(unaff_EBP + -0x58));
  *(int *)(unaff_EBP + 0x10) = iVar1 + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(*(int *)(unaff_EBP + -0x58) + 0xc) != 0) {
    FUN_10009550(*(void **)(unaff_EBP + -0x58),*(void **)(*(int *)(unaff_EBP + -0x58) + 0xc),
                 *(void **)(*(int *)(unaff_EBP + -0x58) + 0x10));
    FUN_10007b50(*(void **)(*(int *)(unaff_EBP + -0x58) + 0xc));
  }
  *(int *)(*(int *)(unaff_EBP + -0x58) + 0x14) =
       *(int *)(unaff_EBP + -0x14) * 0x18 + *(int *)(unaff_EBP + -0x1c);
  *(int *)(*(int *)(unaff_EBP + -0x58) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x18 + *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x58) + 0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- Catch_All@10009853 @ 10009853 size=40 ---- */

void Catch_All_10009853(void)

{
  int unaff_EBP;
  
  FUN_10009550(*(void **)(unaff_EBP + -0x58),
               (void *)(*(int *)(unaff_EBP + 0x10) * 0x18 + *(int *)(unaff_EBP + 0xc)),
               (void *)(*(int *)(unaff_EBP + 0x10) * 0x18 +
                       *(int *)(*(int *)(unaff_EBP + -0x58) + 0x10)));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10009888 @ 10009888 size=96 ---- */

void FUN_10009888(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(int *)(*(int *)(unaff_EBP + -0x58) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x18 + *(int *)(*(int *)(unaff_EBP + -0x58) + 0x10);
  FUN_10009ff0(*(undefined4 *)(unaff_EBP + 0xc),
               *(int *)(*(int *)(unaff_EBP + -0x58) + 0x10) + *(int *)(unaff_EBP + 0x10) * -0x18,
               (void *)(unaff_EBP + -0x38));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ~function<>((undefined4 *)(unaff_EBP + -0x38));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- FUN_10009970 @ 10009970 size=83 ---- */

void FUN_10009970(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_54 [28];
  undefined1 local_38 [40];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016ce8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  basic_string<>(local_54,"vector<T> too long");
  local_8 = 0;
  FID_conflict_length_error(local_38,local_54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_38,&DAT_1001a9a4);
}



/* ---- FUN_100099f0 @ 100099f0 size=27 ---- */

void FUN_100099f0(uint param_1)

{
  FUN_1000a090(param_1);
  return;
}



/* ---- FUN_10009a10 @ 10009a10 size=57 ---- */

undefined4 * __thiscall FUN_10009a10(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)this;
  local_8 = *(undefined4 *)((int)this + 4);
  puVar2 = FUN_10009d70(&local_c,param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



/* ---- FUN_10009a50 @ 10009a50 size=82 ---- */

undefined4 * __thiscall FUN_10009a50(void *this,uint param_1,undefined4 *param_2)

{
  FUN_10007a60(this);
  if (((param_2 == (undefined4 *)0x0) || (param_1 < (uint)param_2[3])) ||
     ((uint)param_2[4] < param_1)) {
    FUN_1000add8();
  }
  FUN_100011d0(this,param_2);
  *(uint *)((int)this + 4) = param_1;
  return this;
}



/* ---- FUN_10009ab0 @ 10009ab0 size=81 ---- */

int * __fastcall FUN_10009ab0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_10008c90(param_1);
  if (!bVar1) {
    FUN_1000add8();
  }
  iVar2 = FUN_100011f0(param_1);
  if (*(uint *)(iVar2 + 0x10) <= (uint)param_1[1]) {
    FUN_1000add8();
  }
  param_1[1] = param_1[1] + 0x18;
  return param_1;
}



/* ---- FUN_10009b10 @ 10009b10 size=76 ---- */

int __thiscall FUN_10009b10(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_10008c90(this);
  if ((!bVar1) || (bVar1 = FUN_10001220(this,param_1), !bVar1)) {
    FUN_1000add8();
  }
  return (*(int *)((int)this + 4) - param_1[1]) / 0x18;
}



/* ---- FUN_10009b60 @ 10009b60 size=94 ---- */

undefined4 * __thiscall FUN_10009b60(void *this,char *param_1,void *param_2)

{
  char *pcVar1;
  
  FUN_10009c20(this);
  if ((((param_2 == (void *)0x0) || (param_1 == (char *)0x0)) ||
      (pcVar1 = FID_conflict__Myptr(param_2), param_1 < pcVar1)) ||
     (pcVar1 = FID_conflict__Myptr(param_2), pcVar1 + *(int *)((int)param_2 + 0x14) < param_1)) {
    FUN_1000add8();
  }
  *(void **)this = param_2;
  *(char **)((int)this + 4) = param_1;
  return this;
}



/* ---- FUN_10009bc0 @ 10009bc0 size=96 ---- */

int * __fastcall FUN_10009bc0(int *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  if (*param_1 != -4) {
    bVar1 = FUN_10008c90(param_1);
    if (!bVar1) {
      FUN_1000add8();
    }
    pcVar2 = FID_conflict__Myptr((void *)*param_1);
    if (pcVar2 + *(int *)(*param_1 + 0x14) <= (char *)param_1[1]) {
      FUN_1000add8();
    }
  }
  param_1[1] = param_1[1] + 1;
  return param_1;
}



/* ---- FUN_10009c20 @ 10009c20 size=22 ---- */

undefined4 * __fastcall FUN_10009c20(undefined4 *param_1)

{
  FUN_100011b0(param_1);
  return param_1;
}



/* ---- FUN_10009c40 @ 10009c40 size=175 ---- */

undefined4 * __thiscall FUN_10009c40(void *this,void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uStack_40;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016eb8;
  local_10 = ExceptionList;
  uStack_40 = DAT_1001d02c ^ (uint)(local_20 + 0x1c);
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_18 = local_28 + -0x1c;
  pvVar5 = this;
  std::allocator<char>::allocator<char>
            ((allocator<char> *)(local_28 + -0x1c),(allocator<char> *)((int)param_1 + 8));
  FUN_10007940(this,SUB41(pvVar5,0));
  local_8 = 0;
  uVar1 = FUN_10002e10((int)param_1);
  uVar1 = FUN_10002ed0(this,uVar1);
  if ((uVar1 & 0xff) == 0) {
    ExceptionList = local_10;
    return this;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar6 = *(int *)((int)this + 0xc);
  puVar2 = FUN_100080e0(param_1,local_20);
  uVar3 = puVar2[1];
  uVar4 = (undefined1)*puVar2;
  puVar2 = FUN_10005dd0(param_1,local_28);
  uVar3 = FUN_1000a0e0(this,(char)*puVar2,puVar2[1],uVar4,uVar3,iVar6);
  *(undefined4 *)((int)this + 0x10) = uVar3;
  puVar2 = (undefined4 *)FUN_10009d0d();
  return puVar2;
}



/* ---- Catch_All@10009cef @ 10009cef size=17 ---- */

void Catch_All_10009cef(void)

{
  int unaff_EBP;
  
  FUN_10002f80(*(void **)(unaff_EBP + -0x28));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- FUN_10009d0d @ 10009d0d size=37 ---- */

undefined4 FUN_10009d0d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x28);
}



/* ---- max_size @ 10009d40 size=44 ---- */

/* WARNING: Removing unreachable block (ram,0x10009d5e) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<unsigned short>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<wchar_t>::max_size(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 max_size(void)

{
  return 0xaaaaaaa;
}



/* ---- FUN_10009d70 @ 10009d70 size=28 ---- */

void * __thiscall FUN_10009d70(void *this,int param_1)

{
  FUN_10009de0(this,param_1);
  return this;
}



/* ---- FUN_10009d90 @ 10009d90 size=78 ---- */

int __thiscall FUN_10009d90(void *this,int *param_1)

{
  bool bVar1;
  
  if ((*(int *)this != -4) &&
     ((bVar1 = FUN_10008c90(this), !bVar1 || (bVar1 = FUN_10001220(this,param_1), !bVar1)))) {
    FUN_1000add8();
  }
  return *(int *)((int)this + 4) - param_1[1];
}



/* ---- FUN_10009de0 @ 10009de0 size=119 ---- */

int * __thiscall FUN_10009de0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = FUN_10008c90(this);
  if (!bVar2) {
    FUN_1000add8();
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = FUN_100011f0(this);
  if ((*(uint *)(iVar3 + 0x10) < (uint)(param_1 * 0x18 + iVar1)) ||
     (iVar1 = *(int *)((int)this + 4), iVar3 = FUN_100011f0(this),
     (uint)(param_1 * 0x18 + iVar1) < *(uint *)(iVar3 + 0xc))) {
    FUN_1000add8();
  }
  *(int *)((int)this + 4) = param_1 * 0x18 + *(int *)((int)this + 4);
  return this;
}



/* ---- FUN_10009e60 @ 10009e60 size=42 ---- */

void __cdecl FUN_10009e60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return;
}



/* ---- FUN_10009e90 @ 10009e90 size=42 ---- */

void __cdecl FUN_10009e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  return;
}



/* ---- FUN_10009ec0 @ 10009ec0 size=104 ---- */

void __thiscall FUN_10009ec0(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = _Char_traits_cat<>(&param_4);
  uStack_8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_8);
  FUN_10008b80((int)&uStack_8 + 1);
  iVar4 = param_4;
  pvVar2 = (void *)FUN_1000a110(&param_3);
  pvVar3 = (void *)FUN_1000a110(&param_2);
  FUN_1000a140(pvVar3,pvVar2,iVar4);
  return;
}



/* ---- FUN_10009f30 @ 10009f30 size=66 ---- */

void __cdecl FUN_10009f30(int param_1,int param_2,void *param_3,undefined4 param_4)

{
  _Char_traits_cat<>(&param_1);
  FUN_1000a1a0(param_1,param_2,param_3);
  return;
}



/* ---- FUN_10009f80 @ 10009f80 size=52 ---- */

void __cdecl FUN_10009f80(void *param_1,void *param_2,undefined4 param_3)

{
  _Char_traits_cat<>(&param_1);
  _Destroy_range<>(param_1,param_2);
  return;
}



/* ---- do_is @ 10009fc0 size=40 ---- */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned short>::do_is(unsigned
   short const *,unsigned short const *,short *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_is(wchar_t const *,wchar_t
   const *,short *)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2015 Release */

void __thiscall do_is(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  FUN_1000a290(param_1,param_2,param_3,(int)this + 8);
  return;
}



/* ---- FUN_10009ff0 @ 10009ff0 size=43 ---- */

void __cdecl FUN_10009ff0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = param_3;
  pvVar1 = (void *)FUN_1000a110(&param_2);
  pvVar2 = (void *)FUN_1000a110(&param_1);
  _Destroy_range<>(pvVar2,pvVar1,pvVar3);
  return;
}



/* ---- FUN_1000a020 @ 1000a020 size=100 ---- */

void __thiscall FUN_1000a020(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = _Char_traits_cat<>(&param_4);
  uStack_8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_8);
  pbVar2 = (byte *)FUN_10008b80((int)&uStack_8 + 1);
  uVar5 = (uint)*pbVar2;
  iVar6 = param_4;
  puVar3 = (undefined4 *)FUN_1000a110(&param_3);
  puVar4 = (undefined4 *)FUN_1000a110(&param_2);
  FUN_1000a310(puVar4,puVar3,iVar6,uVar5,uVar1);
  return;
}



/* ---- FUN_1000a090 @ 1000a090 size=77 ---- */

void __cdecl FUN_1000a090(uint param_1)

{
  bad_alloc local_10;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x18) {
    std::bad_alloc::bad_alloc(&local_10,(char *)0x0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10,&DAT_1001a9dc);
  }
  FUN_1000a903(param_1 * 0x18);
  return;
}



/* ---- FUN_1000a0e0 @ 1000a0e0 size=48 ---- */

void __thiscall
FUN_1000a0e0(void *this,undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            int param_5)

{
  FUN_1000a370(param_1,param_2,param_3,param_4,param_5,(int)this + 8);
  return;
}



/* ---- FUN_1000a110 @ 1000a110 size=25 ---- */

void __cdecl FUN_1000a110(undefined4 *param_1)

{
  FUN_10008ac0(param_1);
  return;
}



/* ---- _Char_traits_cat<> @ 1000a130 size=11 ---- */

/* Library Function - Multiple Matches With Same Base Name
    struct std::_Secure_char_traits_tag __cdecl std::_Char_traits_cat<struct std::char_traits<char>
   >(void)
    struct std::_Secure_char_traits_tag __cdecl std::_Char_traits_cat<struct
   std::char_traits<unsigned short> >(void)
    struct std::_Secure_char_traits_tag __cdecl std::_Char_traits_cat<struct
   std::char_traits<wchar_t> >(void)
   
   Library: Visual Studio 2008 Debug */

undefined1 __fastcall _Char_traits_cat<>(undefined4 param_1)

{
  undefined1 local_5;
  
  local_5 = (undefined1)((uint)param_1 >> 0x18);
  return local_5;
}



/* ---- FUN_1000a140 @ 1000a140 size=90 ---- */

int __cdecl FUN_1000a140(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = (((int)param_2 - (int)param_1) / 0x18) * 0x18 + param_3;
  pvVar2 = (void *)FUN_1000a110(&param_3);
  FUN_1000a410(param_1,param_2,pvVar2);
  return iVar1;
}



/* ---- FUN_1000a1a0 @ 1000a1a0 size=101 ---- */

void FUN_1000a1a0(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100170a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1000a3d0(param_1,param_3);
    param_1 = param_1 + 0x18;
  }
  FUN_1000a23c();
  return;
}



/* ---- Catch_All@1000a205 @ 1000a205 size=2 ---- */

void Catch_All_1000a205(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_1000a3f0(*(void **)(unaff_EBP + -0x14));
  FUN_1000a207();
  return;
}



/* ---- FUN_1000a207 @ 1000a207 size=9 ---- */

void FUN_1000a207(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x18;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_1000a3f0(*(void **)(unaff_EBP + -0x14));
  FUN_1000a207();
  return;
}



/* ---- FUN_1000a210 @ 1000a210 size=31 ---- */

void FUN_1000a210(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 8)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_1000a3f0(*(void **)(unaff_EBP + -0x14));
  FUN_1000a207();
  return;
}



/* ---- FUN_1000a23c @ 1000a23c size=25 ---- */

void FUN_1000a23c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* ---- _Destroy_range<> @ 1000a260 size=38 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Wrap_alloc<class std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > &,struct std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Wrap_alloc<class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > > &,struct
   std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > >(class Concurrency::details::_ContextCallback *,class
   Concurrency::details::_ContextCallback *,struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > &,struct std::_Nonscalar_ptr_iterator_tag)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl _Destroy_range<>(void *param_1,void *param_2)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x18)) {
    FUN_1000a3f0(param_1);
  }
  return;
}



/* ---- FUN_1000a290 @ 1000a290 size=80 ---- */

void __cdecl FUN_1000a290(undefined4 param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  _Char_traits_cat<>(&param_3);
  pvVar3 = param_3;
  puVar1 = (undefined4 *)FUN_1000a110(&param_2);
  puVar2 = (undefined4 *)FUN_1000a110(&param_1);
  FUN_1000a450(puVar2,puVar1,pvVar3);
  return;
}



/* ---- _Destroy_range<> @ 1000a2e0 size=38 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Wrap_alloc<class std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > &,struct std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Wrap_alloc<class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > > &,struct
   std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > >(class Concurrency::details::_ContextCallback *,class
   Concurrency::details::_ContextCallback *,struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > &,struct std::_Nonscalar_ptr_iterator_tag)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl _Destroy_range<>(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x18)) {
    FUN_10001f60(param_1,param_3);
  }
  return;
}



/* ---- FUN_1000a310 @ 1000a310 size=87 ---- */

int __cdecl
FUN_1000a310(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
            undefined1 param_5)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = param_3 + (((int)param_2 - (int)param_1) / 0x18) * -0x18;
  pvVar1 = (void *)FUN_1000a110(&param_3);
  FUN_1000a540(param_1,param_2,pvVar1);
  return iVar2;
}



/* ---- FUN_1000a370 @ 1000a370 size=84 ---- */

void __cdecl
FUN_1000a370(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6)

{
  allocator<char> *paVar1;
  allocator<char> *paVar2;
  int iVar3;
  
  _Char_traits_cat<>(&param_5);
  iVar3 = param_5;
  paVar1 = (allocator<char> *)FUN_10006a40((int)&param_3);
  paVar2 = (allocator<char> *)FUN_10006a40((int)&param_1);
  FUN_1000a580(paVar2,paVar1,iVar3);
  return;
}



/* ---- FUN_1000a3d0 @ 1000a3d0 size=29 ---- */

void FUN_1000a3d0(undefined4 param_1,void *param_2)

{
  FUN_1000a640(param_1,param_2);
  return;
}



/* ---- FUN_1000a3f0 @ 1000a3f0 size=25 ---- */

void FUN_1000a3f0(void *param_1)

{
  FUN_1000a6c0(param_1);
  return;
}



/* ---- FUN_1000a410 @ 1000a410 size=50 ---- */

void * __cdecl FUN_1000a410(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x18)) {
    FUN_10001f60(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0x18);
  }
  return param_3;
}



/* ---- FUN_1000a450 @ 1000a450 size=133 ---- */

void FUN_1000a450(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  uint uStack_44;
  undefined4 local_30 [6];
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100170f8;
  local_10 = ExceptionList;
  uStack_44 = DAT_1001d02c ^ (uint)(local_30 + 0xb);
  local_14 = (undefined1 *)&uStack_44;
  ExceptionList = &local_10;
  local_18 = param_3;
  FUN_10001ed0(local_30);
  local_8 = 1;
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_1000a3d0(param_3,local_30);
    iter_swap<>(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0x18);
  }
  FUN_1000a50c();
  return;
}



/* ---- Catch_All@1000a4d5 @ 1000a4d5 size=2 ---- */

void Catch_All_1000a4d5(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_1000a3f0(*(void **)(unaff_EBP + -0x14));
  FUN_1000a4d7();
  return;
}



/* ---- FUN_1000a4d7 @ 1000a4d7 size=9 ---- */

void FUN_1000a4d7(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x18;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_1000a3f0(*(void **)(unaff_EBP + -0x14));
  FUN_1000a4d7();
  return;
}



/* ---- FUN_1000a4e0 @ 1000a4e0 size=31 ---- */

void FUN_1000a4e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_1000a3f0(*(void **)(unaff_EBP + -0x14));
  FUN_1000a4d7();
  return;
}



/* ---- FUN_1000a50c @ 1000a50c size=49 ---- */

undefined4 FUN_1000a50c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ~function<>((undefined4 *)(unaff_EBP + -0x2c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x30);
}



/* ---- FUN_1000a540 @ 1000a540 size=52 ---- */

void * __cdecl FUN_1000a540(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  while (param_1 != param_2) {
    param_2 = param_2 + -6;
    param_3 = (void *)((int)param_3 + -0x18);
    iter_swap<>(param_3,param_2);
  }
  return param_3;
}



/* ---- FUN_1000a580 @ 1000a580 size=103 ---- */

void FUN_1000a580(allocator<char> *param_1,allocator<char> *param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10016cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_10006790(param_3,param_1);
    param_3 = param_3 + 0x1c;
  }
  FUN_1000a61e();
  return;
}



/* ---- Catch_All@1000a5e7 @ 1000a5e7 size=2 ---- */

void Catch_All_1000a5e7(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_1000a5e9();
  return;
}



/* ---- FUN_1000a5e9 @ 1000a5e9 size=9 ---- */

void FUN_1000a5e9(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_1000a5e9();
  return;
}



/* ---- FUN_1000a5f2 @ 1000a5f2 size=31 ---- */

void FUN_1000a5f2(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + 0x10)) {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  FUN_10005e80(*(void **)(unaff_EBP + -0x14));
  FUN_1000a5e9();
  return;
}



/* ---- FUN_1000a61e @ 1000a61e size=28 ---- */

undefined4 FUN_1000a61e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x10);
}



/* ---- FUN_1000a640 @ 1000a640 size=125 ---- */

void __cdecl FUN_1000a640(undefined4 param_1,void *param_2)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017081;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_100010e0(0x18,param_1);
  local_8 = 0;
  if (this != (void *)0x0) {
    FUN_10009c40(this,param_2);
  }
  ExceptionList = local_10;
  return;
}



/* ---- FUN_1000a6c0 @ 1000a6c0 size=15 ---- */

void __cdecl FUN_1000a6c0(void *param_1)

{
  FUN_1000a6d0(param_1,0);
  return;
}



/* ---- FUN_1000a6d0 @ 1000a6d0 size=44 ---- */

undefined4 * __thiscall FUN_1000a6d0(void *this,uint param_1)

{
  ~function<>(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- iter_swap<> @ 1000a700 size=21 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::iter_swap<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *>(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *)
    void __cdecl std::iter_swap<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *>(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl iter_swap<>(void *param_1,undefined4 *param_2)

{
  swap<>(param_1,param_2);
  return;
}



/* ---- FUN_1000a720 @ 1000a720 size=13 ---- */

void __cdecl FUN_1000a720(int param_1)

{
  FUN_10003c90(param_1);
  return;
}



/* ---- swap<> @ 1000a730 size=17 ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::swap<struct Concurrency::details::_Task_impl<unsigned char> >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > &,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > &)
    void __cdecl std::swap<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState *> > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > &,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > &)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl swap<>(void *param_1,undefined4 *param_2)

{
  FUN_1000a750(param_1,param_2);
  return;
}



/* ---- FUN_1000a750 @ 1000a750 size=249 ---- */

void __thiscall FUN_1000a750(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 local_28 [6];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017048;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    cVar1 = FUN_1000a850();
    if (cVar1 == '\0') {
      FUN_10008c50(this,param_1);
      FUN_10009c40(local_28,this);
      local_8 = 0;
      FUN_10001f60(this,param_1);
      FUN_10001f60(param_1,local_28);
      local_8 = 0xffffffff;
      ~function<>(local_28);
    }
    else {
      FUN_10008c50(this,param_1);
      FUN_10009e60((undefined4 *)((int)this + 0xc),param_1 + 3);
      FUN_10009e60((undefined4 *)((int)this + 0x10),param_1 + 4);
      FUN_10009e60((undefined4 *)((int)this + 0x14),param_1 + 5);
    }
  }
  ExceptionList = local_10;
  return;
}



/* ---- FUN_1000a850 @ 1000a850 size=7 ---- */

undefined1 FUN_1000a850(void)

{
  return 1;
}



/* ---- Ordinal_14 @ 1000a858 size=6 ---- */

void Ordinal_14(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_14();
  return;
}



/* ---- FUN_1000a85e @ 1000a85e size=55 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_1000a85e(void)

{
  undefined1 local_54 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1000a86a;
  basic_string<>(local_2c,"string too long");
  local_8 = 0;
  FID_conflict_length_error(local_54,local_2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_1001a9a4);
}



/* ---- FUN_1000a896 @ 1000a896 size=55 ---- */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_1000a896(void)

{
  undefined1 local_54 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1000a8a2;
  basic_string<>(local_2c,"invalid string position");
  local_8 = 0;
  FID_conflict_length_error(local_54,local_2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_1001a968);
}



/* ---- __security_check_cookie @ 1000a8ce size=15 ---- */

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 != DAT_1001d02c) {
                    /* WARNING: Subroutine does not return */
    ___report_gsfailure();
  }
  return;
}



/* ---- FUN_1000a8dd @ 1000a8dd size=11 ---- */

void FUN_1000a8dd(void *param_1)

{
  _free(param_1);
  return;
}



/* ---- bad_alloc @ 1000a8e8 size=27 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_1001d004,1);
                    /* inlined constructor or destructor (approx location) for std::bad_alloc */
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_1000a903 @ 1000a903 size=100 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000a903(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  bad_alloc local_10;
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_1001e0cc & 1) == 0) {
    _DAT_1001e0cc = _DAT_1001e0cc | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_1001e0c0);
    _atexit(std::bad_alloc::~bad_alloc);
  }
  std::bad_alloc::bad_alloc(&local_10,(exception *)&DAT_1001e0c0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10,&DAT_1001a9dc);
}



/* ---- _memmove_s @ 1000a968 size=93 ---- */

/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_1000a9bf:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = __errno();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        _memmove(_Dst,_Src,_MaxCount);
        goto LAB_1000a9bf;
      }
      piVar1 = __errno();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar2;
}



/* ---- exception @ 1000a9c5 size=17 ---- */

void __thiscall std::exception::exception(exception *this)

{
  (this->exception_data).offset_0x0 = (char *)0x0;
  (this->exception_data).offset_0x4 = 0;
  this->vftablePtr = &vftable;
  return;
}



/* ---- exception @ 1000a9d6 size=83 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  this->vftablePtr = &vftable;
  if (*param_1 == (char *)0x0) {
    (this->exception_data).offset_0x0 = (char *)0x0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    (this->exception_data).offset_0x0 = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  (this->exception_data).offset_0x4 = 1;
  return this;
}



/* ---- exception @ 1000aa29 size=29 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  this->vftablePtr = &vftable;
  pcVar1 = *param_1;
  (this->exception_data).offset_0x4 = 0;
  (this->exception_data).offset_0x0 = pcVar1;
  return;
}



/* ---- exception @ 1000aa46 size=93 ---- */

/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  this->vftablePtr = &vftable;
  iVar1 = *(int *)(param_1 + 8);
  (this->exception_data).offset_0x4 = iVar1;
  pcVar3 = *(char **)(param_1 + 4);
  if (iVar1 == 0) {
    (this->exception_data).offset_0x0 = pcVar3;
  }
  else if (pcVar3 == (char *)0x0) {
    (this->exception_data).offset_0x0 = (char *)0x0;
  }
  else {
    sVar2 = _strlen(pcVar3);
    pcVar3 = _malloc(sVar2 + 1);
    (this->exception_data).offset_0x0 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _strcpy_s(pcVar3,sVar2 + 1,*(char **)(param_1 + 4));
    }
  }
  return this;
}



/* ---- ~exception @ 1000aaa3 size=22 ---- */

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall std::exception::~exception(exception *this)

{
  int iVar1;
  
  iVar1 = (this->exception_data).offset_0x4;
  this->vftablePtr = &vftable;
  if (iVar1 != 0) {
    _free((this->exception_data).offset_0x0);
  }
  return;
}



/* ---- vfunction2 @ 1000aab9 size=13 ---- */

/* std::exception member function inherited by std::bad_exception
   std::exception member function inherited by std::bad_alloc */

char * __thiscall std::exception::vfunction2(exception *this)

{
  char *pcVar1;
  
  pcVar1 = (this->exception_data).offset_0x0;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}



/* ---- scalar_deleting_destructor @ 1000aac6 size=33 ---- */

exception * __thiscall std::exception::scalar_deleting_destructor(exception *this,byte param_1)

{
  ~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return (exception *)this;
}



/* ---- xtoa_s @ 1000aae7 size=221 ---- */

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2008 Release
   __stdcall xtoa_s,20 */

int xtoa_s(uint param_1,uint param_2,int param_3)

{
  char *pcVar1;
  uint in_EAX;
  int *piVar2;
  char *in_ECX;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_1000ab1b:
    piVar2 = __errno();
    iVar6 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_1000ab1b;
      pcVar5 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar5 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar1 = pcVar5;
      do {
        pcVar3 = pcVar1;
        cVar4 = (char)(in_EAX % param_2);
        if (in_EAX % param_2 < 10) {
          cVar4 = cVar4 + '0';
        }
        else {
          cVar4 = cVar4 + 'W';
        }
        *pcVar3 = cVar4;
        local_8 = local_8 + 1;
      } while ((in_EAX / param_2 != 0) &&
              (in_EAX = in_EAX / param_2, pcVar1 = pcVar3 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar3[1] = '\0';
        do {
          cVar4 = *pcVar3;
          *pcVar3 = *pcVar5;
          pcVar3 = pcVar3 + -1;
          *pcVar5 = cVar4;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < pcVar3);
        return 0;
      }
      *in_ECX = '\0';
    }
    piVar2 = __errno();
    iVar6 = 0x22;
  }
  *piVar2 = iVar6;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return iVar6;
}



/* ---- __itoa_s @ 1000abc4 size=42 ---- */

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = xtoa_s(_Size,_Radix,iVar1);
  return iVar1;
}



/* ---- _strlen @ 1000abf0 size=139 ---- */

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  if (((uint)_Str & 3) != 0) {
    do {
      uVar1 = *puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      if ((char)uVar1 == '\0') goto LAB_1000ac53;
    } while (((uint)puVar2 & 3) != 0);
  }
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
LAB_1000ac53:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
}



/* ---- FUN_1000ac7b @ 1000ac7b size=15 ---- */

void __cdecl FUN_1000ac7b(undefined4 param_1)

{
  DAT_1001e0d0 = param_1;
  return;
}



/* ---- __invoke_watson @ 1000ac8a size=296 ---- */

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4 [39];
  
  uVar1 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  local_32c.ExceptionCode = 0;
  _memset(&local_32c.ExceptionFlags,0,0x4c);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)local_2d4;
  local_2d4[0] = 0x10001;
  local_32c.ExceptionCode = 0xc0000417;
  local_32c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1000c215();
  }
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(uVar1 ^ (int)register0x00000010 - 4U);
  return;
}



/* ---- __invalid_parameter @ 1000adb2 size=38 ---- */

/* Library Function - Single Match
    __invalid_parameter
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                   uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__decode_pointer(DAT_1001e0d0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_1000c215();
                    /* WARNING: Subroutine does not return */
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x1000adc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- FUN_1000add8 @ 1000add8 size=16 ---- */

void FUN_1000add8(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}



/* ---- _printf @ 1000ade8 size=156 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _printf
   
   Library: Visual Studio 2008 Release */

int __cdecl _printf(char *_Format,...)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  int _Flag;
  char cStack00000008;
  _locale_t _Locale;
  va_list _ArgList;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    ppuVar3 = FUN_1000c828();
    __lock_file2(1,ppuVar3 + 8);
    ppuVar3 = FUN_1000c828();
    _Flag = __stbuf((FILE *)(ppuVar3 + 8));
    _ArgList = &cStack00000008;
    _Locale = (_locale_t)0x0;
    ppuVar3 = FUN_1000c828();
    iVar2 = __output_l((FILE *)(ppuVar3 + 8),_Format,_Locale,_ArgList);
    ppuVar3 = FUN_1000c828();
    __ftbuf(_Flag,(FILE *)(ppuVar3 + 8));
    FUN_1000ae84();
  }
  return iVar2;
}



/* ---- FUN_1000ae84 @ 1000ae84 size=19 ---- */

void FUN_1000ae84(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_1000c828();
  __unlock_file2(1,ppuVar1 + 8);
  return;
}



/* ---- __get_printf_count_output @ 1000ae97 size=22 ---- */

/* Library Function - Single Match
    __get_printf_count_output
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_1001e0d4 == (DAT_1001d02c | 1));
}



/* ---- _memset @ 1000aeb0 size=122 ---- */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *extraout_EAX;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_1001ecd8 != 0)) {
    __VEC_memzero(_Dst,_Val,_Size);
    return extraout_EAX;
  }
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(char *)puVar4 = (char)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* ---- __purecall @ 1000af2a size=42 ---- */

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2008 Release */

void __thiscall __purecall(void *this)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_1001e754);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- _memcpy_s @ 1000af54 size=125 ---- */

/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
LAB_1000af64:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1000af6d:
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        _memcpy(_Dst,_Src,_MaxCount);
        goto LAB_1000af64;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1000af6d;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar1;
}



/* ---- ~type_info @ 1000afd1 size=16 ---- */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  this->vftablePtr = &vftable;
  _Type_info_dtor((type_info *)this);
  return;
}



/* ---- scalar_deleting_destructor @ 1000afe1 size=33 ---- */

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void * __thiscall type_info::scalar_deleting_destructor(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return this;
}



/* ---- operator== @ 1000b002 size=32 ---- */

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2008 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)((int)&this[1].vftablePtr + 1));
  return (bool)('\x01' - (iVar1 != 0));
}



/* ---- _atol @ 1000b022 size=22 ---- */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2008 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}



/* ---- FUN_1000b038 @ 1000b038 size=11 ---- */

void __cdecl FUN_1000b038(char *param_1)

{
  _atol(param_1);
  return;
}



/* ---- _LocaleUpdate @ 1000b043 size=135 ---- */

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2008 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_1001db18) && ((p_Var2->_ownlocale & DAT_1001da34) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1001d938) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1001da34) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}



/* ---- __toupper_l @ 1000b0ca size=278 ---- */

/* Library Function - Single Match
    __toupper_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __toupper_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2) & 2;
    }
    else {
      uVar2 = __isctype_l(_C,2,&local_1c);
    }
    if (uVar2 == 0) {
LAB_1000b129:
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].refcount + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x200,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_1000b129;
    uVar2 = (uint)local_c;
    if (iVar3 != 1) {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}



/* ---- _toupper @ 1000b1e0 size=44 ---- */

/* Library Function - Single Match
    _toupper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_1001e77c == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}



/* ---- __CRT_INIT@12 @ 1000b20c size=309 ---- */

/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2008 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  _ptiddata _Ptd;
  code *pcVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  if (param_2 == 1) {
    iVar1 = __heap_init();
    if (iVar1 != 0) {
      iVar1 = __mtinit();
      if (iVar1 != 0) {
        __RTC_Initialize();
        DAT_1001fce8 = GetCommandLineA();
        DAT_1001e0dc = ___crtGetEnvironmentStringsA();
        iVar1 = __ioinit();
        if (-1 < iVar1) {
          iVar1 = __setargv();
          if (((-1 < iVar1) && (iVar1 = __setenvp(), -1 < iVar1)) &&
             (iVar1 = __cinit(0), iVar1 == 0)) {
            DAT_1001e0d8 = DAT_1001e0d8 + 1;
            return 1;
          }
          __ioterm();
        }
        __mtterm();
      }
      __heap_term();
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_1001e0d8) {
      DAT_1001e0d8 = DAT_1001e0d8 + -1;
      if (DAT_1001e7d4 == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        __freeptd((_ptiddata)0x0);
        return 1;
      }
      return 1;
    }
    ___set_flsgetvalue();
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_1001d1b0;
      p_Var5 = _Ptd;
      pcVar2 = (code *)__decode_pointer(DAT_1001e420);
      iVar1 = (*pcVar2)(uVar4,p_Var5);
      if (iVar1 != 0) {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
        return 1;
      }
      _free(_Ptd);
    }
  }
  return 0;
}



/* ---- ___DllMainCRTStartup @ 1000b341 size=226 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

BOOL __fastcall ___DllMainCRTStartup(int param_1,int param_2,HMODULE param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_1001e0d8 == 0)) {
LAB_1000b42f:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (PTR_100182bc != (undefined *)0x0) {
        local_20 = (*(code *)PTR_100182bc)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1000b42f;
    }
    local_20 = FUN_100163d0(param_3,param_2);
    if ((param_2 == 1) && (local_20 == 0)) {
      FUN_100163d0(param_3,0);
      __CRT_INIT_12(param_3,0,param_1);
      if (PTR_100182bc != (undefined *)0x0) {
        (*(code *)PTR_100182bc)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (PTR_100182bc != (undefined *)0x0)) {
        local_20 = (*(code *)PTR_100182bc)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}



/* ---- entry @ 1000b437 size=35 ---- */

void entry(HMODULE param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}



/* ---- __CxxThrowException@8 @ 1000b45a size=76 ---- */

/* Library Function - Single Match
    __CxxThrowException@8
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_100182c0;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



/* ---- _JumpToContinuation @ 1000b4a6 size=45 ---- */

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000b4d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}



/* ---- FID_conflict:_CallMemberFunction1 @ 1000b4d8 size=7 ---- */

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(void *param_1,void *param_2,void *param_3,int param_4)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1000b4dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}



/* ---- _UnwindNestedFrames @ 1000b4df size=84 ---- */

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2008 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000b50a,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ---- FID_conflict:___CxxFrameHandler3 @ 1000b533 size=54 ---- */

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}



/* ---- CatchGuardHandler @ 1000b569 size=51 ---- */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(struct EHExceptionRecord *,struct
   CatchGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  _Var1 = ___InternalCxxFrameHandler
                    (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
                     *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
                     (EHRegistrationNode *)param_2,'\0');
  return _Var1;
}



/* ---- _CallSETranslator @ 1000b59c size=215 ---- */

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  undefined4 local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_c = (undefined1 *)((int)register0x00000010 + -4);
  local_10 = (undefined1 *)((int)register0x00000010 + -0x40);
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x1000b647;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1001d02c ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}



/* ---- TranslatorGuardHandler @ 1000b673 size=154 ---- */

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1000b70a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}



/* ---- _GetRangeOfTrysToCheck @ 1000b712 size=117 ---- */

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2008 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}



/* ---- __CreateFrameInfo @ 1000b787 size=44 ---- */

/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}



/* ---- __IsExceptionObjectToBeDestroyed @ 1000b7b3 size=39 ---- */

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}



/* ---- __FindAndUnlinkFrame @ 1000b7da size=82 ---- */

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2008 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  _ptiddata p_Var1;
  void *pvVar2;
  
  p_Var1 = __getptd();
  if (param_1 == p_Var1->_pFrameInfoChain) {
    p_Var1 = __getptd();
    p_Var1->_pFrameInfoChain = *(void **)((int)param_1 + 4);
  }
  else {
    p_Var1 = __getptd();
    pvVar2 = p_Var1->_pFrameInfoChain;
    while( true ) {
      if (*(int *)((int)pvVar2 + 4) == 0) {
        _inconsistency();
        return;
      }
      if (param_1 == *(void **)((int)pvVar2 + 4)) break;
      pvVar2 = *(void **)((int)pvVar2 + 4);
    }
    *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)((int)param_1 + 4);
  }
  return;
}



/* ---- _CallCatchBlock2 @ 1000b82c size=96 ---- */

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  code *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_1001d02c ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = CatchGuardHandler;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}



/* ---- __EH_prolog3 @ 1000b88c size=51 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001d02c ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __EH_prolog3_catch @ 1000b8bf size=54 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001d02c ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- ___report_gsfailure @ 1000b8f5 size=262 ---- */

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
  
  _DAT_1001e208 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)(local_324 + 800),0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&local_res0 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(local_324 + 800 < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1001e20c = &uStack00000004;
  _DAT_1001e148 = 0x10001;
  _DAT_1001e0f0 = 0xc0000409;
  _DAT_1001e0f4 = 1;
  local_32c = DAT_1001d02c;
  local_328 = DAT_1001d030;
  _DAT_1001e0fc = _local_res0;
  _DAT_1001e1d4 = in_GS;
  _DAT_1001e1d8 = in_FS;
  _DAT_1001e1dc = in_ES;
  _DAT_1001e1e0 = in_DS;
  _DAT_1001e1e4 = unaff_EDI;
  _DAT_1001e1e8 = unaff_ESI;
  _DAT_1001e1ec = unaff_EBX;
  _DAT_1001e1f0 = in_EDX;
  _DAT_1001e1f4 = in_ECX;
  _DAT_1001e1f8 = in_EAX;
  _DAT_1001e1fc = unaff_EBP;
  DAT_1001e200 = _local_res0;
  _DAT_1001e204 = in_CS;
  _DAT_1001e210 = in_SS;
  DAT_1001e140 = IsDebuggerPresent();
  FUN_1000c215();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_100182e0);
  if (DAT_1001e140 == 0) {
    FUN_1000c215();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



/* ---- _free @ 1000b9fb size=133 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2008 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (_Memory != (void *)0x0) {
    if (DAT_1001eb9c == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1000ba51();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_1001e8ec,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = __errno();
      DVar4 = GetLastError();
      iVar5 = __get_errno_from_oserr(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}



/* ---- FUN_1000ba51 @ 1000ba51 size=9 ---- */

void FUN_1000ba51(void)

{
  FUN_1001103e(4);
  return;
}



/* ---- __onexit_nolock @ 1000ba89 size=186 ---- */

/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __onexit_nolock(int param_1)

{
  int *_Memory;
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  
  _Memory = (int *)__decode_pointer(DAT_1001ecc8);
  piVar1 = (int *)__decode_pointer(DAT_1001ecc4);
  if ((piVar1 < _Memory) || (iVar5 = (int)piVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return 0;
  }
  sVar2 = __msize(_Memory);
  if (sVar2 < iVar5 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = __realloc_crt(_Memory,sVar3 + sVar2), pvVar4 == (void *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return 0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
    }
    piVar1 = (int *)((int)pvVar4 + (iVar5 >> 2) * 4);
    DAT_1001ecc8 = __encode_pointer((int)pvVar4);
  }
  iVar5 = __encode_pointer(param_1);
  *piVar1 = iVar5;
  DAT_1001ecc4 = __encode_pointer((int)(piVar1 + 1));
  return param_1;
}



/* ---- __onexit @ 1000bb74 size=54 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1000f573();
  p_Var1 = (_onexit_t)__onexit_nolock((int)_Func);
  FUN_1000bbaa();
  return p_Var1;
}



/* ---- FUN_1000bbaa @ 1000bbaa size=6 ---- */

void FUN_1000bbaa(void)

{
  FUN_1000f57c();
  return;
}



/* ---- _atexit @ 1000bbb0 size=23 ---- */

/* Library Function - Single Match
    _atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



/* ---- _V6_HeapAlloc @ 1000bbc7 size=70 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2008 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  int *local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_1001eb8c) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_1000bc0d();
  }
  return local_20;
}



/* ---- FUN_1000bc0d @ 1000bc0d size=9 ---- */

void FUN_1000bc0d(void)

{
  FUN_1001103e(4);
  return;
}



/* ---- _malloc @ 1000bc16 size=202 ---- */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _malloc(size_t _Size)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_1001e8ec == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      if (DAT_1001eb9c == 1) {
        if (_Size == 0) {
          sVar1 = 1;
        }
        else {
          sVar1 = _Size;
        }
LAB_1000bc85:
        piVar2 = HeapAlloc(DAT_1001e8ec,0,sVar1);
      }
      else if ((DAT_1001eb9c != 3) || (piVar2 = _V6_HeapAlloc((uint *)_Size), piVar2 == (int *)0x0))
      {
        sVar1 = _Size;
        if (_Size == 0) {
          sVar1 = 1;
        }
        sVar1 = sVar1 + 0xf & 0xfffffff0;
        goto LAB_1000bc85;
      }
      if (piVar2 != (int *)0x0) goto LAB_1000bcdd;
      if (DAT_1001ea4c == 0) {
        piVar4 = __errno();
        *piVar4 = 0xc;
        break;
      }
      iVar3 = __callnewh(_Size);
    } while (iVar3 != 0);
    piVar4 = __errno();
    *piVar4 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar2 = __errno();
    *piVar2 = 0xc;
    piVar2 = (int *)0x0;
  }
LAB_1000bcdd:
  return piVar2;
}



/* ---- FUN_1000bce0 @ 1000bce0 size=15 ---- */

void __cdecl FUN_1000bce0(undefined4 param_1)

{
  DAT_1001e414 = param_1;
  return;
}



/* ---- __callnewh @ 1000bcef size=40 ---- */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2008 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)__decode_pointer(DAT_1001e414);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ---- _memmove @ 1000bd20 size=711 ---- */

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *extraout_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_1000bf03_caseD_2;
        case 3:
          goto switchD_1000bf03_caseD_3;
        }
        goto switchD_1000bf03_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000bf03_caseD_0;
      case 1:
        goto switchD_1000bf03_caseD_1;
      case 2:
        goto switchD_1000bf03_caseD_2;
      case 3:
        goto switchD_1000bf03_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000bf03_caseD_2;
            case 3:
              goto switchD_1000bf03_caseD_3;
            }
            goto switchD_1000bf03_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000bf03_caseD_2;
            case 3:
              goto switchD_1000bf03_caseD_3;
            }
            goto switchD_1000bf03_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000bf03_caseD_2;
            case 3:
              goto switchD_1000bf03_caseD_3;
            }
            goto switchD_1000bf03_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1000bf03_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_1000bf03_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_1000bf03_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_1000bf03_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1001ecd8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    __VEC_memcpy(_Dst,_Src,_Size);
    return extraout_EAX;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_1000bd7c_caseD_2;
      case 3:
        goto switchD_1000bd7c_caseD_3;
      }
      goto switchD_1000bd7c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000bd7c_caseD_0;
    case 1:
      goto switchD_1000bd7c_caseD_1;
    case 2:
      goto switchD_1000bd7c_caseD_2;
    case 3:
      goto switchD_1000bd7c_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1000bd7c_caseD_2;
          case 3:
            goto switchD_1000bd7c_caseD_3;
          }
          goto switchD_1000bd7c_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1000bd7c_caseD_2;
          case 3:
            goto switchD_1000bd7c_caseD_3;
          }
          goto switchD_1000bd7c_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1000bd7c_caseD_2;
          case 3:
            goto switchD_1000bd7c_caseD_3;
          }
          goto switchD_1000bd7c_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1000bd7c_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000bd7c_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000bd7c_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000bd7c_caseD_0:
  return _Dst;
}



/* ---- __get_errno_from_oserr @ 1000c085 size=66 ---- */

/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2008 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1001d040)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1001d044);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}



/* ---- __errno @ 1000c0c7 size=19 ---- */

/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2008 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_1001d1a8;
  }
  return &p_Var1->_terrno;
}



/* ---- ___doserrno @ 1000c0da size=19 ---- */

/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2008 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_1001d1ac;
  }
  return &p_Var1->_tdoserrno;
}



/* ---- __dosmaperr @ 1000c0ed size=35 ---- */

/* Library Function - Single Match
    __dosmaperr
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}



/* ---- _strcpy_s @ 1000c110 size=104 ---- */

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar3 = _Dst;
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      eVar4 = 0x22;
      *piVar2 = 0x22;
      goto LAB_1000c132;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_1000c132:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- __aulldvrm @ 1000c180 size=149 ---- */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2008 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    uVar8 = param_1;
    uVar6 = param_4;
    uVar7 = param_2;
    uVar4 = param_3;
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar7 & 1;
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)(CONCAT14(uVar3 != 0,uVar8) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT44(uVar7,uVar8) / (ulonglong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar4 + iVar5 * param_4;
    if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  return CONCAT44(uVar4,iVar5);
}



/* ---- FUN_1000c215 @ 1000c215 size=8 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c215(void)

{
  _DAT_1001fce4 = 0;
  return;
}



/* ---- __encode_pointer @ 1000c21d size=114 ---- */

/* Library Function - Single Match
    __encode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __encode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001d1b4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001d1b0 != -1)) {
    iVar3 = DAT_1001d1b0;
    pcVar2 = TlsGetValue(DAT_1001d1b4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1000c27d;
    }
  }
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL"), hModule == (HMODULE)0x0))
  {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1000c27d:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- __encoded_null @ 1000c28f size=9 ---- */

/* Library Function - Single Match
    __encoded_null
   
   Library: Visual Studio 2008 Release */

void __encoded_null(void)

{
  __encode_pointer(0);
  return;
}



/* ---- __decode_pointer @ 1000c298 size=114 ---- */

/* Library Function - Single Match
    __decode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __decode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1001d1b4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1001d1b0 != -1)) {
    iVar3 = DAT_1001d1b0;
    pcVar2 = TlsGetValue(DAT_1001d1b4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1000c2f8;
    }
  }
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL"), hModule == (HMODULE)0x0))
  {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_1000c2f8:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}



/* ---- ___set_flsgetvalue @ 1000c313 size=52 ---- */

/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2008 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1001d1b4);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)__decode_pointer(DAT_1001e41c);
    TlsSetValue(DAT_1001d1b4,lpTlsValue);
  }
  return lpTlsValue;
}



/* ---- __mtterm @ 1000c347 size=61 ---- */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1001d1b0 != -1) {
    iVar2 = DAT_1001d1b0;
    pcVar1 = (code *)__decode_pointer(DAT_1001e424);
    (*pcVar1)(iVar2);
    DAT_1001d1b0 = -1;
  }
  if (DAT_1001d1b4 != 0xffffffff) {
    TlsFree(DAT_1001d1b4);
    DAT_1001d1b4 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}



/* ---- __initptd @ 1000c384 size=207 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  _Ptd->_pxcptacttab = &DAT_10018a38;
  _Ptd->_holdrand = 1;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"EncodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1d) = pFVar1;
    pFVar1 = GetProcAddress(hModule,"DecodePointer");
    *(FARPROC *)((_Ptd->_setloc_data)._cacheout + 0x1f) = pFVar1;
  }
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_1001d510;
  __lock(0xd);
  InterlockedIncrement(&_Ptd->ptmbcinfo->refcount);
  FUN_1000c459();
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_1001db18;
  }
  ___addlocaleref(&_Ptd->ptlocinfo->refcount);
  FUN_1000c462();
  return;
}



/* ---- FUN_1000c459 @ 1000c459 size=9 ---- */

void FUN_1000c459(void)

{
  FUN_1001103e(0xd);
  return;
}



/* ---- FUN_1000c462 @ 1000c462 size=9 ---- */

void FUN_1000c462(void)

{
  FUN_1001103e(0xc);
  return;
}



/* ---- __getptd_noexit @ 1000c46b size=121 ---- */

/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1001d1b0;
  pcVar1 = ___set_flsgetvalue();
  _Ptd = (_ptiddata)(*pcVar1)(uVar4);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_1001d1b0;
      p_Var5 = _Ptd;
      pcVar1 = (code *)__decode_pointer(DAT_1001e420);
      iVar2 = (*pcVar1)(uVar4,p_Var5);
      if (iVar2 == 0) {
        _free(_Ptd);
        _Ptd = (_ptiddata)0x0;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}



/* ---- __getptd @ 1000c4e4 size=26 ---- */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2008 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}



/* ---- __freefls@4 @ 1000c4fe size=279 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2008 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x40));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_10018a38) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_1001d510)) {
        _free(pLVar1);
      }
    }
    FUN_1000c618();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_1001db18) && (pLVar1 != (LONG *)&DAT_1001da40)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_1000c624();
    _free(param_1);
  }
  return;
}



/* ---- FUN_1000c618 @ 1000c618 size=9 ---- */

void FUN_1000c618(void)

{
  FUN_1001103e(0xd);
  return;
}



/* ---- FUN_1000c624 @ 1000c624 size=9 ---- */

void FUN_1000c624(void)

{
  FUN_1001103e(0xc);
  return;
}



/* ---- __freeptd @ 1000c62d size=110 ---- */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2008 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1001d1b0 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1001d1b4), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1001d1b0;
      pcVar2 = TlsGetValue(DAT_1001d1b4);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1001d1b0;
    pcVar2 = (code *)__decode_pointer(DAT_1001e420);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1001d1b4 != 0xffffffff) {
    TlsSetValue(DAT_1001d1b4,(LPVOID)0x0);
  }
  return;
}



/* ---- __mtinit @ 1000c69b size=397 ---- */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  if (hModule != (HMODULE)0x0) {
    DAT_1001e418 = GetProcAddress(hModule,"FlsAlloc");
    DAT_1001e41c = GetProcAddress(hModule,"FlsGetValue");
    DAT_1001e420 = GetProcAddress(hModule,"FlsSetValue");
    DAT_1001e424 = GetProcAddress(hModule,"FlsFree");
    if ((((DAT_1001e418 == (FARPROC)0x0) || (DAT_1001e41c == (FARPROC)0x0)) ||
        (DAT_1001e420 == (FARPROC)0x0)) || (DAT_1001e424 == (FARPROC)0x0)) {
      DAT_1001e41c = TlsGetValue_exref;
      DAT_1001e418 = (FARPROC)&LAB_1000c30a;
      DAT_1001e420 = TlsSetValue_exref;
      DAT_1001e424 = TlsFree_exref;
    }
    DAT_1001d1b4 = TlsAlloc();
    if (DAT_1001d1b4 == 0xffffffff) {
      return 0;
    }
    BVar1 = TlsSetValue(DAT_1001d1b4,DAT_1001e41c);
    if (BVar1 == 0) {
      return 0;
    }
    __init_pointers();
    DAT_1001e418 = (FARPROC)__encode_pointer((int)DAT_1001e418);
    DAT_1001e41c = (FARPROC)__encode_pointer((int)DAT_1001e41c);
    DAT_1001e420 = (FARPROC)__encode_pointer((int)DAT_1001e420);
    DAT_1001e424 = (FARPROC)__encode_pointer((int)DAT_1001e424);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = (code *)__decode_pointer((int)DAT_1001e418);
      DAT_1001d1b0 = (*pcVar3)(pcVar5);
      if ((DAT_1001d1b0 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        iVar2 = DAT_1001d1b0;
        p_Var6 = _Ptd;
        pcVar3 = (code *)__decode_pointer((int)DAT_1001e420);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
  }
  __mtterm();
  return 0;
}



/* ---- FUN_1000c828 @ 1000c828 size=6 ---- */

undefined ** FUN_1000c828(void)

{
  return &PTR_DAT_1001d1b8;
}



/* ---- __lock_file @ 1000c8ff size=65 ---- */

/* Library Function - Single Match
    __lock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_1001d1b8) || ((FILE *)&DAT_1001d418 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)&_File[-0x800e8e]._base >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}



/* ---- __lock_file2 @ 1000c940 size=50 ---- */

/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ---- __unlock_file @ 1000c972 size=60 ---- */

/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)((int)&DAT_1001d1b4 + 3U) < _File) && (_File < (FILE *)0x1001d419)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_1001103e(((int)&_File[-0x800e8e]._base >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ---- __unlock_file2 @ 1000c9ae size=47 ---- */

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2008 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_1001103e(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ---- __stbuf @ 1000c9dd size=156 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  ppuVar4 = FUN_1000c828();
  if (_File == (FILE *)(ppuVar4 + 8)) {
    iVar3 = 0;
  }
  else {
    ppuVar4 = FUN_1000c828();
    if (_File != (FILE *)(ppuVar4 + 0x10)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_1001e428 = _DAT_1001e428 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_1001e42c + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_1000ca66;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_1000ca66:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}



/* ---- __ftbuf @ 1000ca79 size=52 ---- */

/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}



/* ---- write_char @ 1000caad size=51 ---- */

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}



/* ---- write_multi_char @ 1000cae0 size=38 ---- */

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2008 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}



/* ---- write_string @ 1000cb06 size=77 ---- */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2008 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        piVar1 = __errno();
        if (*piVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}



/* ---- __output_l @ 1000cb53 size=2935 ---- */

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __output_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  errno_t eVar7;
  int iVar8;
  undefined *puVar9;
  int extraout_ECX;
  byte *pbVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  undefined1 *local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  FILE *local_250;
  int local_24c;
  wchar_t *local_248;
  int local_244;
  byte *local_240;
  int local_23c;
  int local_238;
  int local_234;
  undefined1 local_230;
  char local_22f;
  int local_22c;
  wchar_t *local_228;
  undefined1 *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)((int)local_210 + 0x20cU);
  local_250 = _File;
  local_228 = (wchar_t *)_ArgList;
  local_24c = 0;
  local_214 = 0;
  local_238 = 0;
  local_21c = 0;
  local_234 = 0;
  local_244 = 0;
  local_23c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,_Locale);
  if (_File != (FILE *)0x0) {
    if ((_File->_flag & 0x40) == 0) {
      uVar4 = __fileno(_File);
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_1001db38;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_1001ebc0)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x7f) == 0) {
        if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
          puVar9 = &DAT_1001db38;
        }
        else {
          puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_1001ebc0)[(int)uVar4 >> 5]);
        }
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_1000cc57;
      }
    }
    else {
LAB_1000cc57:
      if (_Format != (char *)0x0) {
        local_215 = *_Format;
        local_22c = 0;
        local_224 = (undefined1 *)0x0;
        local_248 = (wchar_t *)0x0;
        iVar8 = 0;
        if (local_215 != 0) {
          while( true ) {
            pbVar10 = (byte *)(_Format + 1);
            local_240 = pbVar10;
            if (local_22c < 0) break;
            if ((byte)(local_215 - 0x20) < 0x59) {
              uVar4 = (int)"FlsAlloc"[(char)local_215 + 4] & 0xf;
            }
            else {
              uVar4 = 0;
            }
            local_270 = (int)(char)(&DAT_10018368)[uVar4 * 8 + iVar8] >> 4;
            switch(local_270) {
            case 0:
switchD_1000ccd0_caseD_0:
              local_23c = 0;
              iVar8 = __isleadbyte_l((uint)local_215,&local_260);
              if (iVar8 != 0) {
                write_char();
                local_240 = (byte *)(_Format + 2);
                if (*pbVar10 == 0) goto LAB_1000cbbe;
              }
              write_char();
              break;
            case 1:
              local_21c = -1;
              local_274 = 0;
              local_244 = 0;
              local_238 = 0;
              local_234 = 0;
              local_214 = 0;
              local_23c = 0;
              break;
            case 2:
              if (local_215 == 0x20) {
                local_214 = local_214 | 2;
              }
              else if (local_215 == 0x23) {
                local_214 = local_214 | 0x80;
              }
              else if (local_215 == 0x2b) {
                local_214 = local_214 | 1;
              }
              else if (local_215 == 0x2d) {
                local_214 = local_214 | 4;
              }
              else if (local_215 == 0x30) {
                local_214 = local_214 | 8;
              }
              break;
            case 3:
              if (local_215 == 0x2a) {
                local_228 = (wchar_t *)((int)_ArgList + 4);
                local_238 = *(int *)_ArgList;
                if (local_238 < 0) {
                  local_214 = local_214 | 4;
                  local_238 = -local_238;
                }
              }
              else {
                local_238 = local_238 * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 4:
              local_21c = 0;
              break;
            case 5:
              if (local_215 == 0x2a) {
                local_228 = (wchar_t *)((int)_ArgList + 4);
                local_21c = *(int *)_ArgList;
                if (local_21c < 0) {
                  local_21c = -1;
                }
              }
              else {
                local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 6:
              if (local_215 == 0x49) {
                bVar1 = *pbVar10;
                if ((bVar1 == 0x36) && (_Format[2] == 0x34)) {
                  local_214 = local_214 | 0x8000;
                  local_240 = (byte *)(_Format + 3);
                }
                else if ((bVar1 == 0x33) && (_Format[2] == 0x32)) {
                  local_214 = local_214 & 0xffff7fff;
                  local_240 = (byte *)(_Format + 3);
                }
                else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                         ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                  local_270 = 0;
                  goto switchD_1000ccd0_caseD_0;
                }
              }
              else if (local_215 == 0x68) {
                local_214 = local_214 | 0x20;
              }
              else if (local_215 == 0x6c) {
                if (*pbVar10 == 0x6c) {
                  local_214 = local_214 | 0x1000;
                  local_240 = (byte *)(_Format + 2);
                }
                else {
                  local_214 = local_214 | 0x10;
                }
              }
              else if (local_215 == 0x77) {
                local_214 = local_214 | 0x800;
              }
              break;
            case 7:
              if ((char)local_215 < 'e') {
                if (local_215 == 100) {
LAB_1000d1bb:
                  local_214 = local_214 | 0x40;
LAB_1000d1c2:
                  local_224 = (undefined1 *)0xa;
                  goto LAB_1000d1cc;
                }
                if ((char)local_215 < 'T') {
                  if (local_215 == 0x53) {
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
                    goto LAB_1000cfe7;
                  }
                  if (local_215 != 0x41) {
                    if (local_215 == 0x43) {
                      if ((local_214 & 0x830) == 0) {
                        local_214 = local_214 | 0x800;
                      }
                      goto LAB_1000d05a;
                    }
                    if ((local_215 != 0x45) && (local_215 != 0x47)) goto LAB_1000d4f8;
                  }
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_1000cf79:
                  local_214 = local_214 | 0x40;
                  local_264 = (undefined1 *)0x200;
                  pwVar11 = local_210;
                  puVar13 = local_264;
                  pwVar17 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      puVar13 = (undefined1 *)(local_21c + 0x15d);
                      local_220 = local_210;
                      local_248 = __malloc_crt((size_t)puVar13);
                      pwVar11 = local_248;
                      pwVar17 = local_248;
                      if (local_248 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar11 = local_210;
                        puVar13 = local_264;
                        pwVar17 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar17;
                  local_264 = puVar13;
                  local_27c = *(undefined4 *)_ArgList;
                  local_228 = (wchar_t *)((int)_ArgList + 8);
                  local_278 = *(undefined4 *)((int)_ArgList + 4);
                  plVar19 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar16 = &local_27c;
                  pwVar17 = pwVar11;
                  puVar13 = local_264;
                  iVar8 = local_21c;
                  uVar18 = local_274;
                  pcVar6 = (code *)__decode_pointer((int)PTR_LAB_1001dce8);
                  (*pcVar6)(puVar16,pwVar17,puVar13,iVar5,iVar8,uVar18,plVar19);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar11;
                    pcVar6 = (code *)__decode_pointer((int)PTR_LAB_1001dcf4);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar19 = &local_260;
                    pwVar17 = pwVar11;
                    pcVar6 = (code *)__decode_pointer((int)PTR_LAB_1001dcf0);
                    (*pcVar6)(pwVar17,plVar19);
                  }
                  if ((char)*pwVar11 == '-') {
                    local_214 = local_214 | 0x100;
                    pwVar11 = (wchar_t *)((int)pwVar11 + 1);
                    local_220 = pwVar11;
                  }
                }
                else {
                  if (local_215 == 0x58) goto LAB_1000d320;
                  if (local_215 != 0x5a) {
                    if (local_215 == 0x61) goto LAB_1000cf79;
                    if (local_215 != 99) goto LAB_1000d4f8;
LAB_1000d05a:
                    local_228 = (wchar_t *)((int)_ArgList + 4);
                    if ((local_214 & 0x810) == 0) {
                      local_210[0]._0_1_ = (char)*(wchar_t *)_ArgList;
                      local_224 = (undefined1 *)0x1;
                    }
                    else {
                      eVar7 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,
                                        *(wchar_t *)_ArgList);
                      if (eVar7 != 0) {
                        local_244 = 1;
                      }
                    }
                    local_220 = local_210;
                    goto LAB_1000d4f8;
                  }
                  psVar2 = *(short **)_ArgList;
                  local_228 = (wchar_t *)((int)_ArgList + 4);
                  if ((psVar2 != (short *)0x0) &&
                     (local_220 = *(wchar_t **)(psVar2 + 2), local_220 != (wchar_t *)0x0)) {
                    local_224 = (undefined1 *)(int)*psVar2;
                    if ((local_214 & 0x800) == 0) {
                      local_23c = 0;
                    }
                    else {
                      local_224 = (undefined1 *)((int)local_224 / 2);
                      local_23c = 1;
                    }
                    goto LAB_1000d4f2;
                  }
                  local_220 = (wchar_t *)PTR_s__null__1001d438;
                  pwVar11 = (wchar_t *)PTR_s__null__1001d438;
                }
                local_224 = (undefined1 *)_strlen((char *)pwVar11);
LAB_1000d4f2:
LAB_1000d4f8:
                if (local_244 == 0) {
                  if ((local_214 & 0x40) != 0) {
                    if ((local_214 & 0x100) == 0) {
                      if ((local_214 & 1) == 0) {
                        if ((local_214 & 2) == 0) goto LAB_1000d541;
                        local_230 = 0x20;
                      }
                      else {
                        local_230 = 0x2b;
                      }
                    }
                    else {
                      local_230 = 0x2d;
                    }
                    local_234 = 1;
                  }
LAB_1000d541:
                  iVar8 = (local_238 - (int)local_224) - local_234;
                  if ((local_214 & 0xc) == 0) {
                    write_multi_char(0x20,iVar8);
                  }
                  write_string(local_234);
                  if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                    write_multi_char(0x30,iVar8);
                  }
                  if ((local_23c == 0) || ((int)local_224 < 1)) {
                    write_string((int)local_224);
                  }
                  else {
                    local_264 = local_224;
                    pwVar11 = local_220;
                    do {
                      _WCh = *pwVar11;
                      local_264 = local_264 + -1;
                      pwVar11 = pwVar11 + 1;
                      eVar7 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                      if ((eVar7 != 0) || (local_26c[0] == 0)) {
                        local_22c = -1;
                        break;
                      }
                      write_string(local_26c[0]);
                    } while (local_264 != (undefined1 *)0x0);
                  }
                  if ((-1 < local_22c) && ((local_214 & 4) != 0)) {
                    write_multi_char(0x20,iVar8);
                  }
                }
              }
              else {
                if ('p' < (char)local_215) {
                  if (local_215 == 0x73) {
LAB_1000cfe7:
                    iVar8 = local_21c;
                    if (local_21c == -1) {
                      iVar8 = 0x7fffffff;
                    }
                    local_228 = (wchar_t *)((int)_ArgList + 4);
                    local_220 = *(wchar_t **)_ArgList;
                    if ((local_214 & 0x810) == 0) {
                      if (local_220 == (wchar_t *)0x0) {
                        local_220 = (wchar_t *)PTR_s__null__1001d438;
                      }
                      for (pwVar11 = local_220;
                          (iVar8 != 0 && (iVar8 = iVar8 + -1, (char)*pwVar11 != '\0'));
                          pwVar11 = (wchar_t *)((int)pwVar11 + 1)) {
                      }
                      local_224 = (undefined1 *)((int)pwVar11 - (int)local_220);
                    }
                    else {
                      if (local_220 == (wchar_t *)0x0) {
                        local_220 = (wchar_t *)PTR_u__null__1001d43c;
                      }
                      local_23c = 1;
                      for (pwVar11 = local_220;
                          (iVar8 != 0 && (iVar8 = iVar8 + -1, *pwVar11 != L'\0'));
                          pwVar11 = pwVar11 + 1) {
                      }
                      local_224 = (undefined1 *)((int)pwVar11 - (int)local_220 >> 1);
                    }
                    goto LAB_1000d4f2;
                  }
                  if (local_215 == 0x75) goto LAB_1000d1c2;
                  if (local_215 != 0x78) goto LAB_1000d4f8;
                  local_24c = 0x27;
LAB_1000d34c:
                  local_224 = (undefined1 *)0x10;
                  if ((local_214 & 0x80) != 0) {
                    local_22f = (char)local_24c + 'Q';
                    local_230 = 0x30;
                    local_234 = 2;
                  }
LAB_1000d1cc:
                  if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                    local_228 = (wchar_t *)((int)_ArgList + 4);
                    if ((local_214 & 0x20) == 0) {
                      uVar4 = *(uint *)_ArgList;
                      if ((local_214 & 0x40) == 0) {
                        puVar13 = (undefined1 *)0x0;
                      }
                      else {
                        puVar13 = (undefined1 *)((int)uVar4 >> 0x1f);
                      }
                    }
                    else {
                      if ((local_214 & 0x40) == 0) {
                        uVar4 = (uint)(ushort)*(wchar_t *)_ArgList;
                      }
                      else {
                        uVar4 = (uint)*(wchar_t *)_ArgList;
                      }
                      puVar13 = (undefined1 *)((int)uVar4 >> 0x1f);
                    }
                  }
                  else {
                    uVar4 = *(uint *)_ArgList;
                    puVar13 = *(undefined1 **)((int)_ArgList + 4);
                    local_228 = (wchar_t *)((int)_ArgList + 8);
                  }
                  if ((((local_214 & 0x40) != 0) && ((int)puVar13 < 1)) && ((int)puVar13 < 0)) {
                    bVar14 = uVar4 != 0;
                    uVar4 = -uVar4;
                    puVar13 = (undefined1 *)-(int)(puVar13 + bVar14);
                    local_214 = local_214 | 0x100;
                  }
                  uVar15 = CONCAT44(puVar13,uVar4);
                  if ((local_214 & 0x9000) == 0) {
                    puVar13 = (undefined1 *)0x0;
                  }
                  if (local_21c < 0) {
                    local_21c = 1;
                  }
                  else {
                    local_214 = local_214 & 0xfffffff7;
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                  }
                  if (uVar4 == 0 && puVar13 == (undefined1 *)0x0) {
                    local_234 = 0;
                  }
                  pwVar11 = &local_11;
                  while( true ) {
                    puVar12 = puVar13;
                    iVar8 = local_21c + -1;
                    if ((local_21c < 1) && ((uint)uVar15 == 0 && puVar12 == (undefined1 *)0x0))
                    break;
                    local_21c = iVar8;
                    uVar15 = __aulldvrm((uint)uVar15,(uint)puVar12,(uint)local_224,
                                        (int)local_224 >> 0x1f);
                    iVar8 = extraout_ECX + 0x30;
                    if (0x39 < iVar8) {
                      iVar8 = iVar8 + local_24c;
                    }
                    *(char *)pwVar11 = (char)iVar8;
                    pwVar11 = (wchar_t *)((int)pwVar11 + -1);
                    puVar13 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
                    local_264 = puVar12;
                  }
                  local_224 = (undefined1 *)((int)local_210 + -(int)pwVar11 + 0x1ff);
                  local_220 = (wchar_t *)((int)pwVar11 + 1);
                  local_21c = iVar8;
                  if ((local_214 & 0x200) != 0) {
                    if (local_224 != (undefined1 *)0x0) {
                      if (*(char *)local_220 == '0') goto LAB_1000d4f8;
                    }
                    *(char *)pwVar11 = '0';
                    local_224 = (undefined1 *)((int)local_210 + -(int)pwVar11 + 0x200);
                    local_220 = pwVar11;
                    goto LAB_1000d4f2;
                  }
                  goto LAB_1000d4f8;
                }
                if (local_215 == 0x70) {
                  local_21c = 8;
LAB_1000d320:
                  local_24c = 7;
                  goto LAB_1000d34c;
                }
                if ((char)local_215 < 'e') goto LAB_1000d4f8;
                if ((char)local_215 < 'h') goto LAB_1000cf79;
                if (local_215 == 0x69) goto LAB_1000d1bb;
                if (local_215 != 0x6e) {
                  if (local_215 != 0x6f) goto LAB_1000d4f8;
                  local_224 = (undefined1 *)0x8;
                  if ((local_214 & 0x80) != 0) {
                    local_214 = local_214 | 0x200;
                  }
                  goto LAB_1000d1cc;
                }
                piVar3 = *(int **)_ArgList;
                local_228 = (wchar_t *)((int)_ArgList + 4);
                iVar8 = __get_printf_count_output();
                if (iVar8 == 0) goto LAB_1000cbbe;
                if ((local_214 & 0x20) == 0) {
                  *piVar3 = local_22c;
                }
                else {
                  *(undefined2 *)piVar3 = (undefined2)local_22c;
                }
                local_244 = 1;
              }
              if (local_248 != (wchar_t *)0x0) {
                _free(local_248);
                local_248 = (wchar_t *)0x0;
              }
            }
            local_215 = *local_240;
            if (local_215 == 0) break;
            iVar8 = local_270;
            _Format = (char *)local_240;
            _ArgList = (va_list)local_228;
          }
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_1000d6bb;
      }
    }
  }
LAB_1000cbbe:
  piVar3 = __errno();
  *piVar3 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_1000d6bb:
  iVar8 = __security_check_cookie(local_8 ^ (uint)((int)local_210 + 0x20cU));
  return iVar8;
}



/* ---- __SEH_prolog4 @ 1000d6ec size=69 ---- */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001d02c ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



/* ---- __SEH_epilog4 @ 1000d731 size=20 ---- */

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



/* ---- __except_handler4 @ 1000d750 size=396 ---- */

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  PVOID pvVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  PVOID local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1001d02c);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  pvVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int ***)((int)param_2 + -4) = &local_1c;
    pvVar4 = *(PVOID *)((int)param_2 + 0xc);
    local_1c = param_1;
    local_18 = param_3;
    if (pvVar4 == (PVOID)0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (uint *)(piVar5 + (int)pvVar4 * 3 + 4);
      local_c = (PVOID)*local_14;
      if ((undefined *)piVar5[(int)pvVar4 * 3 + 5] != (undefined *)0x0) {
        iVar2 = _EH4_CallFilterFunc((undefined *)piVar5[(int)pvVar4 * 3 + 5]);
        local_5 = '\x01';
        if (iVar2 < 0) {
          local_10 = 0;
          goto LAB_1000d7f8;
        }
        if (0 < iVar2) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_10018ab0 != (undefined *)0x0)) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_10018ab0)
             , BVar3 != 0)) {
            (*(code *)PTR____DestructExceptionObject_10018ab0)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(PVOID *)((int)param_2 + 0xc) != pvVar4) {
            _EH4_LocalUnwind((int)param_2,(uint)pvVar4,iVar1,&DAT_1001d02c);
          }
          *(PVOID *)((int)param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler((undefined *)local_14[2]);
          goto LAB_1000d8bc;
        }
      }
      pvVar4 = local_c;
    } while (local_c != (PVOID)0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_1000d8bc:
    if (*(int *)((int)pvVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)pvVar4,0xfffffffe,iVar1,&DAT_1001d02c);
  }
LAB_1000d7f8:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}



/* ---- fastzero_I @ 1000d8dc size=79 ---- */

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



/* ---- __VEC_memzero @ 1000d933 size=143 ---- */

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}



/* ---- FUN_1000d9c2 @ 1000d9c2 size=45 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_1000d9c2(void)

{
  return 1;
}



/* ---- __get_sse2_info @ 1000da12 size=98 ---- */

/* WARNING: Removing unreachable block (ram,0x1000da4f) */
/* WARNING: Removing unreachable block (ram,0x1000da3c) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_1000d9c2(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ---- _abort @ 1000da81 size=278 ---- */

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2008 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4 [39];
  
  if (((byte)DAT_1001d440 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_1001d440 & 2) != 0) {
    local_2d4[0] = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/* ---- __set_abort_behavior @ 1000db98 size=33 ---- */

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2008 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_1001d440;
  DAT_1001d440 = ~_Mask & DAT_1001d440 | _Flags & _Mask;
  return uVar1;
}



/* ---- __NMSG_WRITE @ 1000dbb9 size=410 ---- */

/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  char *_Dst;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_1001d448)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 != 1) && ((iVar3 = __set_error_mode(3), iVar3 != 0 || (DAT_1001e0e8 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar4 = _strcpy_s(&DAT_1001e438,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_1001e555 = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_1001e451,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_1001e451,0x2fb,"<program name unknown>"), eVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_1001e451);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_1001e451);
        _Dst = (char *)((int)&DAT_1001e414 + sVar6 + 2);
        eVar4 = _strncpy_s(_Dst,(int)&DAT_1001e74c - (int)_Dst,"...",3);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_1001e438,0x314,"\n\n");
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar4 = _strcat_s(&DAT_1001e438,0x314,*(char **)(local_8 * 8 + 0x1001d44c));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      ___crtMessageBoxA(&DAT_1001e438,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &local_c;
      puVar1 = (undefined4 *)(uVar2 * 8 + 0x1001d44c);
      sVar6 = _strlen((char *)*puVar1);
      WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
    }
  }
  return;
}



/* ---- __FF_MSGBANNER @ 1000dd64 size=57 ---- */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2008 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_1001e0e8 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}



/* ---- FUN_1000dd9d @ 1000dd9d size=15 ---- */

void __cdecl FUN_1000dd9d(undefined4 param_1)

{
  DAT_1001e754 = param_1;
  return;
}



/* ---- _memcpy @ 1000ddb0 size=711 ---- */

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *extraout_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_1000df93_caseD_2;
        case 3:
          goto switchD_1000df93_caseD_3;
        }
        goto switchD_1000df93_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1000df93_caseD_0;
      case 1:
        goto switchD_1000df93_caseD_1;
      case 2:
        goto switchD_1000df93_caseD_2;
      case 3:
        goto switchD_1000df93_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000df93_caseD_2;
            case 3:
              goto switchD_1000df93_caseD_3;
            }
            goto switchD_1000df93_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000df93_caseD_2;
            case 3:
              goto switchD_1000df93_caseD_3;
            }
            goto switchD_1000df93_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1000df93_caseD_2;
            case 3:
              goto switchD_1000df93_caseD_3;
            }
            goto switchD_1000df93_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_1000df93_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_1000df93_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_1000df93_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_1000df93_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1001ecd8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    __VEC_memcpy(_Dst,_Src,_Size);
    return extraout_EAX;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_1000de0c_caseD_2;
      case 3:
        goto switchD_1000de0c_caseD_3;
      }
      goto switchD_1000de0c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1000de0c_caseD_0;
    case 1:
      goto switchD_1000de0c_caseD_1;
    case 2:
      goto switchD_1000de0c_caseD_2;
    case 3:
      goto switchD_1000de0c_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1000de0c_caseD_2;
          case 3:
            goto switchD_1000de0c_caseD_3;
          }
          goto switchD_1000de0c_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1000de0c_caseD_2;
          case 3:
            goto switchD_1000de0c_caseD_3;
          }
          goto switchD_1000de0c_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1000de0c_caseD_2;
          case 3:
            goto switchD_1000de0c_caseD_3;
          }
          goto switchD_1000de0c_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_1000de0c_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1000de0c_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1000de0c_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1000de0c_caseD_0:
  return _Dst;
}



/* ---- _Type_info_dtor @ 1000e115 size=103 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  
  __lock(0xe);
  _Memory = DAT_1001e75c;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1001e758;
    while (DAT_1001e75c != (int *)0x0) {
      if (*DAT_1001e75c == *(int *)(param_1 + 4)) {
        piVar1[1] = DAT_1001e75c[1];
        _free(_Memory);
        break;
      }
      piVar1 = DAT_1001e75c;
    }
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1000e17c();
  return;
}



/* ---- FUN_1000e17c @ 1000e17c size=9 ---- */

void FUN_1000e17c(void)

{
  FUN_1001103e(0xe);
  return;
}



/* ---- _strcmp @ 1000e190 size=135 ---- */

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar3 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar4 = bVar3 < (byte)*_Str2;
      if (bVar3 != *_Str2) goto LAB_1000e1d4;
      _Str2 = _Str2 + 1;
      if (bVar3 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000e1a0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar3 = (byte)uVar1;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) goto LAB_1000e1d4;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((ushort)uVar1 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) goto LAB_1000e1d4;
    if (bVar3 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000e1a0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar3 = (byte)uVar2;
    bVar4 = bVar3 < (byte)*_Str2;
    if (bVar3 != *_Str2) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 8);
    bVar4 = bVar3 < (byte)_Str2[1];
    if (bVar3 != _Str2[1]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x10);
    bVar4 = bVar3 < (byte)_Str2[2];
    if (bVar3 != _Str2[2]) break;
    if (bVar3 == 0) {
      return 0;
    }
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    bVar4 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_1000e1d4:
  return (uint)bVar4 * -2 + 1;
}



/* ---- strtoxl @ 1000e218 size=559 ---- */

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2008 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2) & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_1000e2d1:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1000e2d1;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_1000e337;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_1000e337;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_1000e337;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_1000e337:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_1000e394:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_1000e394;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_1000e394;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}



/* ---- _strtol @ 1000e447 size=43 ---- */

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2008 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1001e77c == 0) {
    ppuVar2 = &PTR_DAT_1001db20;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}



/* ---- CPtoLCID @ 1000e472 size=47 ---- */

/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2008 Release */

int __cdecl CPtoLCID(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX == 0x3b6) {
    return 0x404;
  }
  return 0;
}



/* ---- setSBCS @ 1000e4a1 size=100 ---- */

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2008 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  _memset((void *)(in_EAX + 0x1c),0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&DAT_1001d510 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1001d510 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ---- setSBUpLow @ 1000e505 size=403 ---- */

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2008 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [256];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(local_108 + 0x104);
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1000e67e:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1000e67e;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_1000e61c;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1000e61c:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)(local_108 + 0x104));
  return;
}



/* ---- ___updatetmbcinfo @ 1000e698 size=152 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2008 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1001da34) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1001d938) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1001d510)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1001d938;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1001d938;
      InterlockedIncrement((LONG *)PTR_DAT_1001d938);
    }
    FUN_1000e733();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}



/* ---- FUN_1000e733 @ 1000e733 size=9 ---- */

void FUN_1000e733(void)

{
  FUN_1001103e(0xd);
  return;
}



/* ---- getSystemCP @ 1000e73c size=124 ---- */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2008 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_1001e760 = 0;
  if (unaff_ESI == -2) {
    DAT_1001e760 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_1001e760 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_1001e760 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}



/* ---- __setmbcp_nolock @ 1000e7b8 size=485 ---- */

/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2008 Release */

void __cdecl __setmbcp_nolock(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int extraout_ECX;
  undefined2 *puVar9;
  int iVar10;
  undefined4 extraout_EDX;
  BYTE *pBVar11;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(&local_1c)[1].DefaultChar;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1000e7f6:
    if (*(uint *)((int)&DAT_1001d940 + uVar5) != uVar4) goto code_r0x1000e802;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1001d950 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1001d93c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar10 = CPtoLCID((int)unaff_EDI);
    *(int *)(param_2 + 0xc) = iVar10;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar9 = (undefined2 *)(&DAT_1001d944 + extraout_ECX);
    iVar10 = 6;
    do {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_1000e927;
  }
LAB_1000e7e3:
  setSBCS(unaff_EDI);
LAB_1000e98e:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
code_r0x1000e802:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1000e80f;
  goto LAB_1000e7f6;
code_r0x1000e80f:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1000e98e;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar11 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar11[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = CPtoLCID((int)unaff_EDI);
      *(int *)(param_2 + 0xc) = iVar10;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1000e927:
    setSBUpLow(unaff_EDI);
    goto LAB_1000e98e;
  }
  if (DAT_1001e760 == 0) goto LAB_1000e98e;
  goto LAB_1000e7e3;
}



/* ---- __setmbcp @ 1000e99d size=399 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = __setmbcp_nolock(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1001d510)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1001da34 & 1) == 0)) {
          __lock(0xd);
          _DAT_1001e770 = ptVar3->mbcodepage;
          _DAT_1001e774 = ptVar3->ismbcodepage;
          _DAT_1001e778 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_1001e764)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1001d730)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1001d838)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1001d938);
          if ((LVar4 == 0) && (PTR_DAT_1001d938 != &DAT_1001d510)) {
            _free(PTR_DAT_1001d938);
          }
          PTR_DAT_1001d938 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1000eafe();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1001d510) {
          _free(ptVar3);
        }
        piVar5 = __errno();
        *piVar5 = 0x16;
      }
    }
  }
  return local_24;
}



/* ---- FUN_1000eafe @ 1000eafe size=9 ---- */

void FUN_1000eafe(void)

{
  FUN_1001103e(0xd);
  return;
}



/* ---- ___initmbctable @ 1000eb37 size=30 ---- */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2008 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1001eccc == 0) {
    __setmbcp(-3);
    DAT_1001eccc = 1;
  }
  return 0;
}



/* ---- ___freetlocinfo @ 1000eb55 size=329 ---- */

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2008 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  undefined4 *puVar3;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1001ddc8)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_1001dd08) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (void *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_1001da38) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  _free(_Memory);
  return;
}



/* ---- ___addlocaleref @ 1000ec9e size=143 ---- */

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2008 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar2 = param_1 + 0x14;
  param_1 = (LONG *)0x6;
  do {
    if (((undefined *)pLVar2[-2] != &DAT_1001da38) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar2);
    }
    if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar2[1]);
    }
    pLVar2 = pLVar2 + 4;
    param_1 = (LONG *)((int)param_1 + -1);
  } while (param_1 != (LONG *)0x0);
  InterlockedIncrement((LONG *)(pLVar1[0x35] + 0xb4));
  return;
}



/* ---- ___removelocaleref @ 1000ed2d size=153 ---- */

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2008 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar2 = param_1 + 0x14;
    param_1 = (LONG *)0x6;
    do {
      if (((undefined *)pLVar2[-2] != &DAT_1001da38) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar2);
      }
      if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar2[1]);
      }
      pLVar2 = pLVar2 + 4;
      param_1 = (LONG *)((int)param_1 + -1);
    } while (param_1 != (LONG *)0x0);
    InterlockedDecrement((LONG *)(pLVar1[0x35] + 0xb4));
  }
  return pLVar1;
}



/* ---- __updatetlocinfoEx_nolock @ 1000edc6 size=62 ---- */

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2008 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI == (LONG *)0x0) || (in_EAX == (undefined4 *)0x0)) {
    return (LONG *)0x0;
  }
  pLVar1 = (LONG *)*in_EAX;
  if (pLVar1 != unaff_EDI) {
    *in_EAX = unaff_EDI;
    ___addlocaleref(unaff_EDI);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1001da40)) {
        ___freetlocinfo(pLVar1);
      }
    }
  }
  return unaff_EDI;
}



/* ---- ___updatetlocinfo @ 1000ee04 size=106 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2008 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1001da34) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1000ee6e();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}



/* ---- FUN_1000ee6e @ 1000ee6e size=12 ---- */

void FUN_1000ee6e(void)

{
  FUN_1001103e(0xc);
  return;
}



/* ---- __freea @ 1000ee7a size=32 ---- */

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2008 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}



/* ---- __crtLCMapStringA_stat @ 1000ee9a size=933 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPWSTR lpDestStr;
  LPSTR pCVar9;
  undefined1 uStack00000000;
  WCHAR WStack_16;
  void *local_14;
  LPWSTR local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  if (DAT_1001e7a0 == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1001e7a0 = 2;
      }
    }
    else {
      DAT_1001e7a0 = 1;
    }
  }
  if (0 < (int)param_4) {
    pcVar5 = (char *)param_3;
    pcVar8 = param_4;
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1000ef0b;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1000ef0b:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1001e7a0 == 2) || (DAT_1001e7a0 == 0)) {
    local_10 = (LPWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1000f22d;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPWSTR)0x0) goto LAB_1000f22d;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pCVar9 = (LPSTR)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_1000f20a;
          pCVar9 = (LPSTR)((int)register0x00000010 + -0x1c);
        }
        else {
          pCVar9 = _malloc(local_c + 8);
          if (pCVar9 != (LPSTR)0x0) {
            pCVar9[0] = -0x23;
            pCVar9[1] = -0x23;
            pCVar9[2] = '\0';
            pCVar9[3] = '\0';
            pCVar9 = pCVar9 + 8;
          }
        }
        if (pCVar9 != (LPSTR)0x0) {
          _memset(pCVar9,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pCVar9,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pCVar9,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pCVar9);
        }
      }
    }
LAB_1000f20a:
    if (local_10 != (LPWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1000f22d;
  }
  if (DAT_1001e7a0 != 1) goto LAB_1000f22d;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1000f22d;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      local_10 = (LPWSTR)((int)register0x00000010 + -0x24);
      puVar6 = (undefined4 *)((int)register0x00000010 + -0x24);
      if (&uStack00000000 != (undefined1 *)0x24) goto LAB_1000efb3;
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
LAB_1000efb3:
        local_10 = (LPWSTR)(puVar6 + 2);
      }
    }
  }
  if (local_10 == (LPWSTR)0x0) goto LAB_1000f22d;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&uStack00000000 == (undefined1 *)0x24) goto LAB_1000f0c3;
          lpDestStr = (LPWSTR)((int)register0x00000010 + -0x1c);
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          if (param_6 == (char *)0x0) {
            pCVar9 = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          else {
            pCVar9 = (LPSTR)param_5;
            pcVar5 = param_6;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,pCVar9,(int)pcVar5,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_1000f0c3:
  __freea(local_10);
LAB_1000f22d:
  iVar3 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar3;
}



/* ---- ___crtLCMapStringA @ 1000f23f size=69 ---- */

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2008 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  _LocaleUpdate a_Stack_e [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(a_Stack_e + -6,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* ---- __isleadbyte_l @ 1000f284 size=56 ---- */

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}



/* ---- _isleadbyte @ 1000f2bc size=19 ---- */

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2008 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}



/* ---- __isctype_l @ 1000f2cf size=184 ---- */

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}



/* ---- __malloc_crt @ 1000f3f8 size=69 ---- */

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_1001e7a4 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1001e7a4 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __calloc_crt @ 1000f43d size=76 ---- */

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1001e7a4 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1001e7a4 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



/* ---- __realloc_crt @ 1000f489 size=78 ---- */

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2008 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_1001e7a4 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1001e7a4 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}



/* ---- __crt_waiting_on_module_handle @ 1000f4d7 size=48 ---- */

/* Library Function - Single Match
    __crt_waiting_on_module_handle
   
   Library: Visual Studio 2008 Release */

void __cdecl __crt_waiting_on_module_handle(LPCWSTR param_1)

{
  HMODULE pHVar1;
  DWORD dwMilliseconds;
  
  dwMilliseconds = 1000;
  do {
    Sleep(dwMilliseconds);
    pHVar1 = GetModuleHandleW(param_1);
    dwMilliseconds = dwMilliseconds + 1000;
    if (60000 < dwMilliseconds) {
      return;
    }
  } while (pHVar1 == (HMODULE)0x0);
  return;
}



/* ---- __amsg_exit @ 1000f507 size=41 ---- */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  pcVar1 = (code *)__decode_pointer((int)PTR___exit_1001db30);
  (*pcVar1)(0xff);
  return;
}



/* ---- ___crtCorExitProcess @ 1000f530 size=43 ---- */

/* Library Function - Single Match
    ___crtCorExitProcess
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___crtCorExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}



/* ---- ___crtExitProcess @ 1000f55b size=23 ---- */

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2008 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ---- FUN_1000f573 @ 1000f573 size=9 ---- */

void FUN_1000f573(void)

{
  __lock(8);
  return;
}



/* ---- FUN_1000f57c @ 1000f57c size=9 ---- */

void FUN_1000f57c(void)

{
  FUN_1001103e(8);
  return;
}



/* ---- __initterm @ 1000f585 size=29 ---- */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}



/* ---- __initterm_e @ 1000f5a2 size=36 ---- */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2008 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}



/* ---- __cinit @ 1000f5c6 size=133 ---- */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (DAT_1001ecd0 != (code *)0x0) {
    BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1001ecd0);
    if (BVar1 != 0) {
      (*DAT_1001ecd0)(param_1);
    }
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_100181d4,(undefined4 *)&DAT_100181e8);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1000ff1c);
    __initterm((undefined4 *)&DAT_100181d0);
    if (DAT_1001ecd4 != (code *)0x0) {
      BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1001ecd4);
      if (BVar1 != 0) {
        (*DAT_1001ecd4)(0,2,0);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ---- doexit @ 1000f64b size=285 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000f768) */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2008 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int *local_2c;
  int *local_24;
  int *local_20;
  
  __lock(8);
  if (DAT_1001e7d8 != 1) {
    DAT_1001e7d4 = 1;
    DAT_1001e7d0 = (undefined1)param_3;
    if (param_2 == 0) {
      local_2c = (int *)__decode_pointer(DAT_1001ecc8);
      if (local_2c != (int *)0x0) {
        piVar1 = (int *)__decode_pointer(DAT_1001ecc4);
        piVar4 = local_2c;
        local_24 = piVar1;
        local_20 = local_2c;
        while (piVar1 = piVar1 + -1, piVar4 <= piVar1) {
          iVar2 = __encoded_null();
          if (*piVar1 != iVar2) {
            if (piVar1 < piVar4) break;
            pcVar3 = (code *)__decode_pointer(*piVar1);
            iVar2 = __encoded_null();
            *piVar1 = iVar2;
            (*pcVar3)();
            piVar4 = (int *)__decode_pointer(DAT_1001ecc8);
            piVar5 = (int *)__decode_pointer(DAT_1001ecc4);
            if ((local_20 != piVar4) || (local_24 != piVar5)) {
              piVar1 = piVar5;
              local_2c = piVar4;
              local_24 = piVar5;
              local_20 = piVar4;
            }
            piVar4 = local_2c;
          }
        }
      }
      __initterm((undefined4 *)&DAT_100181f8);
    }
    __initterm((undefined4 *)&DAT_10018200);
  }
  FUN_1000f762();
  if (param_3 == 0) {
    DAT_1001e7d8 = 1;
    FUN_1001103e(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}



/* ---- FUN_1000f762 @ 1000f762 size=15 ---- */

void FUN_1000f762(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_1001103e(8);
  }
  return;
}



/* ---- __exit @ 1000f777 size=22 ---- */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2008 Release */

void __cdecl __exit(int _Code)

{
  doexit(_Code,1,0);
  return;
}



/* ---- __cexit @ 1000f78d size=15 ---- */

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2008 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}



/* ---- __init_pointers @ 1000f79c size=78 ---- */

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2008 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1000bce0(uVar1);
  FUN_10013634(uVar1);
  FUN_1000ac7b(uVar1);
  FUN_1000dd9d(uVar1);
  FUN_10013625(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1000ffe6();
  __initp_eh_hooks();
  PTR___exit_1001db30 = (undefined *)__encode_pointer(0x1000f777);
  return;
}



/* ---- __ioinit @ 1000f7ea size=582 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x1000f7f6;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x40);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1000fa35:
    iVar7 = -1;
  }
  else {
    DAT_1001eba0 = 0x20;
    DAT_1001ebc0 = puVar2;
    for (; puVar2 < DAT_1001ebc0 + 0x200; puVar2 = puVar2 + 0x10) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
      puVar2[0xe] = 0;
      *(undefined1 *)(puVar2 + 0xd) = 0;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      local_24 = 1;
      while ((int)DAT_1001eba0 < (int)UVar9) {
        puVar2 = __calloc_crt(0x20,0x40);
        if (puVar2 == (undefined4 *)0x0) {
          UVar9 = DAT_1001eba0;
          break;
        }
        (&DAT_1001ebc0)[local_24] = puVar2;
        DAT_1001eba0 = DAT_1001eba0 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x200; puVar2 = puVar2 + 0x10) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar2[0xe] = 0;
          *(undefined1 *)(puVar2 + 0xd) = 0;
          puVar1 = (&DAT_1001ebc0)[local_24];
        }
        local_24 = local_24 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar9) {
        do {
          pvVar5 = *(HANDLE *)local_20;
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar5), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x40 + (int)(&DAT_1001ebc0)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            BVar4 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(puVar2 + 3),4000);
            if (BVar4 == 0) goto LAB_1000fa35;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar9);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_1001ebc0 + iVar7 * 0x10;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar5 = GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          BVar4 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(piVar8 + 3),4000);
          if (BVar4 == 0) goto LAB_1000fa35;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_1001eba0);
    iVar7 = 0;
  }
  return iVar7;
}



/* ---- __ioterm @ 1000fa3e size=78 ---- */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_1001ebc0;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x800; uVar3 = uVar3 + 0x40) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x1001ecc0);
  return;
}



/* ---- __setenvp @ 1000fa8c size=219 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2008 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_1001eccc == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_1001e0dc;
  if (DAT_1001e0dc != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    DAT_1001e7b8 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar4 = DAT_1001e0dc;
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_1001e0dc);
          DAT_1001e0dc = (char *)0x0;
          *puVar1 = 0;
          _DAT_1001ecc0 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_1001e7b8);
            DAT_1001e7b8 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}



/* ---- parse_cmdline @ 1000fb6a size=410 ---- */

/* Library Function - Single Match
    _parse_cmdline
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_1000fbfe;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1000fbfe:
  bVar2 = false;
  while (*pbVar7 != 0) {
    while( true ) {
      if ((*pbVar7 != 0x20) && (*pbVar7 != 9)) break;
      pbVar7 = pbVar7 + 1;
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      if (uVar4 != 0) {
        do {
          uVar4 = uVar4 - 1;
          if (pbVar5 != (byte *)0x0) {
            *pbVar5 = 0x5c;
            pbVar5 = pbVar5 + 1;
          }
          *unaff_EDI = *unaff_EDI + 1;
        } while (uVar4 != 0);
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}



/* ---- __setargv @ 1000fd04 size=187 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2008 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_1001eccc == 0) {
    ___initmbctable();
  }
  DAT_1001e8e4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1001e7e0,0x104);
  _DAT_1001e7c8 = &DAT_1001e7e0;
  if ((DAT_1001fce8 == (char *)0x0) || (local_8 = DAT_1001fce8, *DAT_1001fce8 == '\0')) {
    local_8 = &DAT_1001e7e0;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1001e7ac = local_c - 1;
      _DAT_1001e7b0 = puVar2;
      return 0;
    }
  }
  return -1;
}



/* ---- ___crtGetEnvironmentStringsA @ 1000fdbf size=311 ---- */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2008 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  WCHAR *pWVar5;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar8;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_1001e8e8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1001e8e8 = 1;
      goto LAB_1000fe14;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_1001e8e8 = 2;
    }
  }
  if (DAT_1001e8e8 != 1) {
    if ((DAT_1001e8e8 != 2) && (DAT_1001e8e8 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_1000fe14:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar5 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar4 = pWVar5;
      pWVar5 = pWVar4 + 1;
    } while (*pWVar5 != L'\0');
    pWVar5 = pWVar4 + 2;
    WVar2 = *pWVar5;
  }
  iVar6 = ((int)pWVar5 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) {
    iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,(LPBOOL)0x0
                               );
    local_8 = lpMultiByteStr;
    if (iVar6 == 0) {
      _free(lpMultiByteStr);
      local_8 = (LPSTR)0x0;
    }
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}



/* ---- __RTC_Initialize @ 1000fef6 size=38 ---- */

/* WARNING: Removing unreachable block (ram,0x1000ff0a) */
/* WARNING: Removing unreachable block (ram,0x1000ff10) */
/* WARNING: Removing unreachable block (ram,0x1000ff12) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2008 Release */

void __RTC_Initialize(void)

{
  return;
}



/* ---- __heap_init @ 1000ff42 size=48 ---- */

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2008 Release */

int __cdecl __heap_init(void)

{
  int in_stack_00000004;
  
  DAT_1001e8ec = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_1001e8ec == (HANDLE)0x0) {
    return 0;
  }
  DAT_1001eb9c = 1;
  return 1;
}



/* ---- __heap_term @ 1000ff72 size=116 ---- */

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2008 Release */

void __cdecl __heap_term(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_1001eb9c == 3) {
    iVar1 = 0;
    if (0 < DAT_1001eb84) {
      puVar2 = (undefined4 *)((int)DAT_1001eb88 + 0x10);
      do {
        VirtualFree((LPVOID)puVar2[-1],0,0x8000);
        HeapFree(DAT_1001e8ec,0,(LPVOID)*puVar2);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1001eb84);
    }
    HeapFree(DAT_1001e8ec,0,DAT_1001eb88);
  }
  HeapDestroy(DAT_1001e8ec);
  DAT_1001e8ec = (HANDLE)0x0;
  return;
}



/* ---- FUN_1000ffe6 @ 1000ffe6 size=1 ---- */

void FUN_1000ffe6(void)

{
  return;
}



/* ---- __XcptFilter @ 1000ffe7 size=352 ---- */

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2008 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  _ptiddata p_Var5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  p_Var5 = __getptd_noexit();
  iVar7 = 0;
  if (p_Var5 != (_ptiddata)0x0) {
    puVar1 = p_Var5->_pxcptacttab;
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + DAT_1001db88 * 3);
    if ((puVar1 + DAT_1001db88 * 3 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 == (ulong *)0x0) || (pcVar2 = (code *)puVar6[2], pcVar2 == (code *)0x0)) {
      iVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      puVar6[2] = 0;
      iVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = p_Var5->_tpxcptinfoptrs;
        p_Var5->_tpxcptinfoptrs = _ExceptionPtr;
        if (puVar6[1] == 8) {
          if (DAT_1001db7c < DAT_1001db80 + DAT_1001db7c) {
            iVar8 = DAT_1001db7c * 0xc;
            iVar7 = DAT_1001db7c;
            do {
              *(undefined4 *)(iVar8 + 8 + (int)p_Var5->_pxcptacttab) = 0;
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar7 < DAT_1001db80 + DAT_1001db7c);
          }
          uVar4 = *puVar6;
          iVar7 = p_Var5->_tfpecode;
          if (uVar4 == 0xc000008e) {
            p_Var5->_tfpecode = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            p_Var5->_tfpecode = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            p_Var5->_tfpecode = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            p_Var5->_tfpecode = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            p_Var5->_tfpecode = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            p_Var5->_tfpecode = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            p_Var5->_tfpecode = 0x8a;
          }
          (*pcVar2)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar7;
        }
        else {
          puVar6[2] = 0;
          (*pcVar2)(puVar6[1]);
        }
        p_Var5->_tpxcptinfoptrs = pvVar3;
      }
      iVar7 = -1;
    }
  }
  return iVar7;
}



/* ---- ___CppXcptFilter @ 10010147 size=32 ---- */

/* Library Function - Single Match
    ___CppXcptFilter
   
   Library: Visual Studio 2008 Release */

int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = __XcptFilter(0xe06d7363,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}



/* ---- ___security_init_cookie @ 10010167 size=150 ---- */

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
  if ((DAT_1001d02c == 0xbb40e64e) || ((DAT_1001d02c & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1001d02c = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1001d02c == 0xbb40e64e) {
      DAT_1001d02c = 0xbb40e64f;
    }
    else if ((DAT_1001d02c & 0xffff0000) == 0) {
      DAT_1001d02c = DAT_1001d02c | DAT_1001d02c << 0x10;
    }
  }
  DAT_1001d030 = ~DAT_1001d02c;
  return;
}



/* ---- bad_exception @ 100101fd size=30 ---- */

/* Library Function - Single Match
    public: __thiscall std::bad_exception::bad_exception(char const *)
   
   Library: Visual Studio 2008 Release */

bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- FUN_1001021b @ 1001021b size=11 ---- */

void __fastcall FUN_1001021b(undefined4 *param_1)

{
  *param_1 = &std::bad_exception::vftable;
  *param_1 = &std::exception::vftable;
  if (param_1[2] != 0) {
    _free((void *)param_1[1]);
  }
  return;
}



/* ---- scalar_deleting_destructor @ 10010226 size=39 ---- */

exception * __thiscall
std::bad_exception::scalar_deleting_destructor(bad_exception *this,byte param_1)

{
                    /* inlined destructor: std::bad_exception::~bad_exception */
  this->vftablePtr = &vftable;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_1000a8dd(this);
  }
  return (exception *)this;
}



/* ---- ___TypeMatch @ 1001024d size=95 ---- */

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100102a5:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10010284:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100102a5;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10010284;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ---- ___FrameUnwindFilter @ 100102ac size=73 ---- */

/* Library Function - Single Match
    ___FrameUnwindFilter
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1)

{
  _ptiddata p_Var1;
  undefined4 extraout_EAX;
  
  if (*(int *)*param_1 == -0x1fbcb0b3) {
    p_Var1 = __getptd();
    if (0 < p_Var1->_ProcessingThrow) {
      p_Var1 = __getptd();
      p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
    }
  }
  else if (*(int *)*param_1 == -0x1f928c9d) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = 0;
    terminate();
    return extraout_EAX;
  }
  return 0;
}



/* ---- ___FrameUnwindToState @ 100102f5 size=166 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2008 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_100103bb();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}



/* ---- FUN_100103bb @ 100103bb size=27 ---- */

void FUN_100103bb(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}



/* ---- ___DestructExceptionObject @ 1001041b size=67 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2008 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  void *pvVar1;
  int unaff_EDI;
  void *in_stack_ffffffd4;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (pvVar1 = *(void **)(param_1[7] + 4), pvVar1 != (void *)0x0)) {
    FID_conflict__CallMemberFunction1((void *)param_1[6],pvVar1,in_stack_ffffffd4,unaff_EDI);
  }
  return;
}



/* ---- ___AdjustPointer @ 10010470 size=41 ---- */

/* Library Function - Single Match
    ___AdjustPointer
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}



/* ---- IsInExceptionSpec @ 10010499 size=123 ---- */

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2008 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}



/* ---- FUN_10010514 @ 10010514 size=49 ---- */

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_10010514(void *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  FUN_10010eef();
  terminate();
  p_Var1 = __getptd();
  p_Var1->_curexcspec = param_1;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- Catch_All@10010545 @ 10010545 size=23 ---- */

void Catch_All_10010545(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}



/* ---- CallCatchBlock @ 1001055d size=172 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1001a640;
  uStack_c = 0x10010569;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_10010683();
  return local_20;
}



/* ---- FUN_10010683 @ 10010683 size=118 ---- */

void FUN_10010683(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}



/* ---- ___BuildCatchObjectHelper @ 100106f9 size=371 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2008 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  int iVar1;
  void *pvVar2;
  size_t _Size;
  uint in_stack_ffffffd0;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar2 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar2,_Size);
          return '\0';
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateRead(*(void **)(param_4 + 0x18),in_stack_ffffffd0), iVar1 != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar1 = *param_2;
        if (iVar1 == 0) {
          return '\0';
        }
        goto LAB_1001077e;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar1 != 0) && (iVar1 = _ValidateRead(param_2,1), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      *param_2 = iVar1;
LAB_1001077e:
      iVar1 = ___AdjustPointer(iVar1,(int *)(param_4 + 8));
      *param_2 = iVar1;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}



/* ---- ___BuildCatchObject @ 10010878 size=133 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int in_stack_ffffffd4;
  
  if ((*param_3 & 0x80000000) == 0) {
    piVar3 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  else {
    piVar3 = param_2;
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar3,*(void **)(param_4 + 0x18),pvVar2,in_stack_ffffffd4);
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    iVar4 = 1;
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar3,*(void **)(param_4 + 0x18),pvVar2,iVar4);
  }
  return;
}



/* ---- CatchIt @ 1001090a size=110 ---- */

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2008 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  else {
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}



/* ---- FindHandlerForForeignException @ 10010978 size=244 ---- */

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2008 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  uint in_ECX;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    local_8 = in_ECX;
    p_Var2 = __getptd();
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck
                       (param_5,param_7,param_6,&local_8,(uint *)((int)register0x00000010 + -0xc));
    if (local_8 < in_ECX) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)in_ECX);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < in_ECX);
    }
  }
  return;
}



/* ---- FindHandler @ 10010a6c size=839 ---- */

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2008 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uchar uVar1;
  bool bVar2;
  _ptiddata p_Var3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  EHRegistrationNode *unaff_EBX;
  int iVar6;
  int *piVar7;
  int unaff_ESI;
  _s_FuncInfo *p_Var8;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar9;
  uchar in_stack_ffffffd0;
  undefined1 auStack_2d [9];
  bad_exception local_24;
  int local_18;
  char *local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var8 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar4 = *(int *)(param_1 + 0x14), iVar4 == 0x19930520 || (iVar4 == 0x19930521)) ||
         (iVar4 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var3 = __getptd();
      if (p_Var3->_curexception == (void *)0x0) {
        return;
      }
      p_Var3 = __getptd();
      param_1 = p_Var3->_curexception;
      p_Var3 = __getptd();
      param_3 = p_Var3->_curcontext;
      iVar4 = _ValidateRead(param_1,1);
      if (iVar4 == 0) {
        _inconsistency();
      }
      if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
          ((iVar4 = *(int *)(param_1 + 0x14), iVar4 == 0x19930520 ||
           ((iVar4 == 0x19930521 || (iVar4 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0)) {
        _inconsistency();
      }
      p_Var3 = __getptd();
      if (p_Var3->_curexcspec != (void *)0x0) {
        p_Var3 = __getptd();
        piVar7 = p_Var3->_curexcspec;
        p_Var3 = __getptd();
        iVar4 = 0;
        p_Var3->_curexcspec = (void *)0x0;
        uVar1 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        if (uVar1 == '\0') {
          iVar6 = 0;
          if (0 < *piVar7) {
            do {
              bVar2 = type_info::operator==
                                (*(type_info **)(iVar6 + 4 + piVar7[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar2) goto LAB_10010bad;
              iVar4 = iVar4 + 1;
              iVar6 = iVar6 + 0x10;
            } while (iVar4 < *piVar7);
          }
          goto LAB_10010ba8;
        }
      }
    }
    p_Var8 = (_s_FuncInfo *)param_1;
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((iVar4 = *(int *)(param_1 + 0x14), iVar4 == 0x19930520 ||
        ((iVar4 == 0x19930521 || (iVar4 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var5 = _GetRangeOfTrysToCheck
                           (param_5,param_7,local_c,(uint *)&local_14,
                            (uint *)&local_24.exception_data);
        for (; local_14 < local_24.exception_data.offset_0x0; local_14 = local_14 + 1) {
          if ((p_Var5->tryLow <= local_c) && (local_c <= p_Var5->tryHigh)) {
            local_10 = p_Var5->pHandlerArray;
            for (local_24.exception_data.offset_0x4 = p_Var5->nCatches;
                0 < local_24.exception_data.offset_0x4;
                local_24.exception_data.offset_0x4 = local_24.exception_data.offset_0x4 + -1) {
              piVar7 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
              for (local_18 = *piVar7; 0 < local_18; local_18 = local_18 + -1) {
                piVar7 = piVar7 + 1;
                p_Var8 = (_s_FuncInfo *)*piVar7;
                iVar4 = ___TypeMatch((byte *)local_10,(byte *)p_Var8,*(uint **)(param_1 + 0x1c));
                if (iVar4 != 0) {
                  local_5 = '\x01';
                  CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,p_Var8,
                          (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,unaff_ESI,
                          unaff_EBX,in_stack_ffffffd0);
                  goto LAB_10010cc5;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_10010cc5:
          p_Var5 = p_Var5 + 1;
        }
      }
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)param_1);
      }
      if ((((local_5 != '\0') || ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (param_5->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar1 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI), uVar1 != '\0'))
      goto LAB_10010d9b;
      __getptd();
      __getptd();
      p_Var3 = __getptd();
      p_Var3->_curexception = param_1;
      p_Var3 = __getptd();
      p_Var3->_curcontext = param_3;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar9 = param_2;
      }
      else {
        pEVar9 = param_8;
      }
      _UnwindNestedFrames(pEVar9,param_1);
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      FUN_10010514(param_5->pESTypeList);
      p_Var8 = param_5;
    }
  }
  if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_10010ba8:
      terminate();
LAB_10010bad:
      ___DestructExceptionObject((int *)param_1);
      std::bad_exception::bad_exception((bad_exception *)(auStack_2d + -3),"bad exception");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(auStack_2d + -3,&DAT_1001a6a4);
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var8,param_2,param_3,param_4,param_5,local_c,param_7,param_8);
  }
LAB_10010d9b:
  p_Var3 = __getptd();
  if (p_Var3->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}



/* ---- bad_exception @ 10010db3 size=29 ---- */

bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,exception *param_1)

{
  exception::exception((exception *)this,param_1);
  this->vftablePtr = &vftable;
  return this;
}



/* ---- ___InternalCxxFrameHandler @ 10010dd0 size=230 ---- */

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}



/* ---- terminate @ 10010eb6 size=44 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* ---- FUN_10010eef @ 10010eef size=19 ---- */

void FUN_10010eef(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}



/* ---- _inconsistency @ 10010f02 size=49 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_1001e8f0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ---- __initp_eh_hooks @ 10010f3a size=17 ---- */

/* Library Function - Single Match
    __initp_eh_hooks
   
   Library: Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_1001e8f0 = __encode_pointer(0x10010eb6);
  return;
}



/* ---- __CallSettingFrame@12 @ 10010f50 size=76 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



/* ---- __mtinitlocks @ 10010f9c size=75 ---- */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_1001e8f8;
  do {
    if ((&DAT_1001dbb4)[iVar2 * 2] == 1) {
      (&DAT_1001dbb0)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(&DAT_1001dbb0)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&DAT_1001dbb0)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}



/* ---- __mtdeletelocks @ 10010fe7 size=87 ---- */

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1001dbb0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001dcd0);
  puVar1 = &DAT_1001dbb0;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1001dcd0);
  return;
}



/* ---- FUN_1001103e @ 1001103e size=23 ---- */

void __cdecl FUN_1001103e(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1001dbb0)[param_1 * 2]);
  return;
}



/* ---- __mtinitlocknum @ 10011055 size=186 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION _Memory;
  int *piVar1;
  BOOL BVar2;
  int local_20;
  
  local_20 = 1;
  if (DAT_1001e8ec == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1001dbb0 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      local_20 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (BVar2 == 0) {
          _free(_Memory);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_1001110f();
    }
  }
  else {
    local_20 = 1;
  }
  return local_20;
}



/* ---- FUN_1001110f @ 1001110f size=9 ---- */

void FUN_1001110f(void)

{
  FUN_1001103e(10);
  return;
}



/* ---- __lock @ 10011118 size=51 ---- */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1001dbb0)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1001dbb0)[_File * 2]);
  return;
}



/* ---- ___sbh_find_block @ 1001114b size=48 ---- */

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2008 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1001eb88;
  while( true ) {
    if (DAT_1001eb84 * 0x14 + DAT_1001eb88 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ---- ___sbh_free_block @ 1001117b size=790 ---- */

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2008 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    else {
      puVar11 = param_1;
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_1001ea48 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1001eb98 * 0x8000 + DAT_1001ea48[3]),0x8000,0x4000);
        DAT_1001ea48[2] = DAT_1001ea48[2] | 0x80000000U >> ((byte)DAT_1001eb98 & 0x1f);
        *(undefined4 *)(DAT_1001ea48[4] + 0xc4 + DAT_1001eb98 * 4) = 0;
        *(char *)(DAT_1001ea48[4] + 0x43) = *(char *)(DAT_1001ea48[4] + 0x43) + -1;
        if (*(char *)(DAT_1001ea48[4] + 0x43) == '\0') {
          DAT_1001ea48[1] = DAT_1001ea48[1] & 0xfffffffe;
        }
        if (DAT_1001ea48[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1001ea48[3],0,0x8000);
          HeapFree(DAT_1001e8ec,0,(LPVOID)DAT_1001ea48[4]);
          _memmove(DAT_1001ea48,DAT_1001ea48 + 5,
                   (DAT_1001eb84 * 0x14 - (int)DAT_1001ea48) + -0x14 + DAT_1001eb88);
          DAT_1001eb84 = DAT_1001eb84 + -1;
          if (DAT_1001ea48 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1001eb90 = DAT_1001eb88;
        }
      }
      DAT_1001ea48 = param_1;
      DAT_1001eb98 = uVar14;
    }
  }
  return;
}



/* ---- ___sbh_alloc_new_region @ 10011491 size=176 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2008 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_1001eb84 == DAT_1001eb94) {
    pvVar1 = HeapReAlloc(DAT_1001e8ec,0,DAT_1001eb88,(DAT_1001eb94 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1001eb94 = DAT_1001eb94 + 0x10;
    DAT_1001eb88 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_1001eb84 * 0x14 + (int)DAT_1001eb88);
  pvVar1 = HeapAlloc(DAT_1001e8ec,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_1001eb84 = DAT_1001eb84 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_1001e8ec,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}



/* ---- ___sbh_alloc_new_group @ 10011541 size=264 ---- */

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2008 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}



/* ---- ___sbh_resize_block @ 10011649 size=737 ---- */

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}



/* ---- ___sbh_alloc_block @ 1001192a size=741 ---- */

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2008 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint local_c;
  int local_8;
  
  puVar11 = DAT_1001eb88 + DAT_1001eb84 * 5;
  uVar8 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar9 = (int)((int)param_1 + 0x17U) >> 4;
  iVar10 = iVar9 + -1;
  if (iVar10 < 0x20) {
    uVar15 = 0xffffffff >> ((byte)iVar10 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> ((char)iVar9 - 0x21U & 0x1f);
  }
  for (param_1 = DAT_1001eb90;
      (param_1 < puVar11 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  if (param_1 == puVar11) {
    for (param_1 = DAT_1001eb88;
        (param_1 < DAT_1001eb90 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
        param_1 = param_1 + 5) {
    }
    if (param_1 == DAT_1001eb90) {
      for (; (param_1 < puVar11 && (param_1[2] == 0)); param_1 = param_1 + 5) {
      }
      if (param_1 == puVar11) {
        for (param_1 = DAT_1001eb88; (param_1 < DAT_1001eb90 && (param_1[2] == 0));
            param_1 = param_1 + 5) {
        }
        if ((param_1 == DAT_1001eb90) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar9 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar9;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar6 = (int *)param_1[4];
  local_8 = *piVar6;
  if ((local_8 == -1) ||
     ((piVar6[local_8 + 0x31] & local_c) == 0 && (piVar6[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar11 = (uint *)(piVar6 + 0x11);
    uVar13 = piVar6[0x31];
    while ((uVar13 & local_c) == 0 && (*puVar11 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar1 = puVar11 + 0x21;
      puVar11 = puVar11 + 1;
      uVar13 = *puVar1;
    }
  }
  piVar4 = piVar6 + local_8 * 0x81 + 0x51;
  iVar9 = 0;
  uVar15 = piVar6[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar6[local_8 + 0x31] & local_c;
    iVar9 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar9 = iVar9 + 1;
  }
  piVar14 = (int *)piVar4[iVar9 * 2 + 1];
  iVar12 = *piVar14 - uVar8;
  iVar10 = (iVar12 >> 4) + -1;
  if (0x3f < iVar10) {
    iVar10 = 0x3f;
  }
  DAT_1001eb90 = param_1;
  if (iVar10 != iVar9) {
    if (piVar14[1] == piVar14[2]) {
      if (iVar9 < 0x20) {
        pcVar3 = (char *)((int)piVar6 + iVar9 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar9 & 0x1f));
        piVar6[local_8 + 0x11] = uVar15 & piVar6[local_8 + 0x11];
        *pcVar3 = *pcVar3 + -1;
        if (*pcVar3 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar3 = (char *)((int)piVar6 + iVar9 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar9 - 0x20 & 0x1f));
        piVar6[local_8 + 0x31] = piVar6[local_8 + 0x31] & uVar15;
        *pcVar3 = *pcVar3 + -1;
        if (*pcVar3 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar14[2] + 4) = piVar14[1];
    *(int *)(piVar14[1] + 8) = piVar14[2];
    if (iVar12 == 0) goto LAB_10011bcc;
    piVar2 = piVar4 + iVar10 * 2;
    iVar9 = piVar2[1];
    piVar14[2] = (int)piVar2;
    piVar14[1] = iVar9;
    piVar2[1] = (int)piVar14;
    *(int **)(piVar14[1] + 8) = piVar14;
    if (piVar14[1] == piVar14[2]) {
      cVar5 = *(char *)(iVar10 + 4 + (int)piVar6);
      *(char *)(iVar10 + 4 + (int)piVar6) = cVar5 + '\x01';
      bVar7 = (byte)iVar10;
      if (iVar10 < 0x20) {
        if (cVar5 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar7 & 0x1f);
        }
        piVar6[local_8 + 0x11] = piVar6[local_8 + 0x11] | 0x80000000U >> (bVar7 & 0x1f);
      }
      else {
        if (cVar5 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
        }
        piVar6[local_8 + 0x31] = piVar6[local_8 + 0x31] | 0x80000000U >> (bVar7 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar12 != 0) {
    *piVar14 = iVar12;
    *(int *)(iVar12 + -4 + (int)piVar14) = iVar12;
  }
LAB_10011bcc:
  piVar14 = (int *)((int)piVar14 + iVar12);
  *piVar14 = uVar8 + 1;
  *(uint *)((int)piVar14 + (uVar8 - 4)) = uVar8 + 1;
  iVar9 = *piVar4;
  *piVar4 = iVar9 + 1;
  if (((iVar9 == 0) && (param_1 == DAT_1001ea48)) && (local_8 == DAT_1001eb98)) {
    DAT_1001ea48 = (uint *)0x0;
  }
  *piVar6 = local_8;
  return piVar14 + 1;
}



/* ---- __msize @ 10011c0f size=146 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  uint uVar2;
  SIZE_T SVar3;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  if (DAT_1001eb9c == 3) {
    __lock(4);
    uVar2 = ___sbh_find_block((int)_Memory);
    if (uVar2 != 0) {
      local_20 = *(int *)((int)_Memory + -4) - 9;
    }
    FUN_10011ca9();
    if (uVar2 != 0) {
      return local_20;
    }
  }
  SVar3 = HeapSize(DAT_1001e8ec,0,_Memory);
  return SVar3;
}



/* ---- FUN_10011ca9 @ 10011ca9 size=9 ---- */

void FUN_10011ca9(void)

{
  FUN_1001103e(4);
  return;
}



/* ---- FUN_10011cb2 @ 10011cb2 size=129 ---- */

void __cdecl FUN_10011cb2(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}



/* ---- __VEC_memcpy @ 10011d39 size=227 ---- */

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_10011cb2(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



/* ---- __flush @ 10011ebb size=104 ---- */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2008 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}



/* ---- __fflush_nolock @ 10011f23 size=72 ---- */

/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    iVar1 = __flush(_File);
    if (iVar1 == 0) {
      if ((_File->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __fileno(_File);
        iVar1 = __commit(iVar1);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



/* ---- flsall @ 10011f6b size=187 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  void *_File;
  FILE *_File_00;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_1001fce0; _Index = _Index + 1) {
    piVar1 = (int *)(DAT_1001ecdc + _Index * 4);
    if ((*piVar1 != 0) && (_File = (void *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      _File_00 = *(FILE **)(DAT_1001ecdc + _Index * 4);
      if ((_File_00->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File_00->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_1001200d();
    }
  }
  FUN_1001203c();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}



/* ---- FUN_1001200d @ 1001200d size=17 ---- */

void FUN_1001200d(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_1001ecdc + unaff_ESI * 4));
  return;
}



/* ---- FUN_1001203c @ 1001203c size=9 ---- */

void FUN_1001203c(void)

{
  FUN_1001103e(1);
  return;
}



/* ---- __isatty @ 1001204e size=100 ---- */

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2008 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  uint uVar2;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
    return 0;
  }
  if ((_FileHandle < 0) || (DAT_1001eba0 <= (uint)_FileHandle)) {
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0;
  }
  else {
    uVar2 = (int)*(char *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
            0x40;
  }
  return uVar2;
}



/* ---- __fileno @ 100120b2 size=50 ---- */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2008 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  int iVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    iVar2 = _File->_file;
  }
  return iVar2;
}



/* ---- __flsbuf @ 100120e4 size=356 ---- */

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_1001210a:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_1001210a;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_1000c828(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_1000c828(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_1001db38;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_1001ebc0)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_10012232;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_10012232:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}



/* ---- __initp_misc_cfltcvt_tab @ 10012248 size=33 ---- */

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2008 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_1001dcd0 + uVar3);
    iVar2 = __encode_pointer(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}



/* ---- __wctomb_s_l @ 10012269 size=364 ---- */

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_1001228d:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_10012324;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_1001235f:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_1001228d;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_10012324:
          piVar2 = __errno();
          *piVar2 = 0x22;
          __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 != '\0') {
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          }
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar1;
        }
        goto LAB_1001235f;
      }
    }
    piVar2 = __errno();
    *piVar2 = 0x2a;
    piVar2 = __errno();
    iVar1 = *piVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar1;
}



/* ---- _wctomb_s @ 100123d5 size=29 ---- */

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}



/* ---- __local_unwind4 @ 100123f4 size=144 ---- */

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_10012484;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1001d02c ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_10013854();
    }
  }
  ExceptionList = pvStack_28;
  return;
}



/* ---- FUN_100124ca @ 100124ca size=28 ---- */

void FUN_100124ca(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}



/* ---- _EH4_CallFilterFunc @ 100124e6 size=23 ---- */

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}



/* ---- _EH4_TransferToHandler @ 100124fd size=25 ---- */

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x10012514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ---- _EH4_GlobalUnwind @ 10012516 size=26 ---- */

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1001252b,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- _EH4_LocalUnwind @ 10012530 size=23 ---- */

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2008 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}



/* ---- __ValidateImageBase @ 10012550 size=53 ---- */

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



/* ---- __FindPESection @ 10012590 size=68 ---- */

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



/* ---- __IsNonwritableInCurrentImage @ 100125e0 size=166 ---- */

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
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_1001d02c ^ 0x1001a7a8;
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



/* ---- __initp_misc_winsig @ 1001269d size=30 ---- */

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2008 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1001ea50 = param_1;
  DAT_1001ea54 = param_1;
  DAT_1001ea58 = param_1;
  DAT_1001ea5c = param_1;
  return;
}



/* ---- siglookup @ 100126bb size=55 ---- */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2008 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_1001db88 * 0xc + param_1);
  if ((DAT_1001db88 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- ___get_sigabrt @ 100126f2 size=13 ---- */

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2008 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)__decode_pointer(DAT_1001ea58);
  return p_Var1;
}



/* ---- _raise @ 100126ff size=411 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2008 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  _ptiddata p_Var8;
  int local_34;
  void *local_30;
  int local_28;
  
  p_Var8 = (_ptiddata)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar7 = &DAT_1001ea50;
        iVar4 = DAT_1001ea50;
        goto LAB_100127b4;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10012792;
        if (_SigNum != 8) goto LAB_10012776;
      }
    }
    p_Var8 = __getptd_noexit();
    if (p_Var8 == (_ptiddata)0x0) {
      return -1;
    }
    uVar2 = siglookup((uint)p_Var8->_pxcptacttab);
    puVar7 = (undefined4 *)(uVar2 + 8);
    pcVar5 = (code *)*puVar7;
  }
  else {
    if (_SigNum == 0xf) {
      puVar7 = &DAT_1001ea5c;
      iVar4 = DAT_1001ea5c;
    }
    else if (_SigNum == 0x15) {
      puVar7 = &DAT_1001ea54;
      iVar4 = DAT_1001ea54;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10012776:
        piVar3 = __errno();
        *piVar3 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10012792:
      puVar7 = &DAT_1001ea58;
      iVar4 = DAT_1001ea58;
    }
LAB_100127b4:
    bVar1 = true;
    pcVar5 = (code *)__decode_pointer(iVar4);
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var8->_tpxcptinfoptrs;
    p_Var8->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var8->_tfpecode;
      p_Var8->_tfpecode = 0x8c;
      goto LAB_10012818;
    }
  }
  else {
LAB_10012818:
    if (_SigNum == 8) {
      for (local_28 = DAT_1001db7c; local_28 < DAT_1001db80 + DAT_1001db7c; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var8->_pxcptacttab) = 0;
      }
      goto LAB_10012852;
    }
  }
  uVar6 = __encoded_null();
  *puVar7 = uVar6;
LAB_10012852:
  FUN_10012873();
  if (_SigNum == 8) {
    (*pcVar5)(8,p_Var8->_tfpecode);
  }
  else {
    (*pcVar5)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var8->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var8->_tfpecode = local_34;
  }
  return 0;
}



/* ---- FUN_10012873 @ 10012873 size=15 ---- */

void FUN_10012873(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_1001103e(0);
  }
  return;
}



/* ---- ___crtMessageBoxA @ 100128af size=361 ---- */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 2008 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined1 local_18 [8];
  byte local_10;
  undefined1 local_c [4];
  int local_8;
  
  iVar1 = __encoded_null();
  local_8 = 0;
  if (DAT_1001ea64 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1001ea64 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_1001ea68 = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_1001ea6c = __encode_pointer((int)pFVar2);
    pFVar2 = GetProcAddress(hModule,"GetUserObjectInformationA");
    DAT_1001ea74 = __encode_pointer((int)pFVar2);
    if (DAT_1001ea74 != 0) {
      pFVar2 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_1001ea70 = __encode_pointer((int)pFVar2);
    }
  }
  if ((DAT_1001ea70 != iVar1) && (DAT_1001ea74 != iVar1)) {
    pcVar3 = (code *)__decode_pointer(DAT_1001ea70);
    pcVar4 = (code *)__decode_pointer(DAT_1001ea74);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar5 = (*pcVar3)(), iVar5 == 0 ||
         (iVar5 = (*pcVar4)(iVar5,1,local_18,0xc,local_c), iVar5 == 0)) || ((local_10 & 1) == 0))))
    {
      _UType = _UType | 0x200000;
      goto LAB_100129f1;
    }
  }
  if ((((DAT_1001ea68 != iVar1) &&
       (pcVar3 = (code *)__decode_pointer(DAT_1001ea68), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_1001ea6c != iVar1 &&
      (pcVar3 = (code *)__decode_pointer(DAT_1001ea6c), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_100129f1:
  pcVar3 = (code *)__decode_pointer(DAT_1001ea64);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  iVar1 = (*pcVar3)(local_8,_LpText,_LpCaption,_UType);
  return iVar1;
}



/* ---- _strcat_s @ 10012a18 size=116 ---- */

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar3 = _Dst;
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        piVar2 = __errno();
        eVar4 = 0x22;
        *piVar2 = 0x22;
        goto LAB_10012a3a;
      }
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_10012a3a:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- _strncpy_s @ 10012a8c size=181 ---- */

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  errno_t eVar4;
  rsize_t rVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_10012ab2:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar5 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar5 = rVar5 - 1;
            } while (rVar5 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar5 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          piVar2 = __errno();
          eVar4 = 0x22;
          *piVar2 = 0x22;
          goto LAB_10012ac3;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10012ab2;
  piVar2 = __errno();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_10012ac3:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}



/* ---- __set_error_mode @ 10012b41 size=75 ---- */

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar2 = DAT_1001e0e4;
      DAT_1001e0e4 = _Mode;
      return iVar2;
    }
    if (_Mode == 3) {
      return DAT_1001e0e4;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}



/* ---- __crtGetStringTypeA_stat @ 10012bc4 size=442 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPWSTR lpWideCharStr;
  void *_Memory;
  undefined1 uStack00000000;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  lpWideCharStr = (LPWSTR)0x0;
  local_c = in_ECX;
  if (DAT_1001eab4 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1001eab4 = 2;
      }
      goto LAB_10012c1f;
    }
    DAT_1001eab4 = 1;
  }
  else {
LAB_10012c1f:
    if ((DAT_1001eab4 == 2) || (DAT_1001eab4 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if (puVar5 != (ushort *)0xffffffff) {
        if (puVar5 != param_5) {
          _Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,(uint *)&param_3
                                         ,(LPSTR)0x0,0);
          if (_Memory == (void *)0x0) goto LAB_10012d6c;
          param_2 = (ulong)_Memory;
        }
        GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4);
        if (_Memory != (void *)0x0) {
          _free(_Memory);
        }
      }
      goto LAB_10012d6c;
    }
    if (DAT_1001eab4 != 1) goto LAB_10012d6c;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10012d6c;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      lpWideCharStr = (LPWSTR)((int)register0x00000010 + -0x18);
      puVar3 = (undefined4 *)((int)register0x00000010 + -0x18);
      if (&uStack00000000 != (undefined1 *)0x18) goto LAB_10012caf;
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
LAB_10012caf:
        lpWideCharStr = (LPWSTR)(puVar3 + 2);
      }
    }
  }
  if (lpWideCharStr != (LPWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_10012d6c:
  iVar4 = __security_check_cookie(local_8 ^ (int)register0x00000010 - 4U);
  return iVar4;
}



/* ---- ___crtGetStringTypeA @ 10012d7e size=66 ---- */

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  _LocaleUpdate a_Stack_e [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(a_Stack_e + -6,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}



/* ---- ___free_lc_time @ 10012dc0 size=405 ---- */

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}



/* ---- ___free_lconv_num @ 10012f55 size=69 ---- */

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1001ddc8) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1001ddcc) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1001ddd0) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}



/* ---- ___free_lconv_mon @ 10012f9a size=142 ---- */

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2008 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1001ddd4) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1001ddd8) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1001dddc) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1001dde0) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1001dde4) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1001dde8) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1001ddec) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}



/* ---- _strcspn @ 10013030 size=70 ---- */

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* ---- _strpbrk @ 10013080 size=64 ---- */

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* ---- ___ansicp @ 100130c0 size=73 ---- */

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2008 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(local_10 + 0xc);
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)(local_10 + 0xc));
  return;
}



/* ---- ___convertcp @ 10013109 size=436 ---- */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2008 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  undefined1 uStack00000000;
  WCHAR WStack_36;
  undefined4 local_34 [5];
  LPWSTR local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(&local_1c)[1].DefaultChar;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_100132ab;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_100132ab;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      local_20 = (LPWSTR)(local_34 + -4);
      puVar4 = local_34 + -4;
      if (&uStack00000000 != (undefined1 *)0x44) goto LAB_100131eb;
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
LAB_100131eb:
        local_20 = (LPWSTR)(puVar4 + 2);
      }
    }
  }
  if (local_20 != (LPWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_100132ab:
  __security_check_cookie(local_8 ^ (uint)(&local_1c)[1].DefaultChar);
  return;
}



/* ---- __alloca_probe_16 @ 100132c0 size=22 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2008 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* ---- __alloca_probe_8 @ 100132d6 size=22 ---- */

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



/* ---- __calloc_impl @ 100132ec size=272 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2008 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      piVar1 = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_1001eb9c == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_1001eb8c)) {
          __lock(4);
          piVar1 = ___sbh_alloc_block(_Size);
          FUN_100133e8();
          if (piVar1 != (int *)0x0) {
            _memset(piVar1,0,(size_t)_Size);
            goto LAB_1001339d;
          }
        }
        else {
LAB_1001339d:
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        piVar1 = HeapAlloc(DAT_1001e8ec,8,(SIZE_T)dwBytes);
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (DAT_1001ea4c == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}



/* ---- FUN_100133e8 @ 100133e8 size=9 ---- */

void FUN_100133e8(void)

{
  FUN_1001103e(4);
  return;
}



/* ---- _realloc @ 1001340a size=524 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_1001eb9c == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100135e3;
      __lock(4);
      local_24 = (uint *)___sbh_find_block((int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_1001eb8c) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)___sbh_find_block((int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_1001e8ec,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_1001354e();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_1001e8ec,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_1001ea4c == 0) {
        piVar4 = __errno();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_10013610;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
    if (local_24 != (uint *)0x0) goto LAB_100135ef;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_100135e3;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_1001e8ec,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_1001ea4c == 0) {
        piVar4 = __errno();
LAB_10013610:
        DVar5 = GetLastError();
        iVar2 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = __errno();
  }
  DVar5 = GetLastError();
  iVar2 = __get_errno_from_oserr(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_100135e3:
  __callnewh(_NewSize);
  piVar4 = __errno();
LAB_100135ef:
  *piVar4 = 0xc;
  return (void *)0x0;
}



/* ---- FUN_1001354e @ 1001354e size=9 ---- */

void FUN_1001354e(void)

{
  FUN_1001103e(4);
  return;
}



/* ---- FUN_10013625 @ 10013625 size=15 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013625(undefined4 param_1)

{
  _DAT_1001eabc = param_1;
  return;
}



/* ---- FUN_10013634 @ 10013634 size=15 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013634(undefined4 param_1)

{
  _DAT_1001eac0 = param_1;
  return;
}



/* ---- ___crtInitCritSecAndSpinCount @ 10013643 size=49 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl ___crtInitCritSecAndSpinCount(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  BOOL BVar1;
  
  BVar1 = InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return BVar1;
}



/* ---- x_ismbbtype_l @ 100136a3 size=83 ---- */

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_100136e7;
  }
  iVar2 = 1;
LAB_100136e7:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}



/* ---- __ismbblead @ 100136f6 size=24 ---- */

/* Library Function - Single Match
    __ismbblead
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}



/* ---- _ValidateRead @ 1001370e size=18 ---- */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2008 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}



/* ---- __global_unwind2 @ 10013720 size=32 ---- */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10013738,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ---- __local_unwind2 @ 10013785 size=132 ---- */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_10013740;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_10013854();
    }
  }
  ExceptionList = local_20;
  return;
}



/* ---- __NLG_Notify1 @ 1001382c size=9 ---- */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1001de18 = param_1;
  DAT_1001de14 = in_EAX;
  DAT_1001de1c = unaff_EBP;
  return in_EAX;
}



/* ---- __NLG_Notify @ 10013835 size=31 ---- */

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1001de18 = param_1;
  DAT_1001de14 = in_EAX;
  DAT_1001de1c = unaff_EBP;
  return;
}



/* ---- FUN_10013854 @ 10013854 size=3 ---- */

void FUN_10013854(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}



/* ---- __fclose_nolock @ 10013857 size=119 ---- */

/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar3 = -1;
  }
  else {
    if ((_File->_flag & 0x83) != 0) {
      iVar3 = __flush(_File);
      __freebuf(_File);
      iVar2 = __fileno(_File);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar3;
}



/* ---- __write_nolock @ 1001394a size=1843 ---- */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR WVar1;
  wchar_t wVar2;
  ulong *puVar3;
  int *piVar4;
  int iVar5;
  _ptiddata p_Var6;
  BOOL BVar7;
  DWORD nNumberOfBytesToWrite;
  int iVar8;
  uint uVar9;
  char cVar10;
  WCHAR *pWVar11;
  char *pcVar12;
  int unaff_EDI;
  WCHAR *pWVar13;
  ushort uVar14;
  UINT local_1ae8;
  uint local_1ae4;
  char local_1add;
  int *local_1adc;
  char *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  char *local_1acc;
  WCHAR *local_1ac8;
  DWORD local_1ac4;
  WCHAR *local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(local_6bc + 0x35c);
  local_1ad0 = _Buf;
  local_1acc = (char *)0x0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_10014070;
  if (_Buf == (void *)0x0) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_10014070;
  }
  piVar4 = &DAT_1001ebc0 + (_FileHandle >> 5);
  iVar8 = (_FileHandle & 0x1fU) * 0x40;
  cVar10 = (char)(*(char *)(*piVar4 + iVar8 + 0x24) * '\x02') >> 1;
  local_1add = cVar10;
  local_1adc = piVar4;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar3 = ___doserrno();
    *puVar3 = 0;
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_10014070;
  }
  if ((*(byte *)(*piVar4 + iVar8 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar5 = __isatty(_FileHandle);
  if ((iVar5 == 0) || ((*(byte *)(iVar8 + 4 + *piVar4) & 0x80) == 0)) {
LAB_10013ce1:
    if ((*(byte *)((undefined4 *)(*piVar4 + iVar8) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar4 + iVar8),local_1ad0,_MaxCharCount,(LPDWORD)&local_1ad8,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_10013fe1:
        local_1ac4 = GetLastError();
      }
      else {
        local_1ac4 = 0;
        local_1acc = local_1ad8;
      }
LAB_10013fed:
      if (local_1acc != (char *)0x0) goto LAB_10014070;
      goto LAB_10013ff6;
    }
    local_1ac4 = 0;
    if (cVar10 == '\0') {
      local_1ac8 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac0 = (WCHAR *)0x0;
          uVar9 = (int)local_1ac8 - (int)local_1ad0;
          pWVar11 = local_1abc;
          do {
            if (_MaxCharCount <= uVar9) break;
            pWVar13 = (WCHAR *)((int)local_1ac8 + 1);
            WVar1 = *local_1ac8;
            uVar9 = uVar9 + 1;
            if ((char)WVar1 == '\n') {
              local_1ad4 = local_1ad4 + 1;
              *(char *)pWVar11 = '\r';
              pWVar11 = (WCHAR *)((int)pWVar11 + 1);
              local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
            }
            *(char *)pWVar11 = (char)WVar1;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
            local_1ac8 = pWVar13;
          } while (local_1ac0 < (WCHAR *)0x13ff);
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_10013fe1;
          local_1acc = local_1acc + (int)local_1ad8;
          if (((int)local_1ad8 < (int)pWVar11 - (int)local_1abc) ||
             (_MaxCharCount <= (uint)((int)local_1ac8 - (int)local_1ad0))) goto LAB_10013fed;
          piVar4 = local_1adc;
        } while( true );
      }
    }
    else {
      local_1ac0 = local_1ad0;
      if (cVar10 == '\x02') {
        if (_MaxCharCount != 0) {
          do {
            local_1ac8 = (WCHAR *)0x0;
            uVar9 = (int)local_1ac0 - (int)local_1ad0;
            pWVar11 = local_1abc;
            do {
              if (_MaxCharCount <= uVar9) break;
              pWVar13 = local_1ac0 + 1;
              WVar1 = *local_1ac0;
              uVar9 = uVar9 + 2;
              if (WVar1 == L'\n') {
                local_1ad4 = local_1ad4 + 2;
                *pWVar11 = L'\r';
                pWVar11 = pWVar11 + 1;
                local_1ac8 = local_1ac8 + 1;
              }
              local_1ac8 = local_1ac8 + 1;
              *pWVar11 = WVar1;
              pWVar11 = pWVar11 + 1;
              local_1ac0 = pWVar13;
            } while (local_1ac8 < (WCHAR *)0x13fe);
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *piVar4),local_1abc,(int)pWVar11 - (int)local_1abc
                              ,(LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_10013fe1;
            local_1acc = local_1acc + (int)local_1ad8;
            if (((int)local_1ad8 < (int)pWVar11 - (int)local_1abc) ||
               (_MaxCharCount <= (uint)((int)local_1ac0 - (int)local_1ad0))) goto LAB_10013fed;
            piVar4 = local_1adc;
          } while( true );
        }
      }
      else if (_MaxCharCount != 0) {
        do {
          local_1ac8 = (WCHAR *)0x0;
          uVar9 = (int)local_1ac0 - (int)local_1ad0;
          pWVar11 = local_6bc;
          do {
            if (_MaxCharCount <= uVar9) break;
            WVar1 = *local_1ac0;
            local_1ac0 = local_1ac0 + 1;
            uVar9 = uVar9 + 2;
            if (WVar1 == L'\n') {
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              local_1ac8 = local_1ac8 + 1;
            }
            local_1ac8 = local_1ac8 + 1;
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
          } while (local_1ac8 < (WCHAR *)0x6a8);
          pcVar12 = (char *)0x0;
          iVar5 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar11 - (int)local_6bc) / 2,
                                      local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar5 == 0) goto LAB_10013fe1;
          do {
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),local_1414 + (int)pcVar12,
                              iVar5 - (int)pcVar12,(LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
            if (BVar7 == 0) {
              local_1ac4 = GetLastError();
              break;
            }
            pcVar12 = pcVar12 + (int)local_1ad8;
          } while ((int)pcVar12 < iVar5);
        } while ((iVar5 <= (int)pcVar12) &&
                (local_1acc = (char *)((int)local_1ac0 - (int)local_1ad0),
                local_1acc < _MaxCharCount));
        goto LAB_10013fed;
      }
    }
  }
  else {
    p_Var6 = __getptd();
    local_1ae4 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar8 + *piVar4),&local_1ae8);
    if ((BVar7 == 0) || ((local_1ae4 != 0 && (cVar10 == '\0')))) goto LAB_10013ce1;
    local_1ae8 = GetConsoleCP();
    local_1ac8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac0 = (WCHAR *)0x0;
      pWVar11 = local_1ad0;
      do {
        piVar4 = local_1adc;
        if (local_1add == '\0') {
          cVar10 = (char)*pWVar11;
          local_1ae4 = (uint)(cVar10 == '\n');
          iVar5 = *local_1adc + iVar8;
          if (*(int *)(iVar5 + 0x38) == 0) {
            iVar5 = _isleadbyte(CONCAT22((short)((uint)(int)cVar10 >> 0x10),(short)cVar10));
            if (iVar5 == 0) {
              uVar14 = 1;
              pWVar13 = pWVar11;
              goto LAB_10013b48;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar11)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar8 + 0x34 + *piVar4) = (char)*pWVar11;
              *(undefined4 *)(iVar8 + 0x38 + *piVar4) = 1;
              break;
            }
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar11,2);
            if (iVar5 == -1) break;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar5 + 0x34);
            *(undefined4 *)(iVar5 + 0x38) = 0;
            uVar14 = 2;
            pWVar13 = &local_10;
            local_10._1_1_ = cVar10;
LAB_10013b48:
            iVar5 = _mbtowc((wchar_t *)&local_1ac4,(char *)pWVar13,(uint)uVar14);
            if (iVar5 == -1) break;
          }
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_1ac0 = (WCHAR *)((int)local_1ac0 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_1ae8,0,(LPCWSTR)&local_1ac4,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ac8,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_10013fe1;
          local_1acc = (char *)((int)local_1ac0 + local_1ad4);
          if ((int)local_1ac8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae4 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar8 + *local_1adc),&local_10,1,(LPDWORD)&local_1ac8,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_10013fe1;
            if ((int)local_1ac8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            local_1ac4 = (DWORD)(ushort)*pWVar11;
            local_1ae4 = (uint)(*pWVar11 == L'\n');
            pWVar11 = pWVar11 + 1;
            local_1ac0 = local_1ac0 + 1;
          }
          if ((local_1add == '\x01') || (local_1add == '\x02')) {
            wVar2 = __putwch_nolock((wchar_t)local_1ac4);
            if (wVar2 != (wchar_t)local_1ac4) goto LAB_10013fe1;
            local_1acc = local_1acc + 2;
            if (local_1ae4 != 0) {
              local_1ac4 = 0xd;
              wVar2 = __putwch_nolock(L'\r');
              if (wVar2 != (wchar_t)local_1ac4) goto LAB_10013fe1;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac0 < _MaxCharCount);
      goto LAB_10013fed;
    }
LAB_10013ff6:
    if (local_1ac4 != 0) {
      if (local_1ac4 == 5) {
        piVar4 = __errno();
        *piVar4 = 9;
        puVar3 = ___doserrno();
        *puVar3 = 5;
      }
      else {
        __dosmaperr(local_1ac4);
      }
      goto LAB_10014070;
    }
    piVar4 = local_1adc;
  }
  if (((*(byte *)(iVar8 + 4 + *piVar4) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar4 = __errno();
    *piVar4 = 0x1c;
    puVar3 = ___doserrno();
    *puVar3 = 0;
  }
LAB_10014070:
  iVar8 = __security_check_cookie(local_8 ^ (uint)(local_6bc + 0x35c));
  return iVar8;
}



/* ---- __write @ 1001407d size=210 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2008 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1001eba0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_1001414f();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* ---- FUN_1001414f @ 1001414f size=10 ---- */

void FUN_1001414f(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* ---- __commit @ 10014159 size=215 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2008 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1001eba0)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar4 + 4 + (&DAT_1001ebc0)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_1001ebc0)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_1001421b;
          puVar3 = ___doserrno();
          *puVar3 = local_20;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_1001421b:
        FUN_10014230();
        return local_20;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* ---- FUN_10014230 @ 10014230 size=10 ---- */

void FUN_10014230(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* ---- __lseeki64_nolock @ 1001423a size=133 ---- */

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_1001426b:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_1001426b;
      }
    }
    pbVar1 = (byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}



/* ---- __lseeki64 @ 100142bf size=271 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1001eba0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        puVar1 = ___doserrno();
        *puVar1 = 0;
        piVar2 = __errno();
        *piVar2 = 9;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_100143ce();
      }
      goto LAB_100143c8;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_100143c8:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}



/* ---- FUN_100143ce @ 100143ce size=10 ---- */

void FUN_100143ce(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* ---- __getbuf @ 100143d8 size=73 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_1001e428 = _DAT_1001e428 + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}



/* ---- __alloca_probe @ 10014430 size=43 ---- */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2008 Release */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_res0;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&local_res0 - (int)in_EAX & ~-(uint)(&local_res0 < in_EAX));
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = _local_res0;
  return;
}



/* ---- __close_nolock @ 1001445b size=156 ---- */

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_1001ebc0 + 0x84) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_1001ebc0 + 0x44) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_100144c1;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100144c3;
    }
  }
LAB_100144c1:
  DVar4 = 0;
LAB_100144c3:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}



/* ---- __close @ 100144f7 size=195 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2008 Release */

int __cdecl __close(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1001eba0)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_1001ebc0)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_100145ba();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}



/* ---- FUN_100145ba @ 100145ba size=10 ---- */

void FUN_100145ba(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}



/* ---- __freebuf @ 100145c4 size=49 ---- */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2008 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ---- __putwch_nolock @ 100145f5 size=197 ---- */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2008 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(local_10 + 0xc);
  if (DAT_1001ded0 != 0) {
    if (DAT_1001df44 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_1001df44 == (HANDLE)0xffffffff) goto LAB_100146a1;
    BVar2 = WriteConsoleW(DAT_1001df44,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_1001ded0 = 1;
      goto LAB_100146a1;
    }
    if ((DAT_1001ded0 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_100146a1;
    DAT_1001ded0 = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_1001df44 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_1001df44,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_100146a1:
  wVar1 = __security_check_cookie(local_8 ^ (uint)(local_10 + 0xc));
  return wVar1;
}



/* ---- __mbtowc_l @ 100146ba size=279 ---- */

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        if (_DstCh != (wchar_t *)0x0) {
          *_DstCh = (ushort)(byte)*_SrcCh;
        }
LAB_10014709:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 1;
      }
      iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
      if (iVar2 == 0) {
        iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                    (uint)(_DstCh != (wchar_t *)0x0));
        if (iVar2 != 0) goto LAB_10014709;
      }
      else {
        pwVar1 = (local_14.locinfo)->locale_name[3];
        if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
            (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,_DstCh
                                         ,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
           (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if (local_8 == '\0') {
            return (int)pwVar1;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return (int)pwVar1;
        }
      }
      piVar3 = __errno();
      *piVar3 = 0x2a;
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return -1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}



/* ---- _mbtowc @ 100147d1 size=26 ---- */

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2008 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}



/* ---- __free_osfhnd @ 100147eb size=134 ---- */

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_1001eba0)) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    piVar1 = (int *)((&DAT_1001ebc0)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1001e0e8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001484d;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001484d:
      *(undefined4 *)(iVar3 + (&DAT_1001ebc0)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}



/* ---- __get_osfhandle @ 10014871 size=119 ---- */

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2008 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  intptr_t *piVar3;
  intptr_t iVar4;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if (((_FileHandle < 0) || (DAT_1001eba0 <= (uint)_FileHandle)) ||
     (piVar3 = (intptr_t *)((_FileHandle & 0x1fU) * 0x40 + (&DAT_1001ebc0)[_FileHandle >> 5]),
     (*(byte *)(piVar3 + 1) & 1) == 0)) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar4 = -1;
  }
  else {
    iVar4 = *piVar3;
  }
  return iVar4;
}



/* ---- ___lock_fhandle @ 100148e8 size=146 ---- */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2008 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  BOOL BVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x40 + (&DAT_1001ebc0)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(iVar2 + 0xc),4000);
      local_20 = (uint)(BVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_1001497f();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_1001ebc0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  }
  return local_20;
}



/* ---- FUN_1001497f @ 1001497f size=9 ---- */

void FUN_1001497f(void)

{
  FUN_1001103e(10);
  return;
}



/* ---- __unlock_fhandle @ 10014988 size=39 ---- */

/* Library Function - Single Match
    __unlock_fhandle
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1001ebc0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return;
}



/* ---- ___ascii_strnicmp @ 100149b0 size=97 ---- */

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_10014a01;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_10014a01:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}



/* ---- ___initconout @ 10014a11 size=31 ---- */

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2008 Release */

void __cdecl ___initconout(void)

{
  DAT_1001df44 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}



/* ---- RtlUnwind @ 10014b2e size=6 ---- */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10014b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ---- FUN_10014b40 @ 10014b40 size=17 ---- */

undefined4 __fastcall FUN_10014b40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* ---- FUN_10014b60 @ 10014b60 size=19 ---- */

int __fastcall FUN_10014b60(int param_1)

{
  return param_1 + 0x94;
}



/* ---- FUN_10014b80 @ 10014b80 size=22 ---- */

void __thiscall FUN_10014b80(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x3c) = param_1;
  return;
}



/* ---- FUN_10014ba0 @ 10014ba0 size=17 ---- */

undefined4 __fastcall FUN_10014ba0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* ---- FUN_10014bc0 @ 10014bc0 size=22 ---- */

void __thiscall FUN_10014bc0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x38) = param_1;
  return;
}



/* ---- FUN_10014be0 @ 10014be0 size=22 ---- */

void __fastcall FUN_10014be0(int param_1)

{
  FUN_10001e70((void *)(param_1 + 0x78));
  return;
}



/* ---- FUN_10014c00 @ 10014c00 size=22 ---- */

void __fastcall FUN_10014c00(int param_1)

{
  FUN_10001e70((void *)(param_1 + 0x5c));
  return;
}



/* ---- FUN_10014c20 @ 10014c20 size=22 ---- */

void __fastcall FUN_10014c20(int param_1)

{
  FUN_10001e70((void *)(param_1 + 0x40));
  return;
}



/* ---- FUN_10014c40 @ 10014c40 size=91 ---- */

undefined4 __fastcall FUN_10014c40(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_14 [8];
  int local_c [2];
  
  FUN_10008fa0((void *)(param_1 + 0xec),local_c);
  piVar1 = FUN_10008e20((void *)(param_1 + 0xd4),local_14);
  uVar2 = FUN_10004ce0((void *)(param_1 + 0xec),piVar1);
  if ((uVar2 & 0xff) == 0) {
    uVar3 = FUN_10008f80((int *)(param_1 + 0xec));
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ---- FUN_10014ca0 @ 10014ca0 size=109 ---- */

undefined4 __fastcall FUN_10014ca0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  puVar1 = FUN_100075e0((void *)(param_1 + 0xd4),local_c);
  uVar4 = puVar1[1];
  *(undefined4 *)(param_1 + 0xec) = *puVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  piVar2 = FUN_10008e20((void *)(param_1 + 0xd4),local_14);
  uVar3 = FUN_10004ce0((void *)(param_1 + 0xec),piVar2);
  if ((uVar3 & 0xff) == 0) {
    uVar4 = FUN_10008f80((int *)(param_1 + 0xec));
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- FUN_10014d10 @ 10014d10 size=91 ---- */

undefined4 __fastcall FUN_10014d10(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_14 [8];
  int local_c [2];
  
  FUN_10008fa0((void *)(param_1 + 0xcc),local_c);
  piVar1 = FUN_10008e20((void *)(param_1 + 0xb4),local_14);
  uVar2 = FUN_10004ce0((void *)(param_1 + 0xcc),piVar1);
  if ((uVar2 & 0xff) == 0) {
    uVar3 = FUN_10008f80((int *)(param_1 + 0xcc));
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* ---- FUN_10014d70 @ 10014d70 size=109 ---- */

undefined4 __fastcall FUN_10014d70(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  puVar1 = FUN_100075e0((void *)(param_1 + 0xb4),local_c);
  uVar4 = puVar1[1];
  *(undefined4 *)(param_1 + 0xcc) = *puVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  piVar2 = FUN_10008e20((void *)(param_1 + 0xb4),local_14);
  uVar3 = FUN_10004ce0((void *)(param_1 + 0xcc),piVar2);
  if ((uVar3 & 0xff) == 0) {
    uVar4 = FUN_10008f80((int *)(param_1 + 0xcc));
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* ---- FUN_10014de0 @ 10014de0 size=103 ---- */

void __cdecl
FUN_10014de0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
            basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int local_1c [4];
  int local_c [2];
  
  FUN_10008cd0(param_2);
  FID_conflict_begin(param_1);
  while( true ) {
    piVar2 = (int *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end
                              (param_1);
    bVar1 = FUN_10009040(local_c,piVar2);
    if (!bVar1) break;
    pcVar3 = (char *)FUN_10008fe0(local_c);
    iVar4 = _toupper((int)*pcVar3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (param_2,(char)iVar4);
    FUN_10009000(local_c,local_1c);
  }
  return;
}



/* ---- FUN_10014e50 @ 10014e50 size=28 ---- */

void __thiscall FUN_10014e50(void *this,char *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x78),
             param_1);
  return;
}



/* ---- FUN_10014e70 @ 10014e70 size=28 ---- */

void __thiscall FUN_10014e70(void *this,char *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x5c),
             param_1);
  return;
}



/* ---- FUN_10014e90 @ 10014e90 size=123 ---- */

void __thiscall FUN_10014e90(void *this,char *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016892;
  local_10 = ExceptionList;
  local_14 = DAT_1001d02c ^ (uint)(local_30 + 0x2c);
  ExceptionList = &local_10;
  basic_string<>(local_30,param_1);
  local_8 = 0;
  FUN_10014de0(local_30,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        ((int)this + 0x40));
  local_8 = 0xffffffff;
  FUN_10001e00(local_30);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)(local_30 + 0x2c));
  return;
}



/* ---- FUN_10014f10 @ 10014f10 size=31 ---- */

void __thiscall FUN_10014f10(void *this,void *param_1)

{
  FUN_10001f60((void *)((int)this + 0x94),param_1);
  return;
}



/* ---- FUN_10014f30 @ 10014f30 size=456 ---- */

void __fastcall
FUN_10014f30(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1001691d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 8;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_1,"");
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_1 + 0x1c,"")
  ;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_1 + 0x78,"")
  ;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  local_14 = 0;
  while( true ) {
    uVar1 = FUN_10008e50((int)(param_1 + 0xb4));
    if (uVar1 <= local_14) break;
    pvVar2 = (void *)FUN_10008e70(param_1 + 0xb4,local_14);
    FUN_100020f0(pvVar2);
    local_14 = local_14 + 1;
  }
  FUN_10008f20(param_1 + 0xb4);
  iVar3 = FUN_10002e10((int)(param_1 + 0x94));
  if (iVar3 != 0) {
    FUN_100020f0(param_1 + 0x94);
  }
  local_18 = 0;
  while( true ) {
    uVar1 = FUN_10008e50((int)(param_1 + 0xd4));
    if (uVar1 <= local_18) break;
    pvVar2 = (void *)FUN_10008e70(param_1 + 0xd4,local_18);
    FUN_100020f0(pvVar2);
    local_18 = local_18 + 1;
  }
  FUN_10008f20(param_1 + 0xd4);
  local_8._0_1_ = 7;
  FUN_10008e00((undefined4 *)(param_1 + 0xd4));
  local_8._0_1_ = 6;
  FUN_10008e00((undefined4 *)(param_1 + 0xb4));
  local_8._0_1_ = 5;
  ~function<>((undefined4 *)(param_1 + 0x94));
  local_8._0_1_ = 4;
  FUN_10001e00(param_1 + 0x78);
  local_8._0_1_ = 3;
  FUN_10001e00(param_1 + 0x5c);
  local_8._0_1_ = 2;
  FUN_10001e00(param_1 + 0x40);
  local_8._0_1_ = 1;
  FUN_10001e00(param_1 + 0x1c);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10001e00(param_1);
  local_8 = 0xffffffff;
  FUN_100152a0();
  ExceptionList = local_10;
  return;
}



/* ---- FUN_10015100 @ 10015100 size=260 ---- */

allocator<char> * __thiscall FUN_10015100(void *this,char *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001699e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100152b0(this);
  local_8 = 0;
  basic_string<>(this);
  local_8._0_1_ = 1;
  basic_string<>((allocator<char> *)((int)this + 0x1c));
  local_8._0_1_ = 2;
  basic_string<>((allocator<char> *)((int)this + 0x40));
  local_8._0_1_ = 3;
  basic_string<>((allocator<char> *)((int)this + 0x5c));
  local_8._0_1_ = 4;
  basic_string<>((allocator<char> *)((int)this + 0x78));
  local_8._0_1_ = 5;
  FUN_10001ed0((undefined4 *)((int)this + 0x94));
  local_8._0_1_ = 6;
  FUN_100077a0((undefined4 *)((int)this + 0xac));
  FUN_10008d90((undefined4 *)((int)this + 0xb4));
  local_8._0_1_ = 7;
  FUN_100077a0((undefined4 *)((int)this + 0xcc));
  FUN_10008d90((undefined4 *)((int)this + 0xd4));
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_100077a0((undefined4 *)((int)this + 0xec));
  FUN_10014e90(this,param_1);
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_10015210 @ 10015210 size=31 ---- */

void __thiscall FUN_10015210(void *this,void *param_1)

{
  FUN_10008ea0((void *)((int)this + 0xd4),param_1);
  return;
}



/* ---- FUN_10015230 @ 10015230 size=45 ---- */

void __thiscall FUN_10015230(void *this,void *param_1)

{
  FUN_10008f20((void *)((int)this + 0xb4));
  FUN_10008ea0((void *)((int)this + 0xb4),param_1);
  return;
}



/* ---- FUN_10015260 @ 10015260 size=17 ---- */

void __cdecl FUN_10015260(void *param_1)

{
  XSystem::MPHeap::Free((_THandle *)0x0,param_1);
  return;
}



/* ---- FUN_10015280 @ 10015280 size=17 ---- */

void __cdecl FUN_10015280(uint param_1)

{
  XSystem::MPHeap::Alloc((_THandle *)0x0,param_1);
  return;
}



/* ---- FUN_100152a0 @ 100152a0 size=11 ---- */

void FUN_100152a0(void)

{
  return;
}



/* ---- FUN_100152b0 @ 100152b0 size=14 ---- */

undefined4 __fastcall FUN_100152b0(undefined4 param_1)

{
  return param_1;
}



/* ---- FUN_100152c0 @ 100152c0 size=154 ---- */

uint __cdecl FUN_100152c0(_THandle *param_1)

{
  int iVar1;
  uint extraout_EAX;
  uint uVar2;
  uint extraout_EAX_00;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = XStream::GetLength(param_1);
  if (iVar1 < 4) {
    local_c = XStream::GetLength(param_1);
    uVar2 = 0;
    if (local_c != 0) {
      local_10 = 0;
      XStream::Peek(param_1,&local_10,local_c);
      XPlatform::SetLastError(0x6000f);
      uVar2 = extraout_EAX;
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    local_8 = 0;
    XStream::Peek(param_1,&local_8,4);
    local_8 = Ordinal_14(local_8);
    iVar1 = XStream::GetLength(param_1);
    if (iVar1 + -4 < local_8) {
      XPlatform::SetLastError(0x6000f);
      uVar2 = extraout_EAX_00 & 0xffffff00;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)(iVar1 + -4) >> 8),1);
    }
  }
  return uVar2;
}



/* ---- FUN_10015360 @ 10015360 size=20 ---- */

void __fastcall FUN_10015360(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



/* ---- FUN_10015380 @ 10015380 size=24 ---- */

undefined4 * __thiscall FUN_10015380(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return this;
}



/* ---- FUN_100153a0 @ 100153a0 size=571 ---- */

void __thiscall FUN_100153a0(void *this,_THandle *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_9c [2];
  int local_94;
  undefined4 local_90;
  int local_8c [2];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  int local_6c;
  int local_68;
  void *local_64;
  int local_60;
  undefined4 local_5c;
  CDS_AnsSelect local_58;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016a95;
  local_10 = ExceptionList;
  uVar2 = DAT_1001d02c ^ (uint)(local_74 + 0x70);
  ExceptionList = &local_10;
  CDS_AnsSelect::CDS_AnsSelect(&local_58);
  local_8 = 0;
  uVar3 = CDS_AnsSelect::vfunction7(&local_58,param_1);
  if ((uVar3 & 0xff) == 0) {
    XPlatform::SetLastError(0x6001e);
    _printf("load fail\n",uVar2);
  }
  else {
    FUN_10002a80(*(void **)this,&local_60,&local_58.CDS_AnsSelect_data.offset_0x8);
    piVar4 = FUN_10003120(*(void **)this,local_74);
    bVar1 = FUN_100050e0(&local_60,piVar4);
    if (bVar1) {
      iVar5 = FUN_10007780(&local_60);
      local_64 = *(void **)(iVar5 + 4);
      FUN_10014bc0(*(void **)((int)local_64 + 8),local_58.CDS_AnsSelect_data.offset_0xc);
      if (local_58.CDS_AnsSelect_data.offset_0xc == 0) {
        FUN_10014f10(*(void **)((int)local_64 + 8),&local_58.CDS_AnsSelect_data.offset_0x10);
        FUN_100077a0(&local_6c);
        piVar4 = FUN_100075e0(&local_58.CDS_AnsSelect_data.offset_0x28,local_7c);
        local_6c = *piVar4;
        local_68 = piVar4[1];
        while( true ) {
          piVar4 = FUN_10008e20(&local_58.CDS_AnsSelect_data.offset_0x28,local_84);
          bVar1 = FUN_10003fb0(&local_6c,piVar4);
          if (!bVar1) break;
          piVar4 = (int *)FUN_10008f80(&local_6c);
          FUN_10015210(*(void **)((int)local_64 + 8),(void *)(*piVar4 + 0xc));
          FUN_100077c0(&local_6c,local_8c);
        }
      }
      if (*(char *)((int)local_64 + 5) == '\x01') {
        FUN_10007530((int)local_64);
      }
      else {
        if (*(int *)((int)local_64 + 0xc) != 0) {
          (**(code **)((int)local_64 + 0xc))
                    (*(undefined4 *)this,*(undefined4 *)((int)local_64 + 8),
                     *(undefined4 *)((int)local_64 + 0x10));
        }
        local_94 = local_60;
        local_90 = local_5c;
        FUN_100022a0(*(void **)this,local_9c,local_60,local_5c);
        if (local_64 != (void *)0x0) {
          FUN_10001d20(local_64,1);
        }
      }
    }
    else {
      XPlatform::SetLastError(0x6001e);
      _printf("no tid in wait queue [%d]\n",local_58.CDS_AnsSelect_data.offset_0x8);
    }
    XPlatform::SetLastError(local_58.CDS_AnsSelect_data.offset_0xc);
  }
  local_8 = 0xffffffff;
  CDS_AnsSelect::~CDS_AnsSelect(&local_58);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_100155e0 @ 100155e0 size=276 ---- */

undefined4 __thiscall FUN_100155e0(void *this,_THandle *param_1)

{
  undefined4 local_28;
  int local_20;
  undefined4 local_1c [2];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016abb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)this == 0) {
    _printf("dispatcher has invalid connector handle\n",DAT_1001d02c ^ (uint)(local_1c + 6));
    local_28 = 0xffffffff;
  }
  else {
    FUN_100076b0(local_1c,*(int *)this + 0x20,'\x01');
    local_8 = 0;
    local_14 = 0;
    XStream::Read(param_1,&local_14,4);
    local_20 = 0;
    XStream::Peek(param_1,&local_20,4);
    local_20 = FUN_10005910(local_20);
    if (local_20 == 0x8d1a6da) {
      FUN_100153a0(this,param_1);
    }
    else {
      XStream::GetLength(param_1);
      XStream::Clear(param_1);
      _printf("unknown message id\n");
      XPlatform::SetLastError(0x6001e);
    }
    local_28 = 0;
    local_8 = 0xffffffff;
    FUN_10007720(local_1c);
  }
  ExceptionList = local_10;
  return local_28;
}



/* ---- FUN_10015700 @ 10015700 size=69 ---- */

void FUN_10015700(undefined4 param_1,int param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) == param_2) {
    if (param_2 != 0) {
      XInNetwork::Link::Release(*(_THandle **)(param_3 + 0xc));
      *(undefined4 *)(param_3 + 0xc) = 0;
    }
  }
  else {
    XPlatform::SetLastError(0x6000f);
  }
  return;
}



/* ---- FUN_10015750 @ 10015750 size=93 ---- */

void FUN_10015750(undefined4 param_1,_THandle *param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) == 0) {
    if (param_2 != (_THandle *)0x0) {
      *(_THandle **)(param_3 + 0xc) = param_2;
      XInNetwork::Link::AddRef(*(_THandle **)(param_3 + 0xc));
      XInNetwork::Link::Recv(param_2,0x400);
      XSystem::Threading::AutoResetEvent::Set((AutoResetEvent *)(param_3 + 0x14));
    }
  }
  else {
    XPlatform::SetLastError(0x6000f);
  }
  return;
}



/* ---- FUN_100157b0 @ 100157b0 size=120 ---- */

void __fastcall FUN_100157b0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    XInNetwork::Acceptor::Stop(*(_THandle **)(param_1 + 8));
    XInNetwork::Acceptor::DestroyHandle(*(_THandle **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    XInNetwork::Connector::DestroyHandle(*(_THandle **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    XSystem::ThreadPool::DestroyHandle(*(_THandle **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* ---- FUN_10015830 @ 10015830 size=85 ---- */

undefined4 __thiscall FUN_10015830(void *this,_THandle *param_1)

{
  int iVar1;
  _XMemory *p_Var2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    XPlatform::SetLastError(0x60011);
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = XStream::GetLength(param_1);
    p_Var2 = XStream::GetXMemory(param_1);
    XInNetwork::Link::Send(*(_THandle **)((int)this + 0xc),p_Var2,iVar1);
    XPlatform::SetLastError(0);
    uVar3 = 0;
  }
  return uVar3;
}



/* ---- FUN_10015890 @ 10015890 size=40 ---- */

undefined4 __fastcall FUN_10015890(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    XInNetwork::Link::Close(*(_THandle **)(param_1 + 0xc));
    uVar1 = 0;
  }
  return uVar1;
}



/* ---- FUN_100158c0 @ 100158c0 size=163 ---- */

undefined4 __thiscall FUN_100158c0(void *this,char *param_1,char *param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0x60012;
  }
  else {
    uVar2 = FUN_1000b038(param_2);
    bVar1 = XInNetwork::Connector::Connect(*(_THandle **)((int)this + 4),param_1,uVar2);
    if (bVar1) {
      bVar1 = XSystem::Threading::AutoResetEvent::Wait((AutoResetEvent *)((int)this + 0x14),10000);
      if (bVar1) {
        XSystem::Threading::AutoResetEvent::Reset((AutoResetEvent *)((int)this + 0x14));
        XPlatform::SetLastError(0);
        uVar3 = 0;
      }
      else {
        XSystem::Threading::AutoResetEvent::Reset((AutoResetEvent *)((int)this + 0x14));
        XPlatform::SetLastError(0x60012);
        uVar3 = 0x60012;
      }
    }
    else {
      XPlatform::SetLastError(0x60012);
      uVar3 = 0x60012;
    }
  }
  return uVar3;
}



/* ---- ~Socket @ 10015970 size=112 ---- */

void __thiscall CDS::ClientConnector::Impl::Socket::~Socket(Socket *this)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10016848;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 1;
  FUN_100157b0((int)this);
  local_8 = local_8 & 0xffffff00;
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)&(this->Socket_data).field_0x18);
  local_8 = 0xffffffff;
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)&(this->Socket_data).field_0x10);
  ExceptionList = local_10;
  return;
}



/* ---- Socket @ 100159e0 size=151 ---- */

Socket * __thiscall CDS::ClientConnector::Impl::Socket::Socket(Socket *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001686f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Socket_data).offset_0x0 = (_THandle *)0x0;
  (this->Socket_data).offset_0x4 = (_THandle *)0x0;
  (this->Socket_data).offset_0x8 = 0;
  XSystem::Threading::AutoResetEvent::AutoResetEvent
            ((AutoResetEvent *)&(this->Socket_data).field_0x10,false);
  local_8 = 0;
  XSystem::Threading::CriticalSection::CriticalSection
            ((CriticalSection *)&(this->Socket_data).field_0x18,4000);
  (this->Socket_data).offset_0x14 = param_1;
  ExceptionList = local_10;
  return this;
}



/* ---- FUN_10015a80 @ 10015a80 size=129 ---- */

void FUN_10015a80(undefined4 param_1,_THandle *param_2,int param_3)

{
  _THandle *p_Var1;
  uint uVar2;
  int iVar3;
  
  if (*(_THandle **)(param_3 + 0xc) != param_2) {
    XPlatform::SetLastError(0x6000f);
  }
  p_Var1 = XInNetwork::Link::LockReadStream(param_2);
  while (uVar2 = FUN_100152c0(p_Var1), (uVar2 & 0xff) != 0) {
    iVar3 = FUN_100155e0(*(void **)(param_3 + 0x18),p_Var1);
    if (iVar3 < 0) {
      XPlatform::SetLastError(0x6000f);
    }
  }
  XInNetwork::Link::UnlockReadStream(param_2);
  XInNetwork::Link::Recv(param_2,0x400);
  return;
}



/* ---- FUN_10015b10 @ 10015b10 size=241 ---- */

uint __fastcall FUN_10015b10(void *param_1)

{
  bool bVar1;
  uint uVar2;
  _THandle *p_Var3;
  _THandle *p_Var4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  undefined3 extraout_var;
  uint extraout_EAX_02;
  _func_void__THandle_ptr__THandle_ptr_void_ptr *local_10;
  _func_void__THandle_ptr__THandle_ptr_void_ptr *local_c;
  _func_void__THandle_ptr__THandle_ptr_void_ptr *local_8;
  
  if (*(int *)((int)param_1 + 4) == 0) {
    p_Var3 = XSystem::ThreadPool::CreateHandle(2);
    *(_THandle **)((int)param_1 + 0x10) = p_Var3;
    p_Var4 = XInNetwork::Connector::CreateHandle(*(_THandle **)((int)param_1 + 0x10));
    *(_THandle **)((int)param_1 + 4) = p_Var4;
    if (*(int *)((int)param_1 + 4) == 0) {
      XPlatform::SetLastError(0x6000f);
      uVar2 = extraout_EAX & 0xffffff00;
    }
    else {
      local_8 = FUN_10015a80;
      bVar1 = XInNetwork::Connector::SetOnReceived
                        (*(_THandle **)((int)param_1 + 4),&local_8,param_1);
      if (bVar1) {
        local_c = FUN_10015750;
        bVar1 = XInNetwork::Connector::SetOnConnected
                          (*(_THandle **)((int)param_1 + 4),&local_c,param_1);
        if (bVar1) {
          local_10 = FUN_10015700;
          bVar1 = XInNetwork::Connector::SetOnDisconnected
                            (*(_THandle **)((int)param_1 + 4),&local_10,param_1);
          if (bVar1) {
            uVar2 = CONCAT31(extraout_var,1);
          }
          else {
            XPlatform::SetLastError(0x6000f);
            uVar2 = extraout_EAX_02 & 0xffffff00;
          }
        }
        else {
          XPlatform::SetLastError(0x6000f);
          uVar2 = extraout_EAX_01 & 0xffffff00;
        }
      }
      else {
        XPlatform::SetLastError(0x6000f);
        uVar2 = extraout_EAX_00 & 0xffffff00;
      }
    }
  }
  else {
    uVar2 = (uint)param_1 & 0xffffff00;
  }
  return uVar2;
}



/* ---- FUN_10015c10 @ 10015c10 size=22 ---- */

void __fastcall FUN_10015c10(int param_1)

{
  FUN_10015890(*(int *)(param_1 + 0x24));
  return;
}



/* ---- FUN_10015c30 @ 10015c30 size=95 ---- */

void __thiscall FUN_10015c30(void *this,char *param_1,ushort param_2)

{
  char local_18 [16];
  undefined4 local_8;
  
  local_8 = DAT_1001d02c ^ (uint)(local_18 + 0x14);
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = 0;
  FUN_100055f0((uint)param_2,local_18,10);
  FUN_100158c0(*(void **)((int)this + 0x24),param_1,local_18);
  __security_check_cookie(local_8 ^ (uint)(local_18 + 0x14));
  return;
}



/* ---- FUN_10015c90 @ 10015c90 size=522 ---- */

void __thiscall FUN_10015c90(void *this,int param_1)

{
  char *pcVar1;
  _THandle *p_Var2;
  int iVar3;
  void *local_bc;
  undefined1 local_b8 [44];
  undefined1 local_8c [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_74 [28];
  undefined1 local_58 [24];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [32];
  uint local_20;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100169c4;
  local_10 = ExceptionList;
  local_20 = DAT_1001d02c ^ (uint)(local_40 + 0x3c);
  ExceptionList = &local_10;
  CDS_ReqSelect::CDS_ReqSelect((CDS_ReqSelect *)local_b8);
  local_8 = 0;
  local_b8._12_4_ = FUN_10014ba0(param_1);
  pcVar1 = (char *)FUN_10014c20(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_b8 + 0x10),
             pcVar1);
  pcVar1 = (char *)FUN_10014c00(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_74,pcVar1);
  local_18 = (void *)FUN_10014b60(param_1);
  if (local_18 != (void *)0x0) {
    FUN_10001f60(local_8c,local_18);
  }
  local_bc = (void *)FUN_10014d70(param_1);
  while (local_bc != (void *)0x0) {
    FUN_10001f60(local_58,local_bc);
    local_bc = (void *)FUN_10014d10(param_1);
  }
  pcVar1 = (char *)FUN_10014be0(param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_40,pcVar1);
  p_Var2 = XStream::CreateHandle();
  if (p_Var2 == (_THandle *)0x0) {
    local_8 = 0xffffffff;
    CDS_ReqSelect::~CDS_ReqSelect((CDS_ReqSelect *)local_b8);
  }
  else {
    iVar3 = CDS_ReqSelect::vfunction5((CDS_ReqSelect *)local_b8);
    local_1c = FUN_10005610(iVar3);
    XStream::Write(p_Var2,&local_1c,4);
    CDS_ReqSelect::vfunction6((CDS_ReqSelect *)local_b8,p_Var2);
    local_14 = FUN_10015830(*(void **)((int)this + 0x24),p_Var2);
    XStream::DestroyHandle(p_Var2);
    if (local_14 < 0) {
      XPlatform::SetLastError(0x60018);
      local_8 = 0xffffffff;
      CDS_ReqSelect::~CDS_ReqSelect((CDS_ReqSelect *)local_b8);
    }
    else {
      local_8 = 0xffffffff;
      CDS_ReqSelect::~CDS_ReqSelect((CDS_ReqSelect *)local_b8);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_20 ^ (uint)(local_40 + 0x3c));
  return;
}



/* ---- FUN_10015ea0 @ 10015ea0 size=264 ---- */

undefined4 __thiscall FUN_10015ea0(void *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016a1d;
  local_10 = ExceptionList;
  uVar1 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  this_00 = (void *)FUN_1000a903(0x18);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_2c = (uint *)0x0;
  }
  else {
    local_2c = FUN_10001580(this_00,param_1,param_2,param_3);
  }
  local_8 = 0xffffffff;
  iVar2 = FUN_10015c90(this,param_1);
  if (iVar2 == 0) {
    XSystem::Threading::CriticalSection::Lock((CriticalSection *)((int)this + 0x20));
    puVar4 = (undefined4 *)FUN_10002180(this,(int *)local_2c);
    *puVar4 = local_2c;
    XSystem::Threading::CriticalSection::Unlock((CriticalSection *)((int)this + 0x20));
    uVar3 = 0;
  }
  else {
    _printf("select return fail\n",uVar1);
    XPlatform::SetLastError(0x60018);
    if (local_2c != (uint *)0x0) {
      FUN_10001d20(local_2c,1);
    }
    uVar3 = 0x60005;
  }
  ExceptionList = local_10;
  return uVar3;
}



/* ---- FUN_10015fb0 @ 10015fb0 size=528 ---- */

int __thiscall FUN_10015fb0(void *this,_Handle *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *local_6c;
  undefined4 local_5c [2];
  undefined4 local_54 [2];
  int local_4c;
  int local_48;
  uint *local_44;
  uint *local_40;
  undefined4 local_3c [2];
  undefined4 local_34 [2];
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  void *local_1c;
  uint *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016a43;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  XSystem::Threading::CriticalSection::Lock((CriticalSection *)((int)this + 0x20));
  local_1c = (void *)FUN_1000a903(0x18);
  local_8 = 0;
  if (local_1c == (void *)0x0) {
    local_6c = (uint *)0x0;
  }
  else {
    local_6c = FUN_100014d0(local_1c,(uint)param_1);
  }
  local_18 = local_6c;
  local_8 = 0xffffffff;
  local_14 = local_6c;
  iVar2 = FUN_10015c90(this,(int)param_1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_10002180(this,(int *)local_14);
    *puVar3 = local_14;
    XSystem::Threading::CriticalSection::Unlock((CriticalSection *)((int)this + 0x20));
    bVar1 = FUN_10001650(local_14,param_2);
    if (bVar1) {
      XSystem::Threading::CriticalSection::Lock((CriticalSection *)((int)this + 0x20));
      piVar4 = FUN_10002a80(this,local_54,(int *)local_14);
      local_4c = *piVar4;
      local_48 = piVar4[1];
      FUN_100022a0(this,local_5c,local_4c,local_48);
      XSystem::Threading::CriticalSection::Unlock((CriticalSection *)((int)this + 0x20));
      if (local_14 != (uint *)0x0) {
        FUN_10001d20(local_14,1);
      }
      iVar2 = CDS::Data::GetError(param_1);
    }
    else {
      XSystem::Threading::CriticalSection::Lock((CriticalSection *)((int)this + 0x20));
      piVar4 = FUN_10002a80(this,local_34,(int *)local_14);
      local_2c = *piVar4;
      local_28 = piVar4[1];
      FUN_100022a0(this,local_3c,local_2c,local_28);
      XSystem::Threading::CriticalSection::Unlock((CriticalSection *)((int)this + 0x20));
      XPlatform::SetLastError(0x60005);
      local_44 = local_14;
      local_40 = local_14;
      if (local_14 != (uint *)0x0) {
        FUN_10001d20(local_14,1);
      }
      iVar2 = 0x60005;
    }
  }
  else {
    XPlatform::SetLastError(0x60018);
    local_24 = local_14;
    local_20 = local_14;
    if (local_14 != (uint *)0x0) {
      FUN_10001d20(local_14,1);
    }
    XSystem::Threading::CriticalSection::Unlock((CriticalSection *)((int)this + 0x20));
    iVar2 = 0x60018;
  }
  ExceptionList = local_10;
  return iVar2;
}



/* ---- FUN_100161c0 @ 100161c0 size=221 ---- */

void __fastcall FUN_100161c0(void *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10016a72;
  local_10 = ExceptionList;
  uVar1 = DAT_1001d02c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 1;
  if ((*(int *)((int)param_1 + 0x28) != 0) && (*(void **)((int)param_1 + 0x28) != (void *)0x0)) {
    FUN_10001cf0(*(void **)((int)param_1 + 0x28),1);
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  if ((*(int *)((int)param_1 + 0x24) != 0) &&
     (*(undefined4 **)((int)param_1 + 0x24) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x24))(1,uVar1);
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  local_8 = local_8 & 0xffffff00;
  XSystem::Threading::CriticalSection::~CriticalSection((CriticalSection *)((int)param_1 + 0x20));
  local_8 = 0xffffffff;
  FUN_10001cd0(param_1);
  ExceptionList = local_10;
  return;
}



/* ---- FUN_100162a0 @ 100162a0 size=291 ---- */

void * __fastcall FUN_100162a0(void *param_1)

{
  void *this;
  Socket *this_00;
  Socket *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016af5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10002150(param_1);
  local_8 = 0;
  XSystem::Threading::CriticalSection::CriticalSection
            ((CriticalSection *)((int)param_1 + 0x20),4000);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  this = (void *)FUN_1000a903(4);
  if (this == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10015380(this,param_1);
  }
  *(undefined4 **)((int)param_1 + 0x28) = local_28;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    this_00 = (Socket *)FUN_1000a903(0x20);
    local_8._0_1_ = 2;
    if (this_00 == (Socket *)0x0) {
      local_2c = (Socket *)0x0;
    }
    else {
      local_2c = CDS::ClientConnector::Impl::Socket::Socket
                           (this_00,*(undefined4 *)((int)param_1 + 0x28));
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    *(Socket **)((int)param_1 + 0x24) = local_2c;
    if (*(int *)((int)param_1 + 0x24) != 0) {
      FUN_10015b10(*(void **)((int)param_1 + 0x24));
    }
  }
  ExceptionList = local_10;
  return param_1;
}



/* ---- FUN_100163d0 @ 100163d0 size=49 ---- */

BOOL FUN_100163d0(HMODULE param_1,int param_2)

{
  BOOL local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    local_8 = DisableThreadLibraryCalls(param_1);
  }
  return local_8;
}



/* ---- GetError @ 10016410 size=24 ---- */

/* int __stdcall CDS::Data::GetError(struct CDS::Data::_Handle *) */

int CDS::Data::GetError(_Handle *param_1)

{
  int iVar1;
  
                    /* 0x16410  8  ?GetError@Data@CDS@@YGHPAU_Handle@12@@Z */
  iVar1 = FUN_10014b40((int)param_1);
  return iVar1;
}



/* ---- GetColumn @ 10016430 size=24 ---- */

/* class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > > * __stdcall CDS::Data::GetColumn(struct
   CDS::Data::_Handle *) */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* CDS::Data::GetColumn(_Handle *param_1)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  
                    /* 0x16430  7
                       ?GetColumn@Data@CDS@@YGPAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PAU_Handle@12@@Z
                        */
  pvVar1 = (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            *)FUN_10014b60((int)param_1);
  return pvVar1;
}



/* ---- GetTable @ 10016450 size=24 ---- */

/* char const * __stdcall CDS::Data::GetTable(struct CDS::Data::_Handle *) */

char * CDS::Data::GetTable(_Handle *param_1)

{
  char *pcVar1;
  
                    /* 0x16450  9  ?GetTable@Data@CDS@@YGPBDPAU_Handle@12@@Z */
  pcVar1 = (char *)FUN_10014c20((int)param_1);
  return pcVar1;
}



/* ---- GetValuesNext @ 10016470 size=24 ---- */

/* class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > > * __stdcall
   CDS::Data::GetValuesNext(struct CDS::Data::_Handle *) */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* CDS::Data::GetValuesNext(_Handle *param_1)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  
                    /* 0x16470  11
                       ?GetValuesNext@Data@CDS@@YGPAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PAU_Handle@12@@Z
                        */
  pvVar1 = (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            *)FUN_10014c40((int)param_1);
  return pvVar1;
}



/* ---- GetValuesBegin @ 10016490 size=24 ---- */

/* class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > > * __stdcall
   CDS::Data::GetValuesBegin(struct CDS::Data::_Handle *) */

vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* CDS::Data::GetValuesBegin(_Handle *param_1)

{
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  *pvVar1;
  
                    /* 0x16490  10
                       ?GetValuesBegin@Data@CDS@@YGPAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PAU_Handle@12@@Z
                        */
  pvVar1 = (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            *)FUN_10014ca0((int)param_1);
  return pvVar1;
}



/* ---- SetOrder @ 100164b0 size=28 ---- */

/* void __stdcall CDS::Data::SetOrder(struct CDS::Data::_Handle *,char const *) */

void CDS::Data::SetOrder(_Handle *param_1,char *param_2)

{
                    /* 0x164b0  16  ?SetOrder@Data@CDS@@YGXPAU_Handle@12@PBD@Z */
  FUN_10014e50(param_1,param_2);
  return;
}



/* ---- SetSelectType @ 100164d0 size=28 ---- */

/* void __stdcall CDS::Data::SetSelectType(struct CDS::Data::_Handle *,char const *) */

void CDS::Data::SetSelectType(_Handle *param_1,char *param_2)

{
                    /* 0x164d0  17  ?SetSelectType@Data@CDS@@YGXPAU_Handle@12@PBD@Z */
  FUN_10014e70(param_1,param_2);
  return;
}



/* ---- SetColumn @ 100164f0 size=28 ---- */

/* void __stdcall CDS::Data::SetColumn(struct CDS::Data::_Handle *,class std::vector<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > > &) */

void CDS::Data::SetColumn
               (_Handle *param_1,
               vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               *param_2)

{
                    /* 0x164f0  14
                       ?SetColumn@Data@CDS@@YGXPAU_Handle@12@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
                        */
  FUN_10014f10(param_1,param_2);
  return;
}



/* ---- DestroyHandle @ 10016510 size=58 ---- */

/* void __stdcall CDS::Data::DestroyHandle(struct CDS::Data::_Handle *) */

void CDS::Data::DestroyHandle(_Handle *param_1)

{
                    /* 0x16510  5  ?DestroyHandle@Data@CDS@@YGXPAU_Handle@12@@Z */
  if (param_1 != (_Handle *)0x0) {
    FUN_10001030(param_1,1);
  }
  return;
}



/* ---- CreateHandle @ 10016550 size=129 ---- */

/* struct CDS::Data::_Handle * __stdcall CDS::Data::CreateHandle(char const *) */

_Handle * CDS::Data::CreateHandle(char *param_1)

{
  void *this;
  allocator<char> *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x16550  3  ?CreateHandle@Data@CDS@@YGPAU_Handle@12@PBD@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_100169f7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_10015280(0xf4);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_20 = (allocator<char> *)0x0;
  }
  else {
    local_20 = FUN_10015100(this,param_1);
  }
  ExceptionList = local_10;
  return (_Handle *)local_20;
}



/* ---- SetKeyValue @ 100165e0 size=28 ---- */

/* void __stdcall CDS::Data::SetKeyValue(struct CDS::Data::_Handle *,class std::vector<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::allocator<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > > &) */

void CDS::Data::SetKeyValue
               (_Handle *param_1,
               vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
               *param_2)

{
                    /* 0x165e0  15
                       ?SetKeyValue@Data@CDS@@YGXPAU_Handle@12@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
                        */
  FUN_10015230(param_1,param_2);
  return;
}



/* ---- Disconnect @ 10016600 size=30 ---- */

/* void __stdcall CDS::ClientConnector::Disconnect(struct CDS::ClientConnector::_Handle *) */

void CDS::ClientConnector::Disconnect(_Handle *param_1)

{
                    /* 0x16600  6  ?Disconnect@ClientConnector@CDS@@YGXPAU_Handle@12@@Z */
  if (param_1 != (_Handle *)0x0) {
    FUN_10015c10((int)param_1);
  }
  return;
}



/* ---- Connect @ 10016620 size=67 ---- */

/* int __stdcall CDS::ClientConnector::Connect(struct CDS::ClientConnector::_Handle *,char const
   *,int) */

int CDS::ClientConnector::Connect(_Handle *param_1,char *param_2,int param_3)

{
  int iVar1;
  
                    /* 0x16620  1  ?Connect@ClientConnector@CDS@@YGHPAU_Handle@12@PBDH@Z */
  if (param_1 == (_Handle *)0x0) {
    XPlatform::SetLastError(0x60004);
    iVar1 = 0;
  }
  else if (param_1 == (_Handle *)0x0) {
    iVar1 = 0x6000a;
  }
  else {
    iVar1 = FUN_10015c30(param_1,param_2,(ushort)param_3);
  }
  return iVar1;
}



/* ---- SelectChannel @ 10016670 size=53 ---- */

/* int __stdcall CDS::ClientConnector::SelectChannel(struct CDS::ClientConnector::_Handle *,struct
   CDS::Data::_Handle *,void (__stdcall*)(struct CDS::ClientConnector::_Handle *,struct
   CDS::Data::_Handle *,void *),void *,int) */

int CDS::ClientConnector::SelectChannel
              (_Handle *param_1,_Handle *param_2,
              _func_void__Handle_ptr__Handle_ptr_void_ptr *param_3,void *param_4,int param_5)

{
  int iVar1;
  
                    /* 0x16670  13
                       ?SelectChannel@ClientConnector@CDS@@YGHPAU_Handle@12@PAU3Data@2@P6GX01PAX@Z2H@Z
                        */
  if (param_1 == (_Handle *)0x0) {
    iVar1 = 0x6000a;
  }
  else {
    iVar1 = FUN_10015ea0(param_1,(uint)param_2,(uint)param_3,(uint)param_4);
  }
  return iVar1;
}



/* ---- SelectChannel @ 100166b0 size=45 ---- */

/* int __stdcall CDS::ClientConnector::SelectChannel(struct CDS::ClientConnector::_Handle *,struct
   CDS::Data::_Handle *,int) */

int CDS::ClientConnector::SelectChannel(_Handle *param_1,_Handle *param_2,int param_3)

{
  int iVar1;
  
                    /* 0x166b0  12
                       ?SelectChannel@ClientConnector@CDS@@YGHPAU_Handle@12@PAU3Data@2@H@Z */
  if (param_1 == (_Handle *)0x0) {
    iVar1 = 0x6000a;
  }
  else {
    iVar1 = FUN_10015fb0(param_1,param_2,param_3);
  }
  return iVar1;
}



/* ---- DestroyHandle @ 100166e0 size=64 ---- */

/* void __stdcall CDS::ClientConnector::DestroyHandle(struct CDS::ClientConnector::_Handle *) */

void CDS::ClientConnector::DestroyHandle(_Handle *param_1)

{
                    /* 0x166e0  4  ?DestroyHandle@ClientConnector@CDS@@YGXPAU_Handle@12@@Z */
  if ((param_1 != (_Handle *)0x0) && (param_1 != (_Handle *)0x0)) {
    FUN_10001000(param_1,1);
  }
  return;
}



/* ---- CreateHandle @ 10016720 size=131 ---- */

/* struct CDS::ClientConnector::_Handle * __stdcall CDS::ClientConnector::CreateHandle(void) */

_Handle * CDS::ClientConnector::CreateHandle(void)

{
  void *pvVar1;
  _Handle *p_Var2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x16720  2  ?CreateHandle@ClientConnector@CDS@@YGPAU_Handle@12@XZ */
  puStack_c = &LAB_10016b1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar1 = (void *)FUN_1000a903(0x30);
  local_8._0_1_ = 1;
  if (pvVar1 != (void *)0x0) {
    FUN_100162a0(pvVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  p_Var2 = (_Handle *)FUN_100167b0();
  return p_Var2;
}



/* ---- Catch_All@100167a3 @ 100167a3 size=13 ---- */

undefined4 Catch_All_100167a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0x100167b7;
}



/* ---- FUN_100167b0 @ 100167b0 size=49 ---- */

undefined4 FUN_100167b0(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    XPlatform::SetLastError(0x60008);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}



/* ---- Unwind@100167f0 @ 100167f0 size=8 ---- */

void Unwind_100167f0(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@10016830 @ 10016830 size=12 ---- */

void Unwind_10016830(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10016836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@1001683c @ 1001683c size=12 ---- */

void Unwind_1001683c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10016842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@10016863 @ 10016863 size=12 ---- */

void Unwind_10016863(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10016869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@1001688a @ 1001688a size=8 ---- */

void Unwind_1001688a(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x2c));
  return;
}



/* ---- Unwind@100168b7 @ 100168b7 size=8 ---- */

void Unwind_100168b7(void)

{
  FUN_100152a0();
  return;
}



/* ---- Unwind@100168bf @ 100168bf size=8 ---- */

void Unwind_100168bf(void)

{
  int unaff_EBP;
  
  FUN_10001e00(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@100168c7 @ 100168c7 size=11 ---- */

void Unwind_100168c7(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x18) + 0x1c));
  return;
}



/* ---- Unwind@100168d2 @ 100168d2 size=11 ---- */

void Unwind_100168d2(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x18) + 0x40));
  return;
}



/* ---- Unwind@100168dd @ 100168dd size=11 ---- */

void Unwind_100168dd(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x18) + 0x5c));
  return;
}



/* ---- Unwind@100168e8 @ 100168e8 size=11 ---- */

void Unwind_100168e8(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x18) + 0x78));
  return;
}



/* ---- Unwind@100168f3 @ 100168f3 size=14 ---- */

void Unwind_100168f3(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x94));
  return;
}



/* ---- Unwind@10016901 @ 10016901 size=14 ---- */

void Unwind_10016901(void)

{
  int unaff_EBP;
  
  FUN_10008e00((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xb4));
  return;
}



/* ---- Unwind@1001690f @ 1001690f size=14 ---- */

void Unwind_1001690f(void)

{
  int unaff_EBP;
  
  FUN_10008e00((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xd4));
  return;
}



/* ---- Unwind@10016938 @ 10016938 size=8 ---- */

void Unwind_10016938(void)

{
  FUN_100152a0();
  return;
}



/* ---- Unwind@10016940 @ 10016940 size=8 ---- */

void Unwind_10016940(void)

{
  int unaff_EBP;
  
  FUN_10001e00(*(void **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016948 @ 10016948 size=11 ---- */

void Unwind_10016948(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  return;
}



/* ---- Unwind@10016953 @ 10016953 size=11 ---- */

void Unwind_10016953(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}



/* ---- Unwind@1001695e @ 1001695e size=11 ---- */

void Unwind_1001695e(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x10) + 0x5c));
  return;
}



/* ---- Unwind@10016969 @ 10016969 size=11 ---- */

void Unwind_10016969(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x10) + 0x78));
  return;
}



/* ---- Unwind@10016974 @ 10016974 size=14 ---- */

void Unwind_10016974(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}



/* ---- Unwind@10016982 @ 10016982 size=14 ---- */

void Unwind_10016982(void)

{
  int unaff_EBP;
  
  FUN_10008e00((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xb4));
  return;
}



/* ---- Unwind@10016990 @ 10016990 size=14 ---- */

void Unwind_10016990(void)

{
  int unaff_EBP;
  
  FUN_10008e00((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xd4));
  return;
}



/* ---- Unwind@100169b9 @ 100169b9 size=11 ---- */

void Unwind_100169b9(void)

{
  int unaff_EBP;
  
  CDS_ReqSelect::~CDS_ReqSelect((CDS_ReqSelect *)(unaff_EBP + -0xb4));
  return;
}



/* ---- Unwind@100169ec @ 100169ec size=11 ---- */

void Unwind_100169ec(void)

{
  int unaff_EBP;
  
  FUN_10015260(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016a12 @ 10016a12 size=11 ---- */

void Unwind_10016a12(void)

{
  int unaff_EBP;
  
  FUN_1000a8dd(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016a38 @ 10016a38 size=11 ---- */

void Unwind_10016a38(void)

{
  int unaff_EBP;
  
  FUN_1000a8dd(*(void **)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016a5e @ 10016a5e size=8 ---- */

void Unwind_10016a5e(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(void **)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016a66 @ 10016a66 size=12 ---- */

void Unwind_10016a66(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10016a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x20) + 0x20));
  return;
}



/* ---- Unwind@10016a8d @ 10016a8d size=8 ---- */

void Unwind_10016a8d(void)

{
  int unaff_EBP;
  
  CDS_AnsSelect::~CDS_AnsSelect((CDS_AnsSelect *)(unaff_EBP + -0x54));
  return;
}



/* ---- Unwind@10016ab3 @ 10016ab3 size=8 ---- */

void Unwind_10016ab3(void)

{
  int unaff_EBP;
  
  FUN_10007720((undefined4 *)(unaff_EBP + -0x18));
  return;
}



/* ---- Unwind@10016ad6 @ 10016ad6 size=8 ---- */

void Unwind_10016ad6(void)

{
  int unaff_EBP;
  
  FUN_10001cd0(*(void **)(unaff_EBP + -0x20));
  return;
}



/* ---- Unwind@10016ade @ 10016ade size=12 ---- */

void Unwind_10016ade(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10016ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::CriticalSection::~CriticalSection
            ((CriticalSection *)(*(int *)(unaff_EBP + -0x20) + 0x20));
  return;
}



/* ---- Unwind@10016aea @ 10016aea size=11 ---- */

void Unwind_10016aea(void)

{
  int unaff_EBP;
  
  FUN_1000a8dd(*(void **)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@10016b10 @ 10016b10 size=11 ---- */

void Unwind_10016b10(void)

{
  int unaff_EBP;
  
  FUN_1000a8dd(*(void **)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@10016b40 @ 10016b40 size=12 ---- */

void Unwind_10016b40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10016b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  XSystem::Threading::AutoResetEvent::~AutoResetEvent
            ((AutoResetEvent *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@10016b70 @ 10016b70 size=8 ---- */

void Unwind_10016b70(void)

{
  FUN_10006d60();
  return;
}



/* ---- Unwind@10016be0 @ 10016be0 size=8 ---- */

void Unwind_10016be0(void)

{
  FUN_10006d60();
  return;
}



/* ---- Unwind@10016c30 @ 10016c30 size=8 ---- */

void Unwind_10016c30(void)

{
  int unaff_EBP;
  
  FUN_10002b40(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10016c60 @ 10016c60 size=8 ---- */

void Unwind_10016c60(void)

{
  int unaff_EBP;
  
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016c90 @ 10016c90 size=17 ---- */

void Unwind_10016c90(void)

{
  FUN_10005840();
  return;
}



/* ---- Unwind@10016ce0 @ 10016ce0 size=8 ---- */

void Unwind_10016ce0(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x50));
  return;
}



/* ---- Unwind@10016d10 @ 10016d10 size=8 ---- */

void Unwind_10016d10(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x1c));
  return;
}



/* ---- Unwind@10016d18 @ 10016d18 size=11 ---- */

void Unwind_10016d18(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x14));
  return;
}



/* ---- Unwind@10016d23 @ 10016d23 size=11 ---- */

void Unwind_10016d23(void)

{
  int unaff_EBP;
  
  FUN_100075c0((undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x2c));
  return;
}



/* ---- Unwind@10016d50 @ 10016d50 size=8 ---- */

void Unwind_10016d50(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x44));
  return;
}



/* ---- Unwind@10016d80 @ 10016d80 size=8 ---- */

void Unwind_10016d80(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@10016dd0 @ 10016dd0 size=8 ---- */

void Unwind_10016dd0(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x58));
  return;
}



/* ---- Unwind@10016e00 @ 10016e00 size=8 ---- */

void Unwind_10016e00(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x60));
  return;
}



/* ---- Unwind@10016e30 @ 10016e30 size=8 ---- */

void Unwind_10016e30(void)

{
  int unaff_EBP;
  
  FUN_10002b20(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@10016e60 @ 10016e60 size=8 ---- */

void Unwind_10016e60(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016e68 @ 10016e68 size=11 ---- */

void Unwind_10016e68(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}



/* ---- Unwind@10016e73 @ 10016e73 size=11 ---- */

void Unwind_10016e73(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c));
  return;
}



/* ---- Unwind@10016e7e @ 10016e7e size=11 ---- */

void Unwind_10016e7e(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}



/* ---- Unwind@10016eb0 @ 10016eb0 size=8 ---- */

void Unwind_10016eb0(void)

{
  int unaff_EBP;
  
  FUN_10002b20(*(undefined4 **)(unaff_EBP + -0x28));
  return;
}



/* ---- Unwind@10016f20 @ 10016f20 size=8 ---- */

void Unwind_10016f20(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016f28 @ 10016f28 size=11 ---- */

void Unwind_10016f28(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}



/* ---- Unwind@10016f50 @ 10016f50 size=8 ---- */

void Unwind_10016f50(void)

{
  int unaff_EBP;
  
  XDR::IMessage::~IMessage(*(IMessage **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10016f80 @ 10016f80 size=8 ---- */

void Unwind_10016f80(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x40));
  return;
}



/* ---- Unwind@10016f88 @ 10016f88 size=8 ---- */

void Unwind_10016f88(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x60));
  return;
}



/* ---- Unwind@10016fe0 @ 10016fe0 size=8 ---- */

void Unwind_10016fe0(void)

{
  int unaff_EBP;
  
  FUN_10001e00((void *)(unaff_EBP + -0x34));
  return;
}



/* ---- Unwind@10017010 @ 10017010 size=8 ---- */

void Unwind_10017010(void)

{
  int unaff_EBP;
  
  FUN_10002b40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ---- Unwind@10017040 @ 10017040 size=8 ---- */

void Unwind_10017040(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(unaff_EBP + -0x24));
  return;
}



/* ---- Unwind@10017070 @ 10017070 size=17 ---- */

void Unwind_10017070(void)

{
  FUN_10005840();
  return;
}



/* ---- Unwind@100170c0 @ 100170c0 size=11 ---- */

void Unwind_100170c0(void)

{
  int unaff_EBP;
  
  FUN_1000a8dd(*(void **)(unaff_EBP + -0x14));
  return;
}



/* ---- Unwind@100170f0 @ 100170f0 size=8 ---- */

void Unwind_100170f0(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(unaff_EBP + -0x2c));
  return;
}



/* ---- Unwind@10017120 @ 10017120 size=8 ---- */

void Unwind_10017120(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(unaff_EBP + -0x38));
  return;
}



/* ---- Unwind@10017128 @ 10017128 size=8 ---- */

void Unwind_10017128(void)

{
  int unaff_EBP;
  
  ~function<>((undefined4 *)(unaff_EBP + -0x54));
  return;
}



/* ---- ~bad_alloc @ 1001714b size=20 ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall std::bad_alloc::~bad_alloc(void)

{
  _DAT_1001e0c0 = &vftable;
  exception::~exception((exception *)&DAT_1001e0c0);
  return;
}


// total=890 ok=890 failed=0
