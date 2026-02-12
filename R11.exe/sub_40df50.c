// 函数: sub_40df50
// 地址: 0x40df50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax_1 = *(arg1[0x11] + 8)
void* esi_1 = data_e7e648 + zx.d(*(eax_1 + 1)) * 0xa
uint32_t edx_1
edx_1.b = *(esi_1 + 0x20976)
*(esi_1 + 0x20977) = edx_1.b
uint32_t edx_2 = zx.d(*(eax_1 + 1))
eax_1.b = *(eax_1 + 2)
*(data_e7e648 + edx_2 * 0xa + 0x20976) = eax_1.b
void* eax_2 = arg1[0x11]
*(eax_2 + 8) += 4
sub_40a8a0(arg1)
return 0
