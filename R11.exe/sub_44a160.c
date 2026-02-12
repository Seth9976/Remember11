// 函数: sub_44a160
// 地址: 0x44a160
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:0 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = arg2

if (cond:0)
    *(arg1 + arg2 + 4) = 0
    return arg2

(*(arg1 + 4))[arg2] = 0
return arg2
