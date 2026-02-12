// 函数: sub_468f90
// 地址: 0x468f90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_58 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 8)

if (0x3fffffff - eax_3 u>= arg2)
    int32_t result = eax_3 + arg2
    *(arg1 + 8) = result
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
void var_50
sub_44b9c0(&var_50, "list<T> too long", 0x10)
int32_t var_4 = 0
struct std::exception::VTable* var_34
sub_44bb30(&var_34, &var_50)
var_34 = &std::length_error::`vftable'{for `std::logic_error'}
sub_482059(&var_34, 0x4aa6a4)
noreturn
