// 函数: sub_47d640
// 地址: 0x47d640
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 == 0)
    return 0x80004003

int32_t i = arg3
int32_t result = 0
*arg4 = 0

while (i s> 0)
    i -= 1
    result = (*(*arg1 + 0x18))(arg1, *(arg2 + (*arg4 << 2)))
    
    if (result != 0)
        break
    
    *arg4 += 1

return result
