// 函数: sub_4018f0
// 地址: 0x4018f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = data_2b5a734
int32_t* result
int32_t i

for (i = 0; i s< 0x10000; i += 1)
    result = *(esi + (i << 3))
    
    if (result == 0)
        break
    
    result += arg1
    int32_t j = 0
    bool cond:0_1 = *(esi + (i << 3) + 4) u<= 0
    *(esi + (i << 3)) = result
    
    if (not(cond:0_1))
        do
            *result += arg1
            j += 1
            result = &result[2]
        while (j u< *(esi + (i << 3) + 4))

data_2b5a738 = i
return result
