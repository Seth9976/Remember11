// 函数: sub_46a590
// 地址: 0x46a590
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0)
    return fconvert.t(-1.0)

int32_t eax = *(arg1 + 0x10)
int32_t ecx = *(arg1 + 0x14)
int64_t performanceCount

if ((eax | ecx) == 0)
    QueryPerformanceCounter(&performanceCount)
    return float.t(performanceCount) / float.t(*(arg1 + 8))

performanceCount.d = eax
performanceCount:4.d = ecx
return float.t(performanceCount) / float.t(*(arg1 + 8))
