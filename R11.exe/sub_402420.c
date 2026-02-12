// 函数: sub_402420
// 地址: 0x402420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0x14) = arg2.b
*(arg1 + 0x18) = 0x80

if (arg2 != 0)
    *(arg1 + 0x17) = 0xff
    *(arg1 + 0x16) = 0xff
    *(arg1 + 0x15) = 0xff
    return arg1

*(arg1 + 0x17) = 0
*(arg1 + 0x16) = 0
*(arg1 + 0x15) = 0
return arg1
