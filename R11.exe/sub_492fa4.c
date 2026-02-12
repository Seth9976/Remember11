// 函数: sub_492fa4
// 地址: 0x492fa4
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if ((arg1 & 0x20) != 0)
    return 5

if ((arg1 & 8) != 0)
    return 1

if ((arg1 & 4) != 0)
    return 2

if ((arg1 & 1) != 0)
    return 3

return (zx.d(arg1) & 2) * 2
