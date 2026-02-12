// 函数: sub_46b000
// 地址: 0x46b000
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = arg3
arg3 = 0

if (i u> 0)
    int32_t ebp_1 = arg2
    int32_t ebx
    int32_t var_10_1 = ebx
    
    do
        int32_t edx_1 = *(*arg1 + 0x1c)
        arg2 = 0
        int32_t i_1 = i
        
        if (edx_1() == 1)
            int32_t i_2 = (arg1[9] - arg1[7]) * zx.d(*(arg1[1] + 0xc))
            
            if (i u>= i_2)
                i_1 = i_2
        
        int32_t eax_6 = ov_read(&arg1[0xe], ebp_1, i_1, 0, 2, 1, &arg2)
        
        if (eax_6 s<= 0)
            break
        
        arg3 += eax_6
        i -= eax_6
        ebp_1 += eax_6
        arg1[7] += divs.dp.d(sx.q(eax_6), zx.d(*(arg1[1] + 0xc)))
    while (i u> 0)

if (arg4 != 0)
    *arg4 = arg3

return 0
