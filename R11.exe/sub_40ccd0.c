// 函数: sub_40ccd0
// 地址: 0x40ccd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1[0x11] + 8)
int32_t edi = sub_414cf0(zx.d(*(esi + 0xa)))
uint32_t eax_2 = zx.d(*(esi + 0xc))

if (edi s> eax_2)
    edi = eax_2

int32_t eax_3 = sub_414cf0(zx.d(*(esi + 0xe)))
int32_t eax_5 = sub_414cf0(zx.d(*(esi + 0xc)))
int32_t eax_6 = sub_414cf0(zx.d(*(esi + 8)))
int32_t eax_7 = sub_414cf0(zx.d(*(esi + 6)))
int32_t eax_9 = sub_414cf0(zx.d(*(esi + 4)))
int32_t eax_10 = sub_414cf0(zx.d(*(esi + 2)))
sub_418070(zx.d(*(esi + 1)), edi, eax_10, eax_9, eax_7, eax_6, eax_5, eax_3)
void* eax_11 = arg1[0x11]
*(eax_11 + 8) += 0x10
sub_40a8a0(arg1)
return 0
