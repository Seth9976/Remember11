// 函数: sub_40b8f0
// 地址: 0x40b8f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(arg1[4].w)

if (eax == 0)
    if (sub_41b650() == 0)
        arg1[4].w = 1
else if (eax == 1)
    void* eax_3 = arg1[0x11]
    *(eax_3 + 8) += 2
    sub_40a8a0(arg1)
    return 0

*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
