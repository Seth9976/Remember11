// 函数: sub_453130
// 地址: 0x453130
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 != 0)
    if (*arg1 == 0 || arg1[1] == 0)
        __invalid_parameter_noinfo()
    
    int32_t eax_1 = *arg1
    int32_t ebx_1 = *(eax_1 + 8)
    int32_t ebp_1 = arg1[2]
    
    if (arg2 s>= 0)
        if (ebx_1 u> *(eax_1 + 0xc))
            __invalid_parameter_noinfo()
        
        if (((arg1[1] - ebx_1) s>> 2 << 5) + ebp_1 + arg2 u> **arg1)
            __invalid_parameter_noinfo()
    else
        if (ebx_1 u> *(eax_1 + 0xc))
            __invalid_parameter_noinfo()
        
        if (((arg1[1] - ebx_1) s>> 2 << 5) + ebp_1 u< neg.d(arg2))
            __invalid_parameter_noinfo()
    
    if (arg2 s< 0)
        int32_t eax_9 = arg1[2]
        
        if (eax_9 u< neg.d(arg2))
            int32_t eax_10 = eax_9 + arg2
            arg1[1] += 0xfffffffc - ((0xffffffff - eax_10) u>> 5) * 4
            arg1[2] = eax_10 & 0x1f
            return arg1
    
    int32_t eax_13 = arg1[2] + arg2
    arg1[1] += (eax_13 u>> 5) * 4
    arg1[2] = eax_13 & 0x1f

return arg1
