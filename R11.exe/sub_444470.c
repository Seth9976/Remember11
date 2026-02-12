// 函数: sub_444470
// 地址: 0x444470
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax_1 = sub_448950(esi, 0x2916, 1)
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
int32_t edi_5 = edi_3 << 8 | eax_7
*(esi + 0x28) = 1
*(esi + 0x2c) = 0
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | edi_1 u>> 0xffffffe8 | edx_1) << 8 | edi_3 u>> 0xffffffe8 | edx_2) << 8
    | edi_5 u>> 0xffffffe8 | edx_3
*(esi + 0x20) = edi_5 << 8 | eax_9
int32_t ecx_1 = *(esi + 0x50)
int32_t eax_13
int32_t edx_4
edx_4:eax_13 = sx.q((*(arg1 + 0x1c) & 0x3ff) << 4)
int32_t edx_5 = edx_4 | *(esi + 0x54)
*(esi + 0x54) = edx_5
int32_t edx_6 = *(esi + 0x40)
int32_t eax_14 = eax_13 | (ecx_1 & 0xffffc000)
*(esi + 0x50) = eax_14
*(esi + 0x40) ^= (edx_6 ^ eax_14) & 0x3fff
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_17 = (*(arg1 + 0x20) & 0x3ff) << 4
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_18
int32_t edx_9
edx_9:eax_18 = sx.q(eax_17)
int32_t eax_20 = eax_18 << 0x10 | (eax_14 & 0xc000ffff)
*(esi + 0x50) = eax_20
*(esi + 0x40) ^= (*(esi + 0x40) ^ eax_20) & 0x3fff0000
int32_t edx_11 = edx_9 << 0x10 | eax_18 u>> 0xfffffff0 | edx_5
*(esi + 0x54) = edx_11
int32_t eax_26
int32_t edx_12
edx_12:eax_26 = sx.q(*(arg1 + 0x24) << 4)
int32_t eax_30 = (((eax_26 + eax_20) ^ eax_20) & 0x3fff) ^ eax_20
*(esi + 0x50) = eax_30
*(esi + 0x54) = edx_11
int32_t eax_33
int32_t edx_14
edx_14:eax_33 = sx.q(*(arg1 + 0x28) << 4)
int32_t eax_36 = (__allmul(eax_33, edx_14, 0x10000, 0) + eax_30) ^ eax_30
int32_t edx_13
*(esi + 0x54) = edx_13
*(esi + 0x50) = (eax_36 & 0x3fff0000) ^ eax_30
int32_t eax_39 = *(esi + 0x40)
int32_t ecx_6 = *(esi + 0x44)
int32_t edx_20 = (((eax_39 + 1) ^ eax_39) & 0x3fff) ^ eax_39
int32_t eax_41 = *(esi + 0x50)
*(esi + 0x40) = ((((edx_20 & 0xffff0000) + 0x10000) ^ edx_20) & 0x3fff0000) ^ edx_20
int32_t ecx_8 = *(esi + 0x54)
int32_t edx_30 = (((eax_41 + 1) ^ eax_41) & 0x3fff) ^ eax_41
*(esi + 0x44) = ecx_6
*(esi + 0x54) = ecx_8
*(esi + 0x50) = ((((edx_30 & 0xffff0000) + 0x10000) ^ edx_30) & 0x3fff0000) ^ edx_30
int16_t eax_43 = *arg2 + data_c7bbd0.w
int32_t edx_35
edx_35.w = eax_43
esi[0x2c] = eax_43
esi[0x24] = edx_35.w
esi[0x2d] = arg2[2] + data_c7bbd4.w
int32_t edx_36 = *(esi + 0x58)
int32_t eax_45 = *(esi + 0x5c)
esi[0x25] = (edx_36 u>> 0x10).w | (eax_45 << 0x10).w
int32_t ebx_19 = data_c7bbd8 & 0xffffff
int32_t edx_37 = *(esi + 0x4c)
*(esi + 0x48) = *(esi + 0x48)
int32_t ebx_20 = ebx_19 | (eax_45 & 0xff000000)
*(esi + 0x58) = edx_36
*(esi + 0x5c) = ebx_20
*(esi + 0x4c) ^= (edx_37 ^ ebx_20) & 0xffffff
int32_t eax_46
eax_46.b = data_c7bbdc
int32_t edx_39
edx_39.b = eax_46.b
*(esi + 0x5f) = eax_46.b
*(esi + 0x4f) = edx_39.b
int32_t eax_49
int32_t edx_40
edx_40:eax_49 = sx.q(*(arg2 + 8) * *(arg1 + 0x24))
esi[0x2c] += ((eax_49 + (edx_40 & 0xfff)) s>> 0xc).w
int32_t eax_54
int32_t edx_42
edx_42:eax_54 = sx.q(*(arg2 + 0xc) * *(arg1 + 0x28))
esi[0x2d] += ((eax_54 + (edx_42 & 0xfff)) s>> 0xc).w
sub_448880(data_c7bbc8, arg4, esi)
int32_t* ecx_11 = data_c7bbcc
*ecx_11 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg4, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
