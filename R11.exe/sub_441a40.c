// 函数: sub_441a40
// 地址: 0x441a40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* ecx = *(arg1 + 0x70)
int32_t i = 0
void* result = &data_c7cc88

if (*(arg1 + 0x6c) s> 0)
    do
        *result = *((zx.d(*ecx) u>> 6) + 0x4c9fd0)
        *(result + 1) = *((zx.d(*ecx) u>> 4 & 3) + 0x4c9fd0)
        *(result + 2) = *((zx.d(*ecx) u>> 2 & 3) + 0x4c9fd0)
        *(result + 3) = *((zx.d(*ecx) & 3) + 0x4c9fd0)
        i += 1
        result += 4
        ecx = &ecx[1]
    while (i s< *(arg1 + 0x6c))

return result
