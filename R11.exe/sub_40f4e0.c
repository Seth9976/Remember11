// 函数: sub_40f4e0
// 地址: 0x40f4e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)

if (eax == 0)
    sub_415460()
    *(data_e7e648 + 0x2899) = 3
    *(data_e7e648 + 0x28c0) = 2
    arg1[4].w = 1
else if (eax == 1 && *(data_e7e648 + 0x2899) == 0)
    void* eax_4 = arg1[0x11]
    *(eax_4 + 8) += 4
    sub_40a8a0(arg1)
    return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
