// 函数: sub_412f90
// 地址: 0x412f90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(data_e7e648 + 0x20828) = arg1
void* eax
eax.w = arg2
*(data_e7e648 + 0x2082a) = eax.w
void* edx
edx.w = arg3
*(data_e7e648 + 0x2082c) = edx.w
void* ecx_2 = data_e7e648
uint32_t eax_1 = zx.d(*(ecx_2 + 0x20828))
int32_t* result = sub_446760(*(ecx_2 + 0x20830))
result[4].w = 0
*result = (&data_4b0f48)[eax_1 * 3]
char* ecx_4 = (&data_4b0f4c)[eax_1 * 3]
void* edx_1 = &result[5]

do
    result.b = *ecx_4
    *edx_1 = result.b
    ecx_4 = &ecx_4[1]
    edx_1 += 1
while (result.b != 0)

return result
