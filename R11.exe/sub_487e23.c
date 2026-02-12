// 函数: sub_487e23
// 地址: 0x487e23
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ac7a0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac7a0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_487e2f
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = __getptd()

if ((*(result + 0x70) & data_4cc654) == 0 || *(result + 0x6c) == 0)
    sub_48677d(0xc)
    int32_t var_8_1 = 0
    void* var_20_1 = sub_487de5(result + 0x6c, data_4cc738)
    int32_t var_8_2 = 0xfffffffe
    sub_487e8d(&__saved_ebp)
else
    result = *(__getptd() + 0x6c)

if (result == 0)
    sub_482a3f(0x20)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_487e61
return result
