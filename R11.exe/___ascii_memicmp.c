// 函数: ___ascii_memicmp
// 地址: 0x499220
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t result = arg3

if (result != 0)
    char* esi_1 = arg1
    char* edi_1 = arg2
    int32_t i
    
    do
        int16_t eax
        eax:1.b = *esi_1
        esi_1 = &esi_1[1]
        eax.b = *edi_1
        edi_1 = &edi_1[1]
        
        if (eax:1.b != eax.b)
            if (eax:1.b u>= 0x41 && eax:1.b u<= 0x5a)
                eax:1.b += 0x20
            
            if (eax.b u>= 0x41 && eax.b u<= 0x5a)
                eax.b += 0x20
            
            if (eax:1.b != eax.b)
                result = 0xffffffff
                
                if (eax:1.b u>= eax.b)
                    return 1
                
                break
        
        i = result
        result -= 1
    while (i != 1)

return result
