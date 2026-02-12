// 函数: sub_47d110
// 地址: 0x47d110
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80004003

int32_t eax_1 = *(arg1 + 0x1c)
int32_t eax_2

if (eax_1 == 0)
    eax_2 = 0
else
    eax_2 = eax_1 + 0xc

*arg2 = eax_2

if (*(arg1 + 0x1c) != 0)
    void* eax_3 = *(arg1 + 0x1c)
    (*(*(eax_3 + 0xc) + 4))(eax_3 + 0xc)

PWSTR lpString2 = *(arg1 + 8)

if (lpString2 == 0)
    arg2[2].w = 0
    arg2[1] = *(arg1 + 0x10)
    return 0

lstrcpynW(&arg2[2], lpString2, 0x80)
arg2[1] = *(arg1 + 0x10)
return 0
