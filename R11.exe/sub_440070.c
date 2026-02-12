// 函数: sub_440070
// 地址: 0x440070
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax_1 = sub_448f10(esi, 1)
*(esi + 0x28) = 8
*(esi + 0x2c) = 0
int32_t var_1c
*(esi + 0x20) = (var_1c & 0x17fc015) | 0x17fc015
int32_t var_18
*(esi + 0x24) = (var_18 & 0xfffff7fc) | 0x7fc
sub_448880(data_c7bbc8, arg4, esi)
int32_t* eax_3 = data_c7bbcc
*eax_3 += eax_1 << 4
eax_3.w = arg6
int16_t var_14 = arg2
int16_t var_a = arg5
int16_t var_12 = 8
int16_t var_10 = 0
int16_t var_e = 0
int16_t var_c = 0
int16_t var_8 = eax_3.w
int16_t var_6 = arg3
int16_t var_4 = 0
int16_t* esi_1 = *data_c7bbcc
sub_4490b0(esi_1)
sub_4491f0(esi_1, &var_14, arg1, 0)
sub_448880(data_c7bbc8, arg4, esi_1)
int32_t* result = data_c7bbcc
*result += 0xb0
return result
