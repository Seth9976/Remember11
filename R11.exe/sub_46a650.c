// 函数: sub_46a650
// 地址: 0x46a650
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

int32_t edi_1 = sbb.d(eax, *(arg1 + 0x1c), performanceCount_1 u< *(arg1 + 0x18))
performanceCount = performanceCount_1 - *(arg1 + 0x18)
int32_t var_4_1 = edi_1
long double x87_r7_1 = float.t(performanceCount.q)
long double x87_r6 = float.t(*(arg1 + 8))
*(arg1 + 0x18) = performanceCount_1
*(arg1 + 0x1c) = eax
return x87_r7_1 / x87_r6
