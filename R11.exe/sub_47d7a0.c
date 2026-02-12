// 函数: sub_47d7a0
// 地址: 0x47d7a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x14)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x95) = 0
*(arg1 + 0x18) = 0
LeaveCriticalSection(lpCriticalSection)
return 0
