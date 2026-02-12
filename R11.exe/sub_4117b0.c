// 函数: sub_4117b0
// 地址: 0x4117b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
int16_t* esi = *(ecx + 0x4c)
bool cond:0 = *(ecx + 0xc) != 1
data_a59b24 = ecx
data_a59b08 = esi

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
label_411811:
    int16_t eax_2 = *(ecx + 0x2a)
    
    if (eax_2 != 0)
        if (*(ecx + 8) == zx.d(eax_2))
            int32_t var_10_2 = 0
            sub_40fca0(ecx, edx_1.b)
            ecx = data_a59b24
            esi = data_a59b08
        
        *(ecx + 8) += 1
    
    if (*(ecx + 0x14) != 0)
        int32_t eax_5 = sx.d(esi[0x10])
        data_4b0d5c = eax_5
        data_4b0d38 = eax_5
        data_4b0d14 = eax_5
        data_4b0cf0 = eax_5
        int32_t eax_6 = sx.d(esi[0x11])
        data_4b0d60 = eax_6
        data_4b0d3c = eax_6
        data_4b0d18 = eax_6
        data_4b0cf4 = eax_6
        int32_t eax_7 = sx.d(esi[0x12])
        data_4b0d64 = eax_7
        data_4b0d40 = eax_7
        data_4b0d1c = eax_7
        data_4b0cf8 = eax_7
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(sx.d(*esi) << 7)
        int32_t eax_13
        int32_t edx_5
        edx_5:eax_13 = sx.q(*(ecx + 0x14))
        int32_t eax_17
        int32_t edx_6
        edx_6:eax_17 = sx.q(((eax_13 - edx_5) s>> 1) * ((eax_10 + (edx_3 & 0xf)) s>> 4))
        data_4b0cfc = (eax_17 + (edx_6 & 0x7f)) s>> 7
        int32_t eax_22
        int32_t edx_8
        edx_8:eax_22 = sx.q(sx.d(esi[1]) << 7)
        int32_t eax_25
        int32_t edx_10
        edx_10:eax_25 = sx.q(*(ecx + 0x14))
        int32_t eax_29
        int32_t edx_11
        edx_11:eax_29 = sx.q(((eax_25 - edx_10) s>> 1) * ((eax_22 + (edx_8 & 0xf)) s>> 4))
        data_4b0d20 = (eax_29 + (edx_11 & 0x7f)) s>> 7
        int32_t eax_34
        int32_t edx_13
        edx_13:eax_34 = sx.q(sx.d(esi[2]) << 7)
        int32_t eax_37
        int32_t edx_15
        edx_15:eax_37 = sx.q(*(ecx + 0x14))
        int32_t eax_41
        int32_t edx_16
        edx_16:eax_41 = sx.q(((eax_37 - edx_15) s>> 1) * ((eax_34 + (edx_13 & 0xf)) s>> 4))
        data_4b0d44 = (eax_41 + (edx_16 & 0x7f)) s>> 7
        int32_t eax_46
        int32_t edx_18
        edx_18:eax_46 = sx.q(sx.d(esi[3]) << 7)
        int32_t eax_49
        int32_t edx_20
        edx_20:eax_49 = sx.q(*(ecx + 0x14))
        int32_t eax_53
        int32_t edx_21
        edx_21:eax_53 = sx.q(((eax_49 - edx_20) s>> 1) * ((eax_46 + (edx_18 & 0xf)) s>> 4))
        data_4b0d68 = (eax_53 + (edx_21 & 0x7f)) s>> 7
        sub_443570(&data_4b0cf0, 3)
        void* eax_56 = data_a59b24
        *(eax_56 + 0x14) -= 1
        return 0
    
    if (mods.dp.d(sx.q(sub_448760()), 0x3c) == 0)
        int32_t eax_62 = sub_448760() & 0x8000007f
        
        if (eax_62 s< 0)
            eax_62 = ((eax_62 - 1) | 0xffffff80) + 1
        
        *(data_a59b08 + 0x20) = eax_62.w + 0x80
        int32_t eax_67 = sub_448760() & 0x8000007f
        
        if (eax_67 s< 0)
            eax_67 = ((eax_67 - 1) | 0xffffff80) + 1
        
        *(data_a59b08 + 0x22) = eax_67.w + 0x80
        int32_t eax_72 = sub_448760() & 0x8000007f
        
        if (eax_72 s< 0)
            eax_72 = ((eax_72 - 1) | 0xffffff80) + 1
        
        *(data_a59b08 + 0x24) = eax_72.w + 0x80
        *(data_a59b24 + 0x14) = 0x100
else
    int32_t temp3_1 = edx_1
    edx_1 -= 1
    
    if (temp3_1 == 1)
        goto label_411811
    
    if (edx_1 == 0x63)
        int32_t var_10_1 = 0
        sub_40fca0(ecx, edx_1.b - 0x63)

return 0
