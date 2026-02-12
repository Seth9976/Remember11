// 函数: sub_480980
// 地址: 0x480980
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x40) != 0)
    CoTaskMemFree(*(arg1 + 0x44))
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0

int32_t* result = *(arg1 + 0x3c)

if (result != 0)
    result = (*(*result + 8))(result)
    *(arg1 + 0x3c) = 0

return result
