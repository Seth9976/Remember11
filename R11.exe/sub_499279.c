// 函数: sub_499279
// 地址: 0x499279
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

__chkstk(0x1028)
void var_fac
int32_t var_8 = __security_cookie ^ &var_fac
int32_t eax_2 = sub_48d847(arg1)

if (arg1[1] s< 0)
    arg1[1] = 0

uint32_t result_2
int32_t edx
result_2, edx = sub_48e16f(eax_2, 0, 0, FILE_CURRENT)
uint32_t result_1 = result_2
uint32_t result

if (edx s> 0 || (edx s>= 0 && result_2 u>= 0))
    void* edi_2 = (eax_2 & 0x1f) * 0x38
    void* eax_7 = (&data_2b6a8a0)[eax_2 s>> 5] + edi_2
    char ecx_1 = (*(eax_7 + 0x24) * 2) s>> 1
    
    if ((arg1[3].w & 0x108) != 0)
        int32_t ecx_4 = *arg1
        uint32_t numberOfBytesRead_2 = ecx_4 - arg1[2]
        char ebx_3 = (arg1[3]).b
        uint32_t numberOfBytesRead = numberOfBytesRead_2
        
        if ((ebx_3 & 3) != 0)
            if (ecx_1 != 1 || *(eax_7 + 0x30) == 0)
                if ((*(eax_7 + 4) & 0x80) == 0)
                    goto label_499448
                
                for (char* i = arg1[2]; i u< ecx_4; i = &i[1])
                    if (*i == 0xa)
                        numberOfBytesRead += 1
                
                goto label_499448
            
            if (arg1[1] != 0)
                uint32_t eax_10
                int32_t edx_7
                eax_10, edx_7 = sub_48e16f(eax_2, *(eax_7 + 0x28), *(eax_7 + 0x2c), FILE_BEGIN)
                int32_t* edi_3 = edi_2 + (&data_2b6a8a0)[eax_2 s>> 5]
                int32_t var_1028_1 = edx_7
                uint8_t buffer[0x5c]
                
                if (eax_10 != edi_3[0xa] || edx_7 != edi_3[0xb])
                    result = 0xffffffff
                else if (ReadFile(*edi_3, &buffer, 0x1000, &numberOfBytesRead, nullptr) == 0)
                    result = 0xffffffff
                else
                    uint32_t eax_14
                    int32_t edx_8
                    eax_14, edx_8 = sub_48e16f(eax_2, result_1, edx, FILE_BEGIN)
                    
                    if (edx_8 s> 0 || (edx_8 s>= 0 && eax_14 u>= 0))
                        uint32_t numberOfBytesRead_1 = numberOfBytesRead
                        uint32_t i_1 = numberOfBytesRead_2 u>> 1
                        
                        if (i_1 u> numberOfBytesRead_1)
                            result = 0xffffffff
                        else
                            uint32_t eax_15 = &buffer
                            
                            if (i_1 != 0)
                                void* edx_9 = &var_fac + numberOfBytesRead_1 - 0x5c
                                
                                do
                                    i_1 -= 1
                                    
                                    if (eax_15 u>= edx_9)
                                        break
                                    
                                    numberOfBytesRead_1.b = *eax_15
                                    
                                    if (numberOfBytesRead_1.b != 0xd)
                                        eax_15 += sx.d(*(zx.d(numberOfBytesRead_1.b) + 0x4ccb70))
                                    else if (eax_15 u< edx_9 - 1 && *(eax_15 + 1) == 0xa)
                                        eax_15 += 1
                                    
                                    eax_15 += 1
                                while (i_1 != 0)
                            
                            result = eax_15 - &buffer + eax_10
                    else
                        result = 0xffffffff
            else
                result = result_1
        else if (ebx_3 s< 0)
        label_499448:
            
            if ((result_1 | edx) != 0)
                if (((arg1[3]).b & 1) == 0)
                    goto label_49952d
                
                int32_t edx_14 = arg1[1]
                
                if (edx_14 != 0)
                    uint32_t ebx_4 = ecx_4 - arg1[2] + edx_14
                    
                    if ((*(eax_7 + 4) & 0x80) == 0)
                        goto label_49951e
                    
                    uint32_t eax_18
                    int32_t edx_15
                    eax_18, edx_15 = sub_48e16f(eax_2, 0, 0, FILE_END)
                    bool cond:12_1
                    
                    if (eax_18 == result_1 && edx_15 == edx)
                        char* i_2 = arg1[2]
                        
                        for (void* ecx_8 = &i_2[ebx_4]; i_2 u< ecx_8; i_2 = &i_2[1])
                            if (*i_2 == 0xa)
                                ebx_4 += 1
                        
                        cond:12_1 = (arg1[3].w & 0x2000) == 0
                        goto label_499517
                    
                    uint32_t eax_19
                    int32_t edx_16
                    eax_19, edx_16 = sub_48e16f(eax_2, result_1, edx, FILE_BEGIN)
                    
                    if (edx_16 s> 0 || (edx_16 s>= 0 && eax_19 u>= 0))
                        if (ebx_4 u> 0x200)
                            ebx_4 = arg1[6]
                        else
                            int16_t ecx_9 = (arg1[3]).w
                            
                            if ((ecx_9.b & 8) == 0)
                                ebx_4 = arg1[6]
                            else
                                ebx_4 = 0x200
                                
                                if ((ecx_9 & 0x400) != 0)
                                    ebx_4 = arg1[6]
                        
                        cond:12_1 = (*((&data_2b6a8a0)[eax_2 s>> 5] + edi_2 + 4) & 4) == 0
                    label_499517:
                        
                        if (cond:12_1)
                            goto label_49951e
                        
                        ebx_4 += 1
                    label_49951e:
                        
                        if (ecx_1 == 1)
                            ebx_4 u>>= 1
                        
                        uint32_t result_3 = result_1
                        result_1 -= ebx_4
                        int32_t var_1014 = sbb.d(edx, 0, result_3 u< ebx_4)
                        goto label_49952d
                    
                    result = 0xffffffff
                else
                    numberOfBytesRead &= edx_14
                label_49952d:
                    
                    if (ecx_1 == 1)
                        numberOfBytesRead u>>= 1
                    
                    result = numberOfBytesRead + result_1
            else
                result = numberOfBytesRead
        else
            *__errno() = 0x16
            result = 0xffffffff
    else
        int32_t eax_9
        int32_t edx_2
        edx_2:eax_9 = sx.q(arg1[1])
        result = result_1 - eax_9
else
    result = 0xffffffff

int32_t entry_ebx
sub_480cd2(entry_ebx ^ &var_fac)
return result
