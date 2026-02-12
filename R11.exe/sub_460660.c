// 函数: sub_460660
// 地址: 0x460660
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x18) == 1 || *(arg1 + 0x14) != arg2)
    *(arg1 + 0x14) = arg2
    *(arg1 + 0x18) = 0
    int32_t* ecx = *(arg1 + 4)
    (*(*ecx + 0x164))(ecx, arg2)

return 0
