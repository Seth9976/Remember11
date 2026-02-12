// 函数: sub_40ae20
// 地址: 0x40ae20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1[0x11]
*(esi + 0x10) -= 1
int16_t eax_2 = *(esi + 0x10 + (zx.d(*(esi + 0x10)) << 2) + 2)

if (*(data_e7e648 + 0x30b0) != eax_2)
    sub_414960(0, eax_2)
    sub_480ea0(*(arg1[0x11] + 0xc), *(data_e7e648 + 0xbf0c0), 0x10000)

*(data_e7e648 + 0x30b0) = *(esi + 0x10 + (zx.d(*(esi + 0x10)) << 2) + 2)
void* eax_6 = arg1[0x11]
*(eax_6 + 8) = zx.d(*(esi + 0x10 + (zx.d(*(esi + 0x10)) << 2) + 4)) + *(eax_6 + 0xc)
sub_40a8a0(arg1)
return 0
