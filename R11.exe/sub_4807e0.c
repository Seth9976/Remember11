// 函数: sub_4807e0
// 地址: 0x4807e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (sub_47a0a0(arg2, &data_4a8464) == 0)
    int32_t result = sub_47a0a0(arg1, arg2)
    
    if (result == 0)
        return result

int32_t eax_1 = sub_47a0a0(&arg2[4], &data_4a8464)
int32_t eax_3

if (eax_1 == 0)
    eax_3 = sub_47a0a0(&arg1[4], &arg2[4])

if (eax_1 != 0 || eax_3 != 0)
    if (sub_47a0a0(&arg2[0xb], &data_4a8464) != 0)
        return 1
    
    if (sub_47a0a0(&arg1[0xb], &arg2[0xb]) != 0)
        int32_t i = arg1[0x10]
        
        if (i == arg2[0x10])
            if (i == 0)
                return 1
            
            int32_t* ecx_1 = arg2[0x11]
            int32_t* edx_1 = arg1[0x11]
            
            while (i u>= 4)
                if (*edx_1 != *ecx_1)
                    goto label_48088b
                
                i -= 4
                ecx_1 = &ecx_1[1]
                edx_1 = &edx_1[1]
            
            int32_t eax_9
            
            if (i == 0)
                eax_9 = 0
            else
            label_48088b:
                uint32_t esi_2 = zx.d(*edx_1)
                uint32_t edi_1 = zx.d(*ecx_1)
                uint32_t esi_3 = esi_2 - edi_1
                
                if (esi_2 != edi_1)
                label_4808dc:
                    eax_9 = 1
                    
                    if (esi_3 s<= 0)
                        eax_9 = 0xffffffff
                else if (i == 1)
                    eax_9 = 0
                else
                    uint32_t esi_4 = zx.d(*(edx_1 + 1))
                    uint32_t edi_2 = zx.d(*(ecx_1 + 1))
                    esi_3 = esi_4 - edi_2
                    
                    if (esi_4 != edi_2)
                        goto label_4808dc
                    
                    if (i == 2)
                        eax_9 = 0
                    else
                        uint32_t esi_5 = zx.d(*(edx_1 + 2))
                        uint32_t edi_3 = zx.d(*(ecx_1 + 2))
                        esi_3 = esi_5 - edi_3
                        
                        if (esi_5 != edi_3)
                            goto label_4808dc
                        
                        if (i == 3)
                            eax_9 = 0
                        else
                            uint32_t esi_6 = zx.d(*(edx_1 + 3))
                            uint32_t edx_5 = zx.d(*(ecx_1 + 3))
                            esi_3 = esi_6 - edx_5
                            
                            if (esi_6 != edx_5)
                                goto label_4808dc
                            
                            eax_9 = 0
            
            if (eax_9 == 0)
                return 1

return 0
