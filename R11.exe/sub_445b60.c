// 函数: sub_445b60
// 地址: 0x445b60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax_1 = sub_448950(esi, 0x2914, 2)
char* ecx = arg3

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
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(zx.d(*ecx))
*(esi + 0x28) = 1
*(esi + 0x2c) = 0
int32_t edi_5 = edi_3 << 8 | eax_7
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | edi_1 u>> 0xffffffe8 | edx_1) << 8 | edi_3 u>> 0xffffffe8 | edx_2) << 8
    | edi_5 u>> 0xffffffe8 | edx_3
*(esi + 0x20) = edi_5 << 8 | eax_9
int32_t ecx_1 = *(esi + 0x70)
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(*(arg1 + 8) & 0x3fff)
*(esi + 0x74) |= edx_4
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x54) = *(esi + 0x54)
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_13 = eax_12 | (ecx_1 & 0xffffc000)
*(esi + 0x70) = eax_13
int32_t eax_14 = *(esi + 0x50)
*(esi + 0x60) ^= (eax_13 ^ *(esi + 0x60)) & 0x3fff
int32_t ebp_9 = *(esi + 0x60)
*(esi + 0x50) ^= (eax_14 ^ ebp_9) & 0x3fff
*(esi + 0x40) ^= (*(esi + 0x50) ^ *(esi + 0x40)) & 0x3fff
int32_t eax_19
int32_t edx_12
edx_12:eax_19 = sx.q(*(arg1 + 0xc) & 0x3fff)
int32_t edx_14 = edx_12 << 0x10 | eax_19 u>> 0xfffffff0 | *(esi + 0x74)
int32_t eax_21 = eax_19 << 0x10 | (eax_13 & 0xc000ffff)
*(esi + 0x70) = eax_21
*(esi + 0x74) = edx_14
int32_t eax_25 = ((ebp_9 ^ eax_21) & 0x3fff0000) ^ ebp_9
int32_t edx_15 = *(esi + 0x64)
*(esi + 0x60) = eax_25
*(esi + 0x64) = edx_15
int32_t eax_26 = *(esi + 0x50)
*(esi + 0x44) = *(esi + 0x44)
int32_t ebp_13 = ((eax_26 ^ eax_25) & 0x3fff0000) ^ eax_26
*(esi + 0x54) = *(esi + 0x54)
int32_t eax_28 = ebp_13 ^ *(esi + 0x40)
*(esi + 0x50) = ebp_13
*(esi + 0x40) ^= eax_28 & 0x3fff0000
int32_t eax_33
int32_t edx_18
edx_18:eax_33 = sx.q((*(arg1 + 0x10) + *(arg1 + 8)) & 0x3fff)
int32_t eax_34 = eax_33 | (eax_21 & 0xffffc000)
*(esi + 0x74) |= edx_18
*(esi + 0x70) = eax_34
int32_t eax_35 = *(esi + 0x60)
*(esi + 0x60) = ((eax_35 ^ eax_34) & 0x3fff) ^ eax_35
*(esi + 0x64) = *(esi + 0x64)
int32_t ebp_15 = *(esi + 0x54)
int32_t eax_39
int32_t edx_24
edx_24:eax_39 = sx.q((*(arg1 + 0x14) + *(arg1 + 0xc)) & 0x3fff)
*(esi + 0x74) |= edx_24 << 0x10 | eax_39 u>> 0xfffffff0
int32_t eax_41 = eax_39 << 0x10 | (eax_34 & 0xc000ffff)
int32_t ecx_9 = *(esi + 0x50)
int32_t ecx_10 = *(esi + 0x40)
*(esi + 0x50) = ((ecx_9 ^ eax_41) & 0x3fff0000) ^ ecx_9
int32_t edx_35 = (((ecx_10 + 1) ^ ecx_10) & 0x3fff) ^ ecx_10
*(esi + 0x54) = ebp_15
int32_t ebp_16 = *(esi + 0x44)
int32_t ecx_12 = *(esi + 0x50)
*(esi + 0x40) = ((((edx_35 & 0xffff0000) + 0x10000) ^ edx_35) & 0x3fff0000) ^ edx_35
*(esi + 0x44) = ebp_16
*(esi + 0x44) = *(esi + 0x44)
int32_t edx_45 = (((ecx_12 + 1) ^ ecx_12) & 0x3fff) ^ ecx_12
*(esi + 0x54) = *(esi + 0x54)
int32_t ecx_14 = *(esi + 0x60)
*(esi + 0x50) = ((((edx_45 & 0xffff0000) + 0x10000) ^ edx_45) & 0x3fff0000) ^ edx_45
int32_t edx_55 = (((ecx_14 + 1) ^ ecx_14) & 0x3fff) ^ ecx_14
*(esi + 0x60) = ((((edx_55 & 0xffff0000) + 0x10000) ^ edx_55) & 0x3fff0000) ^ edx_55
int32_t edx_61 = *(esi + 0x74)
*(esi + 0x54) = *(esi + 0x54)
int32_t ecx_20 = (((eax_41 + 1) ^ eax_41) & 0x3fff) ^ eax_41
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x70) = ((((ecx_20 & 0xffff0000) + 0x10000) ^ ecx_20) & 0x3fff0000) ^ ecx_20
int32_t edx_68 = *(esi + 0x78)
*(esi + 0x74) = edx_61
int32_t eax_43 = data_c7bbd8
int32_t ebp_23 = *(esi + 0x7c)
*(esi + 0x68) = *(esi + 0x68)
*(esi + 0x58) = *(esi + 0x58)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x7c) = (eax_43 & 0xffffff) | (ebp_23 & 0xff000000)
int32_t eax_47 = *(esi + 0x6c) ^ *(esi + 0x7c)
int32_t edx_69 = *(esi + 0x4c)
*(esi + 0x78) = edx_68
*(esi + 0x6c) ^= eax_47 & 0xffffff
*(esi + 0x5c) ^= (*(esi + 0x6c) ^ *(esi + 0x5c)) & 0xffffff
*(esi + 0x4c) ^= (edx_69 ^ *(esi + 0x5c)) & 0xffffff
char eax_49 = data_c7bbdc
*(esi + 0x7f) = eax_49
int32_t ecx_25
ecx_25.b = eax_49
int32_t edx_71
edx_71.b = ecx_25.b
*(esi + 0x6f) = ecx_25.b
*(esi + 0x5f) = edx_71.b
*(esi + 0x4f) = eax_49
int32_t var_20 = 0
int16_t var_1c = 0
int16_t ecx_26 = (*(arg1 + 0x10)).w
int16_t eax_51 = (*(arg1 + 0x14)).w
int32_t edx_73 = neg.d(*(arg1 + 0x1c))
int32_t var_28 = neg.d(*(arg1 + 0x18))
int32_t var_24 = edx_73
int16_t var_18 = 0
int16_t var_c = 0
sub_4411f0(&var_20, &var_28, &arg1[0x10], arg2, 4)
esi[0x24] = *arg1 + data_c7bbd0.w + var_20.w
esi[0x25] = (data_c7bbd4).w + var_1c + arg1[2]
esi[0x2c] = *arg1 + data_c7bbd0.w + var_18
esi[0x2d] = (data_c7bbd4).w + eax_51 + arg1[2]
esi[0x34] = *arg1 + ecx_26 + data_c7bbd0.w
esi[0x35] = var_c + (data_c7bbd4).w + arg1[2]
esi[0x3c] = *arg1 + ecx_26 + data_c7bbd0.w
esi[0x3d] = eax_51 + (data_c7bbd4).w + arg1[2]
sub_448880(data_c7bbc8, arg4, esi)
int32_t* ecx_35 = data_c7bbcc
*ecx_35 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg4, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
