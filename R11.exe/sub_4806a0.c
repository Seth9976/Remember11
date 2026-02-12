// 函数: sub_4806a0
// 地址: 0x4806a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* i = *arg2

while (i != 0)
    int32_t ebx_1 = *(i + 8)
    void* eax_1 = arg1[5]
    i = *(i + 4)
    
    if (eax_1 != 0)
        int32_t ecx = *(eax_1 + 4)
        arg1[4] -= 1
        arg1[5] = ecx
    
    if (eax_1 == 0 || eax_1 == 0)
        eax_1 = sub_481fef(0xc)
        
        if (eax_1 == 0)
            return 0
    
    *(eax_1 + 8) = ebx_1
    *(eax_1 + 4) = 0
    *eax_1 = arg1[1]
    void* ecx_1 = arg1[1]
    
    if (ecx_1 != 0)
        *(ecx_1 + 4) = eax_1
    else
        *arg1 = eax_1
    
    arg1[2] += 1
    arg1[1] = eax_1

return 1
