// 函数: sub_445810
// 地址: 0x445810
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
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(*(arg1 + 0x10) & 0x3fff)
int32_t edx_5 = edx_4 | *(esi + 0x54)
*(esi + 0x54) = edx_5
int32_t edx_6 = *(esi + 0x40)
int32_t eax_13 = eax_12 | (ecx_1 & 0xffffc000)
*(esi + 0x50) = eax_13
*(esi + 0x40) ^= (edx_6 ^ eax_13) & 0x3fff
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_15 = *(arg1 + 0x14) & 0x3fff
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_16
int32_t edx_9
edx_9:eax_16 = sx.q(eax_15)
int32_t eax_18 = eax_16 << 0x10 | (eax_13 & 0xc000ffff)
*(esi + 0x50) = eax_18
*(esi + 0x40) ^= (*(esi + 0x40) ^ eax_18) & 0x3fff0000
int32_t edx_11 = edx_9 << 0x10 | eax_16 u>> 0xfffffff0 | edx_5
*(esi + 0x54) = edx_11
int32_t eax_23
int32_t edx_12
edx_12:eax_23 = sx.q(*(arg1 + 0x18))
int32_t eax_27 = (((eax_23 + eax_18) ^ eax_18) & 0x3fff) ^ eax_18
*(esi + 0x50) = eax_27
*(esi + 0x54) = edx_11
int32_t eax_29
int32_t edx_14
edx_14:eax_29 = sx.q(*(arg1 + 0x1c))
int32_t eax_32 = (__allmul(eax_29, edx_14, 0x10000, 0) + eax_27) ^ eax_27
int32_t edx_13
*(esi + 0x54) = edx_13
*(esi + 0x50) = (eax_32 & 0x3fff0000) ^ eax_27
int32_t eax_35 = *(esi + 0x40)
int32_t ecx_6 = *(esi + 0x44)
int32_t edx_20 = (((eax_35 + 1) ^ eax_35) & 0x3fff) ^ eax_35
int32_t eax_37 = *(esi + 0x50)
*(esi + 0x40) = ((((edx_20 & 0xffff0000) + 0x10000) ^ edx_20) & 0x3fff0000) ^ edx_20
int32_t edx_30 = (((eax_37 + 1) ^ eax_37) & 0x3fff) ^ eax_37
int32_t ecx_8 = *(esi + 0x54)
*(esi + 0x44) = ecx_6
*(esi + 0x54) = ecx_8
*(esi + 0x50) = ((((edx_30 & 0xffff0000) + 0x10000) ^ edx_30) & 0x3fff0000) ^ edx_30
int32_t eax_38
eax_38.w = *arg1
eax_38.w += data_c7bbd0.w
esi[0x2c] = eax_38.w
int32_t ecx_9
ecx_9.w = eax_38.w
int32_t eax_39 = *(esi + 0x5c)
esi[0x24] = ecx_9.w
int32_t edx_35
edx_35.w = arg1[2]
edx_35.w += data_c7bbd4.w
esi[0x2d] = edx_35.w
int32_t ecx_10 = *(esi + 0x58)
esi[0x25] = (ecx_10 u>> 0x10).w | (eax_39 << 0x10).w
int32_t edx_40 = (data_c7bbd8 & 0xffffff) | (eax_39 & 0xff000000)
int32_t eax_41 = *(esi + 0x4c)
*(esi + 0x58) = ecx_10
*(esi + 0x5c) = edx_40
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x4c) ^= (eax_41 ^ edx_40) & 0xffffff
ecx_10.b = data_c7bbdc
*(esi + 0x5f) = ecx_10.b
edx_40.b = ecx_10.b
*(esi + 0x4f) = edx_40.b
int32_t eax_46
int32_t edx_41
edx_41:eax_46 = sx.q(*(arg1 + 8) * *(arg1 + 0x18))
esi[0x2c] += ((eax_46 + (edx_41 & 0xfff)) s>> 0xc).w
int32_t eax_51
int32_t edx_43
edx_43:eax_51 = sx.q(*(arg1 + 0xc) * *(arg1 + 0x1c))
esi[0x2d] += ((eax_51 + (edx_43 & 0xfff)) s>> 0xc).w
sub_448880(data_c7bbc8, arg3, esi)
int32_t* ecx_11 = data_c7bbcc
*ecx_11 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg3, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
