// 函数: sub_49914f
// 地址: 0x49914f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4acea0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acea0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_49915b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
eax.b = arg1 != 0
int32_t result

if (eax != 0 && (arg3 == FILE_BEGIN || arg3 == FILE_CURRENT || arg3 == FILE_END))
    sub_48395e(arg1)
    int32_t var_8_1 = 0
    int32_t result_1 = sub_4990c8(arg1, arg2, arg3)
    int32_t var_8_2 = 0xfffffffe
    sub_4991ca(&__saved_ebp)
    result = result_1
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4991c9
return result
