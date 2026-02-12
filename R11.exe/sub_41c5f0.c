// 函数: sub_41c5f0
// 地址: 0x41c5f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* edx = data_a5d8f8
void* ecx = &edx[*edx * 0x1704 + 7]
int32_t i_1 = arg1
void* result = edx + ((*(ecx + 0x74) * 0x16 + *(ecx + 0x70)) << 1) + 0x5c2e
*result = 0
*(result + 1) = 0
*(ecx + 0x70) = 0

if (i_1 s> 0)
    int32_t i
    
    do
        *(ecx + 0x74) += 1
        i = i_1
        i_1 -= 1
        result = edx + ((*(ecx + 0x74) * 0x16 + *(ecx + 0x70)) << 1) + 0x5c2e
        *result = 0
        *(result + 1) = 0
    while (i != 1)

return result
