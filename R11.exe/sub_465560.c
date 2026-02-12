// 函数: sub_465560
// 地址: 0x465560
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* lpNumberOfBytesRead = arg4

if (lpNumberOfBytesRead == 0)
    lpNumberOfBytesRead = &arg4

return ReadFile(*(arg1 + 4), arg2, arg3, lpNumberOfBytesRead, nullptr)
