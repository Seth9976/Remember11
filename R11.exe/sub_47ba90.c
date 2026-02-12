// 函数: sub_47ba90
// 地址: 0x47ba90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1[0x1e] + 0x18) == 0)
    SetEvent(arg1[0x17])
    return 0

if (arg1[0x1c] == 1)
    SetEvent(arg1[0x17])
    return 0

if ((*(*arg1 + 0xa0))() == 1 && arg2 != 0)
    SetEvent(arg1[0x17])
    return 0

ResetEvent(arg1[0x17])
return 1
