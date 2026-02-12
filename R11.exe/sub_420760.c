// 函数: sub_420760
// 地址: 0x420760
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(data_e7e648 + 0x20928) = arg1
void* eax
eax.w = arg2
*(data_e7e648 + 0x2092a) = eax.w
void* edx
edx.w = arg3
*(data_e7e648 + 0x2092c) = edx.w
void* ecx_2 = data_e7e648
uint32_t eax_1 = zx.d(*(ecx_2 + 0x20928))
int32_t* result = sub_446760(*(ecx_2 + 0x20930))
result[4].w = 0
*result = (&data_4b1af4)[eax_1 * 3]
char* ecx_4 = (&data_4b1af8)[eax_1 * 3]
void* edx_1 = &result[5]

do
    result.b = *ecx_4
    *edx_1 = result.b
    ecx_4 = &ecx_4[1]
    edx_1 += 1
while (result.b != 0)

return result
