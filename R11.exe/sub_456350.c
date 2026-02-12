// 函数: sub_456350
// 地址: 0x456350
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx = arg1
int32_t* result = arg3

while (ecx != arg2)
    if (result != 0)
        *result = *ecx
        void* edx_2 = ecx[1]
        result[1] = edx_2
        
        if (edx_2 != 0)
            *(edx_2 + 4)
            *(edx_2 + 4) += 1
    
    ecx = &ecx[2]
    result = &result[2]

return result
