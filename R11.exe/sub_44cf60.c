// 函数: sub_44cf60
// 地址: 0x44cf60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0)
    __invalid_parameter_noinfo()

int32_t* eax = arg1[1]
int32_t* eax_1

if (*(eax + 0x15) == 0)
    void* ecx_1 = *eax
    
    if (*(ecx_1 + 0x15) == 0)
        void* eax_3 = *(ecx_1 + 8)
        
        while (*(eax_3 + 0x15) == 0)
            ecx_1 = eax_3
            eax_3 = *(ecx_1 + 8)
        
        arg1[1] = ecx_1
        return eax_3
    
    eax_1 = eax[1]
    
    if (*(eax_1 + 0x15) == 0)
        while (arg1[1] == *eax_1)
            arg1[1] = eax_1
            eax_1 = eax_1[1]
            
            if (*(eax_1 + 0x15) != 0)
                break
    
    if (*(arg1[1] + 0x15) != 0)
        return __invalid_parameter_noinfo() __tailcall
    
    arg1[1] = eax_1
else
    eax_1 = eax[2]
    arg1[1] = eax_1
    
    if (*(eax_1 + 0x15) != 0)
        return __invalid_parameter_noinfo() __tailcall

return eax_1
