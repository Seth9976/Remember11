// 函数: sub_45c660
// 地址: 0x45c660
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__builtin_memcpy(arg1 + 0x18, arg2, 0x24c)

if (arg3 == 0)
    sub_45c3d0(arg1)
    int32_t i = 0
    
    if (*(arg1 + 0x14) u> 0)
        int32_t esi_2 = 0
        
        do
            int32_t* ecx_7 = *(arg1 + 0xc)
            (*(**(ecx_7 + esi_2) + 0x74))(*(ecx_7 + esi_2), arg1 + 0x18, *(arg1 + 4), 0)
            int32_t* edx_7 = *(arg1 + 0xc)
            (*(**(edx_7 + esi_2) + 0x78))(*(edx_7 + esi_2), arg1 + 0x18, *(arg1 + 4), 0)
            i += 1
            esi_2 += 0xc
        while (i u< *(arg1 + 0x14))
    
    return 0

int32_t i_1 = 0

if (*(arg1 + 0x14) u> 0)
    int32_t* esi_1 = nullptr
    
    do
        int32_t* eax_1 = *(arg1 + 0xc)
        int32_t* ecx = *(eax_1 + esi_1)
        
        if (ecx != 0)
            (*(*ecx + 0x20))(*(eax_1 + esi_1))
        
        int32_t* ecx_3 = *(*(arg1 + 0xc) + esi_1)
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 8))(ecx_3)
            *(esi_1 + *(arg1 + 0xc)) = 0
        
        i_1 += 1
        esi_1 = &esi_1[3]
    while (i_1 u< *(arg1 + 0x14))

int32_t* eax_6 = *(arg1 + 8)
int32_t edx_4 = *(arg1 + 4)
*(arg1 + 0x14) = 0
(*(*eax_6 + 0x24))(eax_6, edx_4, arg1 + 0x18, sub_45c3b0, arg1, 0)
return 0
