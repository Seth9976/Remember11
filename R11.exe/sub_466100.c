// 函数: sub_466100
// 地址: 0x466100
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a4e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CFile::CMemoryFile::VTable** var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0xb] = 0
arg1[1] = 0
arg1[2] = 0
*arg1 = &CMemoryFile::`vftable'{for `CFile'}
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0xc] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
