// 函数: sub_412180
// 地址: 0x412180
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* entry_ebx
*entry_ebx = (mods.dp.d(sx.q(sub_448760()), 0x280)).w
entry_ebx[1] = (neg.d(mods.dp.d(sx.q(sub_448760()), 0x1e0))).w
int32_t eax_7
int32_t edx_5
edx_5:eax_7 = sx.q(sub_448760())
int32_t edx_10

if (*data_a59af8 s> 0)
    edx_10 = mods.dp.d(sx.q(sub_448760()), 0xc) + 0x36
else
    edx_10 = mods.dp.d(sx.q(sub_448760()), 0xc) - 0x42

int32_t esi_2 = ((edx_10 + 0x5a) << 0x10) s/ 0x168
int32_t eax_18
int16_t edx_16
edx_16:eax_18 = sx.q(sub_441380(esi_2) * (mods.dp.d(edx_5:eax_7, 0x32) + 0x96))
entry_ebx[2] = ((eax_18 + zx.d(edx_16)) s>> 0x10).w
int32_t eax_23
int16_t edx_18
edx_18:eax_23 = sx.q(sub_441360(esi_2) * (mods.dp.d(edx_5:eax_7, 0x32) + 0x96))
int16_t result = ((eax_23 + zx.d(edx_18)) s>> 0x10).w
entry_ebx[3] = result
return result
