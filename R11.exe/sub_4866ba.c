// 函数: sub_4866ba
// 地址: 0x4866ba
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ac740
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac740 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_4866c6
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 1

if (data_c7ada4 == 0)
    sub_48744d()
    sub_4872ad(0x1e)
    sub_482a89(0xff)
    noreturn

int32_t result

if (*((arg1 << 3) + &data_4cbf58) == 0)
    void* eax = sub_48b27c(0x18)
    
    if (eax != 0)
        sub_48677d(0xa)
        int32_t var_8_1 = 0
        
        if (*((arg1 << 3) + &data_4cbf58) != 0)
            sub_4813df(eax)
        else if (sub_48c1dd(eax, 0xfa0) != 0)
            *((arg1 << 3) + &data_4cbf58) = eax
        else
            sub_4813df(eax)
            *__errno() = 0xc
            result_1 = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_486774()
        result = result_1
    else
        *__errno() = 0xc
        result = 0
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_486773
return result
