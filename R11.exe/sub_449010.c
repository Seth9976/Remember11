// 函数: sub_449010
// 地址: 0x449010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 4) = 0
*(arg1 + 3) = 0x20
*arg1 = 4
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x10) = 3
*(arg1 + 0x18) = (*(arg1 + 0x18) & 0xfffffffe) | 0xe
int32_t eax_3
eax_3.b = arg2 != 0
*(arg1 + 0x14) = 0x10000000
*(arg1 + 0x1c) = *(arg1 + 0x1c)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(eax_3 + 0x14)
*(arg1 + 0x28) = eax_5
int32_t eax_6
eax_6.b = arg2 != 0
*(arg1 + 0x2c) = edx_1
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(eax_6 + 6)
*(arg1 + 0x38) = eax_8
int32_t eax_9
eax_9.b = arg2 != 0
*(arg1 + 0x3c) = edx_2
int32_t eax_11
int32_t edx_3
edx_3:eax_11 = sx.q(eax_9 + 8)
*(arg1 + 0x48) = eax_11
*(arg1 + 0x40) = (((*(arg1 + 0x40) & 0xfffffffd) | 1) & 0xfffffff7) | 4
*(arg1 + 0x4c) = edx_3
*(arg1 + 0x44) = *(arg1 + 0x44)
return 5
