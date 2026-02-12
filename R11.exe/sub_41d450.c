// 函数: sub_41d450
// 地址: 0x41d450
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_e7e648

if (*(eax + 0x28a2) == 0 && *(eax + 0x2899) == 0)
    eax = data_a5d908
    
    if (*(eax + 4) == 1)
        if (*(eax + 0xc) == 0 && (data_2b53604 & &__section_headers[1].numberOfRelocations) == 0)
            *(eax + 0xc) = 1
        
        if (*(eax + 0x10) == 0 && (data_2b53604 & 0x100810) == 0)
            *(eax + 0x10) = 1
        
        int32_t ecx_1 = data_2b53610
        
        if ((ecx_1 & &__section_headers[1].numberOfRelocations) != 0 && *(eax + 0xc) == 1)
            sub_4095a0(3)
            void* ecx_2 = data_a5d908
            char eax_1 = *(ecx_2 + 6)
            
            if (eax_1 == 0xff)
                *(ecx_2 + 6) = 0
                return eax_1
            
            int32_t esi = sx.d(*(ecx_2 + 7))
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(sx.d(eax_1) + esi + 1)
            *(ecx_2 + 6) = (mods.dp.d(edx_1:eax_4, esi)).b
            return divs.dp.d(edx_1:eax_4, esi)
        
        if ((ecx_1 & 0x100810) != 0 && *(eax + 0x10) == 1)
            sub_4095a0(3)
            void* ecx_3 = data_a5d908
            char eax_6 = *(ecx_3 + 6)
            
            if (eax_6 == 0xff)
                eax_6 = *(ecx_3 + 7) - 1
                *(ecx_3 + 6) = eax_6
                return eax_6
            
            int32_t esi_1 = sx.d(*(ecx_3 + 7))
            int32_t eax_8
            int32_t edx_4
            edx_4:eax_8 = sx.q(sx.d(eax_6) + esi_1 - 1)
            *(ecx_3 + 6) = (mods.dp.d(edx_4:eax_8, esi_1)).b
            return divs.dp.d(edx_4:eax_8, esi_1)
        
        int32_t ecx_4 = data_e7e63c
        
        if (ecx_4 s>= 0 && ecx_4 != sx.d(*(eax + 6)))
            sub_4095a0(3)
            void* eax_10 = data_a5d908
            *(eax_10 + 6) = data_e7e63c.b
            return eax_10
        
        if ((data_2b53608 & 0x2100) != 0 || data_e7e640 != 0)
            if (*(eax + 6) == 0xff)
                return sub_4095a0(2)
            
            sub_4095a0(0)
            return sub_41d3c0(3)

return eax
