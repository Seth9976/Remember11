// 函数: sub_4694f0
// 地址: 0x4694f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a7b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::exception::VTable* var_94
int32_t var_98 = __security_cookie ^ &var_94
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2 & 0x17
*(arg1 + 8) = result
int32_t ecx_1 = *(arg1 + 0xc) & result

if (ecx_1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

if (arg3 != 0)
    sub_482059(0, nullptr)
    noreturn

void var_6c

if ((ecx_1.b & 4) != 0)
    sub_44bc30(&var_6c, "ios_base::badbit set")
    int32_t var_4 = 0
    sub_468ee0(&var_94, &var_6c)
    var_94 = &std::ios_base::failure::`vftable'{for `std::runtime_error'}
    sub_482059(&var_94, 0x4abab8)
    noreturn

if ((ecx_1.b & 2) == 0)
    void var_28
    sub_44bc30(&var_28, "ios_base::eofbit set")
    int32_t var_4_2 = 2
    struct std::exception::VTable* var_50
    sub_468ee0(&var_50, &var_28)
    var_50 = &std::ios_base::failure::`vftable'{for `std::runtime_error'}
    sub_482059(&var_50, 0x4abab8)
    noreturn

sub_44bc30(&var_6c, "ios_base::failbit set")
int32_t var_4_1 = 1
sub_468ee0(&var_94, &var_6c)
var_94 = &std::ios_base::failure::`vftable'{for `std::runtime_error'}
sub_482059(&var_94, 0x4abab8)
noreturn
