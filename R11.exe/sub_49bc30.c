// 函数: sub_49bc30
// 地址: 0x49bc30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a8f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_28
int32_t var_2c = __security_cookie ^ &var_28
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_10 = 0xf
int32_t var_14 = 0
char var_24 = 0
sub_44b9c0(&var_28, "A8R8G8B8", 8)
int32_t var_4 = 0
sub_4699d0(0xc79110, &var_28)

if (var_10 u>= 0x10)
    j_sub_4813df(var_24.d)

int32_t result = sub_48258e(sub_49c820)
fsbase->NtTib.ExceptionList = ExceptionList
return result
