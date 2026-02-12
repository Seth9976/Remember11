// 函数: sub_46b940
// 地址: 0x46b940
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 4) == 0)
    return 0x800401f0

int32_t result = 0
int32_t i = 0

if (*(arg1 + 0x10) u> 0)
    do
        int32_t* eax_3 = *(*(arg1 + 4) + (i << 2))
        i += 1
        result |= (*(*eax_3 + 0x48))(eax_3)
    while (i u< *(arg1 + 0x10))

return result
