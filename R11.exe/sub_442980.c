// 函数: sub_442980
// 地址: 0x442980
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg7 + 0x3f)
int32_t edx_1
edx_1.w = arg6
int16_t var_12 = ((eax_1 + (edx & 0x3f)) s>> 6).w
int16_t var_e = 0
int16_t var_c = 0
int32_t* result
result.w = arg5
int16_t var_14 = arg2.w
int16_t var_10 = arg3.w
int16_t var_a = arg7.w
int16_t var_8 = arg8.w
int16_t var_6 = result.w
int16_t var_4 = edx_1.w

if (arg2 != 0xffffffff)
    int32_t edi_1 = 1
    arg2 = 1
    
    switch (arg3)
        case nullptr, 0x30
            int32_t temp0_1 = divs.dp.d(0x2000000, arg7 << 2)
            arg2 = temp0_1
            edi_1 = temp0_1 * arg7 * 4
        case 1, 0x31
            int32_t temp0_2 = divs.dp.d(0x2000000, arg7 * 3)
            arg2 = temp0_2
            edi_1 = temp0_2 * arg7 * 3
        case 2, 0xa, 0x32, 0x3a
            int32_t temp0_3 = divs.dp.d(0x2000000, arg7 * 2)
            arg2 = temp0_3
            edi_1 = temp0_3 * arg7 * 2
        case 0x13, 0x1b
            int32_t eax_12
            int32_t edx_8
            edx_8:eax_12 = sx.q(arg7 + 0x7f)
            int16_t var_12_1 = ((eax_12 + (edx_8 & 0x3f)) s>> 6).w
            int32_t temp0_4 = divs.dp.d(0x2000000, arg7)
            arg2 = temp0_4
            edi_1 = temp0_4 * arg7
        case 0x14, 0x24, 0x2c
            int32_t eax_18
            int32_t edx_12
            edx_12:eax_18 = sx.q(arg7 + 0x7f)
            int16_t var_12_2 = ((eax_18 + (edx_12 & 0x3f)) s>> 6).w
            int32_t eax_22
            int32_t edx_14
            edx_14:eax_22 = sx.q(arg7)
            int32_t temp0_5 = divs.dp.d(0x2000000, (eax_22 - edx_14) s>> 1)
            arg2 = temp0_5
            int32_t eax_27
            int32_t edx_16
            edx_16:eax_27 = sx.q(temp0_5 * arg7)
            edi_1 = (eax_27 - edx_16) s>> 1
    
    int32_t eax_30
    int32_t edx_17
    edx_17:eax_30 = sx.q(arg8)
    int32_t temp0_6 = divs.dp.d(edx_17:eax_30, arg2)
    int32_t ecx
    ecx.w = arg2.w
    int32_t esi_6 = 0
    int16_t var_8_1 = ecx.w
    
    if (temp0_6 s> 0)
        arg3 = arg1
        
        do
            int16_t var_c_1 = esi_6.w * arg2.w
            int16_t* ebx_1 = *data_c7bbcc
            sub_4490b0(ebx_1)
            sub_4491f0(ebx_1, &var_14, arg3, 0)
            sub_448880(data_c7bbc8, arg9, ebx_1)
            int32_t* eax_34 = data_c7bbcc
            arg3 += edi_1
            *eax_34 += 0xb0
            esi_6 += 1
        while (esi_6 s< temp0_6)
    
    ecx.w = mods.dp.d(edx_17:eax_30, arg2).w
    int16_t var_c_2 = esi_6.w * arg2.w
    int16_t var_8_2 = ecx.w
    int16_t* ebx_2 = *data_c7bbcc
    sub_4490b0(ebx_2)
    sub_4491f0(ebx_2, &var_14, esi_6 * edi_1 + arg1, 0)
    sub_448880(data_c7bbc8, arg9, ebx_2)
    result = data_c7bbcc
    *result += 0xb0

if (arg4 != 0)
    int16_t* esi_9 = *data_c7bbcc
    sub_4490b0(esi_9)
    sub_4491f0(esi_9, &var_14, arg4, 1)
    sub_448880(data_c7bbc8, arg9, esi_9)
    result = data_c7bbcc
    *result += 0xb0

return result
