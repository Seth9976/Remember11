// 函数: sub_4839c8
// 地址: 0x4839c8
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 u< 0x4cbae0 || arg1 u> 0x4cbd40)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - 0x4cbae0) s>> 5) + 0x10)
