// 函数: sub_413510
// 地址: 0x413510
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = sx.d(*(arg1 + 0x10))
void* eax = data_e7e648
int32_t* esi = *(eax + 0x20834)
int32_t i_1 = 0

if (ecx == 0)
    *(eax + 0x2082e) = 0
    int32_t i = 0
    
    if (*(data_e7e648 + 0x2082a) u> 0)
        int32_t* ecx_4 = esi
        
        do
            *ecx_4 = 0
            i += 1
            ecx_4 = &ecx_4[0xc]
        while (i s< zx.d(*(data_e7e648 + 0x2082a)))
    
    *(arg1 + 0x10) = 1
    eax = data_e7e648
else if (ecx != 1)
    return 0

if (*(eax + 0x2082a) u> 0)
    void* edi_3 = &esi[3]
    
    do
        int32_t eax_2 = *(edi_3 - 0xc)
        
        if (eax_2 == 0 || (eax_2 & 0xfffff000) s>= 0x1000 || *(edi_3 + 0x20) s< 0)
            *(edi_3 - 0xc) = 0
            int32_t eax_5 = sub_448760() & 0x800001ff
            
            if (eax_5 s< 0)
                eax_5 = ((eax_5 - 1) | 0xfffffe00) + 1
            
            *(edi_3 - 8) = eax_5.w
            int32_t eax_9 = sub_448760() & 0x800001ff
            
            if (eax_9 s< 0)
                eax_9 = ((eax_9 - 1) | 0xfffffe00) + 1
            
            *(edi_3 - 6) = eax_9.w
            *edi_3 = (mods.dp.d(sx.q(sub_448760()), 0x520) - 0x190) << 0xc
            *(edi_3 + 4) = mods.dp.d(sx.q(sub_448760()), 0x64) * 0xfffff000
            *(edi_3 + 8) = mods.dp.d(sx.q(sub_448760()), 0x280) << 0xc
            *(edi_3 + 0xc) = mods.dp.d(sx.q(sub_448760()), 0x1e0) << 0xc
            *(edi_3 + 0x10) = mods.dp.d(sx.q(sub_448760()), 0x280) << 0xc
            *(edi_3 + 0x14) = mods.dp.d(sx.q(sub_448760()), 0x1e0) << 0xc
            int32_t eax_31 = sub_448760() & 0x80000003
            
            if (eax_31 s< 0)
                eax_31 = ((eax_31 - 1) | 0xfffffffc) + 1
            
            int32_t eax_36 = ((eax_31 + 1) << 0x13) + *edi_3
            *(edi_3 + 0x1c) = 0x1e0000
            *(edi_3 + 0x18) = eax_36
            int32_t eax_38
            int32_t edx_19
            edx_19:eax_38 = sx.q(sub_448760())
            int32_t eax_41
            char edx_22
            edx_22:eax_41 = sx.q(zx.d(*(data_e7e648 + 0x2082c)) * 0x3e8)
            *(edi_3 + 0x20) =
                (mods.dp.d(edx_19:eax_38, 0x7d0)).w + ((eax_41 + zx.d(edx_22)) s>> 8).w
        
        int32_t var_30 = *edi_3
        int32_t var_2c_1 = *(edi_3 + 4)
        int32_t var_24 = *(edi_3 + 8)
        int32_t var_20_1 = *(edi_3 + 0xc)
        int32_t var_18 = *(edi_3 + 0x10)
        int32_t var_14_1 = *(edi_3 + 0x14)
        int32_t var_c = *(edi_3 + 0x18)
        int32_t var_8_1 = *(edi_3 + 0x1c)
        int32_t var_3c
        sub_4415b0(&var_30, &var_24, &var_18, &var_c, *(edi_3 - 0xc), &var_3c)
        int32_t var_44 = var_3c s>> 0xc
        int32_t var_38
        int32_t var_40_1 = var_38 s>> 0xc
        int32_t eax_51
        int32_t edx_28
        edx_28:eax_51 = sx.q(sub_448760())
        *(edi_3 - 8) += (mods.dp.d(edx_28:eax_51, 0x238)).w
        int32_t eax_54
        int32_t edx_30
        edx_30:eax_54 = sx.q(sub_448760())
        int32_t ecx_10 = sx.d(*(edi_3 - 8))
        *(edi_3 - 6) += (mods.dp.d(edx_30:eax_54, 0x238)).w
        sub_413350(&var_44, sx.d(*(edi_3 + 0x20)), ecx_10, sx.d(*(edi_3 - 6)), sx.d(*(edi_3 - 4)))
        int32_t eax_58
        int32_t edx_34
        edx_34:eax_58 = muls.dp.d(0x66666667, 0xbb8 - sx.d(*(edi_3 + 0x20)))
        int32_t edx_35 = edx_34 s>> 4
        int32_t eax_61 = (edx_35 u>> 0x1f) + edx_35
        
        if (eax_61 s< 0x14)
            eax_61 = 0x14
        
        int32_t eax_62
        int32_t edx_36
        edx_36:eax_62 = sx.q(eax_61)
        *(edi_3 - 0xc) += ((eax_62 - edx_36) s>> 1) + 1
        eax = data_e7e648
        i_1 += 1
        edi_3 += 0x30
    while (i_1 s< zx.d(*(eax + 0x2082a)))

sub_442c30(eax + 0x10f1bc, 3)
sub_442c30(data_e7e648 + 0x10f1bc, 1)
return 0
