// 函数: sub_462420
// 地址: 0x462420
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = arg1
int32_t result = arg3

while (edx != arg2)
    if (result != 0)
        __builtin_memcpy(result, edx, 0xb8)
    
    edx += 0xb8
    result += 0xb8

return result
