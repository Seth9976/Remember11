// 函数: sub_46a440
// 地址: 0x46a440
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 = 0
__builtin_memset(&arg1[8], 0, 0x20)
arg1[1] = 1
int32_t frequency
BOOL eax = QueryPerformanceFrequency(&frequency)
int32_t frequency_1 = frequency
int32_t var_4
*(arg1 + 0xc) = var_4
*arg1 = eax != 0
*(arg1 + 8) = frequency_1
return arg1
