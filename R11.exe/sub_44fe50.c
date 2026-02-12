// 函数: sub_44fe50
// 地址: 0x44fe50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

HANDLE eax_1 = FindFirstFileW(arg2, &arg1[2])
*arg1 = eax_1

if (eax_1 != 0xffffffff)
    arg1[1] = 1
    return 0

*arg1 = nullptr
return 0x80004005
