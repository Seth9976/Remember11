// 函数: sub_4697f0
// 地址: 0x4697f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a810
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
void* var_18 = arg1
int32_t result = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0

if (arg2 != 0)
    if (arg2 u> 0x1fffffff)
        sub_44d6e0()
        noreturn
    
    int32_t var_2c_1 = 0
    void* eax_3 = sub_44a100(arg2)
    int32_t var_34_1 = 0
    int32_t var_38_1 = 0
    *(arg1 + 0xc) = eax_3 + (arg2 << 3)
    void* var_3c_1 = arg1
    *(arg1 + 4) = eax_3
    *(arg1 + 8) = eax_3
    int32_t var_8_1 = 0
    result = sub_468b20(eax_3, arg2, arg3)
    *(arg1 + 8) = eax_3 + (arg2 << 3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
