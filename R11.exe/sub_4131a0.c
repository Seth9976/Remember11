// 函数: sub_4131a0
// 地址: 0x4131a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
void* ecx = data_e7e648
void* esi = *(ecx + 0x20834)

if (eax == 0)
    *(ecx + 0x2082e) = 0
    int32_t i = 0
    
    if (zx.d(*(data_e7e648 + 0x2082a)) * 4 s> 0)
        int16_t* ecx_5 = esi + 4
        
        do
            *ecx_5 = 0
            i += 1
            ecx_5 = &ecx_5[4]
        while (i s< zx.d(*(data_e7e648 + 0x2082a)) * 4)
    
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

sub_442e20()
void* edx = data_e7e648
data_c7bbe0 = 0xa
int32_t i_1 = 0

if (zx.d(*(edx + 0x2082a)) * 4 s> 0)
    int16_t* esi_1 = esi + 6
    
    do
        if (esi_1[-2] s> 0x1e0 || esi_1[-1] == 0 || *esi_1 == 0)
            esi_1[-3] = (mods.dp.d(sx.q(sub_448760()), 0x5e8)).w - 0x1f4
            esi_1[-2] = (neg.d(mods.dp.d(sx.q(sub_448760()), 0x12c))).w * 2
            esi_1[-1] =
                (mods.dp.d(sx.q(sub_448760()), 0x14)).w + (0x80 - *(data_e7e648 + 0x2082c)) * 2
            *esi_1 = (mods.dp.d(sx.q(sub_448760()), 0x1e)).w * 2 + 0xa0
        
        data_4b0fe8 = sx.d(esi_1[-3])
        data_4b0fec = sx.d(esi_1[-2])
        data_4b100c = sx.d(esi_1[-1]) + sx.d(esi_1[-3])
        data_4b1010 = sx.d(*esi_1) + sx.d(esi_1[-2])
        sub_4430c0(0x4b0fd8, 3)
        int32_t eax_22
        int32_t edx_16
        edx_16:eax_22 = sx.q(esi_1[-1])
        esi_1[-3] += ((eax_22 + (edx_16 & 3)) s>> 2).w
        int32_t eax_26
        int32_t edx_18
        edx_18:eax_26 = sx.q(*esi_1)
        esi_1[-2] += ((eax_26 + (edx_18 & 3)) s>> 2).w
        i_1 += 1
        esi_1 = &esi_1[4]
    while (i_1 s< zx.d(*(data_e7e648 + 0x2082a)) * 4)

sub_442f40()
return 0
