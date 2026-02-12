// 函数: sub_47cac0
// 地址: 0x47cac0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80004003

*arg2 = *(arg1 + 0x1c)
arg2[1] = *(arg1 + 0x20)
arg2[2] = *(arg1 + 0x24)
arg2[3] = *(arg1 + 0x28)
return 0
