// 函数: sub_443370
// 地址: 0x443370
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* esi = *data_c7bbcc
int32_t eax = sub_448950(esi, 0x200c, 2)
*(esi + 0x74) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t ebx = *(esi + 0x7c)
*(esi + 0x64) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t eax_1 = *(esi + 0x78)
*(esi + 0x54) = fconvert.s(fconvert.t(data_c7bbe8))
*(esi + 0x44) = fconvert.s(fconvert.t(data_c7bbe8))
int32_t ecx = data_c7bbd8
*(esi + 0x58) = *(esi + 0x58)
*(esi + 0x48) = *(esi + 0x48)
*(esi + 0x68) = *(esi + 0x68)
*(esi + 0x78) = eax_1
int32_t edx_1 = *(esi + 0x5c)
int32_t ecx_2 = (ecx & 0xffffff) | (ebx & 0xff000000)
*(esi + 0x7c) = ecx_2
*(esi + 0x6c) ^= (ecx_2 ^ *(esi + 0x6c)) & 0xffffff
*(esi + 0x5c) ^= (edx_1 ^ *(esi + 0x6c)) & 0xffffff
*(esi + 0x4c) ^= (*(esi + 0x5c) ^ *(esi + 0x4c)) & 0xffffff
char ecx_5 = data_c7bbdc
*(esi + 0x7f) = ecx_5
*(esi + 0x6f) = ecx_5
int32_t eax_4
eax_4.b = ecx_5
*(esi + 0x5f) = eax_4.b
*(esi + 0x4f) = ecx_5
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
*(esi + 0x73) = arg1[0x78]
esi[0x38].b = arg1[0x6c]
*(esi + 0x71) = arg1[0x70]
esi[0x39].b = arg1[0x74]
esi[0x3c] = *(arg1 + 0x7c) + data_c7bbd0.w
char* eax_5
eax_5.w = *(arg1 + 0x80)
eax_5.w += data_c7bbd4.w
esi[0x3d] = eax_5.w
sub_448880(data_c7bbc8, arg2, esi)
int32_t* eax_6 = data_c7bbcc
*eax_6 += eax << 4
int16_t* esi_1 = *data_c7bbcc
sub_448f80(esi_1, 0)
sub_447a20(esi_1, data_c7bbe0, (data_c7bbe4).b)
sub_448880(data_c7bbc8, arg2, esi_1)
int32_t* result = data_c7bbcc
*result += 0x60
return result
