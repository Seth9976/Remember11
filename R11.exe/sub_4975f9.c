// 函数: sub_4975f9
// 地址: 0x4975f9
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_49b37d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_497605
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::locale::facet::std::locale::_Locimp::VTable** var_14 = arg1
*arg1 = &std::locale::_Locimp::`vftable'{for `std::locale::facet'}
int32_t var_8 = 1
std::locale::_Locimp::_Locimp_dtor(arg1)
int32_t result = sub_44aa80(&arg1[6], 1, nullptr)
*arg1 = &std::locale::facet::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_497635
return result
