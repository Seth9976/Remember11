// 函数: sub_448f80
// 地址: 0x448f80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 4) = 0
*(arg1 + 3) = 0x20
*arg1 = 5
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x10) = 4
*(arg1 + 0x18) = (*(arg1 + 0x18) & 0xfffffffe) | 0xe
int32_t eax_3
eax_3.b = arg2 != 0
*(arg1 + 0x14) = 0x10000000
*(arg1 + 0x1c) = *(arg1 + 0x1c)
*(arg1 + 0x3c) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x38) = 0x49
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(eax_3 + 0x42)
*(arg1 + 0x28) = eax_5
int32_t eax_6
eax_6.b = arg2 != 0
*(arg1 + 0x2c) = edx_1
*(arg1 + 0x48) = 0x3b
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(eax_6 + 0x4a)
*(arg1 + 0x58) = eax_8
*(arg1 + 0x5c) = edx_2
return 6
