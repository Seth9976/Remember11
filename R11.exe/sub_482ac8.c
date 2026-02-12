// 函数: sub_482ac8
// 地址: 0x482ac8
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* i = arg1
int32_t result = 0

for (; i u< arg2; i = &i[1])
    if (result != 0)
        break
    
    int32_t ecx_1 = *i
    
    if (ecx_1 != 0)
        result = ecx_1()

return result
