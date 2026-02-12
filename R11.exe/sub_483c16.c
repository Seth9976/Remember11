// 函数: sub_483c16
// 地址: 0x483c16
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* edi = arg1

if (*arg2 == 0)
    return arg1

int16_t i_1 = *arg1

if (i_1 != 0)
    int16_t i = i_1
    void* eax = arg1 - arg2
    
    do
        int16_t* ecx_1 = arg2
        
        if (i != 0)
            uint32_t edx_2
            uint32_t ebx_1
            
            do
                int16_t edx_1 = *ecx_1
                
                if (edx_1 == 0)
                    return edi
                
                ebx_1 = zx.d(*(eax + ecx_1))
                edx_2 = zx.d(edx_1)
                
                if (ebx_1 != edx_2)
                    break
                
                ecx_1 = &ecx_1[1]
            while (*(eax + ecx_1) != ebx_1.w - edx_2.w)
        
        if (*ecx_1 == 0)
            return edi
        
        edi = &edi[1]
        i = *edi
        eax += 2
    while (i != 0)

return nullptr
