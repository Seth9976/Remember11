// 函数: __aullshr
// 地址: 0x4813c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 u>= 0x40)
    return 0

if (arg3 u>= 0x20)
    return arg2 u>> (arg3 & 0x1f)

return arg1 u>> (0x1f & arg3) | arg2 << (0x20 - (0x1f & arg3))
