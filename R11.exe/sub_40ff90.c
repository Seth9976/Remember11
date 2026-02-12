// 函数: sub_40ff90
// 地址: 0x40ff90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* entry_ebx
*entry_ebx = (mods.dp.d(sx.q(sub_448760()), 0x280)).w
entry_ebx[1] = (neg.d(mods.dp.d(sx.q(sub_448760()), 0x12c))).w * 2
int32_t eax_7
int32_t edx_6
edx_6:eax_7 = sx.q(sub_448760())
int32_t esi_2 =
    ((mods.dp.d(sx.q(sub_448760()), 6) + sx.d(*(data_a59b18 + 2)) + 0x57) << 0x10) s/ 0x168
int32_t eax_15
int16_t edx_13
edx_13:eax_15 = sx.q(sub_441380(esi_2) * (mods.dp.d(edx_6:eax_7, 0x32) + 0x96))
entry_ebx[2] = ((eax_15 + zx.d(edx_13)) s>> 0x10).w
int32_t eax_20
int16_t edx_15
edx_15:eax_20 = sx.q(sub_441360(esi_2) * (mods.dp.d(edx_6:eax_7, 0x32) + 0x96))
int16_t result = ((eax_20 + zx.d(edx_15)) s>> 0x10).w
entry_ebx[3] = result
return result
