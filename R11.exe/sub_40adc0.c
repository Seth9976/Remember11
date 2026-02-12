// 函数: sub_40adc0
// 地址: 0x40adc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx = arg1[0x11]
void* esi = *(edx + 8)
*(edx + 8) = esi + 4
*(edx + 0x10 + (zx.d(*(edx + 0x10)) << 2) + 2) = *(data_e7e648 + 0x30b0)
void* edx_2 = arg1[0x11]
*(edx + 0x10 + (zx.d(*(edx + 0x10)) << 2) + 4) = *(edx_2 + 8) - *(edx_2 + 0xc)
*(edx + 0x10) += 1
void* eax_1 = arg1[0x11]
*(eax_1 + 8) = zx.d(*(esi + 2)) + *(eax_1 + 0xc)
sub_40a8a0(arg1)
return 0
