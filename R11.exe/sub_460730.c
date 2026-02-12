// 函数: sub_460730
// 地址: 0x460730
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_2 = (arg2 << 6) + arg3

if (*(arg1 + (eax_2 << 3) + 0x820) == 1 || *(arg1 + (eax_2 << 3) + 0x81c) != arg4)
    *(arg1 + (eax_2 << 3) + 0x81c) = arg4
    *(arg1 + (eax_2 << 3) + 0x820) = 0
    int32_t* ecx = *(arg1 + 4)
    (*(*ecx + 0x10c))(ecx, arg2, arg3, arg4)

return 0
