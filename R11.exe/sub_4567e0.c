// 函数: sub_4567e0
// 地址: 0x4567e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_4998c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t var_54 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
sub_44b9c0(&var_50, "vector<bool> too long", 0x15)
int32_t var_4 = 0
struct std::exception::VTable* var_34
sub_44bb30(&var_34, &var_50)
var_34 = &std::length_error::`vftable'{for `std::logic_error'}
sub_482059(&var_34, 0x4aa6a4)
noreturn
