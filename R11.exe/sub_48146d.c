// 函数: sub_48146d
// 地址: 0x48146d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4ac5d0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac5d0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_481479
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = nullptr

if (arg1 u<= data_2b6a9a8)
    sub_48677d(4)
    int32_t var_8_1 = 0
    result = sub_486fca(arg1)
    int32_t var_8_2 = 0xfffffffe
    sub_4814b3()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_4814b2
return result
