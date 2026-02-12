// 函数: sub_46a4e0
// 地址: 0x46a4e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 == 0)
    return 

int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t performanceCount_1 = performanceCount
int32_t var_4

if (arg1[1] != 0)
    int32_t edx_2 = performanceCount_1 - *(arg1 + 0x10)
    int32_t edi_2 = sbb.d(var_4, *(arg1 + 0x14), performanceCount_1 u< *(arg1 + 0x10))
    int32_t temp2_1 = *(arg1 + 0x20)
    *(arg1 + 0x20) += edx_2
    *(arg1 + 0x24) = adc.d(*(arg1 + 0x24), edi_2, temp2_1 + edx_2 u< temp2_1)

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = performanceCount_1
*(arg1 + 0x1c) = var_4
arg1[1] = 0
