// 函数: sub_4793c0
// 地址: 0x4793c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = *(arg1 + 0x160)
void* eax_1 = *(arg2 + 0x44)
*(ecx + 0x30) = *(eax_1 + 0x34)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(*(eax_1 + 0x38))
*(ecx + 0x34) = (eax_3 ^ edx_1) - edx_1
*(ecx + 0x38) = ((*(ecx + 0x30) << 2) + 3) & 0xfffffffc
*(ecx + 0x40) = 1
return 0
