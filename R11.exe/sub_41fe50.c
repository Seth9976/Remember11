// 函数: sub_41fe50
// 地址: 0x41fe50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_5 = data_e7e648
*(eax_5 + 0xbf028) -= 1
void* eax = data_e7e648
*(eax + 0xbf01c) = *(eax + (*(eax + 0xbf028) << 3) + 0xbf044)
void* eax_1 = data_e7e648
*(eax_1 + 0xbf020) = *(eax_1 + (*(eax_1 + 0xbf028) << 3) + 0xbf048)
void* eax_2 = data_e7e648
int32_t ecx_2 = *(eax_2 + 0xbf020)
void* ebx = *(eax_2 + 0xbf01c)
*(eax_2 + 0xbf024) = zx.d(*(ebx + 0x2b5a74c)) - 1
*(data_e7e648 + 0xbf020) = ecx_2
sub_41f8f0(ecx_2)
sub_415400(ebx, 1)
sub_441740(data_e7e648 + 0xbf030, 0xfffffd80, 8)
return sub_441760(data_e7e648 + 0xbf030, 0, 0)
