// 函数: sub_446080
// 地址: 0x446080
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax_1 = sub_448950(esi, 0x2914, 2)
char* ecx = arg2

if (ecx == 0)
    ecx = &data_c7bbf4

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(zx.d(ecx[3]))
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(zx.d(ecx[2]))
int32_t edi_1 = eax_3 | 0x80000000
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(zx.d(ecx[1]))
int32_t edi_3 = edi_1 << 8 | eax_5
int32_t edi_5 = edi_3 << 8 | eax_7
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(zx.d(*ecx))
*(esi + 0x28) = 1
*(esi + 0x2c) = 0
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | edi_1 u>> 0xffffffe8 | edx_1) << 8 | edi_3 u>> 0xffffffe8 | edx_2) << 8
    | edi_5 u>> 0xffffffe8 | edx_3
*(esi + 0x20) = edi_5 << 8 | eax_9
int32_t edi_8 = *(esi + 0x70)
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(*(arg1 + 0x20) & 0x3fff)
*(esi + 0x74) |= edx_4
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_13 = eax_12 | (edi_8 & 0xffffc000)
int32_t edx_7 = eax_13 ^ *(esi + 0x60)
*(esi + 0x70) = eax_13
*(esi + 0x60) ^= edx_7 & 0x3fff
int32_t ebx_9 = *(esi + 0x60)
int32_t edx_9 = *(esi + 0x50)
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x54) = *(esi + 0x54)
int32_t eax_14 = *(esi + 0x40)
*(esi + 0x50) ^= (edx_9 ^ ebx_9) & 0x3fff
int32_t ebp_1 = *(esi + 0x50)
*(esi + 0x40) ^= (eax_14 ^ ebp_1) & 0x3fff
int32_t eax_19
int32_t edx_12
edx_12:eax_19 = sx.q(*(arg1 + 0x24) & 0x3fff)
int32_t eax_21 = eax_19 << 0x10 | (eax_13 & 0xc000ffff)
*(esi + 0x74) |= edx_12 << 0x10 | eax_19 u>> 0xfffffff0
*(esi + 0x70) = eax_21
int32_t edx_18 = ((ebx_9 ^ eax_21) & 0x3fff0000) ^ ebx_9
int32_t eax_22 = *(esi + 0x64)
*(esi + 0x60) = edx_18
*(esi + 0x64) = eax_22
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x54) = *(esi + 0x54)
int32_t edx_22 = ((ebp_1 ^ edx_18) & 0x3fff0000) ^ ebp_1
*(esi + 0x50) = edx_22
*(esi + 0x40) ^= (*(esi + 0x40) ^ edx_22) & 0x3fff0000
int32_t eax_27
int32_t edx_26
edx_26:eax_27 = sx.q((*(arg1 + 0x28) + *(arg1 + 0x20)) & 0x3fff)
int32_t edx_27 = edx_26 | *(esi + 0x74)
int32_t eax_28 = eax_27 | (eax_21 & 0xffffc000)
*(esi + 0x70) = eax_28
*(esi + 0x74) = edx_27
int32_t edx_28 = *(esi + 0x64)
*(esi + 0x60) = ((edx_18 ^ eax_28) & 0x3fff) ^ edx_18
*(esi + 0x64) = edx_28
int32_t ebx_11 = *(esi + 0x7c)
int32_t eax_36
int32_t edx_29
edx_29:eax_36 = sx.q((*(arg1 + 0x2c) + *(arg1 + 0x24)) & 0x3fff)
int32_t edx_31 = edx_29 << 0x10 | eax_36 u>> 0xfffffff0 | *(esi + 0x74)
int32_t eax_38 = eax_36 << 0x10 | (eax_28 & 0xc000ffff)
int32_t edi_16 = *(esi + 0x78)
*(esi + 0x70) = eax_38
*(esi + 0x74) = edx_31
int32_t edx_32 = *(esi + 0x54)
*(esi + 0x50) = ((eax_38 ^ edx_22) & 0x3fff0000) ^ edx_22
*(esi + 0x54) = edx_32
*(esi + 0x7c) = (data_c7bbd8 & 0xffffff) | (ebx_11 & 0xff000000)
*(esi + 0x6c) ^= (*(esi + 0x6c) ^ *(esi + 0x7c)) & 0xffffff
int32_t eax_48 = *(esi + 0x4c)
*(esi + 0x78) = edi_16
int32_t edx_35 = *(esi + 0x6c) ^ *(esi + 0x5c)
*(esi + 0x68) = *(esi + 0x68)
*(esi + 0x58) = *(esi + 0x58)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x5c) ^= edx_35 & 0xffffff
*(esi + 0x4c) ^= (eax_48 ^ *(esi + 0x5c)) & 0xffffff
char edx_37 = data_c7bbdc
*(esi + 0x7f) = edx_37
*(esi + 0x6f) = edx_37
*(esi + 0x5f) = edx_37
*(esi + 0x4f) = edx_37
esi[0x24] = *arg1 + data_c7bbd0.w
esi[0x25] = arg1[2] + data_c7bbd4.w
esi[0x2c] = arg1[4] + data_c7bbd0.w
esi[0x2d] = arg1[6] + data_c7bbd4.w
esi[0x34] = arg1[8] + data_c7bbd0.w
esi[0x35] = arg1[0xa] + data_c7bbd4.w
esi[0x3c] = arg1[0xc] + data_c7bbd0.w
esi[0x3d] = arg1[0xe] + data_c7bbd4.w
sub_448880(data_c7bbc8, arg3, esi)
int32_t* ecx_3 = data_c7bbcc
*ecx_3 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg3, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
