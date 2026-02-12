// 函数: sub_4975b0
// 地址: 0x4975b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_49b34f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_4975bc
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::locale::facet::std::locale::_Locimp::VTable** var_14 = arg1
arg1[1] = 1
int32_t var_8 = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
*arg1 = &std::locale::_Locimp::`vftable'{for `std::locale::facet'}
arg1[5].b = arg2
sub_44bc30(&arg1[6], &data_49dd08)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4975f6
return arg1
