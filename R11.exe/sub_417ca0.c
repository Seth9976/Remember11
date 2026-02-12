// 函数: sub_417ca0
// 地址: 0x417ca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_4205e0()
sub_40a430()
sub_40fb40()
sub_4024b0(data_e7e648 + 0xb4180)
sub_4024b0(data_e7e648 + 0x3048)
int32_t var_14 = 0
sub_442ea0(0x10)
sub_442f40()

for (int32_t i = 0; i s< 0xa; i += 1)
    int32_t esi_1 = 0x1144
    int32_t temp0_1
    
    do
        int32_t edx_1 = data_e7e648
        
        if (*(esi_1 + edx_1 + 0x1f5dc) != 0xffff && zx.d(*(esi_1 + edx_1 + 0x1f5e1)) == i
                && *(esi_1 + edx_1 + 0x1f5e2) != 0)
            uint32_t ecx_2
            ecx_2.b = *(esi_1 + edx_1 + 0x1f5de)
            
            if (ecx_2.b u> 0)
                if (ecx_2.b u<= 2)
                    sub_417b40(esi_1 + edx_1 + 0x1f5dc)
                else if (ecx_2.b == 3)
                    sub_417850(esi_1 + edx_1 + 0x1f5dc)
        
        temp0_1 = esi_1
        esi_1 -= 0x104
    while (temp0_1 - 0x104 s>= 0)

void* ecx_3 = data_e7e648
int32_t result = 0

if (*(ecx_3 + 0x28a1) == 0)
    result = 1

if (*(ecx_3 + 0x1d704) != 0 || result == 1)
    data_a59b3c = 0
    data_a59b38 = 0
    data_4b1378 = 0x80
    data_4b137c = 0x80
    data_4b1380 = 0x80
    data_4b1384 = 0x80
else if (*(ecx_3 + 0x2899) == 0)
    char eax_4 = (*(data_c7cc70 + 8)).b
    
    if ((eax_4 & 2) != 0)
        int32_t ecx_4
        ecx_4.b = data_a59b38 == 0
        data_a59b38 = ecx_4
    
    if ((eax_4 & 4) != 0)
        int32_t edx_2
        edx_2.b = data_a59b3c == 0
        data_a59b3c = edx_2
    
    if (data_a59b38 == 0)
        int32_t ecx_5 = data_2b53628
        data_4b1380 = data_2b53624
        data_4b1384 = ecx_5
    
    if (data_a59b3c == 0)
        int32_t eax_6 = data_2b53620
        data_4b1378 = data_2b5361c
        data_4b137c = eax_6
    
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(0x80 - data_4b137c)
    int32_t eax_10 = (eax_8 ^ edx_4) - edx_4
    
    if (eax_10 s< 0x18)
        eax_10 = 0x18
    else if (eax_10 s> 0x68)
        eax_10 = 0x68
    
    int32_t esi
    int32_t var_8_1 = esi
    int32_t esi_5 = (0x50 - (eax_10 - 0x18) * 5 s/ 6) * 0x280 s/ 0x50
    int32_t ecx_11 = (0x50 - (eax_10 - 0x18) * 5 s/ 6) * 0x1c0 s/ 0x50
    int32_t eax_19
    int32_t edx_12
    edx_12:eax_19 = sx.q(0x280 - esi_5)
    int32_t edi
    int32_t var_c_3 = edi
    int32_t edi_2 = 0x80 - data_4b1380
    data_4b1370 = esi_5
    int32_t eax_22
    int32_t edx_13
    edx_13:eax_22 = sx.q(edi_2)
    int32_t eax_24 = (eax_22 ^ edx_13) - edx_13
    int32_t esi_7 = (eax_19 - edx_12) s>> 1
    data_4b1374 = ecx_11
    
    if (eax_24 s< 0x18)
        eax_24 = 0x18
    else if (eax_24 s> 0x68)
        eax_24 = 0x68
    
    int32_t eax_25 = eax_24 - 0x18
    
    if (edi_2 s< 0)
        eax_25 = neg.d(eax_25)
    
    int32_t eax_26
    int32_t edx_16
    edx_16:eax_26 = muls.dp.d(0x99999999, esi_7 * eax_25)
    int32_t edx_17 = edx_16 s>> 5
    int32_t eax_31
    int32_t edx_18
    edx_18:eax_31 = sx.q(0x1c0 - ecx_11)
    data_4b1368 = esi_7 + (edx_17 u>> 0x1f) + edx_17
    int32_t esi_9 = 0x80 - data_4b1384
    int32_t ecx_13 = (eax_31 - edx_18) s>> 1
    int32_t eax_34
    int32_t edx_19
    edx_19:eax_34 = sx.q(esi_9)
    int32_t eax_36 = (eax_34 ^ edx_19) - edx_19
    
    if (eax_36 s< 0x18)
        eax_36 = 0x18
    else if (eax_36 s> 0x68)
        eax_36 = 0x68
    
    int32_t eax_37 = eax_36 - 0x18
    
    if (esi_9 s< 0)
        eax_37 = neg.d(eax_37)
    
    int32_t eax_38
    int32_t edx_22
    edx_22:eax_38 = muls.dp.d(0x99999999, ecx_13 * eax_37)
    int32_t edx_23 = edx_22 s>> 5
    data_4b136c = ecx_13 + (edx_23 u>> 0x1f) + edx_23
    sub_442e20()
    int32_t* ecx_15 = data_c7bbc0
    data_c7bbf0 = 1
    data_c7bbe0 = 3
    data_c7bbe4 = 0x80
    sub_445790(*ecx_15 + 0x58, 0x4b1358, 0, 6)
    sub_442d00(*data_c7bbc0 + 0x58, 6)
    int32_t edx_26 = data_2b603b0
    int32_t edx_27 = neg.d(edx_26)
    int32_t var_20 = 6
    sub_409b40(sbb.d(edx_27, edx_27, edx_26 != 0) + 1, 0x900)
    return sub_442f40() __tailcall

return result
