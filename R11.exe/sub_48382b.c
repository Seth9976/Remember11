// 函数: sub_48382b
// 地址: 0x48382b
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4ac700
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac700 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_483837
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 != 0)
    sub_48395e(arg1)
    int32_t var_8_1 = 0
    int32_t result_1 = sub_48370f(arg1)
    int32_t var_8_2 = 0xfffffffe
    sub_483874(&__saved_ebp)
    result = result_1
else
    result = sub_483751(0)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_483873
return result
