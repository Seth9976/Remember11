// 函数: sub_46a3b0
// 地址: 0x46a3b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a8cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10 = arg1
int32_t var_14 = 0

if (arg4 != 0)
    *arg1 = 0x4a3d7c
    arg1[1] = &std::ios::`vftable'{for `std::ios_base'}
    int32_t var_4 = 0
    int32_t var_14_1 = 1

*(arg1 + *(*arg1 + 4)) = &std::ostream::`vftable'{for `std::_Iosb<int32_t>'}
sub_469970(*(*arg1 + 4) + arg1, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
