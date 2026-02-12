// 函数: sub_480a40
// 地址: 0x480a40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 == 0)
    return 

if (*(arg1 + 0x40) != 0)
    CoTaskMemFree(*(arg1 + 0x44))
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0

int32_t* eax_2 = *(arg1 + 0x3c)

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    *(arg1 + 0x3c) = 0

CoTaskMemFree(arg1)
