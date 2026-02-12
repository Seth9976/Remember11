// 函数: sub_405b70
// 地址: 0x405b70
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = arg1
int32_t result

if (ecx != 0xffffffff)
    result = ecx + 1
else
    ecx = 0
    result = 0xa

if (ecx s< result)
    void* esi_3 = ecx * 0x16c + &data_2b697c4
    int32_t i_1 = result - ecx
    int32_t i
    
    do
        result = *esi_3
        
        if (result != 0)
            result = result(esi_3)
            *(esi_3 + 0x12) = result.w
            
            if (result.w != 0)
                *esi_3 = 0
        
        esi_3 += 0x16c
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
