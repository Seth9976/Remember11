// 函数: sub_422b10
// 地址: 0x422b10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_a5d910
int32_t eax_3 = (*(ecx + 0x7850) + (*(ecx + 0x24) << 2)) * 5 + *(ecx + 0x784c)
int32_t edx = 0
*(ecx + 4) = 0xffffffff

for (int32_t* i = &data_4af374; i s< 0x4af574; )
    if (*i == sx.d(*(eax_3 * 0x30 + ecx + 0x50)))
        *(ecx + 4) = edx
        return 0
    
    i = &i[8]
    edx += 1

return 1
