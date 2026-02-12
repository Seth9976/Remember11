// 函数: sub_4184d0
// 地址: 0x4184d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = data_e7e648
__builtin_memcpy(arg1 * 0x104 + eax + 0x1f5dc, arg2 * 0x104 + eax + 0x1f5dc, 0x104)
int16_t esi_1 = *(arg1 * 0x104 + eax + 0x1f5dc)
*(arg1 * 0x104 + eax + 0x1f5dc) = 0xffff
void* eax_1 = sub_417d60()
*(arg1 * 0x104 + eax + 0x1f6d8) = eax_1
int32_t* ecx_1 = *(arg2 * 0x104 + eax + 0x1f6d8)
int128_t* result = sub_480ea0(eax_1, ecx_1, ecx_1[*ecx_1])
*(arg1 * 0x104 + eax + 0x1f5dc) = esi_1
return result
