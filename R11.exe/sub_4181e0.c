// 函数: sub_4181e0
// 地址: 0x4181e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg1 * 0x104 + data_e7e648 + 0x1f5dc
bool cond:0 = *(result + 2) != 3
*(result + 0x24) = 0
*(result + 0x28) = 0

if (cond:0)
    *(result + 0x2c) = 0x280
    *(result + 0x30) = 0x1c0
else
    *(result + 0x2c) = *(result + 0xf4)
    *(result + 0x30) = *(result + 0xf8)

__builtin_memset(result + 0x3c, 0, 0x30)
*(result + 0x9a) = 0
*(result + 0x9b) = 0
return result
