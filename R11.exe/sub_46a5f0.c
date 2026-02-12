// 函数: sub_46a5f0
// 地址: 0x46a5f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0)
    return fconvert.t(-1.0)

int32_t performanceCount_1 = *(arg1 + 0x10)
int32_t eax = *(arg1 + 0x14)
int32_t performanceCount

if ((performanceCount_1 | eax) == 0)
    QueryPerformanceCounter(&performanceCount)
    int32_t var_4
    eax = var_4
    performanceCount_1 = performanceCount

int32_t eax_1 = sbb.d(eax, *(arg1 + 0x24), performanceCount_1 u< *(arg1 + 0x20))
performanceCount = performanceCount_1 - *(arg1 + 0x20)
int32_t var_4_1 = eax_1
return float.t(performanceCount.q) / float.t(*(arg1 + 8))
