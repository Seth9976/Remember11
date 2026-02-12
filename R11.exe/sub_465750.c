// 函数: sub_465750
// 地址: 0x465750
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* lpNumberOfBytesWritten = arg4

if (lpNumberOfBytesWritten == 0)
    lpNumberOfBytesWritten = &arg4

return WriteFile(*(arg1 + 4), arg2, arg3, lpNumberOfBytesWritten, nullptr)
