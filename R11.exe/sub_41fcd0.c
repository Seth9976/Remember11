// 函数: sub_41fcd0
// 地址: 0x41fcd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(data_e7e648 + 0xbf02c) = 0
*(data_e7e648 + 0xbf028) = 0
*(data_e7e648 + 0xbf01c) = arg1
*(data_e7e648 + 0xbf020) = 0
void* eax_1 = data_e7e648
int32_t ecx_2 = *(eax_1 + 0xbf020)
void* ebx = *(eax_1 + 0xbf01c)
*(eax_1 + 0xbf024) = zx.d(*(ebx + 0x2b5a74c)) - 1
*(data_e7e648 + 0xbf020) = ecx_2
sub_41f8f0(ecx_2)
sub_415400(ebx, 1)
sub_441740(data_e7e648 + 0xbf030, 0x280, 8)
return sub_441760(data_e7e648 + 0xbf030, 0, 0)
