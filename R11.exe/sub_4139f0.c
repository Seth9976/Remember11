// 函数: sub_4139f0
// 地址: 0x4139f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))
void* ecx = data_e7e648
void* esi = *(ecx + 0x20834)
int32_t i_1 = 0

if (eax == 0)
    *(ecx + 0x2082e) = 0
    int32_t i = 0
    
    if (*(data_e7e648 + 0x2082a) u> 0)
        void* ecx_2 = esi
        
        do
            *ecx_2 = 0x100
            i += 1
            ecx_2 += 0xa
        while (i s< zx.d(*(data_e7e648 + 0x2082a)))
    
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

sub_442e50(0x140, 0)
void* edx = data_e7e648
data_c7bbe0 = 0xa

if (*(edx + 0x2082a) u> 0)
    int16_t* esi_1 = esi + 2
    
    do
        if (esi_1[-1] s> 0xff)
            esi_1[-1] = 0xff
            *esi_1 = -1 - (mods.dp.d(sx.q(sub_448760()), 5)).w
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(sub_448760())
            int32_t eax_11
            char edx_6
            edx_6:eax_11 = sx.q(zx.d(*(data_e7e648 + 0x2082c)) * 0x600)
            esi_1[1] = (mods.dp.d(edx_3:eax_8, 0xc0)).w + ((eax_11 + zx.d(edx_6)) s>> 8).w - 0x360
            esi_1[2] = (-0x1e - (mods.dp.d(sx.q(sub_448760()), 0x50)).w) * 2
            esi_1[3] = (mods.dp.d(sx.q(sub_448760()), 0x1f4) + 0x3e8).w
        
        edx.w = *esi_1
        esi_1[-1] += edx.w
        
        if (esi_1[-1] s< 8)
            esi_1[-1] = 8
            *esi_1 = (mods.dp.d(sx.q(sub_448760()), 5)).w + 1
        
        esi_1[-1]
        sub_4137f0(sx.d(esi_1[1]), sx.d(esi_1[2]), sx.d(esi_1[3]))
        i_1 += 1
        esi_1 = &esi_1[5]
    while (i_1 s< zx.d(*(data_e7e648 + 0x2082a)))

sub_442f40()
return 0
