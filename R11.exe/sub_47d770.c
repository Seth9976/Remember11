// 函数: sub_47d770
// 地址: 0x47d770
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x95) = 1
LeaveCriticalSection(lpCriticalSection)
return 0
