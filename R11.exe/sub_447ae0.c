// 函数: sub_447ae0
// 地址: 0x447ae0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 s> 0x200)
    return 0xa

if (arg1 s> 0x100)
    return 9

if (arg1 s> 0x80)
    return 8

if (arg1 s> 0x40)
    return 7

if (arg1 s> 0x20)
    return 6

if (arg1 s> 0x10)
    return 5

if (arg1 s> 8)
    return 4

if (arg1 s> 4)
    return 3

int32_t ecx
ecx.b = arg1 s> 2
return ecx + 1
