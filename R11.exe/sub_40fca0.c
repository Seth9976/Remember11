// 函数: sub_40fca0
// 地址: 0x40fca0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0x28) = arg2
uint32_t ecx_1 = zx.d(arg2)
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
int32_t* result = sub_446760(*(arg1 + 4))
result[4].w = 0
*result = (&data_4b0ad8)[ecx_1 * 3]
char* ecx_3 = (&data_4b0adc)[ecx_1 * 3]
void* edx = &result[5]

do
    result.b = *ecx_3
    *edx = result.b
    ecx_3 = &ecx_3[1]
    edx += 1
while (result.b != 0)

return result
