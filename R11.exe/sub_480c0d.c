// 函数: sub_480c0d
// 地址: 0x480c0d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4ac590
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac590 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_480c19
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
eax.b = arg1 != 0
void* result

if (eax != 0)
    int32_t var_34 = 0x20
    sub_48399a(1, 0x4cbb00)
    int32_t var_8_1 = 0
    int32_t eax_2 = sub_4850a9(0x4cbb00)
    void arg_8
    void* result_1 = sub_484696(0x4cbb00, arg1, nullptr, &arg_8)
    sub_48513f(eax_2, 0x4cbb00)
    int32_t var_8_2 = 0xfffffffe
    $LN8()
    result = result_1
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_480ca8
return result
