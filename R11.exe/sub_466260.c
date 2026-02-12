// 函数: sub_466260
// 地址: 0x466260
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t edx_2 = (*arg1 + 1) u>> 1
char* result = (edx_2 u>> 1) + arg2
char* esi = edx_2 + arg2
uint32_t ecx

if ((edx_2.b & 1) != 0)
    esi -= 1
    ecx.b = *((zx.d(*result) u>> 4) + 0x4a3b58)
    *esi = ecx.b

while (result u> arg2)
    ecx.b = result[0xffffffff]
    result -= 1
    uint32_t ecx_2 = zx.d(ecx.b)
    void* ebx_2
    ebx_2.b = *((ecx_2 & 0xf) + 0x4a3b58)
    *(esi - 1) = ebx_2.b
    esi -= 2
    *esi = *((ecx_2 u>> 4) + 0x4a3b58)

result.b = 4
*(arg1 + 9) = 4
*(arg1 + 0xb) = 4
arg1[1] = edx_2
return result
