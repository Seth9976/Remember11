// 函数: sub_43b520
// 地址: 0x43b520
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
void* edi_3 = (arg1 u>> 0x10) * 0x7c + data_c7cc80
int32_t eax_1 = sub_448950(esi, 0x2916, 1)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(zx.d(arg3[3]))
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(zx.d(arg3[2]))
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(zx.d(arg3[1]))
int32_t ebp_1 = eax_3 | 0x80000000
int32_t ebp_3 = ebp_1 << 8 | eax_5
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(zx.d(*arg3))
int32_t ebp_5 = ebp_3 << 8 | eax_7
*(esi + 0x28) = 1
*(esi + 0x2c) = 0
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | ebp_1 u>> 0xffffffe8 | edx_1) << 8 | ebp_3 u>> 0xffffffe8 | edx_2) << 8
    | ebp_5 u>> 0xffffffe8 | edx_3
*(esi + 0x20) = ebp_5 << 8 | eax_9
int32_t ecx_9 = *(esi + 0x44)
*(esi + 0x40) &= 0xc000ffff
*(esi + 0x40) &= 0xffffc000
int32_t ebp_8 = *(esi + 0x54)
int32_t ecx_10 = *(esi + 0x50)
*(esi + 0x44) = ecx_9
int32_t eax_13
int32_t edx_5
edx_5:eax_13 = sx.q((*(edi_3 + 0x14) & 0x3ff) << 4)
*(esi + 0x50) = eax_13 | (ecx_10 & 0xffffc000)
int32_t ecx_12 = *(esi + 0x50)
*(esi + 0x54) = edx_5 | ebp_8
int32_t eax_18
int32_t edx_7
edx_7:eax_18 = sx.q((*(edi_3 + 0x18) & 0x3ff) << 4)
int32_t ecx_14 = *(esi + 0x44)
int32_t edx_9 = edx_7 << 0x10 | eax_18 u>> 0xfffffff0 | *(esi + 0x54)
*(esi + 0x50) = eax_18 << 0x10 | (ecx_12 & 0xc000ffff)
int32_t eax_21 = *(esi + 0x40)
*(esi + 0x54) = edx_9
int32_t edx_14 = (((eax_21 + 1) ^ eax_21) & 0x3fff) ^ eax_21
int32_t eax_23 = *(esi + 0x50)
*(esi + 0x40) = ((((edx_14 & 0xffff0000) + 0x10000) ^ edx_14) & 0x3fff0000) ^ edx_14
int32_t edx_24 = (((eax_23 + 1) ^ eax_23) & 0x3fff) ^ eax_23
int32_t ecx_16 = *(esi + 0x54)
*(esi + 0x44) = ecx_14
*(esi + 0x50) = ((((edx_24 & 0xffff0000) + 0x10000) ^ edx_24) & 0x3fff0000) ^ edx_24
*(esi + 0x54) = ecx_16
int16_t ecx_18 = (*arg2 << 4) + data_c7bbd0.w
esi[0x2c] = ecx_18
int32_t edx_29
edx_29.w = ecx_18
esi[0x24] = edx_29.w
esi[0x2d] = (arg2[2] << 4) + data_c7bbd4.w
int32_t ecx_19 = *(esi + 0x58)
int32_t eax_27 = *(esi + 0x5c)
esi[0x25] = (ecx_19 u>> 0x10).w | (eax_27 << 0x10).w
int32_t edx_32 = data_c7bbd8
*(esi + 0x48) = *(esi + 0x48)
int32_t edx_34 = (edx_32 & 0xffffff) | (eax_27 & 0xff000000)
int32_t eax_30 = edx_34 ^ *(esi + 0x4c)
*(esi + 0x5c) = edx_34
*(esi + 0x4c) ^= eax_30 & 0xffffff
*(esi + 0x58) = ecx_19
ecx_19.b = data_c7bbdc
edx_34.b = ecx_19.b
*(esi + 0x5f) = ecx_19.b
*(esi + 0x4f) = edx_34.b
esi[0x2c] += *(edi_3 + 0x14) << 4
esi[0x2d] += *(edi_3 + 0x18) << 4
sub_448880(data_c7bbc8, arg4, esi)
int32_t* result = data_c7bbcc
*result += eax_1 << 4
return result
