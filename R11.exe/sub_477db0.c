// 函数: sub_477db0
// 地址: 0x477db0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = *(arg1 + 0x58)
int32_t eax = 0

if (esi s> 0)
    int32_t* ecx = *(arg1 + 0x54)
    int32_t* edx_1
    
    while (true)
        edx_1 = *ecx
        
        if (*edx_1 == arg2)
            break
        
        eax += 1
        ecx = &ecx[1]
        
        if (eax s>= esi)
            return 0
    
    int32_t esi_1 = edx_1[0x198]
    int32_t ecx_1 = 0
    
    if (esi_1 s> 0)
        int32_t* edx_2 = edx_1[0x197]
        
        do
            void* const result = *edx_2
            
            if (*(result + 4) == arg3)
                return result
            
            ecx_1 += 1
            edx_2 = &edx_2[1]
        while (ecx_1 s< esi_1)

return nullptr
