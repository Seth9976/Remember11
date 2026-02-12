// 函数: sub_49357b
// 地址: 0x49357b
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4acb80
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acb80 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_493587
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = (arg1 & 0x1f) * 0x38 + (&data_2b6a8a0)[arg1 s>> 5]
int32_t result = 1

if (*(esi_3 + 8) == 0)
    sub_48677d(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        if (sub_48c1dd(esi_3 + 0xc, 0xfa0) == 0)
            result = 0
        
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_493612()

if (result != 0)
    EnterCriticalSection((&data_2b6a8a0)[arg1 s>> 5] + (arg1 & 0x1f) * 0x38 + 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_49360c
return result
