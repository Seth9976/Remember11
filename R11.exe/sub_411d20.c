// 函数: sub_411d20
// 地址: 0x411d20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
bool cond:0 = *(ecx + 0xc) != 1
data_a59b24 = ecx

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
label_411d99:
    
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
        goto label_411d99
    
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
            int32_t var_10_1 = 0
            *(ecx + 0x14) = 0
            sub_40fca0(ecx, (mods.dp.d(edx_4:eax, esi_1)).b)
            ecx = data_a59b24

data_a59b2c = 0
data_a59b2d = 0
data_a59b2e = 0
data_a59b2f = (*(ecx + 0x14) s>> 0xc).b
sub_4437c0(0x4b0df4, &data_a59b2c, 3)
return 0
