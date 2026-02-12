// 函数: sub_4105a0
// 地址: 0x4105a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* esi_1 = data_a59b20 + 0x20

if (arg1 != 0)
    sub_442e20()
    data_c7bbe0 = 0xa

int32_t ebx_1 = neg.d(sx.d(*(data_a59b20 + 2)))
int32_t result = 0
void* esi_2 = esi_1 + 2
int32_t i_1 = 0x1e
int32_t i

do
    if (*(esi_2 - 2) s> 0xff)
        if (arg1 == 2)
            result += 1
        else
            *(esi_2 - 2) = 0xff
            *esi_2 = -1 - (mods.dp.d(sx.q(sub_448760()), 3)).w
            *(esi_2 + 2) = (mods.dp.d(sx.q(sub_448760()), 0xc0)).w + *data_a59b20 - 0x60
            *(esi_2 + 4) = (mods.dp.d(sx.q(sub_448760()), 0x50)).w - 0x28
            *(esi_2 + 6) = (mods.dp.d(sx.q(sub_448760()), 0x1f4)).w + 0x3e8
    
    *(esi_2 - 2) += *esi_2
    
    if (*(esi_2 - 2) s< 8)
        *(esi_2 - 2) = 8
        *esi_2 = (mods.dp.d(sx.q(sub_448760()), 3)).w + 1
    
    if (arg1 != 0)
        int32_t edx_12 = sx.d(*(esi_2 + 6))
        int32_t eax_17 = sx.d(*(esi_2 + 4))
        sub_410350(eax_17, edx_12, *(esi_2 - 2), sx.d(*(esi_2 + 2)), eax_17, edx_12, ebx_1)
    
    esi_2 += 0xa
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg1 != 0)
    sub_442f40()

return result
