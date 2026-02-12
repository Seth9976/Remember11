// 函数: sub_43aa80
// 地址: 0x43aa80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int32_t* esi_3 = (arg1 u>> 0x10) * 0x7c + data_c7cc80
uint32_t edx = zx.d(*(*esi_3 + ((arg1 & 0xffff) << 1)))
int16_t* edi = *data_c7bbcc
sub_448f80(edi, 0)
sub_447a20(edi, 1, 0)
sub_448880(data_c7bbc8, arg3, edi)
int32_t* eax_3 = data_c7bbcc
*eax_3 += 0x60
int16_t* ebx = *data_c7bbcc
sub_449010(ebx, 0)
int32_t var_40 = arg2
int32_t var_44 = 0
sub_447b50(ebx, &esi_3[0xc])
sub_448880(data_c7bbc8, arg3, ebx)
int32_t* eax_5 = data_c7bbcc
*eax_5 += 0x50
int16_t* ebx_1 = *data_c7bbcc
sub_4490b0(ebx_1)
sub_4491f0(ebx_1, &esi_3[0xc], esi_3[0x1b] * edx + esi_3[2], 0)
sub_448880(data_c7bbc8, arg3, ebx_1)
int32_t* eax_8 = data_c7bbcc
*eax_8 += 0xb0
int16_t* ebx_2 = *data_c7bbcc
int32_t eax_9 = sub_448f10(ebx_2, 1)
sub_4479d0(ebx_2, 0, 0x63, 0, esi_3[0x1b] * edx + esi_3[2], 0xf3000000)
sub_448880(data_c7bbc8, arg3, ebx_2)
int32_t* eax_10 = data_c7bbcc
*eax_10 += eax_9 << 4
int16_t* ebx_3 = *data_c7bbcc
sub_4490b0(ebx_3)
sub_4491f0(ebx_3, &esi_3[0xc], esi_3[1], 1)
sub_448880(data_c7bbc8, arg3, ebx_3)
int32_t* eax_12 = data_c7bbcc
*eax_12 += 0xb0
int16_t* ebx_4 = *data_c7bbcc
int32_t eax_14 = sub_448f10(ebx_4, 1)
sub_4479d0(ebx_4, 0, 0x63, 0, esi_3[1], 0xf4000000)
sub_448880(data_c7bbc8, arg3, ebx_4)
int32_t* result = data_c7bbcc
*result += eax_14 << 4
return result
