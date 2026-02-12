// 函数: sub_403200
// 地址: 0x403200
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)
int32_t eax

if (*(esi + 2) != 0)
    eax = sub_402650(arg1)
else
    eax = sub_402530(arg1, arg1)

if (eax == 0)
    sub_402cd0(esi, 0x80 - *(esi + 0xc))

return 0
