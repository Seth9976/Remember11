// 函数: sub_456d20
// 地址: 0x456d20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = arg9
int32_t* edi = arg8

while (arg3 != arg5 || arg4 != arg6)
    if (arg2 == 0)
        __invalid_parameter_noinfo()
    
    if (arg7 == 0)
        __invalid_parameter_noinfo()
    
    if (arg2 == 0 || arg3 == 0)
        __invalid_parameter_noinfo()
    
    int32_t esi_2 = arg2[2]
    
    if (esi_2 u> arg2[3])
        __invalid_parameter_noinfo()
    
    if (((arg3 - esi_2) s>> 2 << 5) + arg4 u>= *arg2)
        __invalid_parameter_noinfo()
    
    if ((*arg3 & 1 << arg4.b) == 0)
        if (arg7 == 0 || edi == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_5 = arg7[2]
        
        if (esi_5 u> arg7[3])
            __invalid_parameter_noinfo()
        
        if (((edi - esi_5) s>> 2 << 5) + ebp u>= *arg7)
            __invalid_parameter_noinfo()
        
        *edi &= not.d(1 << ebp.b)
    else
        if (arg7 == 0 || edi == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_4 = arg7[2]
        
        if (esi_4 u> arg7[3])
            __invalid_parameter_noinfo()
        
        if (((edi - esi_4) s>> 2 << 5) + ebp u>= *arg7)
            __invalid_parameter_noinfo()
        
        *edi |= 1 << ebp.b
    
    int32_t esi_6 = arg7[2]
    
    if (esi_6 u> arg7[3])
        __invalid_parameter_noinfo()
    
    if (((edi - esi_6) s>> 2 << 5) + ebp + 1 u> *arg7)
        __invalid_parameter_noinfo()
    
    if (ebp u>= 0x1f)
        ebp = 0
        edi = &edi[1]
    else
        ebp += 1
    
    int32_t esi_7 = arg2[2]
    
    if (esi_7 u> arg2[3])
        __invalid_parameter_noinfo()
    
    if (((arg3 - esi_7) s>> 2 << 5) + arg4 + 1 u> *arg2)
        __invalid_parameter_noinfo()
    
    if (arg4 u>= 0x1f)
        arg3 = &arg3[1]
        arg4 = 0
    else
        arg4 += 1

*arg1 = nullptr
arg1[1] = edi
arg1[2] = ebp

if (arg7 == 0)
    __invalid_parameter_noinfo()

*arg1 = arg7
return arg1
