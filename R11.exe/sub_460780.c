// 函数: sub_460780
// 地址: 0x460780
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + (arg2 << 3) + 0x1c20) == 1 || *(arg1 + (arg2 << 3) + 0x1c1c) != arg3)
    *(arg1 + 0x1cd4) += 1
    *(arg1 + (arg2 << 3) + 0x1c1c) = arg3
    *(arg1 + (arg2 << 3) + 0x1c20) = 0
    int32_t* ecx = *(arg1 + 4)
    (*(*ecx + 0x104))(ecx, arg2, arg3)

return 0
