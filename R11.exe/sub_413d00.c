// 函数: sub_413d00
// 地址: 0x413d00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
void* ecx = data_e7e648
void* esi = *(ecx + 0x20834)
int32_t i_1 = 0

if (eax == 0)
    *(ecx + 0x2082e) = 0
    int32_t i = 0
    
    if (*(data_e7e648 + 0x2082a) u> 0)
        void* ecx_2 = esi + 0x18
        
        do
            *ecx_2 = 0xf1
            i += 1
            ecx_2 += 0x1c
        while (i s< zx.d(*(data_e7e648 + 0x2082a)))
    
    *(arg1 + 0x10) = 1
    ecx = data_e7e648
else if (eax != 1)
    return 0

if (*(ecx + 0x2082a) u> 0)
    int32_t* esi_1 = esi + 0xc
    
    do
        if (esi_1[3] s>= 0xf0)
            int32_t eax_5 = sub_448760() & 0x80000fff
            
            if (eax_5 s< 0)
                eax_5 = ((eax_5 - 1) | 0xfffff000) + 1
            
            esi_1[-3] = eax_5
            int32_t eax_9 = sub_448760() & 0x8000003f
            
            if (eax_9 s< 0)
                eax_9 = ((eax_9 - 1) | 0xffffffc0) + 1
            
            esi_1[-2] = eax_9 + 0x20
            int32_t eax_14
            int32_t edx
            edx:eax_14 = sx.q(sub_448760())
            int32_t eax_17
            char edx_3
            edx_3:eax_17 = sx.q(zx.d(*(data_e7e648 + 0x2082c)) * 0x1f4)
            esi_1[-1] = mods.dp.d(edx:eax_14, 0x3e8) + ((eax_17 + zx.d(edx_3)) s>> 8)
            int32_t eax_21 = sub_448760() & 0x800001ff
            
            if (eax_21 s< 0)
                eax_21 = ((eax_21 - 1) | 0xfffffe00) + 1
            
            *esi_1 = eax_21 << 0xc
            esi_1[1] = (0xffffff9c - mods.dp.d(sx.q(sub_448760()), 0x64)) << 0xc
        
        int32_t eax_31
        int16_t edx_9
        edx_9:eax_31 = sx.q(sub_441360((*esi_1 s>> 0xc) + (esi_1[-3] << 4)) << 9)
        int32_t eax_34
        int32_t edx_11
        edx_11:eax_34 = muls.dp.d(0x66666667, 
            (sub_441380(((eax_31 + zx.d(edx_9)) s>> 0x10) + 0x400) * esi_1[-2]) << 9)
        int32_t edx_12 = edx_11 s>> 7
        int32_t eax_38
        int16_t edx_13
        edx_13:eax_38 = sx.q((edx_12 u>> 0x1f) + edx_12)
        esi_1[2] = ((eax_38 + zx.d(edx_13)) s>> 0x10) + (*esi_1 s>> 0xc)
        int32_t eax_44
        int16_t edx_15
        edx_15:eax_44 = sx.q(sub_441360(((eax_31 + zx.d(edx_9)) s>> 0x10) + 0x400) * esi_1[-2])
        esi_1[3] = ((eax_44 + zx.d(edx_15)) s>> 0x10) + (esi_1[1] s>> 0xc)
        sub_441360(esi_1[-3] << 4)
        esi_1[-3] += 0x20
        int32_t eax_50
        int32_t edx_19
        edx_19:eax_50 = muls.dp.d(0x57619f1, (0x5dc - esi_1[-1]) << 0xd)
        int32_t edx_20 = edx_19 s>> 5
        esi_1[1] += edx_20 + (edx_20 u>> 0x1f) + 0x800
        i_1 += 1
        esi_1 = &esi_1[7]
    while (i_1 s< zx.d(*(data_e7e648 + 0x2082a)))

return 0
