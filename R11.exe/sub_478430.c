// 函数: sub_478430
// 地址: 0x478430
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_17 = *(arg1 + 0x28)

if (eax_17 != 0)
    sub_4813df(eax_17)
    *(arg1 + 0x28) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0x2c) = 0

if (sub_477bd0(arg1 + 0x28, *(arg1 + 0x2c) + 1) s>= 0)
    *(*(arg1 + 0x28) + (*(arg1 + 0x2c) << 2)) = 0x80000000
    *(arg1 + 0x2c) += 1

if (sub_477bd0(arg1 + 0x28, *(arg1 + 0x2c) + 1) s>= 0)
    *(*(arg1 + 0x28) + (*(arg1 + 0x2c) << 2)) = 0
    *(arg1 + 0x2c) += 1

if (sub_477bd0(arg1 + 0x28, *(arg1 + 0x2c) + 1) s>= 0)
    *(*(arg1 + 0x28) + (*(arg1 + 0x2c) << 2)) = 1
    *(arg1 + 0x2c) += 1

if (sub_477bd0(arg1 + 0x28, *(arg1 + 0x2c) + 1) s>= 0)
    *(*(arg1 + 0x28) + (*(arg1 + 0x2c) << 2)) = 2
    *(arg1 + 0x2c) += 1

if (sub_477bd0(arg1 + 0x28, *(arg1 + 0x2c) + 1) s>= 0)
    *(*(arg1 + 0x28) + (*(arg1 + 0x2c) << 2)) = 4
    *(arg1 + 0x2c) += 1

int32_t result = sub_477bd0(arg1 + 0x28, *(arg1 + 0x2c) + 1)

if (result s>= 0)
    *(*(arg1 + 0x28) + (*(arg1 + 0x2c) << 2)) = 8
    *(arg1 + 0x2c) += 1

return result
