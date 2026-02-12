// 函数: sub_4451b0
// 地址: 0x4451b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax_1 = sub_448950(esi, 0x2916, 1)
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
int32_t ecx_1 = *(esi + 0x50)
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(zx.d(*ecx))
int32_t edi_5 = edi_3 << 8 | eax_7
*(esi + 0x28) = 1
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | edi_1 u>> 0xffffffe8 | edx_1) << 8 | edi_3 u>> 0xffffffe8 | edx_2) << 8
    | edi_5 u>> 0xffffffe8 | edx_3
int32_t ebx_8 = *(esi + 0x54)
*(esi + 0x20) = edi_5 << 8 | eax_9
*(esi + 0x2c) = 0
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(*(arg1 + 8) & 0x3fff)
int32_t edx_5 = edx_4 | ebx_8
*(esi + 0x54) = edx_5
int32_t eax_13 = eax_12 | (ecx_1 & 0xffffc000)
*(esi + 0x50) = eax_13
int32_t edx_7 = eax_13 ^ *(esi + 0x40)
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x40) ^= edx_7 & 0x3fff
int32_t eax_14 = *(arg1 + 0xc)
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_16
int32_t edx_9
edx_9:eax_16 = sx.q(eax_14 & 0x3fff)
int32_t eax_18 = eax_16 << 0x10 | (eax_13 & 0xc000ffff)
*(esi + 0x50) = eax_18
int32_t edx_11 = edx_9 << 0x10 | eax_16 u>> 0xfffffff0 | edx_5
*(esi + 0x40) ^= (eax_18 ^ *(esi + 0x40)) & 0x3fff0000
*(esi + 0x54) = edx_11
int32_t eax_22
int32_t edx_12
edx_12:eax_22 = sx.q(*(arg1 + 0x10))
int32_t eax_26 = (((eax_22 + eax_18) ^ eax_18) & 0x3fff) ^ eax_18
*(esi + 0x50) = eax_26
*(esi + 0x54) = edx_11
int32_t eax_28
int32_t edx_14
edx_14:eax_28 = sx.q(*(arg1 + 0x14))
int32_t eax_31 = (__allmul(eax_28, edx_14, 0x10000, 0) + eax_26) ^ eax_26
int32_t edx_13
*(esi + 0x54) = edx_13
*(esi + 0x50) = (eax_31 & 0x3fff0000) ^ eax_26
int32_t eax_34 = *(esi + 0x40)
int32_t ecx_6 = *(esi + 0x44)
int32_t edx_20 = (((eax_34 + 1) ^ eax_34) & 0x3fff) ^ eax_34
int32_t eax_36 = *(esi + 0x50)
*(esi + 0x40) = ((((edx_20 & 0xffff0000) + 0x10000) ^ edx_20) & 0x3fff0000) ^ edx_20
int32_t edx_30 = (((eax_36 + 1) ^ eax_36) & 0x3fff) ^ eax_36
int32_t ecx_8 = *(esi + 0x54)
*(esi + 0x44) = ecx_6
*(esi + 0x54) = ecx_8
*(esi + 0x50) = ((((edx_30 & 0xffff0000) + 0x10000) ^ edx_30) & 0x3fff0000) ^ edx_30
int16_t eax_38 = *arg1 + data_c7bbd0.w
esi[0x2c] = eax_38
int32_t eax_39 = *(esi + 0x5c)
esi[0x24] = eax_38
int32_t edx_35
edx_35.w = arg1[2]
edx_35.w += data_c7bbd4.w
esi[0x2d] = edx_35.w
int32_t ecx_11 = *(esi + 0x58)
esi[0x25] = (ecx_11 u>> 0x10).w | (eax_39 << 0x10).w
int32_t edx_40 = (data_c7bbd8 & 0xffffff) | (eax_39 & 0xff000000)
int32_t eax_42 = *(esi + 0x4c) ^ edx_40
*(esi + 0x58) = ecx_11
*(esi + 0x5c) = edx_40
*(esi + 0x4c) ^= eax_42 & 0xffffff
*(esi + 0x48) = *(esi + 0x48)
ecx_11.b = data_c7bbdc
edx_40.b = ecx_11.b
*(esi + 0x5f) = ecx_11.b
*(esi + 0x4f) = edx_40.b
esi[0x2c] += arg1[8]
esi[0x2d] += arg1[0xa]
sub_448880(data_c7bbc8, arg3, esi)
int32_t* ecx_13 = data_c7bbcc
*ecx_13 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg3, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
