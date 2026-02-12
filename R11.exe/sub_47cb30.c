// 函数: sub_47cb30
// 地址: 0x47cb30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80004003

PWSTR lpString2 = *(arg1 + 0x30)

if (lpString2 == 0)
    *arg2 = 0
else
    lstrcpynW(arg2, lpString2, 0x80)

*(arg2 + 0x100) = *(arg1 + 0x34)

if (*(arg1 + 0x34) != 0)
    int32_t* esi_1 = *(arg1 + 0x34)
    (*(*esi_1 + 4))(esi_1)

return 0
