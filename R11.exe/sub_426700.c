// 函数: sub_426700
// 地址: 0x426700
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_4b1de0
int32_t esi = 0
*(ecx + 8) = arg1
*(ecx + 0x14) = 0
*(ecx + 0xc) = 0

while (true)
    int32_t edx_3 = (*(ecx + 0x14) + esi) & 0x80000007
    
    if (edx_3 s< 0)
        edx_3 = ((edx_3 - 1) | 0xfffffff8) + 1
    
    *(ecx + 0x58)
    sub_425c10(mods.dp.d(sx.q(*(ecx + 8) + esi), *(ecx + 0x58)), edx_3)
    esi += 1
    
    if (esi s>= 8)
        break
    
    ecx = data_4b1de0

void* eax_5 = data_4b1de0
int32_t edx_8 = *(eax_5 + 8)
void* ecx_3 = (edx_8 << 5) + *(eax_5 + 0x54)
*(eax_5 + 0xc758) = *(ecx_3 + 0x10)
*(eax_5 + 0xc768) = *(ecx_3 + 0x14)
return sub_425410(sx.d(*(ecx_3 + 5)), edx_8) __tailcall
