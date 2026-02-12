// 函数: sub_461f30
// 地址: 0x461f30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x1ca0) != 1)
    int32_t eax_1 = 0x40
    int32_t* ecx = arg2
    int32_t* edx_1 = arg1 + 0x1c60
    int32_t result
    
    while (true)
        if (*edx_1 != *ecx)
        label_461f6c:
            uint32_t edi_1 = zx.d(*ecx)
            uint32_t esi_2 = zx.d(*edx_1)
            uint32_t esi_3 = esi_2 - edi_1
            
            if (esi_2 != edi_1)
            label_461fbd:
                result = 1
                
                if (esi_3 s<= 0)
                    result = 0xffffffff
                
                break
            
            if (eax_1 != 1)
                uint32_t edi_2 = zx.d(*(ecx + 1))
                uint32_t esi_4 = zx.d(*(edx_1 + 1))
                esi_3 = esi_4 - edi_2
                
                if (esi_4 != edi_2)
                    goto label_461fbd
                
                if (eax_1 != 2)
                    uint32_t edi_3 = zx.d(*(ecx + 2))
                    uint32_t esi_5 = zx.d(*(edx_1 + 2))
                    esi_3 = esi_5 - edi_3
                    
                    if (esi_5 != edi_3)
                        goto label_461fbd
                    
                    if (eax_1 != 3)
                        uint32_t eax_5 = zx.d(*(ecx + 3))
                        uint32_t esi_6 = zx.d(*(edx_1 + 3))
                        esi_3 = esi_6 - eax_5
                        
                        if (esi_6 != eax_5)
                            goto label_461fbd
        else
            eax_1 -= 4
            ecx = &ecx[1]
            edx_1 = &edx_1[1]
            
            if (eax_1 u>= 4)
                continue
            else if (eax_1 != 0)
                goto label_461f6c
        
        result = 0
        break
    
    if (result == 0)
        return result

*(arg1 + 0x1ce0) += 1
int32_t* eax_6 = *(arg1 + 4)
*(arg1 + 0x1ca0) = 0
__builtin_memcpy(arg1 + 0x1c60, arg2, 0x40)
return (*(*eax_6 + 0xb0))(eax_6, 3, arg2)
