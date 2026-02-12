// 函数: sub_412240
// 地址: 0x412240
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebx_1 = data_a59af8 + 0x20
int32_t result

for (int32_t i = 0; i u< 0x662; )
    int32_t eax_2 = sub_448760() & 0x8000000f
    
    if (eax_2 s< 0)
        eax_2 = ((eax_2 - 1) | 0xfffffff0) + 1
    
    eax_2.w += *(((i & 7) << 2) + &data_4b0e44) << 4
    *(ebx_1 + 8) = eax_2.w
    result = sub_412180()
    i += 1
    ebx_1 += 0xa

return result
