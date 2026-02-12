// 函数: sub_404bb0
// 地址: 0x404bb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax
int32_t ecx
int32_t edx

if (*(edi + 2) != 0)
    eax, ecx, edx = sub_4025e0(arg1)
else
    eax, ecx, edx = sub_4024c0(arg1)

if (eax == 0)
    int32_t eax_1 = *(edi + 0xc)
    sub_404b60(eax_1, edx, ecx, edi, eax_1)

return 0
