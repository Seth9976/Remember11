// 函数: sub_43ac40
// 地址: 0x43ac40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4_1 = ecx
int16_t* esi = *data_c7bbcc
void* edi_3 = (arg1 u>> 0x10) * 0x7c + data_c7cc80
int32_t eax_1 = sub_448950(esi, 0x211c, 2)
int32_t ecx_1 = *(edi_3 + 0x14)
int32_t eax_3 = *(edi_3 + 0x18) << 4
int32_t ebp = *(esi + 0x88)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x40) &= 0xc000ffff
*(esi + 0x70) &= 0xc000ffff
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x58) &= 0xffffc000
*(esi + 0x40) &= 0xffffc000
int32_t eax_5 = *(edi_3 + 0x14)
*(esi + 0x74) = *(esi + 0x74)
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q((eax_5 & 0x3ff) << 4)
int32_t edx_4 = edx_3 | *(esi + 0x8c)
int32_t eax_9 = eax_8 | (ebp & 0xffffc000)
*(esi + 0x88) = eax_9
int32_t eax_10 = eax_9 ^ *(esi + 0x70)
*(esi + 0x8c) = edx_4
*(esi + 0x70) ^= eax_10 & 0x3fff
int32_t eax_15
int32_t edx_5
edx_5:eax_15 = sx.q((*(edi_3 + 0x18) & 0x3ff) << 4)
int32_t eax_17 = eax_15 << 0x10 | (eax_9 & 0xc000ffff)
*(esi + 0x5c) = *(esi + 0x5c)
int32_t ebp_3 = *(esi + 0x44)
*(esi + 0x58) ^= (eax_17 ^ *(esi + 0x58)) & 0x3fff0000
int32_t edx_11 = *(esi + 0x40)
int32_t ebx_7 = (((edx_11 + 1) ^ edx_11) & 0x3fff) ^ edx_11
*(esi + 0x44) = ebp_3
int16_t ecx_2 = (ecx_1 << 4).w
int32_t edx_13 = *(esi + 0x58)
*(esi + 0x40) = ((((ebx_7 & 0xffff0000) + 0x10000) ^ ebx_7) & 0x3fff0000) ^ ebx_7
int32_t ebx_17 = (((edx_13 + 1) ^ edx_13) & 0x3fff) ^ edx_13
int32_t ebp_4 = *(esi + 0x44)
int32_t edx_15 = *(esi + 0x70)
*(esi + 0x58) = ((((ebx_17 & 0xffff0000) + 0x10000) ^ ebx_17) & 0x3fff0000) ^ ebx_17
int32_t ebx_27 = (((edx_15 + 1) ^ edx_15) & 0x3fff) ^ edx_15
*(esi + 0x44) = ebp_4
int32_t ebp_5 = *(esi + 0x5c)
*(esi + 0x70) = ((((ebx_27 & 0xffff0000) + 0x10000) ^ ebx_27) & 0x3fff0000) ^ ebx_27
*(esi + 0x5c) = ebp_5
int32_t edx_21 = (((eax_17 + 1) ^ eax_17) & 0x3fff) ^ eax_17
*(esi + 0x5c) = *(esi + 0x5c)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x74) = *(esi + 0x74)
*(esi + 0x88) = ((((edx_21 & 0xffff0000) + 0x10000) ^ edx_21) & 0x3fff0000) ^ edx_21
*(esi + 0x8c) = edx_5 << 0x10 | eax_15 u>> 0xfffffff0 | edx_4
*(esi + 0x94) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x7c) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x64) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x4c) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t edx_22
edx_22.b = *arg3
esi[0x3c].b = edx_22.b
esi[0x24].b = edx_22.b
edx_22.b = arg3[1]
*(esi + 0x79) = edx_22.b
*(esi + 0x49) = edx_22.b
edx_22.b = arg3[2]
esi[0x3d].b = edx_22.b
esi[0x25].b = edx_22.b
edx_22.b = arg3[3]
*(esi + 0x7b) = edx_22.b
*(esi + 0x4b) = edx_22.b
edx_22.b = arg3[4]
esi[0x48].b = edx_22.b
esi[0x30].b = edx_22.b
edx_22.b = arg3[5]
*(esi + 0x91) = edx_22.b
*(esi + 0x61) = edx_22.b
edx_22.b = arg3[6]
esi[0x49].b = edx_22.b
esi[0x31].b = edx_22.b
char* eax_19
eax_19.b = arg3[7]
*(esi + 0x93) = eax_19.b
*(esi + 0x63) = eax_19.b
int16_t edx_23 = (*arg2 << 4) + data_c7bbd0.w
esi[0x4c] = edx_23
esi[0x40] = edx_23
esi[0x34] = edx_23
esi[0x28] = edx_23
int16_t* eax_20
eax_20.w = arg2[2]
eax_20.w <<= 4
eax_20.w += data_c7bbd4.w
esi[0x4d] = eax_20.w
int32_t edi_11 = *(esi + 0x98)
int32_t eax_21 = *(esi + 0x9c)
esi[0x41] = (edi_11 u>> 0x10).w | (eax_21 << 0x10).w
int32_t edx_29 = *(esi + 0x84)
esi[0x35] = (*(esi + 0x80) u>> 0x10).w | (edx_29 << 0x10).w
esi[0x29] = (*(esi + 0x68) u>> 0x10).w | (*(esi + 0x6c) << 0x10).w
int32_t ebx_40 = data_c7bbd8
*(esi + 0x50) = *(esi + 0x50)
int32_t ebx_42 = (ebx_40 & 0xffffff) | (eax_21 & 0xff000000)
int32_t eax_26 = ((edx_29 ^ ebx_42) & 0xffffff) ^ edx_29
*(esi + 0x84) = eax_26
int32_t eax_27 = *(esi + 0x6c)
int32_t edx_33 = ((eax_26 ^ eax_27) & 0xffffff) ^ eax_27
int32_t eax_28 = *(esi + 0x54)
*(esi + 0x80) = *(esi + 0x80)
int32_t edi_13 = *(esi + 0x68)
*(esi + 0x54) ^= (eax_28 ^ edx_33) & 0xffffff
*(esi + 0x6c) = edx_33
*(esi + 0x9c) = ebx_42
*(esi + 0x98) = edi_11
*(esi + 0x68) = edi_13
char edx_34 = data_c7bbdc
*(esi + 0x9f) = edx_34
*(esi + 0x87) = edx_34
*(esi + 0x6f) = edx_34
esi[0x40] += ecx_2
esi[0x4c] += ecx_2
*(esi + 0x57) = edx_34
int16_t eax_33 = eax_3.w
esi[0x35] += eax_33
esi[0x4d] += eax_33
sub_448880(data_c7bbc8, arg4, esi)
int32_t* ecx_4 = data_c7bbcc
int32_t result = eax_1 << 4
*ecx_4 += result
return result
