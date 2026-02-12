// 函数: sub_4809e0
// 地址: 0x4809e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 != arg1)
    if (*(arg1 + 0x40) != 0)
        CoTaskMemFree(*(arg1 + 0x44))
        *(arg1 + 0x40) = 0
        *(arg1 + 0x44) = 0
    
    int32_t* eax_2 = *(arg1 + 0x3c)
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
        *(arg1 + 0x3c) = 0
    
    if (sub_480910(arg1, arg2) s< 0)
        return 0x8007000e

return 0
