// 函数: sub_4110f0
// 地址: 0x4110f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
int32_t edx = *(eax + 0x4c)
data_a59b14 = edx
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax

if (not(cond:0))
    *(eax + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t edi = sx.d(*(arg1 + 0x10))

if (edi == 0)
    *(eax + 8) = 0
    __builtin_memset(eax + 0x14, 0, 0x14)
    *(arg1 + 0x10) = 1
label_41115b:
    int16_t ecx = *(eax + 0x2a)
    
    if (ecx != 0)
        if (*(eax + 8) == zx.d(ecx))
            int32_t __saved_ebx_2 = 0
            sub_40fca0(eax, edx.b)
            eax = data_a59b24
        
        *(eax + 8) += 1
    
    sub_442e20()
    void* ecx_2 = data_a59b14
    data_c7bbf0 = 1
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q((sx.d(*(ecx_2 + 0xc)) - sx.d(*(ecx_2 + 0xa))) << 7)
    int32_t edi_6 = (eax_5 + (edx_2 & 0xf)) s>> 4 << 4
    int32_t eax_9 = sub_441360(*(data_a59b24 + 0x14)) * edi_6
    void* ecx_4 = data_a59b14
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(eax_9)
    int32_t eax_13
    int16_t edx_5
    edx_5:eax_13 = sx.q((eax_10 - edx_4) s>> 1)
    int32_t eax_17
    int32_t edx_7
    edx_7:eax_17 = sx.q(sx.d(*(ecx_4 + 0xa)) << 7)
    int32_t eax_22
    int32_t edx_9
    edx_9:eax_22 = sx.q(edi_6)
    int32_t esi_4 = ((eax_13 + zx.d(edx_5)) s>> 0x10) + ((eax_17 + (edx_7 & 0xf)) s>> 4 << 4)
        + ((eax_22 - edx_9) s>> 1)
    int32_t edi_9 = (sx.d(*(ecx_4 + 0x12)) - sx.d(*(ecx_4 + 0x10))) << 4
    int32_t eax_27 = sub_441360(*(data_a59b24 + 0x18)) * edi_9
    void* ecx_6 = data_a59b14
    int32_t eax_28
    int32_t edx_11
    edx_11:eax_28 = sx.q(eax_27)
    int32_t eax_31
    int16_t edx_12
    edx_12:eax_31 = sx.q((eax_28 - edx_11) s>> 1)
    int32_t eax_34
    int32_t edx_16
    edx_16:eax_34 = sx.q(edi_9)
    int32_t ebx_4 = ((eax_31 + zx.d(edx_12)) s>> 0x10) + (sx.d(*(ecx_6 + 0x10)) << 4)
        + ((eax_34 - edx_16) s>> 1)
    int32_t edi_12 = (sx.d(*(ecx_6 + 0x16)) - sx.d(*(ecx_6 + 0x18))) << 4
    int32_t eax_40
    int32_t edx_18
    edx_18:eax_40 = sx.q(sub_441360(*(data_a59b24 + 0x1c)) * edi_12)
    int32_t eax_43
    int16_t edx_19
    edx_19:eax_43 = sx.q((eax_40 - edx_18) s>> 1)
    void* ebp_1 = data_a59b14
    int32_t eax_48
    int32_t edx_21
    edx_21:eax_48 = sx.q(edi_12)
    int32_t ecx_11 = ((eax_43 + zx.d(edx_19)) s>> 0x10) + (sx.d(*(ebp_1 + 0x16)) << 4)
        + ((eax_48 - edx_21) s>> 1)
    char var_24_1 = 0x80
    char var_28_1 = 0x80
    char var_2c_1 = 0x80
    char var_30 = 0x80
    char var_23_1 = 0x80
    char var_27_1 = 0x80
    char var_2b_1 = 0x80
    char var_2f_1 = 0x80
    char var_22_1 = 0x80
    char var_26_1 = 0x80
    char var_2a_1 = 0x80
    char var_2e_1 = 0x80
    int32_t eax_53
    int32_t edx_22
    edx_22:eax_53 = sx.q(sx.d(*(ebp_1 + 6)) << 7)
    int32_t eax_57
    int32_t edx_24
    edx_24:eax_57 = sx.q(((eax_53 + (edx_22 & 0xf)) s>> 4) * esi_4)
    char eax_60 = ((eax_57 + (edx_24 & 0x7f)) s>> 0xb).b
    char var_25_1 = eax_60
    char var_2d_1 = eax_60
    int32_t eax_63
    int32_t edx_26
    edx_26:eax_63 = sx.q(sx.d(*(ebp_1 + 8)) << 7)
    int32_t eax_67
    int32_t edx_28
    edx_28:eax_67 = sx.q(((eax_63 + (edx_26 & 0xf)) s>> 4) * esi_4)
    char eax_70 = ((eax_67 + (edx_28 & 0x7f)) s>> 0xb).b
    char var_21_1 = eax_70
    char var_29_1 = eax_70
    int32_t ebx_6 = (ebx_4 + 0x400) & 0x800003ff
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0x2800
    int32_t var_14_1 = 0x2800
    
    if (ebx_6 s< 0)
        ebx_6 = ((ebx_6 - 1) | 0xfffffc00) + 1
    
    int32_t ecx_13 = (ecx_11 + 0x400) & 0x800003ff
    int32_t var_10_1 = ebx_6
    
    if (ecx_13 s< 0)
        ecx_13 = ((ecx_13 - 1) | 0xfffffc00) + 1
    
    int32_t var_c_1 = ecx_13
    int32_t var_50_1 = 3
    int32_t var_8_1 = 0x400
    int32_t var_4_1 = 0x400
    sub_444ce0(data_e7e648 + 0x10f190, &var_20, &var_30)
    void* esi_5 = data_a59b14
    void* ecx_16 = data_a59b24
    *(ecx_16 + 0x14) += divs.dp.d(0x10000, sx.d(*(esi_5 + 0xe)) * 5) + 1
    *(ecx_16 + 0x18) += divs.dp.d(0x10000, sx.d(*(esi_5 + 0x14)) * 5) + 1
    *(ecx_16 + 0x1c) += divs.dp.d(0x10000, sx.d(*(esi_5 + 0x1a)) * 5) + 1
    int16_t* esi_7 = *data_c7bbcc
    int32_t eax_85 = sub_448f10(esi_7, 1)
    *(esi_7 + 0x28) = 8
    *(esi_7 + 0x2c) = 0
    *(esi_7 + 0x20) = var_30.d & 0xfffffff0
    *(esi_7 + 0x24) = var_2c_1.d
    sub_448880(data_c7bbc8, 3, esi_7)
    int32_t* eax_87 = data_c7bbcc
    *eax_87 += eax_85 << 4
    sub_442c30(data_e7e648 + 0x10f190, 3)
    sub_442f40()
else
    if (edi == 1)
        goto label_41115b
    
    if (edi == 0x64)
        int32_t __saved_ebx_1 = 0
        sub_40fca0(eax, edx.b)

return 0
