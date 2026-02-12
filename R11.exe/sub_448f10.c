// 函数: sub_448f10
// 地址: 0x448f10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 4) = 0
*arg1 = arg2.w + 1
*(arg1 + 3) = 0x20
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
int32_t ebx = *(arg1 + 0x14)
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(arg2 & 0x7fff)
*(arg1 + 0x10) = eax_2 | (*(arg1 + 0x10) & 0xffff8000)
*(arg1 + 0x18) = (*(arg1 + 0x18) & 0xfffffffe) | 0xe
*(arg1 + 0x14) = ((edx_1 | ebx) & 0xfffffff) | 0x10000000
*(arg1 + 0x1c) = *(arg1 + 0x1c)
return arg2 + 2
