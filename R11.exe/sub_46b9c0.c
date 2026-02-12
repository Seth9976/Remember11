// 函数: sub_46b9c0
// 地址: 0x46b9c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

bool cond:0 = *(arg1 + 4) != 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0

if (not(cond:0))
    return 0x800401f0

int32_t result = 0
int32_t i = 0

if (*(arg1 + 0x10) u> 0)
    do
        int32_t* eax_3 = *(*(arg1 + 4) + (i << 2))
        i += 1
        result |= (*(*eax_3 + 0x34))(eax_3, 0)
    while (i u< *(arg1 + 0x10))

return result
