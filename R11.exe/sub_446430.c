// 函数: sub_446430
// 地址: 0x446430
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax = sub_448950(esi, 0x2913, 1)
char* ecx = arg2

if (ecx == 0)
    ecx = &data_c7bbf4

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(zx.d(ecx[3]))
int32_t edi_1 = eax_2 | 0x80000000
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(zx.d(ecx[2]))
int32_t edi_3 = edi_1 << 8 | eax_4
int32_t eax_6
int32_t edx_2
edx_2:eax_6 = sx.q(zx.d(ecx[1]))
int32_t edi_5 = edi_3 << 8 | eax_6
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(zx.d(*ecx))
*(esi + 0x28) = 1
*(esi + 0x2c) = 0
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | edi_1 u>> 0xffffffe8 | edx_1) << 8 | edi_3 u>> 0xffffffe8 | edx_2) << 8
    | edi_5 u>> 0xffffffe8 | edx_3
*(esi + 0x20) = edi_5 << 8 | eax_8
int32_t edi_8 = *(esi + 0x40)
int32_t eax_11
int32_t edx_4
edx_4:eax_11 = sx.q(*(arg1 + 0x18) & 0x3fff)
*(esi + 0x44) |= edx_4
int32_t ebx_9 = *(esi + 0x44)
*(esi + 0x40) = eax_11 | (edi_8 & 0xffffc000)
int32_t eax_15
int32_t edx_6
edx_6:eax_15 = sx.q(*(arg1 + 0x1c) & 0x3fff)
int32_t ebx_10 = *(esi + 0x54)
int32_t edi_12 = *(esi + 0x50)
*(esi + 0x40) = eax_15 << 0x10 | (*(esi + 0x40) & 0xc000ffff)
*(esi + 0x44) = edx_6 << 0x10 | eax_15 u>> 0xfffffff0 | ebx_9
int32_t eax_20
int32_t edx_9
edx_9:eax_20 = sx.q(*(arg1 + 0x20) & 0x3fff)
*(esi + 0x50) = eax_20 | (edi_12 & 0xffffc000)
int32_t edi_14 = *(esi + 0x50)
*(esi + 0x54) = edx_9 | ebx_10
int32_t eax_24
int32_t edx_11
edx_11:eax_24 = sx.q(*(arg1 + 0x24) & 0x3fff)
int32_t edi_16 = *(esi + 0x60)
int32_t edx_13 = edx_11 << 0x10 | eax_24 u>> 0xfffffff0 | *(esi + 0x54)
*(esi + 0x50) = eax_24 << 0x10 | (edi_14 & 0xc000ffff)
*(esi + 0x54) = edx_13
int32_t eax_29
int32_t edx_14
edx_14:eax_29 = sx.q(*(arg1 + 0x28) & 0x3fff)
*(esi + 0x64) |= edx_14
int32_t ebx_13 = *(esi + 0x64)
*(esi + 0x60) = eax_29 | (edi_16 & 0xffffc000)
int32_t edi_18 = *(esi + 0x60)
int32_t eax_33
int32_t edx_16
edx_16:eax_33 = sx.q(*(arg1 + 0x2c) & 0x3fff)
int32_t ebx_14 = *(esi + 0x6c)
*(esi + 0x64) = edx_16 << 0x10 | eax_33 u>> 0xfffffff0 | ebx_13
int32_t edi_20 = *(esi + 0x68)
*(esi + 0x60) = eax_33 << 0x10 | (edi_18 & 0xc000ffff)
int32_t edx_20 = data_c7bbd8 & 0xffffff
*(esi + 0x68) = edi_20
int32_t eax_37 = *(esi + 0x4c)
int32_t edx_21 = edx_20 | (ebx_14 & 0xff000000)
*(esi + 0x6c) = edx_21
int32_t edx_22 = edx_21 ^ *(esi + 0x5c)
*(esi + 0x58) = *(esi + 0x58)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x5c) ^= edx_22 & 0xffffff
*(esi + 0x4c) ^= (eax_37 ^ *(esi + 0x5c)) & 0xffffff
char edx_24 = data_c7bbdc
*(esi + 0x6f) = edx_24
int32_t eax_39
eax_39.b = edx_24
*(esi + 0x5f) = eax_39.b
*(esi + 0x4f) = edx_24
esi[0x24] = *arg1 + data_c7bbd0.w
esi[0x25] = arg1[2] + data_c7bbd4.w
esi[0x2c] = arg1[4] + data_c7bbd0.w
esi[0x2d] = arg1[6] + data_c7bbd4.w
esi[0x34] = arg1[8] + data_c7bbd0.w
int16_t* ecx_1
ecx_1.w = arg1[0xa]
ecx_1.w += data_c7bbd4.w
esi[0x35] = ecx_1.w
sub_448880(data_c7bbc8, arg3, esi)
int32_t* eax_43 = data_c7bbcc
*eax_43 += eax << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg3, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
