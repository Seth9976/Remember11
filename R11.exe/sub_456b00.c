// 函数: sub_456b00
// 地址: 0x456b00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* esi = arg2
int32_t edi = arg3

while (esi != arg4 || edi != arg5)
    if (arg1 == 0)
        __invalid_parameter_noinfo()
    
    if (*arg6 == 0)
        if (arg1 == 0 || esi == 0)
            __invalid_parameter_noinfo()
        
        int32_t ebp_2 = arg1[2]
        
        if (ebp_2 u> arg1[3])
            __invalid_parameter_noinfo()
        
        if (((esi - ebp_2) s>> 2 << 5) + edi u>= *arg1)
            __invalid_parameter_noinfo()
        
        *esi &= not.d(1 << edi.b)
    else
        if (arg1 == 0 || esi == 0)
            __invalid_parameter_noinfo()
        
        int32_t ebp_1 = arg1[2]
        
        if (ebp_1 u> arg1[3])
            __invalid_parameter_noinfo()
        
        if (((esi - ebp_1) s>> 2 << 5) + edi u>= *arg1)
            __invalid_parameter_noinfo()
        
        *esi |= 1 << edi.b
    
    int32_t ebp_3 = arg1[2]
    
    if (ebp_3 u> arg1[3])
        __invalid_parameter_noinfo()
    
    if (((esi - ebp_3) s>> 2 << 5) + edi + 1 u> *arg1)
        __invalid_parameter_noinfo()
    
    if (edi u>= 0x1f)
        edi = 0
        esi = &esi[1]
    else
        edi += 1
