// 函数: sub_477e10
// 地址: 0x477e10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx
void* eax = sub_477db0(ecx, arg1, arg2)

if (eax != 0)
    int32_t esi_1 = *(eax + 0x13c)
    int32_t ecx_1 = 0
    
    if (esi_1 s> 0)
        int32_t* edx_1 = *(eax + 0x138)
        
        do
            void* const result = *edx_1
            
            if (*(result + 8) == arg3 && *(result + 0xc) == arg4 && *(result + 0x10) == arg5)
                return result
            
            ecx_1 += 1
            edx_1 = &edx_1[1]
        while (ecx_1 s< esi_1)

return nullptr
