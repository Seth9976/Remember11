// 函数: sub_481240
// 地址: 0x481240
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* edx
edx.b = *arg2
char* result = arg1

if (edx.b == 0)
    return result

edx:1.b = arg2[1]

if (edx:1.b == 0)
    int32_t eax_2
    eax_2.b = edx.b
    return sub_486246(eax_2, edx) __tailcall

while (true)
    char* ecx = arg2
    int16_t eax
    eax.b = *result
    void* esi_2 = &result[1]
    
    if (eax.b != edx.b)
        if (eax.b == 0)
            return 0
        
        while (true)
            eax.b = *esi_2
            esi_2 += 1
        label_481270:
            
            if (eax.b == edx.b)
                break
            
            if (eax.b == 0)
                return 0
    
    eax.b = *esi_2
    esi_2 += 1
    
    if (eax.b != edx:1.b)
        break
    
    result = esi_2 - 1
    
    while (true)
        eax:1.b = ecx[2]
        
        if (eax:1.b != 0)
            eax.b = *esi_2
            esi_2 += 2
            
            if (eax.b != eax:1.b)
                break
            
            eax.b = ecx[3]
            
            if (eax.b != 0)
                eax:1.b = *(esi_2 - 1)
                ecx = &ecx[2]
                
                if (eax.b != eax:1.b)
                    break
                
                continue
        
        return &result[0xffffffff]

goto label_481270
