// 函数: sub_4876c0
// 地址: 0x4876c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ac760
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac760 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_4876cc
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax = __getptd()
void* result

if ((*(eax + 0x70) & data_4cc654) == 0 || *(eax + 0x6c) == 0)
    sub_48677d(0xd)
    int32_t var_8_1 = 0
    result = *(eax + 0x68)
    void* result_1 = result
    
    if (result != data_4cc558)
        if (result != 0 && InterlockedDecrement(result) == 0 && result != 0x4cc130)
            sub_4813df(result)
        
        *(eax + 0x68) = data_4cc558
        result = data_4cc558
        void* result_2 = result
        InterlockedIncrement(result)
    
    int32_t var_8_2 = 0xfffffffe
    sub_48775b()
else
    result = *(eax + 0x68)

if (result == 0)
    sub_482a3f(0x20)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_4876f9
return result
