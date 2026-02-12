// 函数: sub_498fdb
// 地址: 0x498fdb
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ace80
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ace80 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_498fe7
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0
else
    int32_t eax
    eax.b = arg4 != 0
    
    if (eax != 0)
        sub_48395e(arg4)
        int32_t var_8_1 = 0
        uint32_t result_1 = sub_498e7c(arg1, arg2, arg3, arg4)
        int32_t var_8_2 = 0xfffffffe
        sub_499053(&__saved_ebp)
        result = result_1
    else
        *__errno() = 0x16
        sub_481d1b(0, 0, 0, 0, 0)
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_49901e
return result
