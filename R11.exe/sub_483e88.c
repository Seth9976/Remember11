// 函数: sub_483e88
// 地址: 0x483e88
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_c7b238 != 0)
    return sub_483da0(arg1, arg2, arg3, nullptr)

if (arg3 == 0)
    return 0

int16_t* edi_1 = arg1

if (edi_1 != 0)
    int16_t* edx_1 = arg2
    
    if (edx_1 != 0)
        int16_t eax_4
        int16_t ecx_1
        
        do
            uint32_t eax_2 = zx.d(*edi_1)
            
            if (eax_2.w u>= 0x41 && eax_2.w u<= 0x5a)
                eax_2 += 0x20
            
            ecx_1 = eax_2.w
            uint32_t eax_3 = zx.d(*edx_1)
            
            if (eax_3.w u>= 0x41 && eax_3.w u<= 0x5a)
                eax_3 += 0x20
            
            edi_1 = &edi_1[1]
            edx_1 = &edx_1[1]
            int32_t temp0_1 = arg3
            arg3 -= 1
            eax_4 = eax_3.w
            
            if (temp0_1 == 1)
                break
            
            if (ecx_1 == 0)
                break
        while (ecx_1 == eax_4)
        
        return zx.d(ecx_1) - zx.d(eax_4)

*__errno() = 0x16
sub_481d1b(0, 0, 0, 0, 0)
return 0x7fffffff
