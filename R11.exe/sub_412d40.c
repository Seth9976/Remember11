// 函数: sub_412d40
// 地址: 0x412d40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x44)
int32_t edx = *(ecx + 0x4c)
bool cond:0 = *(ecx + 0xc) != 1
data_a59b24 = ecx
data_a59af4 = edx

if (not(cond:0))
    *(ecx + 0xc) = 0
    *(ecx + 0x10) = 1
    *(ecx + 8) = 0
    *(ecx + 0x14) = 0x80000
    *(arg1 + 0x10) = 0x64

int32_t edx_1 = sx.d(*(arg1 + 0x10))

if (edx_1 == 0)
    *(ecx + 0x10) = 1
    *(ecx + 8) = 0
    *(ecx + 0x14) = 0
    *(arg1 + 0x10) = 1
label_412dc6:
    
    if (*(ecx + 0x10) != 0)
        uint32_t esi_2 = zx.d(*(ecx + 0x2a))
        
        if (esi_2 == 0)
            esi_2 = 1
        
        int32_t eax_4 = divs.dp.d(0x80000, esi_2)
        
        if (eax_4 == 0)
            eax_4 = 1
        
        *(ecx + 0x14) += eax_4
        
        if (*(ecx + 0x14) s> 0x80000)
            *(ecx + 0x14) = 0x80000
            *(ecx + 0x10) = 0
else
    if (edx_1 == 1)
        goto label_412dc6
    
    if (edx_1 == 0x64)
        uint32_t esi_1 = zx.d(*(ecx + 0x2a))
        
        if (esi_1 == 0)
            esi_1 = 1
        
        int32_t eax
        int32_t edx_5
        edx_5:eax = 0x80000
        int32_t eax_1 = divs.dp.d(edx_5:eax, esi_1)
        
        if (eax_1 == 0)
            eax_1 = 1
        
        int32_t temp5_1 = *(ecx + 0x14)
        *(ecx + 0x14) -= eax_1
        
        if (temp5_1 - eax_1 s< 0)
            int32_t var_10_1 = 0
            *(ecx + 0x14) = 0
            sub_40fca0(ecx, (mods.dp.d(edx_5:eax, esi_1)).b)

sub_442e20()
void* eax_5 = data_a59af4
data_c7bbf0 = 1
int32_t eax_11
int32_t edx_14
edx_14:eax_11 = sx.q((sx.d(*(eax_5 + 8)) << 7) s/ 0xf * (*(data_a59b24 + 0x14) s>> 0xc))
data_4b0e67 = ((eax_11 + (edx_14 & 0x7f)) s>> 7).b
sub_444420(data_e7e648 + 0x10f240, 0x4b0ea8, 0x4b0e64, 4)
sub_442c30(data_e7e648 + 0x10f240, 4)
int16_t* esi_3 = data_a59af4
int32_t ecx_7 = sx.d(*esi_3) * 0xff
int32_t eax_16
int32_t edx_16
edx_16:eax_16 = muls.dp.d(0x88888889, ecx_7)
int32_t edx_18 = (edx_16 + ecx_7) s>> 3
data_4b0eb8 = (edx_18 u>> 0x1f).b + edx_18.b
int32_t ecx_9 = sx.d(esi_3[1]) * 0xff
int32_t eax_20
int32_t edx_19
edx_19:eax_20 = muls.dp.d(0x88888889, ecx_9)
int32_t edx_21 = (edx_19 + ecx_9) s>> 3
data_4b0eb9 = (edx_21 u>> 0x1f).b + edx_21.b
int32_t ecx_14 = sx.d(esi_3[2]) * 0xff
int32_t eax_21
int32_t edx_22
edx_22:eax_21 = muls.dp.d(0x88888889, ecx_14)
int32_t edx_24 = (edx_22 + ecx_14) s>> 3
data_4b0eba = (edx_24 u>> 0x1f).b + edx_24.b
int32_t eax_30
int32_t edx_30
edx_30:eax_30 = sx.q((sx.d(esi_3[3]) << 7) s/ 0xf * (*(data_a59b24 + 0x14) s>> 0xc))
data_4b0ebb = ((eax_30 + (edx_30 & 0x7f)) s>> 7).b
sub_4437c0(0x4b0ea8, &data_4b0eb8, 4)
sub_442f40()
return 0
