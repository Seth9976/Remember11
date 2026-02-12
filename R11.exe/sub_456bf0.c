// 函数: sub_456bf0
// 地址: 0x456bf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 != arg2)
    int128_t* ebx_1 = *(arg2 + 4)
    int32_t edx_3
    int32_t ebp_1
    
    if (ebx_1 != 0)
        ebp_1 = *(arg2 + 8)
        edx_3 = (ebp_1 - ebx_1) s>> 2
    
    if (ebx_1 == 0 || edx_3 == 0)
        sub_456310(arg1)
        return arg1
    
    int128_t* eax_2 = *(arg1 + 4)
    int32_t ecx
    
    if (eax_2 != 0)
        ecx = (*(arg1 + 8) - eax_2) s>> 2
    else
        ecx = 0
    
    if (edx_3 u<= ecx)
        sub_455b20(ebx_1, ebp_1, eax_2)
        int32_t eax_3 = *(arg2 + 4)
        
        if (eax_3 != 0)
            *(arg1 + 8) = *(arg1 + 4) + ((*(arg2 + 8) - eax_3) s>> 2 << 2)
            return arg1
        
        *(arg1 + 8) = *(arg1 + 4)
        return arg1
    
    int32_t ecx_5
    
    if (eax_2 != 0)
        ecx_5 = (*(arg1 + 0xc) - eax_2) s>> 2
    else
        ecx_5 = 0
    
    if (edx_3 u<= ecx_5)
        int32_t ecx_8
        
        if (eax_2 != 0)
            ecx_8 = (*(arg1 + 8) - eax_2) s>> 2
        else
            ecx_8 = 0
        
        void* ebx_2 = ebx_1 + (ecx_8 << 2)
        sub_455b20(ebx_1, ebx_2, eax_2)
        *(arg1 + 8) = sub_44d5c0(ebx_2, *(arg2 + 8), *(arg1 + 8))
        return arg1
    
    if (eax_2 != 0)
        j_sub_4813df(eax_2)
    
    int32_t ecx_12 = *(arg2 + 4)
    int32_t eax_11
    
    if (ecx_12 != 0)
        eax_11 = (*(arg2 + 8) - ecx_12) s>> 2
    else
        eax_11 = 0
    
    if (sub_456a80(arg1, eax_11) != 0)
        *(arg1 + 8) = sub_44d5c0(*(arg2 + 4), *(arg2 + 8), *(arg1 + 4))

return arg1
