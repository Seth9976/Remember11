// 函数: sub_47a150
// 地址: 0x47a150
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0)
    return 0x80004003

int32_t eax_2 = lstrcmpW(arg2, &data_4a58f4)

if (eax_2 != 0)
    *arg3 = 0
    return 0x80040216

void* eax_4 = (*(*(arg1 - 0xc) + 0x1c))(eax_2)

if (eax_4 == 0)
    *arg3 = 0
    (*(*0 + 4))(0)
    return 0

*arg3 = eax_4 + 0xc
(*(*(eax_4 + 0xc) + 4))(eax_4 + 0xc)
return 0
