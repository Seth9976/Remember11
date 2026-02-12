// 函数: sub_483da0
// 地址: 0x483da0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t result = 0

if (arg3 != 0)
    int16_t* ebx_1 = arg1
    int16_t* edi_1
    
    if (ebx_1 != 0)
        edi_1 = arg2
    
    if (ebx_1 == 0 || edi_1 == 0)
        *__errno() = 0x16
        sub_481d1b(0, 0, 0, 0, 0)
        return 0x7fffffff
    
    void* var_14
    sub_481612(&var_14, arg4)
    int16_t eax_4
    int16_t esi_1
    
    if (*(var_14 + 0x14) != 0)
        do
            esi_1 = sub_48e03f(*ebx_1, &var_14)
            int16_t eax_8 = sub_48e03f(*edi_1, &var_14)
            ebx_1 = &ebx_1[1]
            edi_1 = &edi_1[1]
            int32_t temp0_1 = arg3
            arg3 -= 1
            eax_4 = eax_8
            
            if (temp0_1 == 1)
                break
            
            if (esi_1 == 0)
                break
        while (esi_1 == eax_4)
    else
        do
            uint32_t eax_2 = zx.d(*ebx_1)
            
            if (eax_2.w u>= 0x41 && eax_2.w u<= 0x5a)
                eax_2 += 0x20
            
            esi_1 = eax_2.w
            uint32_t eax_3 = zx.d(*edi_1)
            
            if (eax_3.w u>= 0x41 && eax_3.w u<= 0x5a)
                eax_3 += 0x20
            
            ebx_1 = &ebx_1[1]
            edi_1 = &edi_1[1]
            int32_t temp1_1 = arg3
            arg3 -= 1
            eax_4 = eax_3.w
            
            if (temp1_1 == 1)
                break
            
            if (esi_1 == 0)
                break
        while (esi_1 == eax_4)
    
    result = zx.d(esi_1) - zx.d(eax_4)
    char var_8
    void* var_c
    
    if (var_8 != 0)
        *(var_c + 0x70) &= 0xfffffffd

return result
