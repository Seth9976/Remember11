// 函数: sub_404bf0
// 地址: 0x404bf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)
int32_t eax
int32_t ecx
int32_t edx_1

if (*(esi + 2) != 0)
    eax, ecx, edx_1 = sub_402650(arg1)
else
    eax, ecx, edx_1 = sub_402530(arg1, arg1)

if (eax == 0)
    int32_t eax_1 = 0x80 - *(esi + 0xc)
    sub_404b60(eax_1, edx_1, ecx, esi, eax_1)

return 0
