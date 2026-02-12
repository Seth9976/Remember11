// 函数: sub_48a40b
// 地址: 0x48a40b
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ac880
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac880 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_48a417
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_48677d(0xe)
int32_t var_8_1 = 0
int32_t ecx = *(arg1 + 4)

if (ecx != 0)
    void* eax = data_c7b380
    void* edx_1 = &data_c7b37c
    
    while (true)
        void* var_20_1 = eax
        
        if (eax == 0)
            break
        
        if (*eax == ecx)
            *(edx_1 + 4) = *(eax + 4)
            sub_4813df(eax)
            break
        
        edx_1 = eax
    
    sub_4813df(*(arg1 + 4))
    *(arg1 + 4) = 0

int32_t var_8_2 = 0xfffffffe
int32_t result = sub_48a472()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_48a46d
return result
