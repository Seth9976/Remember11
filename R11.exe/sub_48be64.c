// 函数: sub_48be64
// 地址: 0x48be64
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg3
int32_t ecx = data_4cc7d4

while (*(result + 4) != arg2)
    result += 0xc
    
    if (result u>= ecx * 0xc + arg3)
        break

if (result u< ecx * 0xc + arg3 && *(result + 4) == arg2)
    return result

return nullptr
