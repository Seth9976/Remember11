// 函数: sub_4469a0
// 地址: 0x4469a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result

if (arg1 s< 0)
    result = data_c7bbac * 0x4c + data_c7b7a4
else if (arg1 s< data_c7b7a8)
    result = arg1 * 0x4c + data_c7b7a4
else
    result = nullptr

__builtin_strncpy(&result[5], "NO ENTRY", 9)
*result = 0
result[1].w = 0xffff
*(result + 6) = 0xffff
result[2].w = 0xffff
return result
