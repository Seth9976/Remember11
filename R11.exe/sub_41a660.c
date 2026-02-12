// 函数: sub_41a660
// 地址: 0x41a660
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(data_a5d8f8 + 0xa4cc)

if (eax == 1)
    int32_t eax_15
    
    if ((*(data_c7cc70 + 8) & 1) == 0 && (data_2b53608 & 0x4400) == 0)
        eax_15 = sub_45c4f0()
    
    if ((*(data_c7cc70 + 8) & 1) != 0 || (data_2b53608 & 0x4400) != 0 || eax_15 != 0)
        sub_4095a0(1)
        *(data_a5d8f8 + 0xa4cc) = 0
        *(data_e7e648 + 0x28a2) = 0
    else
        if ((data_2b53608 & 0x2100) != 0)
            sub_4095a0(eax_15.w)
            void* eax_16 = data_a5d8f8
            sub_41fcd0(*(eax_16 + (*(eax_16 + 0xa4d0) << 2) + 0xa4d8))
            *(data_a5d8f8 + 0xa4cc) = 2
            *(data_e7e648 + 0x28a1) = 1
            return 1
        
        int32_t eax_19 = data_2b53610
        
        if ((eax_19 & 0x900890) != 0)
            sub_4095a0(3)
            void* ecx_9 = data_a5d8f8
            int32_t esi_1 = *(ecx_9 + 0xa4d4)
            *(ecx_9 + 0xa4d0) = mods.dp.d(sx.q(*(ecx_9 + 0xa4d0) + esi_1 - 1), esi_1)
            return 1
        
        if ((eax_19 & 0x600260) != 0)
            sub_4095a0(3)
            void* ecx_8 = data_a5d8f8
            int32_t esi = *(ecx_8 + 0xa4d4)
            *(ecx_8 + 0xa4d0) = mods.dp.d(sx.q(*(ecx_8 + 0xa4d0) + esi + 1), esi)
else if (eax == 2)
    int32_t eax_8 = sub_41ff00()
    
    if (eax_8 == 1)
        int32_t* eax_13 = data_a5d8f8
        sub_41a5b0(&eax_13[*eax_13 * 0x1704 + 7])
        void* edx_3 = data_a5d8f8
        *(data_e7e648 + 0x28a1) = 0
        *(edx_3 + 0xa4cc) = 0
        *(data_e7e648 + 0x28a2) = 0
        return 1
    
    if (eax_8 == 2)
        void* eax_11 = data_a5d8f8
        *(data_e7e648 + 0xbec6c) = 1
        *(eax_11 + 0xa4cc) = 3
else
    if (eax != 3)
        return 0
    
    if (sub_420170() - 1 u<= 1)
        *(data_a5d8f8 + 0xa4cc) = 2

return 1
