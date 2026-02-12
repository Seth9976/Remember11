// 函数: sub_442d50
// 地址: 0x442d50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg1[3] & 0x3ff)
int32_t eax_6
int32_t edx_2
edx_2:eax_6 = sx.q(arg1[1] & 0x3ff)
int32_t esi_1 = eax_2 << 0xa | eax_6
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(arg1[2] & 0x3ff)
int32_t esi_3 = esi_1 << 0xa | eax_9
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(*arg1 & 0x3ff)
int32_t esi_5 = esi_3 << 0xa | (eax_12 & 0x3ff)
int32_t ebx_1 = (
    ((edx << 0xa | eax_2 u>> 0xffffffea | edx_2) << 0xa | esi_1 u>> 0xffffffea | edx_3) << 0xa
    | esi_3 u>> 0xffffffea | (edx_4 & 0xffffff00)) << 4 | esi_5 u>> 0xffffffe4
int16_t* esi_6 = *data_c7bbcc
int32_t eax_17 = sub_448f10(esi_6, 1)
*(esi_6 + 0x28) = 8
*(esi_6 + 0x2c) = 0
int32_t var_8
*(esi_6 + 0x20) = esi_5 << 4 | (var_8 & 0xa) | 0xa
int32_t var_4
*(esi_6 + 0x24) = ebx_1 | (var_4 & 0xfffff000)
sub_448880(data_c7bbc8, arg2, esi_6)
int32_t* result = data_c7bbcc
*result += eax_17 << 4
return result
