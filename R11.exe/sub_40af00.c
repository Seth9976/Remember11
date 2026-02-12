// 函数: sub_40af00
// 地址: 0x40af00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1[0x11]
sub_480ea0(*(esi + 0xc), *(data_e7e648 + 0xbf0c0), 0x10000)
void* eax = arg1[0x11]
*(eax + 8) += 2
*(esi + (zx.d(*(esi + 0x10)) << 2) + 0x12) = *(data_e7e648 + 0x30b0)
void* eax_2 = arg1[0x11]
*(esi + (zx.d(*(esi + 0x10)) << 2) + 0x14) = *(eax_2 + 8) - *(eax_2 + 0xc)
*(esi + 0x10) += 1
void* eax_3 = data_e7e648
*(eax_3 + 0x30b0) = *(eax_3 + 0xbf0be)
void* eax_4 = arg1[0x11]
*(eax_4 + 8) = *(eax_4 + 0xc)
sub_40a8a0(arg1)
return 0
