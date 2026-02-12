// 函数: sub_420170
// 地址: 0x420170
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = *(data_c7cc70 + 8)

if ((eax.b & 1) != 0 || (eax & 0x4000) != 0)
    sub_4095a0(1)
    *(data_e7e648 + 0xbec6c) = 0
    return 1

if ((data_2b53608 & 0x2100) != 0)
    sub_4095a0(0)
    void* eax_1 = data_e7e648
    sub_41fd80(*(eax_1 + (*(eax_1 + 0xbec70) << 2) + 0xbec78))
    return 2

int32_t eax_3 = data_2b53610

if ((eax_3 & 0x900890) != 0)
    sub_4095a0(3)
    void* ecx_3 = data_e7e648
    int32_t esi_2 = *(ecx_3 + 0xbec74)
    *(ecx_3 + 0xbec70) = mods.dp.d(sx.q(*(ecx_3 + 0xbec70) + esi_2 - 1), esi_2)
else if ((eax_3 & 0x600260) != 0)
    sub_4095a0(3)
    void* ecx_2 = data_e7e648
    int32_t esi_1 = *(ecx_2 + 0xbec74)
    *(ecx_2 + 0xbec70) = mods.dp.d(sx.q(*(ecx_2 + 0xbec70) + esi_1 + 1), esi_1)

return 0
