// 函数: sub_441c50
// 地址: 0x441c50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* ecx = *(arg1 + 0x70)
int32_t i = 0
void* result = &data_c7cc88

if (*(arg1 + 0x6c) s> 0)
    do
        *result = *ecx
        *(result + 1) = *ecx
        i += 1
        result += 2
        ecx = &ecx[1]
    while (i s< *(arg1 + 0x6c))

return result
