// 函数: sub_410040
// 地址: 0x410040
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t ebx = arg1
int32_t i = 0
void* esi_1 = data_a59b18 + 0x20

if (ebx != 0)
    sub_442e20()
    data_c7bbe0 = 0xa

int16_t* edi = data_a59b18
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x55555556, sx.d(*edi) * 2)
int32_t result = 0

if ((edx u>> 0x1f) + edx s> 0)
    int16_t* esi_2 = esi_1 + 2
    int32_t edx_13
    
    do
        if (*esi_2 s> 0x1e0)
            if (ebx == 2)
                result += 1
            else
                sub_40ff90()
                ebx = arg1
        
        int32_t temp1_1 = mods.dp.d(sx.q(sx.d(esi_2[-1]) + 0x1900), 0x280)
        data_4b0c18 = temp1_1
        int32_t eax_7 = sx.d(*esi_2)
        data_4b0c1c = eax_7
        data_4b0c3c = sx.d(esi_2[1]) + temp1_1
        data_4b0c40 = sx.d(esi_2[2]) + eax_7
        int32_t eax_8
        int32_t edx_5
        edx_5:eax_8 = muls.dp.d(0x2aaaaaab, sx.d(esi_2[1]))
        esi_2[-1] += edx_5.w + (edx_5 u>> 0x1f).w + 1
        int32_t eax_11
        int32_t edx_6
        edx_6:eax_11 = muls.dp.d(0x2aaaaaab, sx.d(esi_2[2]))
        *esi_2 += edx_6.w + (edx_6 u>> 0x1f).w + 1
        
        if (ebx != 0)
            int32_t edx_7
            edx_7.b = *(data_a59b18 + 4) == 0
            sub_4430c0(0x4b0c08, edx_7 * 2 + 1)
            int32_t eax_15 = data_4b0c18
            int32_t ecx_9 = data_4b0c3c
            
            if (eax_15 s> 0 && ecx_9 s< 0)
            label_410162:
                data_4b0c18 = mods.dp.d(sx.q(eax_15 + 0x280), 0x500)
                data_4b0c3c = mods.dp.d(sx.q(ecx_9 + 0x280), 0x500)
                sub_4430c0(0x4b0c08, edx_7 * 2 + 1)
                ebx = arg1
            else if (eax_15 s> 0x280 && ecx_9 s< 0x280)
                goto label_410162
        
        edi = data_a59b18
        int32_t eax_21
        edx_13:eax_21 = muls.dp.d(0x55555556, sx.d(*edi) * 2)
        i += 1
        esi_2 = &esi_2[4]
    while (i s< (edx_13 u>> 0x1f) + edx_13)

if (ebx != 0)
    if (edi[3] == 1)
        char eax_27
        
        if (mods.dp.d(sx.q(sub_448760()), 0xb4) != 0)
            eax_27 = data_4b0c07
            
            if (eax_27 != 0)
                goto label_4101e3
        else
            eax_27 = 0x80
        label_4101e3:
            data_4b0c07 = eax_27 - 4
            
            if (eax_27 == 4)
                data_4b0c07 = 0
            
            sub_4437c0(0x4b0c50, 0x4b0c04, 3)
    
    sub_442f40()

return result
