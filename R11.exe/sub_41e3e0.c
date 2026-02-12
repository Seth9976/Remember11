// 函数: sub_41e3e0
// 地址: 0x41e3e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_2 = data_4b187c
int32_t esi = *(ecx_2 + 4)

if (arg1 != 0)
    if (esi == 0)
        *(ecx_2 + 0x30) = 0
        return 1
    
    int32_t eax_11
    int32_t edx_2
    edx_2:eax_11 = sx.q(*(ecx_2 + 8) + 0xb)
    *(ecx_2 + 4) = esi - 1
    *(ecx_2 + 8) = mods.dp.d(edx_2:eax_11, 0xc)
    sub_41e2f0(0)
    void* eax_13 = data_4b187c
    bool cond:1 = *(eax_13 + 4) == 0
    *(eax_13 + 0x34) = 1
    
    if (cond:1)
        *(eax_13 + 0x30) = 0
        return 0
    
    *(eax_13 + 0x30) = 1
    return 0

if (esi + 0xa s>= *(ecx_2 + 0xc))
    *(ecx_2 + 0x34) = 0
    return 1

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(*(ecx_2 + 8) + 1)
*(ecx_2 + 4) = esi + 1
*(ecx_2 + 8) = mods.dp.d(edx:eax_3, 0xc)
sub_41e2f0(1)
void* eax_5 = data_4b187c
bool cond:2 = *(eax_5 + 4) + 0xa s>= *(eax_5 + 0xc)
*(eax_5 + 0x30) = 1

if (cond:2)
    *(eax_5 + 0x34) = 0
    return 0

*(eax_5 + 0x34) = 1
return 0
