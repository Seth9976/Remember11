// 函数: sub_41e2f0
// 地址: 0x41e2f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_4b187c
int32_t eax = *(ecx + 0x10)
int32_t eax_3
int32_t edx_1

if (arg1 != 0)
    edx_1 = mods.dp.d(sx.q(eax + *(ecx + 4) + 9), 0x3e8)
    eax_3 = *(ecx + 8) + 9
else
    edx_1 = mods.dp.d(sx.q(eax + *(ecx + 4)), 0x3e8)
    eax_3 = *(ecx + 8)

int32_t eax_9 = edx_1 * 0x238
int32_t esi_1 = mods.dp.d(sx.q(eax_3), 0xc) * 0x238
*(esi_1 + ecx + 0x4500) = *(eax_9 + data_e7e648 + 0x209a0)
*(esi_1 + ecx + 0x4504) = zx.d(*(eax_9 + data_e7e648 + 0x209a4))
*(esi_1 + ecx + 0x4508) = *(eax_9 + data_e7e648 + 0x209a6)
*(esi_1 + ecx + 0x450a) = *(eax_9 + data_e7e648 + 0x209a8)
uint32_t ecx_1 = zx.d(*(esi_1 + ecx + 0x4512))
*(esi_1 + ecx + 0x450c) = eax_9 + data_e7e648 + 0x209aa
sub_43c280(esi_1 + ecx + 0x450c, 0x13, ecx_1, 0x1a)
void* eax_11 = data_4b187c
return sub_43bdf0(esi_1 + eax_11 + 0x451c, esi_1 + eax_11 + 0x450c, 0x1000)
