// 函数: sub_46b870
// 地址: 0x46b870
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 4) == 0)
    return 0x800401f0

if (arg2 u>= *(arg1 + 0x10))
    return 0x80070057

*arg3 = 0
int32_t* eax_3 = *(*(arg1 + 4) + (arg2 << 2))
return (**eax_3)(eax_3, 0x4a8434, arg3)
