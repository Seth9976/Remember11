// 函数: sub_46afc0
// 地址: 0x46afc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x308) == 0)
    return 0x80004005

if (*(arg1 + 0xc) == 1)
    ov_clear(arg1 + 0x38)

int32_t* ecx = *(arg1 + 0x30)

if (ecx != 0)
    (**ecx)(1)
    *(arg1 + 0x30) = 0

return 0
