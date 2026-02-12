// 函数: sub_41fd80
// 地址: 0x41fd80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_6 = data_e7e648
*(eax_6 + (*(eax_6 + 0xbf028) << 3) + 0xbf044) = *(eax_6 + 0xbf01c)
void* eax = data_e7e648
*(eax + (*(eax + 0xbf028) << 3) + 0xbf048) = *(eax + 0xbf020)
void* eax_1 = data_e7e648
*(eax_1 + 0xbf028) += 1
*(data_e7e648 + 0xbf01c) = arg1
*(data_e7e648 + 0xbf020) = 0
void* eax_3 = data_e7e648
int32_t ecx_3 = *(eax_3 + 0xbf020)
void* ebx = *(eax_3 + 0xbf01c)
*(eax_3 + 0xbf024) = zx.d(*(ebx + 0x2b5a74c)) - 1
*(data_e7e648 + 0xbf020) = ecx_3
sub_41f8f0(ecx_3)
sub_415400(ebx, 1)
sub_441740(data_e7e648 + 0xbf030, 0x280, 8)
return sub_441760(data_e7e648 + 0xbf030, 0, 0)
