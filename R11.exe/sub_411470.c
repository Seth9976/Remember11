// 函数: sub_411470
// 地址: 0x411470
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = arg1
void* edi = data_a59b0c
void* esi = edi + 0x20

if (ebp != 0)
    sub_442e20()
    edi = data_a59b0c

int32_t result = 0
int32_t var_28 = 0
int32_t* esi_1 = esi + 0xc
int32_t i_1 = 0x64
int32_t i

do
    if (esi_1[-1] s> sx.d(*(edi + 0x14)) << 4)
        esi_1[-3] = 0xffffffff
    
    if (ebp != 2 && var_28 == 0)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(*(edi + 6))
        int32_t temp1_1 = mods.dp.d(sx.q(*(data_a59b24 + 0x14)), (eax_4 - edx_1) s>> 1)
        
        if (temp1_1 == 0 && esi_1[-3] == 0xffffffff)
            var_28 = 1
            esi_1[-3] = temp1_1
            esi_1[-2] = mods.dp.d(sx.q(sub_448760()), 0x280)
            esi_1[-1] = neg.d(mods.dp.d(sx.q(sub_448760()), 0x64)) << 4
            int32_t eax_16 = sub_448760() & 0x8000007f
            
            if (eax_16 s< 0)
                eax_16 = ((eax_16 - 1) | 0xffffff80) + 1
            
            *esi_1 = eax_16
            int32_t eax_20 = sub_448760() & 0x80000003
            
            if (eax_20 s< 0)
                eax_20 = ((eax_20 - 1) | 0xfffffffc) + 1
            
            edi = data_a59b0c
            esi_1[1] = eax_20
    
    int32_t eax_23 = esi_1[-3]
    
    if (eax_23 != 0xffffffff)
        result += 1
        
        if (eax_23 != 0xffffffff)
            if (ebp != 0)
                int32_t eax_26
                int16_t edx_11
                edx_11:eax_26 = sx.q(sub_441360(eax_23) << 5)
                void* ecx_3 = data_a59b0c
                int32_t ebp_1 = *esi_1
                int32_t edx_14 = esi_1[-1] s>> 4
                int32_t var_20 = ((eax_26 + zx.d(edx_11)) s>> 0x10) + esi_1[-2]
                int32_t var_1c_1 = edx_14
                int32_t edi_1 = sx.d(*(ecx_3 + 8))
                int32_t eax_33
                int32_t edx_15
                edx_15:eax_33 = sx.q((sx.d(*(ecx_3 + 0xa)) - edi_1) * ebp_1)
                int32_t eax_36 = ((eax_33 + (edx_15 & 0x7f)) s>> 7) + edi_1
                int32_t var_18_1 = eax_36
                int32_t var_14_1 = eax_36
                int32_t var_c_1 = esi_1[1] << 5
                int32_t var_8_1 = 0x20
                int32_t var_4_1 = 0x20
                int32_t var_10_1 = 0
                char var_2e_1 = 0x80
                char var_2f_1 = 0x80
                char var_30 = 0x80
                int32_t edi_2 = sx.d(*(ecx_3 + 0xc))
                int32_t eax_42
                int32_t edx_17
                edx_17:eax_42 = sx.q((sx.d(*(ecx_3 + 0xe)) - edi_2) * ebp_1)
                int32_t eax_46
                int32_t edx_19
                edx_19:eax_46 = sx.q(((eax_42 + (edx_17 & 0x7f)) s>> 7) + edi_2)
                char var_2d_1 = ((eax_46 - edx_19) s>> 1).b
                sub_445790(data_e7e648 + 0x10f1e8, &var_20, &var_30, 4)
                edi = data_a59b0c
                ebp = arg1
            
            esi_1[-3] += 0x100
            int32_t ecx_4 = sx.d(*(edi + 0x12))
            int32_t eax_54
            int32_t edx_20
            edx_20:eax_54 = sx.q((sx.d(*(edi + 0x10)) - ecx_4) * *esi_1)
            esi_1[-1] += ((eax_54 + (edx_20 & 0x7f)) s>> 7) + ecx_4 + 1
    
    esi_1 = &esi_1[5]
    i = i_1
    i_1 -= 1
while (i != 1)

if (ebp != 0)
    sub_442c30(data_e7e648 + 0x10f1e8, 4)
    sub_442f40()

void* eax_57 = data_a59b24
*(eax_57 + 0x14) += 1
return result
