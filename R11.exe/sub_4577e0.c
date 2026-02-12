// 函数: sub_4577e0
// 地址: 0x4577e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_499f90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
void* var_18 = arg1
int32_t eax_3 = arg2[1]
int32_t edi

if (eax_3 != 0)
    edi = (arg2[2] - eax_3) s>> 3
else
    edi = 0

*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0

if (edi != 0)
    if (edi u> 0x1fffffff)
        sub_44d6e0()
        noreturn
    
    int32_t var_2c_1 = 0
    void* eax_4 = sub_44a100(edi)
    *(arg1 + 4) = eax_4
    *(arg1 + 8) = eax_4
    *(arg1 + 0xc) = eax_4 + (edi << 3)
    int32_t edi_3 = arg2[2]
    int32_t var_8_1 = 0
    
    if (arg2[1] u> edi_3)
        __invalid_parameter_noinfo()
    
    int32_t* ecx = arg2[1]
    
    if (ecx u> arg2[2])
        __invalid_parameter_noinfo()
    
    int32_t var_2c_2 = 0
    int32_t var_30_2 = 0
    void* var_34_1 = arg1
    *(arg1 + 8) = sub_456350(ecx, edi_3, *(arg1 + 4))

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
