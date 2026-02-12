// 函数: sub_411f00
// 地址: 0x411f00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
int16_t* edi = *(ecx + 0x4c)
bool cond:0 = *(ecx + 0xc) != 1
data_a59b24 = ecx
data_a59afc = edi

if (not(cond:0))
    *(ecx + 0x10) = 1
    *(ecx + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t edx = sx.d(*(arg1 + 0x10))

if (edx == 0)
    *(ecx + 0x10) = 1
    *(ecx + 8) = 0
    *(ecx + 0x14) = 0
    *(arg1 + 0x10) = 1
label_411f89:
    
    if (*(ecx + 0x10) != 0)
        uint32_t esi_2 = zx.d(*(ecx + 0x2a))
        
        if (esi_2 == 0)
            esi_2 = 1
        
        int32_t eax_4 = divs.dp.d(0x40000, esi_2)
        
        if (eax_4 == 0)
            eax_4 = 1
        
        *(ecx + 0x14) += eax_4
        
        if (*(ecx + 0x14) s> 0x40000)
            *(ecx + 0x14) = 0x40000
            *(ecx + 0x10) = 0
else
    if (edx == 1)
        goto label_411f89
    
    if (edx == 0x64)
        uint32_t esi_1 = zx.d(*(ecx + 0x2a))
        
        if (esi_1 == 0)
            esi_1 = 1
        
        int32_t eax
        int32_t edx_4
        edx_4:eax = 0x40000
        int32_t eax_1 = divs.dp.d(edx_4:eax, esi_1)
        
        if (eax_1 == 0)
            eax_1 = 1
        
        int32_t temp5_1 = *(ecx + 0x14)
        *(ecx + 0x14) -= eax_1
        
        if (temp5_1 - eax_1 s< 0)
            int32_t var_14_1 = 0
            *(ecx + 0x14) = 0
            sub_40fca0(ecx, (mods.dp.d(edx_4:eax, esi_1)).b)
            ecx = data_a59b24
            edi = data_a59afc

int32_t esi_4 = sx.d(*edi) * 0xff
int32_t eax_5
int32_t edx_8
edx_8:eax_5 = muls.dp.d(0x88888889, esi_4)
int32_t edx_10 = (edx_8 + esi_4) s>> 3
data_a59b30 = (edx_10 u>> 0x1f).b + edx_10.b
int32_t esi_6 = sx.d(edi[1]) * 0xff
int32_t eax_9
int32_t edx_11
edx_11:eax_9 = muls.dp.d(0x88888889, esi_6)
int32_t edx_13 = (edx_11 + esi_6) s>> 3
data_a59b31 = (edx_13 u>> 0x1f).b + edx_13.b
int32_t esi_8 = sx.d(edi[2]) * 0xff
int32_t eax_13
int32_t edx_14
edx_14:eax_13 = muls.dp.d(0x88888889, esi_8)
int32_t edx_16 = (edx_14 + esi_8) s>> 3
data_a59b32 = (edx_16 u>> 0x1f).b + edx_16.b
int32_t eax_22
int32_t edx_20
edx_20:eax_22 = sx.q((sx.d(edi[3]) << 7) s/ 0xf * (*(ecx + 0x14) s>> 0xc))
data_a59b33 = ((eax_22 + (edx_20 & 0x3f)) s>> 6).b
sub_4437c0(0x4b0e1c, &data_a59b30, 3)
return 0
