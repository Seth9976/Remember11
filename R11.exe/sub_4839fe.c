// 函数: sub_4839fe
// 地址: 0x4839fe
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 s>= 0x14)
    return LeaveCriticalSection(arg2 + 0x20)

*(arg2 + 0xc) &= 0xffff7fff
return __unlock(arg1 + 0x10)
