// 函数: sub_4931b7
// 地址: 0x4931b7
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 != 0x7ff00000)
    if (arg2 == 0xfff00000 && arg1 == 0)
        return 2
else if (arg1 == 0)
    return 1

int16_t ecx_2 = arg2:2.w & 0x7ff8

if (ecx_2 == 0x7ff8)
    return 3

if (ecx_2 == 0x7ff0 && ((arg2 & 0x7ffff) != 0 || arg1 != 0))
    return 4

return 0
