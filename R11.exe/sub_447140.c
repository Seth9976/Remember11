// 函数: sub_447140
// 地址: 0x447140
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_2 = (zx.d(*(arg1 + 3)) & 0x70) - 0x10

if (eax_2 u> 0x40)
    return 0

switch (eax_2)
    case 0
        return &arg1[(zx.d(*arg1) + 1) * 8]
    case 0x10, 0x40
        return *(arg1 + 4)
    case 0x20, 0x30
        return &arg1[8]
