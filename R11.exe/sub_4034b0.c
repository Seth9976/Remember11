// 函数: sub_4034b0
// 地址: 0x4034b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)
int32_t eax
void* edx_1

if (*(esi + 2) != 0)
    eax, edx_1 = sub_402650(arg1)
else
    eax, edx_1 = sub_402530(arg1, arg1)

if (eax == 0)
    void* var_8_1 = esi
    sub_403240(0x80 - *(esi + 0xc), edx_1)

return 0
