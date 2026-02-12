// 函数: sub_488e18
// 地址: 0x488e18
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x4ac838
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x4ac838 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_12 = &data_488e24
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    void* eax = *(arg1 + 0x24)
    
    if (eax != 0)
        sub_4813df(eax)
    
    void* eax_1 = *(arg1 + 0x2c)
    
    if (eax_1 != 0)
        sub_4813df(eax_1)
    
    void* eax_2 = *(arg1 + 0x34)
    
    if (eax_2 != 0)
        sub_4813df(eax_2)
    
    void* eax_3 = *(arg1 + 0x3c)
    
    if (eax_3 != 0)
        sub_4813df(eax_3)
    
    void* eax_4 = *(arg1 + 0x44)
    
    if (eax_4 != 0)
        sub_4813df(eax_4)
    
    void* eax_5 = *(arg1 + 0x48)
    
    if (eax_5 != 0)
        sub_4813df(eax_5)
    
    void* eax_6 = *(arg1 + 0x5c)
    
    if (eax_6 != 0x4cc750)
        sub_4813df(eax_6)
    
    sub_48677d(0xd)
    int32_t var_8_1 = 0
    void* edi_1 = *(arg1 + 0x68)
    
    if (edi_1 != 0 && InterlockedDecrement(edi_1) == 0 && edi_1 != 0x4cc130)
        sub_4813df(edi_1)
    
    int32_t var_8_2 = 0xfffffffe
    sub_488f24()
    sub_48677d(0xc)
    int32_t var_8_3 = 1
    int32_t* edi_2 = *(arg1 + 0x6c)
    
    if (edi_2 != 0)
        sub_487d35(edi_2)
        
        if (edi_2 != data_4cc738 && edi_2 != 0x4cc660 && *edi_2 == 0)
            sub_487b6f(edi_2)
    
    int32_t var_8_4 = 0xfffffffe
    sub_488f30()
    result = sub_4813df(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_488f1e
return result
