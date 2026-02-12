// 函数: sub_4119e0
// 地址: 0x4119e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
int16_t* edi = *(ecx + 0x4c)
bool cond:0 = *(ecx + 0xc) != 1
data_a59b24 = ecx
data_a59b04 = edi

if (not(cond:0))
    *(ecx + 0x10) = 1
    *(ecx + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t edx = sx.d(*(arg1 + 0x10))
int32_t edx_1 = edx

if (edx == 0)
    *(ecx + 8) = 0
    *(ecx + 0x14) = 0
    *(arg1 + 0x10) = 1
label_411a4a:
    int16_t eax_2 = *(ecx + 0x2a)
    
    if (eax_2 != 0)
        if (*(ecx + 8) == zx.d(eax_2))
            int32_t __saved_esi_2 = 0
            sub_40fca0(ecx, edx_1.b)
            ecx = data_a59b24
            edi = data_a59b04
        
        *(ecx + 8) += 1
    
    int32_t esi_1 = sx.d(edi[4])
    
    if (esi_1 == 0)
        esi_1 = 1
    
    *(ecx + 0x14) += divs.dp.d(0x800, esi_1)
    int32_t eax_8 = sx.d(*edi) & 0x8000000f
    
    if (eax_8 s< 0)
        eax_8 = ((eax_8 - 1) | 0xfffffff0) + 1
    
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(eax_8 << 7)
    data_a59b28 = ((eax_12 + (edx_5 & 0xf)) s>> 4).b
    int32_t eax_16 = sx.d(edi[1]) & 0x8000000f
    
    if (eax_16 s< 0)
        eax_16 = ((eax_16 - 1) | 0xfffffff0) + 1
    
    int32_t eax_20
    int32_t edx_7
    edx_7:eax_20 = sx.q(eax_16 << 7)
    data_a59b29 = ((eax_20 + (edx_7 & 0xf)) s>> 4).b
    int32_t eax_24 = sx.d(edi[2]) & 0x8000000f
    
    if (eax_24 s< 0)
        eax_24 = ((eax_24 - 1) | 0xfffffff0) + 1
    
    int32_t eax_28
    int32_t edx_9
    edx_9:eax_28 = sx.q(eax_24 << 7)
    data_a59b2a = ((eax_28 + (edx_9 & 0xf)) s>> 4).b
    int32_t eax_33
    int32_t edx_11
    edx_11:eax_33 = sx.q(*(ecx + 0x14) << 0x10)
    int32_t eax_37
    int32_t edx_13
    edx_13:eax_37 = sx.q(sub_441360((eax_33 + (edx_11 & 0xfff)) s>> 0xc))
    int32_t eax_39 = sx.d(*(data_a59b04 + 6)) & 0x8000000f
    
    if (eax_39 s< 0)
        eax_39 = ((eax_39 - 1) | 0xfffffff0) + 1
    
    int32_t eax_43
    int32_t edx_15
    edx_15:eax_43 = sx.q(eax_39 << 7)
    int32_t eax_47
    int16_t edx_17
    edx_17:eax_47 = sx.q(((eax_43 + (edx_15 & 0xf)) s>> 4) * ((eax_37 ^ edx_13) - edx_13))
    data_a59b2b = ((eax_47 + zx.d(edx_17)) s>> 0x10).b
    sub_4437c0(0x4b0d80, &data_a59b28, 3)
else
    int32_t temp3_1 = edx_1
    edx_1 -= 1
    
    if (temp3_1 == 1)
        goto label_411a4a
    
    if (edx_1 == 0x63)
        int32_t __saved_esi_1 = edx_1 - 0x63
        sub_40fca0(ecx, (edx_1 - 0x63).b)

return 0
