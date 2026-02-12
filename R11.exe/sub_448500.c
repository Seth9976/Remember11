// 函数: sub_448500
// 地址: 0x448500
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* edx = arg1
int32_t esi = 8
char const* const eax = "PNGFILE_"
int32_t* ecx = edx
int32_t eax_5

while (true)
    if (*ecx != *eax)
    label_44852b:
        uint32_t edi_1 = zx.d(*ecx)
        uint32_t ebx_1 = zx.d(*eax)
        uint32_t edi_2 = edi_1 - ebx_1
        
        if (edi_1 != ebx_1)
        label_44857c:
            eax_5 = 1
            
            if (edi_2 s<= 0)
                eax_5 = 0xffffffff
            
            break
        
        if (esi != 1)
            uint32_t edi_3 = zx.d(*(ecx + 1))
            uint32_t ebx_2 = zx.d(eax[1])
            edi_2 = edi_3 - ebx_2
            
            if (edi_3 != ebx_2)
                goto label_44857c
            
            if (esi != 2)
                uint32_t edi_4 = zx.d(*(ecx + 2))
                uint32_t ebx_3 = zx.d(eax[2])
                edi_2 = edi_4 - ebx_3
                
                if (edi_4 != ebx_3)
                    goto label_44857c
                
                if (esi != 3)
                    uint32_t edi_5 = zx.d(*(ecx + 3))
                    uint32_t eax_4 = zx.d(eax[3])
                    edi_2 = edi_5 - eax_4
                    
                    if (edi_5 != eax_4)
                        goto label_44857c
    else
        esi -= 4
        eax = &eax[4]
        ecx = &ecx[1]
        
        if (esi u>= 4)
            continue
        else if (esi != 0)
            goto label_44852b
    
    eax_5 = 0
    break

if (eax_5 != 0)
    int32_t eax_6 = 8
    char const* const ecx_4 = "T2PFILE_"
    int32_t* esi_4 = edx
    int32_t eax_10
    
    while (true)
        if (*esi_4 != *ecx_4)
        label_4485b8:
            uint32_t ebx_4 = zx.d(*ecx_4)
            uint32_t edi_8 = zx.d(*esi_4)
            uint32_t edi_9 = edi_8 - ebx_4
            
            if (edi_8 != ebx_4)
            label_448609:
                eax_10 = 1
                
                if (edi_9 s<= 0)
                    eax_10 = 0xffffffff
                
                break
            
            if (eax_6 != 1)
                uint32_t ebx_5 = zx.d(ecx_4[1])
                uint32_t edi_10 = zx.d(*(esi_4 + 1))
                edi_9 = edi_10 - ebx_5
                
                if (edi_10 != ebx_5)
                    goto label_448609
                
                if (eax_6 != 2)
                    uint32_t ebx_6 = zx.d(ecx_4[2])
                    uint32_t edi_11 = zx.d(*(esi_4 + 2))
                    edi_9 = edi_11 - ebx_6
                    
                    if (edi_11 != ebx_6)
                        goto label_448609
                    
                    if (eax_6 != 3)
                        uint32_t ecx_8 = zx.d(ecx_4[3])
                        uint32_t edi_12 = zx.d(*(esi_4 + 3))
                        edi_9 = edi_12 - ecx_8
                        
                        if (edi_12 != ecx_8)
                            goto label_448609
        else
            eax_6 -= 4
            ecx_4 = &ecx_4[4]
            esi_4 = &esi_4[1]
            
            if (eax_6 u>= 4)
                continue
            else if (eax_6 != 0)
                goto label_4485b8
        
        eax_10 = 0
        break
    
    if (eax_10 != 0)
        int32_t eax_11 = 8
        char const* const ecx_9 = "PNGFILE2"
        int32_t* esi_8 = edx
        int32_t eax_16
        
        while (true)
            if (*esi_8 != *ecx_9)
            label_448648:
                uint32_t edi_14 = zx.d(*esi_8)
                uint32_t ebx_7 = zx.d(*ecx_9)
                uint32_t edi_15 = edi_14 - ebx_7
                
                if (edi_14 != ebx_7)
                label_448699:
                    eax_16 = 1
                    
                    if (edi_15 s<= 0)
                        eax_16 = 0xffffffff
                    
                    break
                
                if (eax_11 != 1)
                    uint32_t edi_16 = zx.d(*(esi_8 + 1))
                    uint32_t ebx_8 = zx.d(ecx_9[1])
                    edi_15 = edi_16 - ebx_8
                    
                    if (edi_16 != ebx_8)
                        goto label_448699
                    
                    if (eax_11 != 2)
                        uint32_t edi_17 = zx.d(*(esi_8 + 2))
                        uint32_t ebx_9 = zx.d(ecx_9[2])
                        edi_15 = edi_17 - ebx_9
                        
                        if (edi_17 != ebx_9)
                            goto label_448699
                        
                        if (eax_11 != 3)
                            uint32_t edi_18 = zx.d(*(esi_8 + 3))
                            uint32_t eax_15 = zx.d(ecx_9[3])
                            edi_15 = edi_18 - eax_15
                            
                            if (edi_18 != eax_15)
                                goto label_448699
            else
                eax_11 -= 4
                ecx_9 = &ecx_9[4]
                esi_8 = &esi_8[1]
                
                if (eax_11 u>= 4)
                    continue
                else if (eax_11 != 0)
                    goto label_448648
            
            eax_16 = 0
            break
        
        if (eax_16 != 0)
            int32_t eax_17 = 8
            char const* const ecx_13 = "PNGFILE3"
            int32_t eax_21
            
            while (true)
                if (*edx != *ecx_13)
                label_4486d8:
                    uint32_t edi_19 = zx.d(*ecx_13)
                    uint32_t esi_13 = zx.d(*edx)
                    uint32_t esi_14 = esi_13 - edi_19
                    
                    if (esi_13 != edi_19)
                    label_448729:
                        eax_21 = 1
                        
                        if (esi_14 s<= 0)
                            eax_21 = 0xffffffff
                        
                        break
                    
                    if (eax_17 != 1)
                        uint32_t edi_20 = zx.d(ecx_13[1])
                        uint32_t esi_15 = zx.d(*(edx + 1))
                        esi_14 = esi_15 - edi_20
                        
                        if (esi_15 != edi_20)
                            goto label_448729
                        
                        if (eax_17 != 2)
                            uint32_t edi_21 = zx.d(ecx_13[2])
                            uint32_t esi_16 = zx.d(*(edx + 2))
                            esi_14 = esi_16 - edi_21
                            
                            if (esi_16 != edi_21)
                                goto label_448729
                            
                            if (eax_17 != 3)
                                uint32_t ecx_17 = zx.d(ecx_13[3])
                                uint32_t esi_17 = zx.d(*(edx + 3))
                                esi_14 = esi_17 - ecx_17
                                
                                if (esi_17 != ecx_17)
                                    goto label_448729
                else
                    eax_17 -= 4
                    ecx_13 = &ecx_13[4]
                    edx = &edx[1]
                    
                    if (eax_17 u>= 4)
                        continue
                    else if (eax_17 != 0)
                        goto label_4486d8
                
                eax_21 = 0
                break
            
            if (eax_21 != 0)
                return 0

return 1
