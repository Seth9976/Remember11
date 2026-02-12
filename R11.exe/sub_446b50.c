// 函数: sub_446b50
// 地址: 0x446b50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1 s< 0)
    void* eax_2 = data_c7bbac * 0x4c + data_c7b7a4
    *(eax_2 + 0xd) = arg2
    return eax_2

if (arg1 s>= data_c7b7a8)
    *0xd = arg2
    return 0

void* eax_4 = arg1 * 0x4c + data_c7b7a4
*(eax_4 + 0xd) = arg2
return eax_4
