// 函数: sub_451a80
// 地址: 0x451a80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** result = *(arg2 + 8)
*(arg2 + 8) = *result
void* esi_1 = *result

if (*(esi_1 + 0x31) == 0)
    *(esi_1 + 4) = arg2

result[1] = *(arg2 + 4)
void* ecx = *(arg1 + 4)

if (arg2 == *(ecx + 4))
    *(ecx + 4) = result
    *result = arg2
    *(arg2 + 4) = result
    return result

void*** ecx_1 = *(arg2 + 4)

if (arg2 != *ecx_1)
    ecx_1[2] = result
    *result = arg2
    *(arg2 + 4) = result
    return result

*ecx_1 = result
*result = arg2
*(arg2 + 4) = result
return result
