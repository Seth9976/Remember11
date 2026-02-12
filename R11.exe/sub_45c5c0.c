// 函数: sub_45c5c0
// 地址: 0x45c5c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = arg2
int32_t* result = arg3

if (arg1 != ecx)
    do
        int32_t esi_1 = *(ecx - 0x14)
        ecx -= 0x14
        result -= 0x14
        *result = esi_1
        result[1] = *(ecx + 4)
        result[2] = *(ecx + 8)
        result[3] = *(ecx + 0xc)
        result[4] = *(ecx + 0x10)
    while (ecx != arg1)

return result
