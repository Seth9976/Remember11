// 函数: sub_4447b0
// 地址: 0x4447b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax = sub_448950(esi, 0x211c, 2)
int32_t edi = *(esi + 0x88)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(*(arg1 + 8) & 0x3fff)
*(esi + 0x8c) |= edx
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_4 = eax_3 | (edi & 0xffffc000)
*(esi + 0x88) = eax_4
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x70) ^= (eax_4 ^ *(esi + 0x70)) & 0x3fff
int32_t ebx_1 = *(esi + 0x70)
*(esi + 0x58) ^= (ebx_1 ^ *(esi + 0x58)) & 0x3fff
*(esi + 0x40) ^= (*(esi + 0x40) ^ *(esi + 0x58)) & 0x3fff
int32_t eax_8
int32_t edx_11
edx_11:eax_8 = sx.q(*(arg1 + 0xc) & 0x3fff)
int32_t edx_13 = edx_11 << 0x10 | eax_8 u>> 0xfffffff0 | *(esi + 0x8c)
int32_t eax_10 = eax_8 << 0x10 | (eax_4 & 0xc000ffff)
*(esi + 0x88) = eax_10
*(esi + 0x8c) = edx_13
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_14 = ((ebx_1 ^ eax_10) & 0x3fff0000) ^ ebx_1
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x70) = eax_14
int32_t eax_15 = *(esi + 0x58)
int32_t ebx_5 = ((eax_15 ^ eax_14) & 0x3fff0000) ^ eax_15
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x40) ^= (*(esi + 0x40) ^ ebx_5) & 0x3fff0000
*(esi + 0x58) = ebx_5
int32_t eax_20
int32_t edx_20
edx_20:eax_20 = sx.q((*(arg1 + 0x10) + *(arg1 + 8)) & 0x3fff)
int32_t eax_21 = eax_20 | (eax_10 & 0xffffc000)
*(esi + 0x8c) |= edx_20
*(esi + 0x88) = eax_21
int32_t eax_22 = *(esi + 0x70)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x70) = ((eax_22 ^ eax_21) & 0x3fff) ^ eax_22
int32_t eax_26
int32_t edx_26
edx_26:eax_26 = sx.q((*(arg1 + 0x14) + *(arg1 + 0xc)) & 0x3fff)
int32_t eax_28 = eax_26 << 0x10 | (eax_21 & 0xc000ffff)
*(esi + 0x8c) |= edx_26 << 0x10 | eax_26 u>> 0xfffffff0
int32_t edx_29 = *(esi + 0x58)
int32_t edx_30 = *(esi + 0x40)
*(esi + 0x58) = ((edx_29 ^ eax_28) & 0x3fff0000) ^ edx_29
int32_t edi_16 = (((edx_30 + 1) ^ edx_30) & 0x3fff) ^ edx_30
int32_t edx_32 = *(esi + 0x58)
*(esi + 0x40) = ((((edi_16 & 0xffff0000) + 0x10000) ^ edi_16) & 0x3fff0000) ^ edi_16
*(esi + 0x5c) = *(esi + 0x5c)
int32_t edi_26 = (((edx_32 + 1) ^ edx_32) & 0x3fff) ^ edx_32
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x44) = *(esi + 0x44)
int32_t edx_34 = *(esi + 0x70)
int32_t ebx_10 = *(esi + 0x5c)
*(esi + 0x58) = ((((edi_26 & 0xffff0000) + 0x10000) ^ edi_26) & 0x3fff0000) ^ edi_26
*(esi + 0x5c) = ebx_10
*(esi + 0x5c) = *(esi + 0x5c)
int32_t edi_36 = (((edx_34 + 1) ^ edx_34) & 0x3fff) ^ edx_34
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x70) = ((((edi_36 & 0xffff0000) + 0x10000) ^ edi_36) & 0x3fff0000) ^ edi_36
int32_t edx_40 = (((eax_28 + 1) ^ eax_28) & 0x3fff) ^ eax_28
int32_t edi_42 = *(esi + 0x8c)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x88) = ((((edx_40 & 0xffff0000) + 0x10000) ^ edx_40) & 0x3fff0000) ^ edx_40
*(esi + 0x8c) = edi_42
*(esi + 0x94) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x7c) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x64) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x4c) = fconvert.s(fconvert.t(data_c7bbe8))
esi[0x24].b = *arg2
*(esi + 0x49) = arg2[1]
esi[0x25].b = arg2[2]
*(esi + 0x4b) = arg2[3]
esi[0x30].b = arg2[4]
*(esi + 0x61) = arg2[5]
esi[0x31].b = arg2[6]
*(esi + 0x63) = arg2[7]
esi[0x3c].b = arg2[8]
*(esi + 0x79) = arg2[9]
esi[0x3d].b = arg2[0xa]
*(esi + 0x7b) = arg2[0xb]
esi[0x48].b = arg2[0xc]
*(esi + 0x91) = arg2[0xd]
esi[0x49].b = arg2[0xe]
*(esi + 0x93) = arg2[0xf]
int16_t edx_57 = *arg1 + data_c7bbd0.w
esi[0x4c] = edx_57
esi[0x40] = edx_57
esi[0x34] = edx_57
esi[0x28] = edx_57
esi[0x4d] = arg1[2] + data_c7bbd4.w
int32_t edx_60 = *(esi + 0x98)
int32_t eax_34 = *(esi + 0x9c)
esi[0x41] = (edx_60 u>> 0x10).w | (eax_34 << 0x10).w
esi[0x35] = (*(esi + 0x80) u>> 0x10).w | (*(esi + 0x84) << 0x10).w
esi[0x29] = (*(esi + 0x68) u>> 0x10).w | (*(esi + 0x6c) << 0x10).w
int32_t edi_55 = data_c7bbd8
*(esi + 0x50) = *(esi + 0x50)
int32_t edi_57 = (edi_55 & 0xffffff) | (eax_34 & 0xff000000)
int32_t eax_36 = *(esi + 0x84)
int32_t eax_37 = *(esi + 0x6c)
*(esi + 0x84) = ((eax_36 ^ edi_57) & 0xffffff) ^ eax_36
*(esi + 0x9c) = edi_57
int32_t edx_68 = ((eax_37 ^ *(esi + 0x84)) & 0xffffff) ^ eax_37
int32_t eax_38 = *(esi + 0x54)
*(esi + 0x80) = *(esi + 0x80)
*(esi + 0x98) = edx_60
*(esi + 0x6c) = edx_68
*(esi + 0x54) ^= (eax_38 ^ edx_68) & 0xffffff
*(esi + 0x68) = *(esi + 0x68)
char edx_69 = data_c7bbdc
*(esi + 0x9f) = edx_69
*(esi + 0x87) = edx_69
*(esi + 0x6f) = edx_69
*(esi + 0x57) = edx_69
esi[0x35] += arg1[0xa]
esi[0x40] += arg1[8]
esi[0x4c] += arg1[8]
esi[0x4d] += arg1[0xa]
sub_448880(data_c7bbc8, arg3, esi)
int32_t* eax_45 = data_c7bbcc
*eax_45 += eax << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg3, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
