// 函数: sub_41f840
// 地址: 0x41f840
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_4b19c0

if (arg1 s<= 0)
    int32_t edx_5 = *(ecx + 0xc)
    
    if (edx_5 != 0)
        *(ecx + 0xc) = edx_5 - 1
    label_41f8cf:
        *(ecx + 4) -= 1
        int32_t edx_9
        edx_9.b = *(ecx + 8) != 0
        *(ecx + 0x41c) = edx_9
        return 1
    
    int32_t edx_7 = *(ecx + 8)
    
    if (edx_7 != 0)
        *(ecx + 0x420) = 1
        *(ecx + 8) = edx_7 - 1
        goto label_41f8cf
else
    int32_t eax_1 = *(ecx + 0xc)
    int32_t result
    
    if (eax_1 s< 9)
        *(ecx + 0xc) = eax_1 + 1
        result = 1
    label_41f886:
        *(ecx + 4) += 1
        *(ecx + 0x420) = 0
        
        if (*(ecx + 8) u>= data_2b5a740 - 0xa)
            return result
        
        *(ecx + 0x420) = 1
        return 1
    
    int32_t edx_1 = *(ecx + 8)
    
    if (eax_1 + edx_1 u< data_2b5a740 - 1)
        result = 1
        *(ecx + 0x41c) = 1
        *(ecx + 8) = edx_1 + 1
        goto label_41f886

return 0
