// 函数: sub_42b010
// 地址: 0x42b010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_445470(data_4bf344 + 0x1f188, 0x4bf374, 0x4bf38c, 0xa)
sub_442c30(data_4bf344 + 0x1f188, 0xa)
data_4bf398 = 0x20
data_4bf39c = 0x20

for (int32_t i = 0; i s< 9; i += 1)
    void* ecx_2 = data_4bf344
    int32_t edx_4 = *((modu.dp.d(0:(*(ecx_2 + 0xb218) + i + 9), 0xd) << 2) + &data_4bf2e0)
    int32_t eax_4
    char edx_5
    edx_5:eax_4 = sx.q(*(ecx_2 + 0xb220) << 0xc)
    int32_t eax_8
    int32_t edx_7
    edx_7:eax_8 = sx.q((i - 4) << 0x10)
    int32_t esi_3 = ((eax_4 + zx.d(edx_5)) s>> 8) + ((eax_8 + (edx_7 & 0xf)) s>> 4)
    int32_t eax_13
    int16_t edx_9
    edx_9:eax_13 = sx.q(sub_441380(esi_3) << 4)
    data_4bf390 = 0x70 - ((eax_13 + zx.d(edx_9)) s>> 0x10)
    int32_t eax_19
    int16_t edx_11
    edx_11:eax_19 = sx.q(sub_441360(esi_3) * 0x60)
    int32_t eax_21 = (&data_4bf018)[edx_4 * 6]
    int32_t edx_14 = *(edx_4 * 0x18 + &data_4bf010) << 4
    data_4bf394 = ((eax_19 + zx.d(edx_11)) s>> 0x10) + 0xb8
    int32_t eax_22 = *(edx_14 + eax_21 + 0xc)
    int32_t edx_16 = eax_22 & 0x8000000f
    
    if (edx_16 s< 0)
        edx_16 = ((edx_16 - 1) | 0xfffffff0) + 1
    
    data_4bf3a0 = edx_16 << 5
    int32_t eax_23
    int32_t edx_20
    edx_20:eax_23 = sx.q(eax_22)
    data_4bf3a4 = (eax_23 + (edx_20 & 0xf)) s>> 4 << 5
    int32_t eax_28
    
    if (i != 4 || *(data_4bf344 + 0xb220) != 0)
        data_4bf390 -= 0x10
        data_4bf394 = ((eax_19 + zx.d(edx_11)) s>> 0x10) + 0xa8
        data_4bf398 = 0x20
        data_4bf39c = 0x20
        int32_t eax_31
        int16_t edx_22
        edx_22:eax_31 = sx.q(sub_441380(esi_3) * 0x64)
        int32_t eax_33 = (eax_31 + zx.d(edx_22)) s>> 0x10
        
        if (eax_33 s< 0)
            eax_33 = 0
        
        eax_33.b += 0x1c
        data_4bf3b3 = eax_33.b
        eax_28 = 0xa
    else
        data_4bf390 -= 0x20
        data_4bf398 = 0x40
        data_4bf39c = 0x40
        data_4bf394 = ((eax_19 + zx.d(edx_11)) s>> 0x10) + 0x98
        data_4bf3b3 = 0x80
        eax_28 = i + 7
    
    sub_445790(data_4bf344 + 0x1f130, &data_4bf390, 0x4bf3b0, eax_28)

sub_442c30(data_4bf344 + 0x1f130, 0xa)
sub_442c30(data_4bf344 + 0x1f130, 0xb)
return sub_423a40(data_4bf344 + 0x1f20c, 0xa)
