// 函数: sub_40af90
// 地址: 0x40af90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1[0x11]
*(esi + 0x10) -= 1
sub_414960(0, *(esi + 0x10 + (zx.d(*(esi + 0x10)) << 2) + 2))
sub_480ea0(*(arg1[0x11] + 0xc), *(data_e7e648 + 0xbf0c0), 0x10000)
*(data_e7e648 + 0x30b0) = *(esi + 0x10 + (zx.d(*(esi + 0x10)) << 2) + 2)
void* eax_4 = arg1[0x11]
*(eax_4 + 8) = zx.d(*(esi + 0x10 + (zx.d(*(esi + 0x10)) << 2) + 4)) + *(eax_4 + 0xc)
sub_40a8a0(arg1)
return 0
