// 函数: sub_402c90
// 地址: 0x402c90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_402650(arg1)
else
    eax = sub_402530(arg1, arg1)

if (eax == 0)
    sub_402b40(edi, 0x80 - *(edi + 0xc))

return 0
