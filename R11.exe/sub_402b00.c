// 函数: sub_402b00
// 地址: 0x402b00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)
int32_t eax

if (*(esi + 2) != 0)
    eax = sub_402650(arg1)
else
    eax = sub_402530(arg1, arg1)

if (eax == 0)
    sub_4029b0(esi, *(esi + 0xc))

return 0
