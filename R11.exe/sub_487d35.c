// 函数: sub_487d35
// 地址: 0x487d35
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 != 0)
    InterlockedDecrement(arg1)
    int32_t eax_1 = *(arg1 + 0xb0)
    
    if (eax_1 != 0)
        InterlockedDecrement(eax_1)
    
    int32_t eax_2 = *(arg1 + 0xb8)
    
    if (eax_2 != 0)
        InterlockedDecrement(eax_2)
    
    int32_t eax_3 = *(arg1 + 0xb4)
    
    if (eax_3 != 0)
        InterlockedDecrement(eax_3)
    
    int32_t eax_4 = *(arg1 + 0xc0)
    
    if (eax_4 != 0)
        InterlockedDecrement(eax_4)
    
    void* ebx_1 = arg1 + 0x50
    int32_t i_1 = 6
    int32_t i
    
    do
        if (*(ebx_1 - 8) != &data_4cc658)
            int32_t eax_5 = *ebx_1
            
            if (eax_5 != 0)
                InterlockedDecrement(eax_5)
        
        if (*(ebx_1 - 4) != 0)
            int32_t eax_6 = *(ebx_1 + 4)
            
            if (eax_6 != 0)
                InterlockedDecrement(eax_6)
        
        ebx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    InterlockedDecrement(*(arg1 + 0xd4) + 0xb4)

return arg1
