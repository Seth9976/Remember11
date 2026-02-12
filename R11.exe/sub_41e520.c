// 函数: sub_41e520
// 地址: 0x41e520
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_1 = data_4b187c
int32_t esi_1 = mods.dp.d(sx.q(*(ecx_1 + 0x1c) + *(ecx_1 + 8)), 0xc) * 0x238
uint32_t eax_3 = zx.d(*(esi_1 + ecx_1 + 0x4508))

if (eax_3 == 0xffff || (eax_3 == *(ecx_1 + 0x24) && *(esi_1 + ecx_1 + 0x4500) == *(ecx_1 + 0x28)))
    *(ecx_1 + 0x20) = 0
    return 1

int32_t var_8 = 1
sub_409100(0, eax_3)
sub_409010(0, 0x80)
void* eax_4 = data_4b187c
*(eax_4 + 0x24) = zx.d(*(esi_1 + eax_4 + 0x4508))
*(eax_4 + 0x28) = *(esi_1 + eax_4 + 0x4500)
*(eax_4 + 0x20) = 1
return 0
