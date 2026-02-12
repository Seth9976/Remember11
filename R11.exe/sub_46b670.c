// 函数: sub_46b670
// 地址: 0x46b670
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
var_2c = nullptr

if (arg2 == 0)
    sub_480cd2(eax_1 ^ &var_2c)
    return 0x80070057

if (*(arg1 + 4) == 0)
    sub_480cd2(eax_1 ^ &var_2c)
    return 0x800401f0

int32_t var_28
__builtin_memset(&var_28, 0, 0x24)
*arg2 = 0
int32_t* eax_4 = *(arg1 + 4)
var_28 = 0x24
int32_t var_24 = 0x11
int32_t eax_6 = (*(*eax_4 + 0xc))(eax_4, &var_28, &var_2c, 0)

if (eax_6 s>= 0)
    int32_t* eax_7 = var_2c
    int32_t eax_8 = (**eax_7)(eax_7, 0x4a8444, arg2)
    int32_t* eax_9 = var_2c
    
    if (eax_8 s< 0)
        if (eax_9 != 0)
            (*(*eax_9 + 8))(eax_9)
        
        sub_480cd2(eax_1 ^ &var_2c)
        return eax_8
    
    if (eax_9 != 0)
        (*(*eax_9 + 8))(eax_9)
    
    eax_6 = 0

sub_480cd2(eax_1 ^ &var_2c)
return eax_6
