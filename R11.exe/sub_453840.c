// 函数: sub_453840
// 地址: 0x453840
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_499d31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* result = sub_481fef(0x34)
void* result_2 = result
int32_t var_8_1 = 0
void* result_1 = result
var_8_1.b = 1

if (result != 0)
    sub_4533b0(result, arg1, arg2, arg3, arg4, arg5)

fsbase->NtTib.ExceptionList = ExceptionList
return result
