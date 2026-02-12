// 函数: sub_447580
// 地址: 0x447580
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

switch (zx.d(*(arg2 + 3)) u>> 4 & 7)
    case 0, 3
        return &arg2[8]
    case 1
        return &arg2[(zx.d(*arg2) + 1) * 8]
    case 2
        return *(arg2 + 4)
    case 5
        if (*arg1 == 3)
            sub_465480(".\emu.cpp", 0x669)
        
        arg1[*arg1 + 1] = &arg2[(zx.d(*arg2) + 1) * 8]
        *arg1 += 1
        return *(arg2 + 4)
    case 6
        if (*arg1 == 0)
            sub_465480(".\emu.cpp", 0x670)
        
        *arg1 -= 1
        return arg1[*arg1 + 1]

return 0
