// 函数: sub_442ea0
// 地址: 0x442ea0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__builtin_memcpy(data_c7bc00 * 0x30 + data_c7bbf8, &data_c7bbc8, 0x30)
int32_t* eax = data_c7bbcc
data_c7bc00 += 1
int32_t* eax_1 = *eax
int32_t edi_3 = data_c7bbc8
data_c7bbc8 = eax_1
sub_448860(eax_1, &eax_1[4], arg1)
sub_447710(data_c7bbc8)
int32_t* eax_2 = data_c7bbcc
*eax_2 += 0x10
int32_t* eax_3 = data_c7bbcc
*eax_3 += ((arg1 << 4) + 0x10) u>> 4 << 4
sub_4488b0(edi_3, 1, data_c7bbc8, *data_c7bbcc)
int32_t* result = data_c7bbcc
*result += 0x20
return result
