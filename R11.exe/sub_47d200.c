// 函数: sub_47d200
// 地址: 0x47d200
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x10)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x1c) = arg2
LeaveCriticalSection(lpCriticalSection)
return 0
