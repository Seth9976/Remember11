// 函数: sub_4685b0
// 地址: 0x4685b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = 0

if (arg3 == 0 || arg2 == 0)
    __invalid_parameter_noinfo()
else
    int32_t edx_1 = *(arg3 + 0x18)
    void* eax_1 = arg3 + 4
    void* ecx
    
    if (edx_1 u< 0x10)
        ecx = eax_1
    else
        ecx = *eax_1
    
    if (ecx u> arg2)
        __invalid_parameter_noinfo()
    else
        if (edx_1 u>= 0x10)
            eax_1 = *eax_1
        
        if (arg2 u> *(arg3 + 0x14) + eax_1)
            __invalid_parameter_noinfo()

*arg1 = arg3
arg1[1] = arg2
return arg1
