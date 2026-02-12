// 函数: sub_43ff00
// 地址: 0x43ff00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t ebp = *arg4
uint32_t result = 0

if (ebp != 0)
    int32_t var_18_1 = arg5[1]
    int32_t i = 0
    int32_t var_1c = *arg5 + (neg.d(sx.d(arg4[2])) << 1)
    void* esi_1 = &arg4[6]
    
    if (ebp u> 0)
        do
            result = sub_43f9d0(arg1, arg2, arg3, esi_1, &var_1c, arg6, arg7)
            i += 1
            esi_1 += zx.d(*esi_1) << 2
        while (i s< zx.d(*arg4))
    
    int32_t eax_3
    int32_t edx_5
    edx_5:eax_3 = sx.q(result + 0x10)
    sub_43f430(((eax_3 + (edx_5 & 0xf)) s>> 4 << 0xf) + arg1 - 0x8000, arg2, arg3, arg7)
    int32_t* ecx_7 = data_c7bbcc
    int16_t var_14 = arg2
    int16_t var_12_1 = 8
    int16_t var_10_1 = 0
    int16_t var_e_1 = 0
    int16_t var_c_1 = 0
    int16_t var_a_1 = 0x200
    int16_t var_8_1 = 0x10
    int16_t var_6_1 = arg3
    int16_t var_4_1 = 0
    int16_t* esi_3 = *ecx_7
    sub_449010(esi_3, 0)
    int32_t var_48_2 = data_c7bbf0
    int32_t var_4c_1 = 0
    sub_447b50(esi_3, &var_14)
    sub_448880(data_c7bbc8, arg7, esi_3)
    result = data_c7bbcc
    *result += 0x50

return result
