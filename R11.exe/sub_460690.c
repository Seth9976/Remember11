// 函数: sub_460690
// 地址: 0x460690
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + (arg2 << 3) + 0x20) == 1 || *(arg1 + (arg2 << 3) + 0x1c) != arg3)
    *(arg1 + (arg2 << 3) + 0x1c) = arg3
    *(arg1 + (arg2 << 3) + 0x20) = 0
    int32_t* ecx = *(arg1 + 4)
    (*(*ecx + 0xe4))(ecx, arg2, arg3)

return 0
