// 函数: sub_487eec
// 地址: 0x487eec
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x4ac7c0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac7c0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_5 = &data_487ef8
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t eax = arg1[1]
    
    if (eax != 0 && InterlockedDecrement(eax) == 0)
        void* eax_2 = arg1[1]
        
        if (eax_2 != 0x4cc130)
            sub_4813df(eax_2)
    
    if (*arg1 != 0)
        sub_48677d(0xc)
        int32_t var_8_1 = 0
        sub_487d35(*arg1)
        int32_t* eax_3 = *arg1
        
        if (eax_3 != 0 && *eax_3 == 0 && eax_3 != 0x4cc660)
            sub_487b6f(eax_3)
        
        int32_t var_8_2 = 0xfffffffe
        sub_487f79()
    
    *arg1 = 0xbaadf00d
    arg1[1] = 0xbaadf00d
    result = sub_4813df(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_487f75
return result
