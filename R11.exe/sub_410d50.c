// 函数: sub_410d50
// 地址: 0x410d50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* ecx = data_a59b10
int32_t eax = sx.d(*ecx)
int32_t i = 0
int32_t result = 0

if (eax s<= 0)
    eax = 0
else if (eax s>= 0x80)
    eax = 0x80

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(eax * 0x32)
int32_t esi_1 = (eax_2 + (edx & 0x7f)) s>> 7
int32_t var_48 = esi_1
void* edi_1 = &ecx[0x14]

do
    if (*(edi_1 - 8) == 0xffff)
        if (arg1 == 2)
            result += 1
        else
            *(edi_1 - 8) = 0
            int32_t eax_5 = sub_448760() & 0x800001ff
            
            if (eax_5 s< 0)
                eax_5 = ((eax_5 - 1) | 0xfffffe00) + 1
            
            *(edi_1 - 6) = eax_5.w
            int32_t eax_9 = sub_448760() & 0x800001ff
            
            if (eax_9 s< 0)
                eax_9 = ((eax_9 - 1) | 0xfffffe00) + 1
            
            *(edi_1 - 4) = eax_9.w
            *edi_1 = (mods.dp.d(sx.q(sub_448760()), 0x520) - 0x190) << 0xc
            *(edi_1 + 4) = mods.dp.d(sx.q(sub_448760()), 0x64) * 0xfffff000
            *(edi_1 + 8) = mods.dp.d(sx.q(sub_448760()), 0x280) << 0xc
            *(edi_1 + 0xc) = mods.dp.d(sx.q(sub_448760()), 0x1e0) << 0xc
            *(edi_1 + 0x10) = mods.dp.d(sx.q(sub_448760()), 0x280) << 0xc
            *(edi_1 + 0x14) = mods.dp.d(sx.q(sub_448760()), 0x1e0) << 0xc
            int32_t eax_31 = sub_448760() & 0x80000003
            
            if (eax_31 s< 0)
                eax_31 = ((eax_31 - 1) | 0xfffffffc) + 1
            
            int32_t eax_36 = ((eax_31 + 1) << 0x13) + *edi_1
            *(edi_1 + 0x1c) = 0x1e0000
            *(edi_1 + 0x18) = eax_36
            *(edi_1 + 0x20) = (mods.dp.d(sx.q(sub_448760()), 0x7d0)).w + 0x1f4
    
    if (i s< esi_1)
        int16_t eax_40 = *(edi_1 - 8)
        
        if (eax_40 != 0xffff)
            if (arg1 != 0)
                int32_t ecx_1 = *(edi_1 + 4)
                int32_t var_30 = *edi_1
                int32_t var_2c_1 = ecx_1
                int32_t ecx_2 = *(edi_1 + 0xc)
                int32_t var_24 = *(edi_1 + 8)
                int32_t var_20_1 = ecx_2
                int32_t ecx_3 = *(edi_1 + 0x14)
                int32_t var_18 = *(edi_1 + 0x10)
                int32_t var_14_1 = ecx_3
                int32_t ecx_4 = *(edi_1 + 0x1c)
                int32_t var_c = *(edi_1 + 0x18)
                int32_t var_8_1 = ecx_4
                int32_t var_3c
                sub_4415b0(&var_30, &var_24, &var_18, &var_c, sx.d(eax_40), &var_3c)
                int32_t var_44 = var_3c s>> 0xc
                int32_t var_38
                int32_t var_40_1 = var_38 s>> 0xc
                int32_t eax_45
                int32_t edx_30
                edx_30:eax_45 = sx.q(sub_448760())
                *(edi_1 - 6) += (mods.dp.d(edx_30:eax_45, 0x238)).w
                int32_t eax_48
                int32_t edx_32
                edx_32:eax_48 = sx.q(sub_448760())
                int32_t ecx_5 = sx.d(*(edi_1 - 6))
                *(edi_1 - 4) += (mods.dp.d(edx_32:eax_48, 0x238)).w
                sub_410aa0(&var_44, sx.d(*(data_a59b10 + 2)), sx.d(*(edi_1 + 0x20)), ecx_5, 
                    sx.d(*(edi_1 - 4)), sx.d(*(edi_1 - 2)))
                esi_1 = var_48
            
            int32_t eax_52
            int32_t edx_37
            edx_37:eax_52 = muls.dp.d(0x66666667, 0xbb8 - sx.d(*(edi_1 + 0x20)))
            int32_t edx_38 = edx_37 s>> 4
            int32_t eax_55 = (edx_38 u>> 0x1f) + edx_38
            
            if (eax_55 s< 0x14)
                eax_55 = 0x14
            
            int32_t eax_56
            int32_t edx_39
            edx_39:eax_56 = sx.q(eax_55)
            *(edi_1 - 8) += ((eax_56 + (edx_39 & 3)) s>> 2).w + 1
            
            if (*(edi_1 - 8) s>= 0x1000)
                *(edi_1 - 8) = 0xffff
    
    i += 1
    edi_1 += 0x2c
while (i s< 0x32)

if (arg1 != 0)
    sub_442c30(data_e7e648 + 0x10f1bc, 3)
    sub_442c30(data_e7e648 + 0x10f1bc, 1)

return result
