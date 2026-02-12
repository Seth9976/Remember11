// 函数: sub_485dba
// 地址: 0x485dba
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
        eax_5 = arg3 - ecx_1
    else
        eax_5 = arg3
    
    void* eax_6
    eax_6.b = var_30 == 0x2d
    int32_t var_2c
    int32_t edx_1
    result, edx_1 = sub_48e851(eax_6 + arg2, eax_5, var_2c + arg4, &var_30)
    
    if (result == 0)
        result = sub_485cc5(&var_30, edx_1, arg2, arg3, arg4, 0, arg5)
    else
        *arg2 = 0
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0x16

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
