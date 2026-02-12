// 函数: sub_489827
// 地址: 0x489827
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_2b6b9f0 == 0)
    ___initmbctable()

char* esi = data_c7aa04
int32_t edi = 0

if (esi != 0)
    while (true)
        void* eax
        eax.b = *esi
        
        if (eax.b == 0)
            break
        
        if (eax.b != 0x3d)
            edi += 1
        
        esi = esi + _strlen(esi) + 1
    
    void* edi_2 = sub_48b2bc(edi + 1, 4)
    data_c7aa48 = edi_2
    
    if (edi_2 != 0)
        char* esi_1 = data_c7aa04
        int32_t result
        
        while (true)
            if (*esi_1 == 0)
                sub_4813df(data_c7aa04)
                data_c7aa04 = 0
                *edi_2 = 0
                data_2b6b9e4 = 1
                result = 0
                break
            
            uint32_t ebp_2 = _strlen(esi_1) + 1
            
            if (*esi_1 != 0x3d)
                char* eax_3 = sub_48b2bc(ebp_2, 1)
                *edi_2 = eax_3
                
                if (eax_3 == 0)
                    sub_4813df(data_c7aa48)
                    data_c7aa48 = 0
                    result = 0xffffffff
                    break
                
                if (sub_48a315(eax_3, ebp_2, esi_1) != 0)
                    int32_t var_24
                    __builtin_memset(&var_24, 0, 0x14)
                    sub_481c1f()
                    noreturn
                
                edi_2 += 4
            
            esi_1 = &esi_1[ebp_2]
        
        return result

return 0xffffffff
