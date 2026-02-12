// 函数: sub_482f67
// 地址: 0x482f67
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg4 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

if (arg3 != 0 && arg2 == 0)
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    return 0xffffffff

int32_t var_18_1 = 0x42
char* var_1c_1 = arg2
char* var_24 = arg2
int32_t var_20_1

if (arg3 u<= 0x3fffffff)
    var_20_1 = arg3 * 2
else
    var_20_1 = 0x7fffffff

int32_t result = arg1(&var_24, arg4, arg5, arg6)

if (arg2 == 0)
    return result

if (result s>= 0)
    int32_t temp0_1 = var_20_1
    var_20_1 -= 1
    
    if (temp0_1 - 1 s< 0)
        char** var_34_2 = &var_24
        
        if (sub_484495(nullptr) != 0xffffffff)
            goto label_483027
    else
        *var_24 = 0
        var_24 = &var_24[1]
    label_483027:
        int32_t temp1_1 = var_20_1
        var_20_1 -= 1
        
        if (temp1_1 - 1 s>= 0)
            *var_24 = 0
            return result
        
        char** var_34_3 = &var_24
        
        if (sub_484495(nullptr) != 0xffffffff)
            return result

*(arg2 + (arg3 << 1) - 2) = 0
int32_t eax_8
eax_8.b = var_20_1 s>= 0
return eax_8 - 2
