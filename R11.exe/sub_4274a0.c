// 函数: sub_4274a0
// 地址: 0x4274a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)

switch (sx.d(*(arg1 + 0x10)))
    case 0
        void* var_10_1 = esi + 0x210
        int32_t eax_2 = sub_4502a0(1, esi + 0x20c)
        
        if (eax_2 == 0xffffffff)
            int32_t edx_3 = *(esi + 4)
            int32_t ecx_1 = *(esi + 8)
            
            if (*(esi + 0x228) != 0xffffffff)
                sub_450610(edx_3, ecx_1, esi + 0xc, 2)
                return 0
            
            sub_450610(edx_3, ecx_1, esi + 0xc, 0x202)
            return 0
        
        if (eax_2 == 1)
            int32_t edi_2 = *(esi + 0x210)
            
            if (edi_2 s< 0)
                return 2
            
            bool cond:3 = *(esi + 0x228) == 0xffffffff
            *(esi + 0x214) = edi_2
            int16_t edx_1
            edx_1.b = cond:3
            *(arg1 + 0x10) = edx_1 + eax_2.w
    case 1
        void* var_10_2 = esi + 0x210
        int32_t eax_9 = sub_4502a0(1, esi + 0x20c)
        
        if (eax_9 == 0xffffffff)
            sub_4502d0(*(esi + 0x214), *(esi + 0x228), 0)
            return 0
        
        if (eax_9 == 1)
            if (*(esi + 0x210) s< 0)
                return 2
            
            *(arg1 + 0x10) = 2
    case 2
        void* var_10_3 = esi + 0x210
        int32_t eax_13 = sub_4502a0(1, esi + 0x20c)
        
        if (eax_13 == 0xffffffff)
            sub_450370(*(esi + 0x214), *(esi + 0x224), *(esi + 0x22c))
            return 0
        
        if (eax_13 == 1)
            if (*(esi + 0x210) s< 0)
                return 2
            
            *(arg1 + 0x10) = 3
    case 3
        void* var_10_5 = esi + 0x210
        int32_t eax_17 = sub_4502a0(1, esi + 0x20c)
        
        if (eax_17 == 0xffffffff)
            sub_4500a0(*(esi + 0x214))
        else if (eax_17 == 1)
            int32_t eax_18
            eax_18.b = *(esi + 0x210) != 0
            return eax_18 + 1

return 0
