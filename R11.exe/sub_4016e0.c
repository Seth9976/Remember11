// 函数: sub_4016e0
// 地址: 0x4016e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result

for (int32_t* i = 0x804; i s< 0x810; i = &i[1])
    int32_t edi_1 = data_2b55e84
    int32_t ecx_1 = 0
    result = i + edi_1 - 0x7e0
    int32_t j_1 = 0x1f
    int32_t j
    
    do
        int32_t ebx_2 = *(result - 0x24) + *(result - 0x18)
        result += 0x3c
        ecx_1 += ebx_2 + *(result - 0x48) + *(result - 0x30) + *(result - 0x3c)
        j = j_1
        j_1 -= 1
    while (j != 1)
    *(i + edi_1) = ecx_1

return result
