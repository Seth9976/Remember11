// 函数: sub_44b3c0
// 地址: 0x44b3c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = 0

if (arg3 != 1 && arg3 != 2)
    int32_t __saved_edi = arg3
    sub_4653f0("DMA Error ch = %d\n")
    return sub_465480(".\emu.cpp", 0x6e3)

void* i_2 = *arg2 u>> 2 & 3

if (i_2 != 1)
    if (i_2 != 0)
        return sub_465480(".\emu.cpp", 0x6df)
    
    if (arg3 == 1)
        sub_465480(".\emu.cpp", 0x6d7)
        return sub_44b1c0(0xc5f71c, arg2[4], arg2[8], nullptr, 0)
    
    if (arg3 == 2)
        return sub_44acb0(0xc5f7a0, arg2[4], arg2[8])
else if (arg3 != i_2)
    void* i = arg2[0xc]
    
    if (i != 0)
        void* i_3
        
        do
            switch ((zx.d(*(i + 3)) u>> 4 & 7) - 1)
                case 0, 1, 4, 5, 6
                    void* ecx_8 = i + 8
                    
                    if ((*arg2 & 0x40) == 0)
                        ecx_8 += 8
                    
                    int16_t eax_16 = *i
                    
                    if (eax_16 != 0)
                        sub_44acb0(0xc5f7a0, ecx_8, zx.d(eax_16))
                case 2
                    int16_t eax_17 = *i
                    
                    if (eax_17 != 0)
                        sub_44acb0(0xc5f7a0, *(i + 4), *(i + 8) << 0x10 | zx.d(eax_17))
                default
                    sub_465480(".\emu.cpp", 0x6cd)
            
            i_3 = sub_447580(arg1, i)
            i = i_3
        while (i != 0)
        
        return i_3
else
    i_2 = sub_465480(".\emu.cpp", 0x67d)
    
    for (void* i_1 = arg2[0xc]; i_1 != 0; i_1 = i_2)
        switch ((zx.d(*(i_1 + 3)) u>> 4 & 7) - 1)
            case 0, 1, 4, 5, 6
                if ((*arg2 & 0x40) != 0)
                    sub_44b1c0(0xc5f71c, i_1 + 8, (zx.d(*i_1) << 2) + 2, nullptr, 0)
                else
                    sub_44b1c0(0xc5f71c, i_1 + 0x10, zx.d(*i_1) * 4, nullptr, 0)
            case 2
                if ((*arg2 & 0x40) == 0)
                    sub_465480(".\emu.cpp", 0x697)
                else
                    sub_44b1c0(0xc5f71c, i_1 + 8, 2, *(i_1 + 4), zx.d(*i_1) * 4)
            default
                sub_447640(arg1, arg2[0xc])
                sub_465480(".\emu.cpp", 0x69e)
        
        i_2 = sub_447580(arg1, i_1)

return i_2
