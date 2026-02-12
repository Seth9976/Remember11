// 函数: sub_401860
// 地址: 0x401860
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = data_2b5a72c
int32_t i

for (i = 0; i s< 0x10000; )
    int32_t edx_1 = *result
    
    if (edx_1 == 0)
        data_2b5a730 = i
        return result
    
    result[1] += arg1
    result[2] += arg1
    *result = edx_1 + arg1
    int32_t edx_3 = result[6]
    
    if (edx_3 == 0)
        data_2b5a730 = i + 1
        return &result[6]
    
    result[6] = edx_3 + arg1
    result[7] += arg1
    result[8] += arg1
    int32_t edx_5 = result[0xc]
    
    if (edx_5 == 0)
        data_2b5a730 = i + 2
        return &result[0xc]
    
    result[0xc] = edx_5 + arg1
    result[0xd] += arg1
    result[0xe] += arg1
    int32_t edx_7 = result[0x12]
    result = &result[0x12]
    
    if (edx_7 == 0)
        data_2b5a730 = i + 3
        return result
    
    *result = edx_7 + arg1
    result[1] += arg1
    result[2] += arg1
    i += 4
    result = &result[6]

data_2b5a730 = i
return result
