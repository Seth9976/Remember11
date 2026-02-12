// 函数: sub_4656a0
// 地址: 0x4656a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

BOOL eax_2 = ReadFile(*(arg1 + 4), arg2, arg3, nullptr, arg1 + 0xc)

if (eax_2 != 0)
    *(arg1 + 0x28) = 0
    return eax_2

enum WIN32_ERROR eax_3 = GetLastError()

if (eax_3 != ERROR_IO_PENDING)
    return sub_465480(".\cfile.cpp", 0x83)

*(arg1 + 0x28) = 1
return eax_3
