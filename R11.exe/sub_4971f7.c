// 函数: sub_4971f7
// 地址: 0x4971f7
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 0x44
int32_t (* var_c)(void* arg1) = sub_49b309
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_64 = __security_cookie ^ &var_4
void* const var_68_1 = &data_497203
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_2c
sub_44bc30(&var_2c, "invalid string position")
int32_t var_8 = 0
struct std::exception::VTable* var_54
sub_44bb30(&var_54, &var_2c)
var_54 = &std::out_of_range::`vftable'{for `std::logic_error'}
sub_482059(&var_54, 0x4aa7e8)
noreturn
