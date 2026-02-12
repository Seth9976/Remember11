// 函数: sub_420d00
// 地址: 0x420d00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
void* esi = arg1

if (data_2b5a728 u<= 0)
    return 

do
    int32_t j_1 = 0x14
    int32_t j
    
    do
        int16_t eax = *(esi + 4)
        
        if (eax != 0)
            int32_t var_18_1
            int32_t var_14_1
            
            if (*(esi + 1) != 1)
                var_14_1 = 0
                var_18_1 = sx.d(eax)
            else
                var_14_1 = 1
                var_18_1 = sx.d(eax)
            
            sub_402070(var_18_1, var_14_1)
        
        esi += 0x30
        j = j_1
        j_1 -= 1
    while (j != 1)
    i += 1
while (i u< data_2b5a728)
