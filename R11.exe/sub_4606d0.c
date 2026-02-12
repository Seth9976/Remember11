// 函数: sub_4606d0
// 地址: 0x4606d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_2 = (arg2 << 4) + arg3

if (*(arg1 + (eax_2 << 3) + 0x1820) == 1 || *(arg1 + (eax_2 << 3) + 0x181c) != arg4)
    *(arg1 + 0x1cd8) += 1
    *(arg1 + (eax_2 << 3) + 0x181c) = arg4
    *(arg1 + (eax_2 << 3) + 0x1820) = 0
    int32_t* ecx = *(arg1 + 4)
    (*(*ecx + 0x114))(ecx, arg2, arg3, arg4)

return 0
