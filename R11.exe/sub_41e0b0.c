// 函数: sub_41e0b0
// 地址: 0x41e0b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = sx.d(*(arg1 + 0x10))

if (eax == 0)
    sub_41dbc0()
    *(arg1 + 0x10) = 1
else if (eax != 1)
    return 0

for (int32_t i = 0; i s< 3; i += 1)
    sub_41d880(i)

return 0
