// 函数: sub_4285a0
// 地址: 0x4285a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_a5dce4
int32_t ecx = *(result + 0xa28)

if (ecx == 9)
    *(result + 0xa2c) = 0
    *(result + 0xa28) = 0
    return result

if (ecx != 8)
    *(result + 0xa28) = ecx + 1
    return result

int32_t ecx_1 = *(result + 0xa2c)

if (ecx_1 != *(result + 0xa30) - 0xa)
    *(result + 0xa2c) = ecx_1 + 1
    return result

*(result + 0xa28) = 9
return result
