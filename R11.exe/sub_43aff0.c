// 函数: sub_43aff0
// 地址: 0x43aff0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int16_t* esi = *data_c7bbcc
void* edi_3 = (arg1 u>> 0x10) * 0x7c + data_c7cc80
int32_t eax_1 = sub_448950(esi, 0x211c, 2)
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q((*(edi_3 + 0x14) << 4) * *(arg2 + 8))
int32_t eax_10
int32_t edx_2
edx_2:eax_10 = sx.q((*(edi_3 + 0x18) << 4) * *(arg2 + 0xc))
int32_t ebp = *(esi + 0x88)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x40) &= 0xc000ffff
*(esi + 0x70) &= 0xc000ffff
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x58) &= 0xffffc000
*(esi + 0x40) &= 0xffffc000
int32_t eax_14 = *(edi_3 + 0x14)
*(esi + 0x74) = *(esi + 0x74)
int32_t eax_17
int32_t edx_7
edx_7:eax_17 = sx.q((eax_14 & 0x3ff) << 4)
int32_t eax_18 = eax_17 | (ebp & 0xffffc000)
int32_t edx_8 = edx_7 | *(esi + 0x8c)
*(esi + 0x88) = eax_18
int32_t eax_19 = eax_18 ^ *(esi + 0x70)
*(esi + 0x8c) = edx_8
*(esi + 0x70) ^= eax_19 & 0x3fff
int32_t eax_22 = *(edi_3 + 0x18) & 0x3ff
*(esi + 0x5c) = *(esi + 0x5c)
int32_t eax_24
int32_t edx_9
edx_9:eax_24 = sx.q(eax_22 << 4)
int32_t eax_26 = eax_24 << 0x10 | (eax_18 & 0xc000ffff)
int16_t ecx_2 = ((eax_5 + (edx & 0xfff)) s>> 0xc).w
*(esi + 0x58) ^= (eax_26 ^ *(esi + 0x58)) & 0x3fff0000
int32_t edx_15 = *(esi + 0x40)
int32_t ebx_8 = (((edx_15 + 1) ^ edx_15) & 0x3fff) ^ edx_15
int32_t edx_17 = *(esi + 0x58)
*(esi + 0x40) = ((((ebx_8 & 0xffff0000) + 0x10000) ^ ebx_8) & 0x3fff0000) ^ ebx_8
int32_t ebx_18 = (((edx_17 + 1) ^ edx_17) & 0x3fff) ^ edx_17
int32_t edx_19 = *(esi + 0x70)
*(esi + 0x58) = ((((ebx_18 & 0xffff0000) + 0x10000) ^ ebx_18) & 0x3fff0000) ^ ebx_18
int32_t ebx_28 = (((edx_19 + 1) ^ edx_19) & 0x3fff) ^ edx_19
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x70) = ((((ebx_28 & 0xffff0000) + 0x10000) ^ ebx_28) & 0x3fff0000) ^ ebx_28
int32_t edx_25 = (((eax_26 + 1) ^ eax_26) & 0x3fff) ^ eax_26
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x88) = ((((edx_25 & 0xffff0000) + 0x10000) ^ edx_25) & 0x3fff0000) ^ edx_25
*(esi + 0x8c) = edx_9 << 0x10 | eax_24 u>> 0xfffffff0 | edx_8
*(esi + 0x94) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x7c) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x64) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x4c) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t edx_26
edx_26.b = *arg3
esi[0x3c].b = edx_26.b
esi[0x24].b = edx_26.b
edx_26.b = arg3[1]
*(esi + 0x79) = edx_26.b
*(esi + 0x49) = edx_26.b
edx_26.b = arg3[2]
esi[0x3d].b = edx_26.b
esi[0x25].b = edx_26.b
edx_26.b = arg3[3]
*(esi + 0x7b) = edx_26.b
*(esi + 0x4b) = edx_26.b
edx_26.b = arg3[4]
esi[0x48].b = edx_26.b
esi[0x30].b = edx_26.b
edx_26.b = arg3[5]
*(esi + 0x91) = edx_26.b
*(esi + 0x61) = edx_26.b
edx_26.b = arg3[6]
esi[0x49].b = edx_26.b
esi[0x31].b = edx_26.b
char* eax_28
eax_28.b = arg3[7]
*(esi + 0x93) = eax_28.b
*(esi + 0x63) = eax_28.b
int16_t edx_27 = (*arg2 << 4) + data_c7bbd0.w
esi[0x4c] = edx_27
esi[0x40] = edx_27
esi[0x34] = edx_27
esi[0x28] = edx_27
int16_t* eax_29
eax_29.w = arg2[2]
eax_29.w <<= 4
eax_29.w += data_c7bbd4.w
esi[0x4d] = eax_29.w
int32_t edi_11 = *(esi + 0x98)
int32_t eax_30 = *(esi + 0x9c)
esi[0x41] = (edi_11 u>> 0x10).w | (eax_30 << 0x10).w
int32_t edx_33 = *(esi + 0x84)
esi[0x35] = (*(esi + 0x80) u>> 0x10).w | (edx_33 << 0x10).w
esi[0x29] = (*(esi + 0x68) u>> 0x10).w | (*(esi + 0x6c) << 0x10).w
int32_t ebx_43 = (data_c7bbd8 & 0xffffff) | (eax_30 & 0xff000000)
int32_t edi_12 = *(esi + 0x80)
*(esi + 0x84) = ((ebx_43 ^ edx_33) & 0xffffff) ^ edx_33
int32_t eax_36 = *(esi + 0x6c)
*(esi + 0x80) = edi_12
int32_t edi_13 = *(esi + 0x68)
int32_t edx_36 = (eax_36 ^ *(esi + 0x84)) & 0xffffff
*(esi + 0x98) = edi_11
*(esi + 0x9c) = ebx_43
int32_t edx_37 = edx_36 ^ eax_36
*(esi + 0x68) = edi_13
int32_t eax_37 = *(esi + 0x54)
*(esi + 0x50) = *(esi + 0x50)
*(esi + 0x54) ^= (eax_37 ^ edx_37) & 0xffffff
*(esi + 0x6c) = edx_37
char edx_38 = data_c7bbdc
esi[0x40] += ecx_2
esi[0x4c] += ecx_2
*(esi + 0x9f) = edx_38
*(esi + 0x87) = edx_38
*(esi + 0x57) = edx_38
int16_t eax_42 = ((eax_10 + (edx_2 & 0xfff)) s>> 0xc).w
esi[0x35] += eax_42
esi[0x4d] += eax_42
*(esi + 0x6f) = edx_38
sub_448880(data_c7bbc8, arg4, esi)
int32_t* ecx_4 = data_c7bbcc
int32_t result = eax_1 << 4
*ecx_4 += result
return result
