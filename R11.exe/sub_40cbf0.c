// 函数: sub_40cbf0
// 地址: 0x40cbf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1[0x11] + 8)
int32_t edi = sub_414cf0(zx.d(*(esi + 6)))
uint32_t eax_2 = zx.d(*(esi + 8))

if (edi s> eax_2)
    edi = eax_2

int32_t eax_3 = sub_414cf0(zx.d(*(esi + 0xa)))
int32_t eax_5 = sub_414cf0(zx.d(*(esi + 8)))
int32_t eax_6 = sub_414cf0(zx.d(*(esi + 4)))
int32_t eax_7 = sub_414cf0(zx.d(*(esi + 2)))
sub_417f90(zx.d(*(esi + 1)), edi, eax_7, eax_6, eax_5, eax_3)
void* eax_9 = arg1[0x11]
*(eax_9 + 8) += 0xc
sub_40a8a0(arg1)
return 0
