// 函数: sub_47b270
// 地址: 0x47b270
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80004003

EnterCriticalSection(arg1 - 0x64)
*arg2 = *(arg1 + 0x40)
LeaveCriticalSection(arg1 - 0x64)
return 0
