// 函数: sub_4780f0
// 地址: 0x4780f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_15 = *(arg1 + 0x10)

if (eax_15 != 0)
    sub_4813df(eax_15)
    *(arg1 + 0x10) = 0

*(arg1 + 0x18) = 0
*(arg1 + 0x14) = 0

if (sub_477bd0(arg1 + 0x10, 1) s>= 0)
    *(*(arg1 + 0x10) + (*(arg1 + 0x14) << 2)) = 0x50
    *(arg1 + 0x14) += 1

if (sub_477bd0(arg1 + 0x10, *(arg1 + 0x14) + 1) s>= 0)
    *(*(arg1 + 0x10) + (*(arg1 + 0x14) << 2)) = 0x49
    *(arg1 + 0x14) += 1

if (sub_477bd0(arg1 + 0x10, *(arg1 + 0x14) + 1) s>= 0)
    *(*(arg1 + 0x10) + (*(arg1 + 0x14) << 2)) = 0x4d
    *(arg1 + 0x14) += 1

if (sub_477bd0(arg1 + 0x10, *(arg1 + 0x14) + 1) s>= 0)
    *(*(arg1 + 0x10) + (*(arg1 + 0x14) << 2)) = 0x4b
    *(arg1 + 0x14) += 1

if (sub_477bd0(arg1 + 0x10, *(arg1 + 0x14) + 1) s>= 0)
    *(*(arg1 + 0x10) + (*(arg1 + 0x14) << 2)) = 0x4f
    *(arg1 + 0x14) += 1

int32_t result = sub_477bd0(arg1 + 0x10, *(arg1 + 0x14) + 1)

if (result s>= 0)
    *(*(arg1 + 0x10) + (*(arg1 + 0x14) << 2)) = 0x47
    *(arg1 + 0x14) += 1

return result
