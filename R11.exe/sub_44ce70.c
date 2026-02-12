// 函数: sub_44ce70
// 地址: 0x44ce70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 4)

if (eax != 0)
    j_sub_4813df(eax)
    *(arg1 + 4) = 0

void* eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    j_sub_4813df(eax_1)
    *(arg1 + 8) = 0

if ((arg2 & 1) != 0)
    j_sub_4813df(arg1)

return arg1
