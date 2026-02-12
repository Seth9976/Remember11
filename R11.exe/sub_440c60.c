// 函数: sub_440c60
// 地址: 0x440c60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t var_1c = 0
int32_t* result = sub_448460(arg1)

if (result != 0)
    int32_t __saved_ebp_1 = arg7
    return sub_440780(arg1, arg2, arg3, arg4, arg5, arg6)

if (*arg4 != 0)
    int16_t* esi_1 = *data_c7bbcc
    int32_t eax_4 = sub_448f10(esi_1, 1)
    sub_4479d0(esi_1, 0, 0x47, 0, data_a59990, data_a59994)
    sub_448880(data_c7bbc8, arg7, esi_1)
    int32_t* eax_6 = data_c7bbcc
    *eax_6 += eax_4 << 4
    int32_t edi_3 = 0
    void* esi_2 = &arg4[6]
    
    if (*arg4 u> 0)
        uint32_t ecx_6
        
        do
            int32_t var_30_2 = arg7
            uint32_t eax_8 = sub_440210(arg1, arg2, arg3, esi_2, &var_1c, arg6)
            ecx_6 = zx.d(*arg4)
            var_1c = eax_8
            edi_3 += 1
            esi_2 += zx.d(*esi_2) << 2
        while (edi_3 s< ecx_6)
    
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(var_1c + 0x10)
    sub_43f430(&arg1[((eax_12 + (edx_5 & 0xf)) s>> 4) * 0x2000 - 0x2000], arg2, arg3, arg7)
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
    int16_t* esi_4 = *ecx_7
    sub_449010(esi_4, 0)
    int32_t var_48_2 = data_c7bbf0
    int32_t var_4c_2 = 0
    sub_447b50(esi_4, &var_14)
    sub_448880(data_c7bbc8, arg7, esi_4)
    result = data_c7bbcc
    *result += 0x50

return result
