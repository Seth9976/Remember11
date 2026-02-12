// 函数: sub_41cdf0
// 地址: 0x41cdf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = data_a5d908
int32_t ecx = sx.d(result[1].b)
int32_t ecx_4

if (ecx == 2)
    if (arg1 == 1)
        *result = 0x20
    
    ecx_4 = *result + 6
    
    if (ecx_4 s< 0x20)
        *result = ecx_4
        return result
    
    result[1].b = 1
else if (ecx == 3)
    if (arg1 == 1)
        *result = 0x20
    
    ecx_4 = *result + 6
    
    if (ecx_4 s>= 0x20)
        result[1].b = 0
        return result
    
    *result = ecx_4
return result
