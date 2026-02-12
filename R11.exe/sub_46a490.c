// 函数: sub_46a490
// 地址: 0x46a490
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0)
    return 

int32_t performanceCount_1 = *(arg1 + 0x10)
int32_t eax = *(arg1 + 0x14)

if ((performanceCount_1 | eax) == 0)
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t var_4
    eax = var_4
    performanceCount_1 = performanceCount

*(arg1 + 0x20) = performanceCount_1
*(arg1 + 0x24) = eax
*(arg1 + 0x18) = performanceCount_1
*(arg1 + 0x1c) = eax
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
arg1[1] = 0
