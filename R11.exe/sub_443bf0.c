// 函数: sub_443bf0
// 地址: 0x443bf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax_1 = sub_448950(esi, 0x2804, 2)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(zx.d(arg2[3]))
int32_t ebx_1 = eax_3 | 0x80000000
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(zx.d(arg2[2]))
int32_t ebx_3 = ebx_1 << 8 | eax_5
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(zx.d(arg2[1]))
uint32_t eax_8 = zx.d(*arg2)
*(esi + 0x28) = 1
int32_t ebx_5 = ebx_3 << 8 | eax_7
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(eax_8)
*(esi + 0x24) =
    (((edx | 0x3f) << 8 | ebx_1 u>> 0xffffffe8 | edx_1) << 8 | ebx_3 u>> 0xffffffe8 | edx_2) << 8
    | ebx_5 u>> 0xffffffe8 | edx_3
*(esi + 0x2c) = 0
*(esi + 0x20) = ebx_5 << 8 | eax_9
int32_t edx_4 = data_c7bbd8
int32_t ebp_8 = *(esi + 0x5c)
int32_t ebx_8 = *(esi + 0x58)
*(esi + 0x50) = *(esi + 0x50)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x40) = *(esi + 0x40)
*(esi + 0x5c) = (edx_4 & 0xffffff) | (ebp_8 & 0xff000000)
int32_t edx_8 = *(esi + 0x54) ^ *(esi + 0x5c)
*(esi + 0x58) = ebx_8
*(esi + 0x54) ^= edx_8 & 0xffffff
int32_t edx_10 = *(esi + 0x44)
*(esi + 0x4c) ^= (*(esi + 0x54) ^ *(esi + 0x4c)) & 0xffffff
*(esi + 0x44) ^= (edx_10 ^ *(esi + 0x4c)) & 0xffffff
char eax_14 = data_c7bbdc
*(esi + 0x5f) = eax_14
int32_t edx_12
edx_12.b = eax_14
*(esi + 0x47) = eax_14
*(esi + 0x57) = eax_14
*(esi + 0x4f) = edx_12.b
esi[0x20] = *arg1 + data_c7bbd0.w
esi[0x21] = arg1[2] + data_c7bbd4.w
esi[0x24] = arg1[4] + data_c7bbd0.w
esi[0x25] = arg1[6] + data_c7bbd4.w
esi[0x28] = arg1[8] + data_c7bbd0.w
esi[0x29] = arg1[0xa] + data_c7bbd4.w
esi[0x2c] = arg1[0xc] + data_c7bbd0.w
esi[0x2d] = arg1[0xe] + data_c7bbd4.w
sub_448880(data_c7bbc8, arg3, esi)
int32_t* eax_18 = data_c7bbcc
*eax_18 += eax_1 << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg3, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
