// 函数: sub_448390
// 地址: 0x448390
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 u< 4)
    return 0

if (arg2 u>= *arg1 * 4)
    void* ecx_1 = arg1[*arg1 - 1]
    
    if (arg2 u>= ecx_1 + 8)
        int32_t edx = 8
        char const* const eax_6 = "EMUARC__"
        void* ecx_2 = ecx_1 + arg1
        int32_t eax_10
        
        while (true)
            if (*ecx_2 != *eax_6)
            label_4483df:
                uint32_t edi_1 = zx.d(*eax_6)
                uint32_t esi_2 = zx.d(*ecx_2)
                uint32_t esi_3 = esi_2 - edi_1
                
                if (esi_2 != edi_1)
                label_448430:
                    eax_10 = 1
                    
                    if (esi_3 s<= 0)
                        return 0
                    
                    break
                
                if (edx != 1)
                    uint32_t edi_2 = zx.d(eax_6[1])
                    uint32_t esi_4 = zx.d(*(ecx_2 + 1))
                    esi_3 = esi_4 - edi_2
                    
                    if (esi_4 != edi_2)
                        goto label_448430
                    
                    if (edx != 2)
                        uint32_t edi_3 = zx.d(eax_6[2])
                        uint32_t esi_5 = zx.d(*(ecx_2 + 2))
                        esi_3 = esi_5 - edi_3
                        
                        if (esi_5 != edi_3)
                            goto label_448430
                        
                        if (edx != 3)
                            uint32_t edx_4 = zx.d(eax_6[3])
                            uint32_t esi_6 = zx.d(*(ecx_2 + 3))
                            esi_3 = esi_6 - edx_4
                            
                            if (esi_6 != edx_4)
                                goto label_448430
            else
                edx -= 4
                eax_6 = &eax_6[4]
                ecx_2 += 4
                
                if (edx u>= 4)
                    continue
                else if (edx != 0)
                    goto label_4483df
            
            eax_10 = 0
            break
        
        int32_t result
        result.b = eax_10 == 0
        return result

return 0
