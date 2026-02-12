// 函数: sub_464e20
// 地址: 0x464e20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISoundM::CSoundM::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISoundM::CSoundM::VTable** var_10_1 = arg1
int32_t var_4 = 0
*arg1 = &CSoundM::`vftable'{for `ISoundM'}
InitializeCriticalSection(&arg1[1])
__builtin_memset(&arg1[7], 0, 0x110)
data_c78bc0 = 0
sub_464d80(arg1, arg2)
arg1[0x53].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
