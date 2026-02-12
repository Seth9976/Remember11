// 函数: sub_455d50
// 地址: 0x455d50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0 || arg3 != arg5)
    __invalid_parameter_noinfo()

if (arg4 != arg6)
    int32_t eax_3 = (*(arg1 + 8) - arg6) s>> 2
    int32_t ecx = eax_3 << 2
    
    if (eax_3 s> 0)
        sub_481dca(arg4, ecx, arg6, ecx)
    
    *(arg1 + 8) = ecx + arg4

arg2[1] = arg4
*arg2 = arg3
return arg2
