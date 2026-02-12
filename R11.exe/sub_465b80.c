// 函数: sub_465b80
// 地址: 0x465b80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0x2c) = zx.d(arg4)

if (arg4 != 0)
    __builtin_memset(arg1 + 0xc, 0, 0x14)
    *(arg1 + 0x1c) = CreateEventW(nullptr, 0, 0, nullptr)

*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x20) = 1
int32_t result = sub_465a90(arg1, arg2, arg3, arg4)

if (result == 0)
    return result

*(arg1 + 8) = 0
return 0x80004005
