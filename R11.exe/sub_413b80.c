// 函数: sub_413b80
// 地址: 0x413b80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t edx = arg1
int32_t ecx = sx.d(*(edx + 0x10))
void* eax = data_e7e648
void* esi = *(eax + 0x20834)

if (ecx == 0)
    *(eax + 0x2082e) = 0
    int32_t i = 0
    
    if (*(data_e7e648 + 0x2082a) u> 0)
        void* ecx_4 = esi + 8
        
        do
            *ecx_4 = 0xffffffde
            i += 1
            ecx_4 += 0xc
        while (i s< zx.d(*(data_e7e648 + 0x2082a)))
    
    *(edx + 0x10) = 1
    eax = data_e7e648
else if (ecx != 1)
    return 0

int32_t i_1 = 0
arg1:3.b = 1

if (*(eax + 0x2082a) u> 0)
    uint32_t* esi_1 = esi + 8
    
    do
        if (*esi_1 s< 0xffffffe0)
            esi_1[-2] = 0
            esi_1[-1] = mods.dp.d(sx.q(sub_448760()), 0x280)
            *esi_1 = mods.dp.d(sx.q(sub_448760()), 0x1e0)
        
        int32_t eax_8 = esi_1[-2]
        
        if (eax_8 s< 0x80)
            esi_1[-2] = eax_8 + 1
        
        *esi_1 -= 2
        arg1:2.b = 0x80
        arg1:1.b = 0x80
        arg1.b = 0x80
        edx.b = esi_1[-2].b
        arg1:3.b = edx.b
        int32_t eax_16
        int16_t edx_7
        edx_7:eax_16 = sx.q(sub_441360((*esi_1 + esi_1[-1]) * 0x30000 s/ 0xf0) << 6)
        int32_t var_8 = ((eax_16 + zx.d(edx_7)) s>> 0x10) + esi_1[-1]
        uint32_t var_4_1 = *esi_1
        sub_444110(data_e7e648 + 0x10f1e8, &var_8, &arg1, 3)
        eax = data_e7e648
        i_1 += 1
        esi_1 = &esi_1[3]
    while (i_1 s< zx.d(*(eax + 0x2082a)))

sub_442c30(eax + 0x10f1e8, 3)
return 0
