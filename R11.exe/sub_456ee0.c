// 函数: sub_456ee0
// 地址: 0x456ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = arg9
int32_t* edi = arg8

while (arg2 != arg5 || arg3 != arg6)
    if (arg6 == 0)
        if (arg4 == 0 || arg5 == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_2 = arg4[2]
        
        if (esi_2 u> arg4[3])
            __invalid_parameter_noinfo()
        
        if (arg5 u<= esi_2)
            __invalid_parameter_noinfo()
        
        arg5 -= 4
        arg6 = 0x1f
    else
        arg6 -= 1
    
    if (arg4 == 0)
        __invalid_parameter_noinfo()
    
    if (ebp == 0)
        if (arg7 == 0 || edi == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_3 = arg7[2]
        
        if (esi_3 u> arg7[3])
            __invalid_parameter_noinfo()
        
        if (edi u<= esi_3)
            __invalid_parameter_noinfo()
        
        edi -= 4
        ebp = 0x1f
    else
        ebp -= 1
    
    if (arg7 == 0)
        __invalid_parameter_noinfo()
    
    if (arg4 == 0 || arg5 == 0)
        __invalid_parameter_noinfo()
    
    int32_t esi_4 = arg4[2]
    
    if (esi_4 u> arg4[3])
        __invalid_parameter_noinfo()
    
    if (((arg5 - esi_4) s>> 2 << 5) + arg6 u>= *arg4)
        __invalid_parameter_noinfo()
    
    if ((*arg5 & 1 << arg6.b) == 0)
        if (arg7 == 0 || edi == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_7 = arg7[2]
        
        if (esi_7 u> arg7[3])
            __invalid_parameter_noinfo()
        
        if (((edi - esi_7) s>> 2 << 5) + ebp u>= *arg7)
            __invalid_parameter_noinfo()
        
        *edi &= not.d(1 << ebp.b)
    else
        if (arg7 == 0 || edi == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_6 = arg7[2]
        
        if (esi_6 u> arg7[3])
            __invalid_parameter_noinfo()
        
        if (((edi - esi_6) s>> 2 << 5) + ebp u>= *arg7)
            __invalid_parameter_noinfo()
        
        *edi |= 1 << ebp.b

*arg1 = nullptr
arg1[1] = edi
arg1[2] = ebp

if (arg7 == 0)
    __invalid_parameter_noinfo()

*arg1 = arg7
return arg1
