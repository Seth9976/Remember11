// 函数: sub_485868
// 地址: 0x485868
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_40 = 0x16
void var_20
void* var_44 = &var_20
int32_t var_30
sub_48e9c9(*arg1, arg1[1], &var_30)
int32_t result

if (arg2 != 0 && arg3 u> 0)
    int32_t eax_5
    
    if (arg3 != 0xffffffff)
        int32_t ecx_1
        ecx_1.b = var_30 == 0x2d
        int32_t ecx_2
        ecx_2.b = arg4 s> 0
        eax_5 = arg3 - ecx_1 - ecx_2
    else
        eax_5 = 0xffffffff
    
    void* eax_7
    eax_7.b = var_30 == 0x2d
    void* const ecx_4
    ecx_4.b = arg4 s> 0
    int32_t ecx_6
    int32_t edx_1
    result, ecx_6, edx_1 = sub_48e851(ecx_4 + eax_7 + arg2, eax_5, arg4 + 1, &var_30)
    
    if (result == 0)
        int32_t var_40_2 = arg6
        int32_t var_44_2 = 0
        result = sub_4856fb(arg2, edx_1, ecx_6, arg3, arg4, arg5, &var_30)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0x16

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
