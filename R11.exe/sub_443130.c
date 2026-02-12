// 函数: sub_443130
// 地址: 0x443130
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax = sub_448950(esi, 0x200c, 1)
*(esi + 0x64) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t ebx = *(esi + 0x6c)
*(esi + 0x54) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t eax_1 = *(esi + 0x68)
*(esi + 0x44) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t ecx = data_c7bbd8
*(esi + 0x58) = *(esi + 0x58)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x6c) = (ecx & 0xffffff) | (ebx & 0xff000000)
int32_t ecx_4 = *(esi + 0x5c) ^ *(esi + 0x6c)
*(esi + 0x68) = eax_1
*(esi + 0x5c) ^= ecx_4 & 0xffffff
*(esi + 0x4c) ^= (*(esi + 0x5c) ^ *(esi + 0x4c)) & 0xffffff
eax_1.b = data_c7bbdc
*(esi + 0x6f) = eax_1.b
char ecx_6 = eax_1.b
*(esi + 0x5f) = ecx_6
*(esi + 0x4f) = ecx_6
*(esi + 0x43) = arg1[0xc]
esi[0x20].b = *arg1
*(esi + 0x41) = arg1[4]
esi[0x21].b = arg1[8]
esi[0x24] = *(arg1 + 0x10) + data_c7bbd0.w
esi[0x25] = *(arg1 + 0x14) + data_c7bbd4.w
*(esi + 0x53) = arg1[0x30]
esi[0x28].b = arg1[0x24]
*(esi + 0x51) = arg1[0x28]
esi[0x29].b = arg1[0x2c]
esi[0x2c] = *(arg1 + 0x34) + data_c7bbd0.w
esi[0x2d] = *(arg1 + 0x38) + data_c7bbd4.w
*(esi + 0x63) = arg1[0x54]
esi[0x30].b = arg1[0x48]
*(esi + 0x61) = arg1[0x4c]
esi[0x31].b = arg1[0x50]
esi[0x34] = *(arg1 + 0x58) + data_c7bbd0.w
esi[0x35] = *(arg1 + 0x5c) + data_c7bbd4.w
sub_448880(data_c7bbc8, arg2, esi)
int32_t* eax_4 = data_c7bbcc
*eax_4 += eax << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg2, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
