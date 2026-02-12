// 函数: ?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z
// 地址: 0x4974b1
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_49b32c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_4974bd
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_14
sub_4973f8(&var_14, 0)
int32_t var_8 = 0
int32_t i = *(arg1 + 0xc)

while (i u> 0)
    i -= 1
    int32_t* eax_1 = *(arg1 + 8) + (i << 2)
    
    if (*eax_1 != 0)
        void* eax_2 = sub_4683b0(*eax_1)
        
        if (eax_2 != 0)
            (**eax_2)(1)

sub_4813df(*(arg1 + 8))
int32_t var_8_1 = 0xffffffff
int32_t result = sub_497419(&var_14)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_497510
return result
