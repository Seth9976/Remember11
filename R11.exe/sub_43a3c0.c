// 函数: sub_43a3c0
// 地址: 0x43a3c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edi = arg1
int16_t* esi = *data_c7bbcc
int32_t* eax_1 = sub_448950(esi, 0x2914, 2)

if (edi == 0)
    edi = &data_c7bbf4

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(zx.d(edi[3]))
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(zx.d(edi[2]))
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(zx.d(edi[1]))
int32_t var_30 = eax_7
int32_t ebx_1 = eax_3 | 0x80000000
int32_t ebx_3 = ebx_1 << 8 | eax_5
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(zx.d(*edi))
*(esi + 0x28) = 1
*(esi + 0x2c) = 0
int32_t ebx_5 = ebx_3 << 8 | var_30
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | ebx_1 u>> 0xffffffe8 | edx_1) << 8 | ebx_3 u>> 0xffffffe8 | edx_2) << 8
    | ebx_5 u>> 0xffffffe8 | edx_3
*(esi + 0x20) = ebx_5 << 8 | eax_9
int32_t edi_9 = *(esi + 0x70)
int32_t eax_13
int32_t edx_4
edx_4:eax_13 = sx.q(arg2[2] << 4 & 0x3fff)
*(esi + 0x74) |= edx_4
int32_t eax_14 = eax_13 | (edi_9 & 0xffffc000)
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x54) = *(esi + 0x54)
*(esi + 0x44) = *(esi + 0x44)
*(esi + 0x70) = eax_14
*(esi + 0x60) ^= (eax_14 ^ *(esi + 0x60)) & 0x3fff
int32_t ebx_9 = *(esi + 0x60)
*(esi + 0x50) ^= (ebx_9 ^ *(esi + 0x50)) & 0x3fff
*(esi + 0x40) ^= (*(esi + 0x50) ^ *(esi + 0x40)) & 0x3fff
int32_t eax_21
int32_t edx_12
edx_12:eax_21 = sx.q(arg2[3] << 4 & 0x3fff)
int32_t edx_14 = edx_12 << 0x10 | eax_21 u>> 0xfffffff0 | *(esi + 0x74)
int32_t eax_23 = eax_21 << 0x10 | (eax_14 & 0xc000ffff)
*(esi + 0x70) = eax_23
*(esi + 0x74) = edx_14
int32_t eax_27 = ((ebx_9 ^ eax_23) & 0x3fff0000) ^ ebx_9
int32_t edx_15 = *(esi + 0x64)
*(esi + 0x60) = eax_27
*(esi + 0x64) = edx_15
*(esi + 0x44) = *(esi + 0x44)
int32_t eax_28 = *(esi + 0x50)
int32_t ebx_13 = ((eax_28 ^ eax_27) & 0x3fff0000) ^ eax_28
int32_t eax_30 = ebx_13 ^ *(esi + 0x40)
*(esi + 0x54) = *(esi + 0x54)
*(esi + 0x40) ^= eax_30 & 0x3fff0000
*(esi + 0x50) = ebx_13
int32_t eax_36
int32_t edx_18
edx_18:eax_36 = sx.q((arg2[2] + arg2[4]) << 4 & 0x3fff)
int32_t eax_37 = eax_36 | (eax_23 & 0xffffc000)
*(esi + 0x74) |= edx_18
*(esi + 0x70) = eax_37
int32_t eax_38 = *(esi + 0x60)
int32_t ebx_14 = *(esi + 0x64)
*(esi + 0x60) = ((eax_38 ^ eax_37) & 0x3fff) ^ eax_38
*(esi + 0x64) = ebx_14
int32_t eax_43
int32_t edx_24
edx_24:eax_43 = sx.q((arg2[3] + arg2[5]) << 4 & 0x3fff)
int32_t eax_45 = eax_43 << 0x10 | (eax_37 & 0xc000ffff)
*(esi + 0x74) |= edx_24 << 0x10 | eax_43 u>> 0xfffffff0
int32_t edx_27 = *(esi + 0x50)
int32_t edx_28 = *(esi + 0x40)
*(esi + 0x50) = ((edx_27 ^ eax_45) & 0x3fff0000) ^ edx_27
int32_t edi_25 = (((edx_28 + 1) ^ edx_28) & 0x3fff) ^ edx_28
*(esi + 0x54) = *(esi + 0x54)
int32_t ebx_16 = *(esi + 0x44)
int32_t edx_30 = *(esi + 0x50)
*(esi + 0x40) = ((((edi_25 & 0xffff0000) + 0x10000) ^ edi_25) & 0x3fff0000) ^ edi_25
*(esi + 0x44) = ebx_16
*(esi + 0x44) = *(esi + 0x44)
int32_t edi_35 = (((edx_30 + 1) ^ edx_30) & 0x3fff) ^ edx_30
int32_t ebx_18 = *(esi + 0x54)
int32_t edx_32 = *(esi + 0x60)
*(esi + 0x50) = ((((edi_35 & 0xffff0000) + 0x10000) ^ edi_35) & 0x3fff0000) ^ edi_35
int32_t edi_45 = (((edx_32 + 1) ^ edx_32) & 0x3fff) ^ edx_32
*(esi + 0x54) = ebx_18
int32_t ebx_19 = *(esi + 0x54)
*(esi + 0x60) = ((((edi_45 & 0xffff0000) + 0x10000) ^ edi_45) & 0x3fff0000) ^ edi_45
int32_t edx_38 = (((eax_45 + 1) ^ eax_45) & 0x3fff) ^ eax_45
*(esi + 0x54) = ebx_19
int32_t edi_51 = *(esi + 0x74)
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x64) = *(esi + 0x64)
*(esi + 0x74) = edi_51
int32_t ebx_23 = *(esi + 0x7c)
*(esi + 0x70) = ((((edx_38 & 0xffff0000) + 0x10000) ^ edx_38) & 0x3fff0000) ^ edx_38
int32_t edi_58 = *(esi + 0x78)
int32_t eax_48 = data_c7bbd8 & 0xffffff
*(esi + 0x68) = *(esi + 0x68)
*(esi + 0x58) = *(esi + 0x58)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x7c) = eax_48 | (ebx_23 & 0xff000000)
*(esi + 0x6c) ^= (*(esi + 0x6c) ^ *(esi + 0x7c)) & 0xffffff
int32_t eax_53 = *(esi + 0x4c)
*(esi + 0x78) = edi_58
*(esi + 0x5c) ^= (*(esi + 0x6c) ^ *(esi + 0x5c)) & 0xffffff
*(esi + 0x4c) ^= (eax_53 ^ *(esi + 0x5c)) & 0xffffff
char edx_44 = data_c7bbdc
*(esi + 0x7f) = edx_44
*(esi + 0x6f) = edx_44
*(esi + 0x5f) = edx_44
*(esi + 0x4f) = edx_44
int32_t edx_46 = arg2[4]
int32_t eax_58 = arg2[5]
int32_t var_20 = 0
int16_t var_1c = 0
int16_t var_18 = 0
int16_t var_c = 0
int16_t edx_47 = (edx_46 << 4).w
int16_t eax_59 = (eax_58 << 4).w
int32_t edx_48 = arg2[7]
int32_t ecx_2 = neg.d(arg2[6]) << 4
var_30 = ecx_2
void* var_4c = &arg2[8]
int32_t edx_50 = neg.d(edx_48) << 4
int32_t* var_50 = &var_30
int32_t var_2c_1 = edx_50
sub_439c00(arg3, &var_20, edx_50, ecx_2)
int16_t eax_64 = (*arg2 << 4).w + (data_c7bbd0).w
int16_t ebp_3 = (arg2[1] << 4).w + (data_c7bbd4).w
esi[0x24] = var_20.w + eax_64
esi[0x2c] = var_18 + eax_64
esi[0x25] = var_1c + ebp_3
esi[0x34] = edx_47 + eax_64
esi[0x2d] = eax_59 + ebp_3
esi[0x35] = var_c + ebp_3
esi[0x3c] = edx_47 + eax_64
esi[0x3d] = eax_59 + ebp_3
sub_448880(data_c7bbc8, arg4, esi)
int32_t* ecx_10 = data_c7bbcc
*ecx_10 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg4, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
