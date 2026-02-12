// 函数: sub_47b2f0
// 地址: 0x47b2f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80004003

EnterCriticalSection(arg1 - 0x64)
int32_t nDenominator

if (*(arg1 - 0x7c) == 0)
    nDenominator = *(arg1 + 0x78)
else
    nDenominator = timeGetTime() - *(arg1 + 0x78)

if (nDenominator s> 0)
    *arg2 = MulDiv(0x186a0, *(arg1 + 0x44), nDenominator)
    LeaveCriticalSection(arg1 - 0x64)
    return 0

*arg2 = 0
LeaveCriticalSection(arg1 - 0x64)
return 0
