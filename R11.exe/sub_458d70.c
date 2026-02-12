// 函数: sub_458d70
// 地址: 0x458d70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a031
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* result = sub_481fef(0xa8)
void* result_2 = result
int32_t var_8_1 = 0
void* result_1 = result
var_8_1.b = 1

if (result != 0)
    *result = arg1
    *(result + 4) = arg2
    *(result + 8) = arg3
    int32_t ecx_1
    ecx_1.w = *arg4
    *(result + 0x10) = ecx_1.w
    sub_458650(result + 0x18, &arg4[4])
    *(result + 0xa0) = arg5
    *(result + 0xa1) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
