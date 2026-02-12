// 函数: sub_464630
// 地址: 0x464630
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = *arg2
*arg2 = *(result + 8)
void* esi_1 = *(result + 8)

if (*(esi_1 + 0x2d) == 0)
    *(esi_1 + 4) = arg2

*(result + 4) = arg2[1]
void* ecx = *(arg1 + 4)

if (arg2 == *(ecx + 4))
    *(ecx + 4) = result
    *(result + 8) = arg2
    arg2[1] = result
    return result

void** ecx_1 = arg2[1]

if (arg2 != ecx_1[2])
    *ecx_1 = result
    *(result + 8) = arg2
    arg2[1] = result
    return result

ecx_1[2] = result
*(result + 8) = arg2
arg2[1] = result
return result
