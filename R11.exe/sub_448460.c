// 函数: sub_448460
// 地址: 0x448460
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ecx = arg1
int32_t esi = 8
char const* const eax = "EMUARC__"
int32_t eax_5

while (true)
    if (*ecx != *eax)
    label_448488:
        uint32_t edi_1 = zx.d(*eax)
        uint32_t edx_2 = zx.d(*ecx)
        uint32_t edx_3 = edx_2 - edi_1
        
        if (edx_2 != edi_1)
        label_4484d9:
            eax_5 = 1
            
            if (edx_3 s<= 0)
                return 0
            
            break
        
        if (esi != 1)
            uint32_t edi_2 = zx.d(eax[1])
            uint32_t edx_4 = zx.d(*(ecx + 1))
            edx_3 = edx_4 - edi_2
            
            if (edx_4 != edi_2)
                goto label_4484d9
            
            if (esi != 2)
                uint32_t edi_3 = zx.d(eax[2])
                uint32_t edx_5 = zx.d(*(ecx + 2))
                edx_3 = edx_5 - edi_3
                
                if (edx_5 != edi_3)
                    goto label_4484d9
                
                if (esi != 3)
                    uint32_t eax_4 = zx.d(eax[3])
                    uint32_t edx_6 = zx.d(*(ecx + 3))
                    edx_3 = edx_6 - eax_4
                    
                    if (edx_6 != eax_4)
                        goto label_4484d9
    else
        esi -= 4
        eax = &eax[4]
        ecx = &ecx[1]
        
        if (esi u>= 4)
            continue
        else if (esi != 0)
            goto label_448488
    
    eax_5 = 0
    break

int32_t result
result.b = eax_5 == 0
return result
