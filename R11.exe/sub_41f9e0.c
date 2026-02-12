// 函数: sub_41f9e0
// 地址: 0x41f9e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_4
int16_t edx
edx:eax_4 = sx.q(sub_441360(data_2b603ac << 0xa) * 6)
int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q((eax_4 + zx.d(edx)) s>> 0x10)
int32_t eax_9 = (eax_7 ^ edx_2) - edx_2

if (arg1 != 0)
    *(arg1 * 0x18 + &data_4b1a50) = eax_9 + 0x250
else
    *(arg1 * 0x18 + &data_4b1a50) = 0x10 - eax_9

int32_t entry_ebx
sub_445470(data_e7e648 + 0x10f31c, arg1 * 0x18 + &data_4b1a50, 0x4b1a80, entry_ebx)
return sub_442c30(data_e7e648 + 0x10f31c, entry_ebx)
