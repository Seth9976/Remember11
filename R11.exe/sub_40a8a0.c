// 函数: sub_40a8a0
// 地址: 0x40a8a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx_1 = zx.d(**(arg1[0x11] + 8))
*(arg1 + 0xd) = 1
arg1[4].w = 0
*arg1 = (&data_4b00f8)[ecx_1 * 3]
char* ecx_4 = *(ecx_1 * 0xc + 0x4b00fc)
void* edx_2 = &arg1[5]
int32_t* result

do
    result.b = *ecx_4
    *edx_2 = result.b
    ecx_4 = &ecx_4[1]
    edx_2 += 1
while (result.b != 0)

return result
