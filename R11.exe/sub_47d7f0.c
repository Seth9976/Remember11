// 函数: sub_47d7f0
// 地址: 0x47d7f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(*(arg1 + 0x28) + 0x14) == 0)
    return 0x80040227

if (*(arg1 + 0xa1) != 0)
    return 1

void* eax_2
eax_2.b = *(arg1 + 0x24)
char temp0 = eax_2.b
eax_2.b = neg.b(eax_2.b)
return sbb.d(eax_2, eax_2, temp0 != 0) & 0x8004020b
