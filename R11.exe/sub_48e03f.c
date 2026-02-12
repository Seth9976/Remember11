// 函数: sub_48e03f
// 地址: 0x48e03f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t result = 0xffff

if (arg1 != 0xffff)
    void* var_18
    sub_481612(&var_18, arg2)
    void* ecx_2 = var_18
    uint32_t edx_1 = *(ecx_2 + 0x14)
    
    if (edx_1 == 0)
        result = arg1.d
        
        if (result.w - 0x41 u<= 0x19)
            result += 0x20
        
        result = zx.d(result.w)
    else if (arg1 u>= 0x100)
        int16_t result_1
        bool cond:0_1 = sub_492a7e(&var_18, edx_1, 0x100, &arg1, 1, &result_1, 1, *(ecx_2 + 4)) == 0
        result = zx.d(arg1)
        
        if (not(cond:0_1))
            result = zx.d(result_1)
    else
        bool cond:1_1 = sub_48dd9d((arg1.d).w, 1, &var_18) == 0
        result = zx.d(arg1)
        
        if (not(cond:1_1))
            result.w = zx.w(*(*(var_18 + 0xcc) + result))
            result = zx.d(result.w)
    
    char var_c
    void* var_10
    
    if (var_c != 0)
        *(var_10 + 0x70) &= 0xfffffffd

return result
