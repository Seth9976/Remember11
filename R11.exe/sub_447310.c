// 函数: sub_447310
// 地址: 0x447310
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(*(arg1 + 0x18014) + 0x10) = *arg2 & 0x3fff
int32_t eax = arg2[1]
*(*(arg1 + 0x18014) + 0x14) = (*arg2 u>> 0x10 | eax << 0x10) & 0x3fff
return eax u>> 0x10
