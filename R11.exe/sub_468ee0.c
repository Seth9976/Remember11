// 函数: sub_468ee0
// 地址: 0x468ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499848
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::exception::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::exception::std::runtime_error::VTable** result = arg1
struct std::exception::std::runtime_error::VTable** result_1 = result
sub_481e25(arg1)
*result = &std::runtime_error::`vftable'{for `std::exception'}
result[8] = 0
result[9] = 0xf
int32_t var_4 = 0
result[4].b = 0
sub_44b8e0(&result[3], arg2, nullptr, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return result
