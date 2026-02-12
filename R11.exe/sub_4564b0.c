// 函数: sub_4564b0
// 地址: 0x4564b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_11c
void* result = __security_cookie ^ &var_11c
void* result_3 = result
int32_t* ebp = arg2
int32_t esi_1 = *ebp - 4
var_11c = ebp

if (esi_1 != 1)
    sub_407180()
    result = sub_407180()
    esi_1 -= 1

if (esi_1 u> 0)
    void* var_118_1 = &ebp[1]
    int32_t var_114_1 = esi_1
    
    while (true)
        result = *var_118_1 + ebp
        void* result_2 = result
        void* ebx_1 = result + 0xc
        void* result_1 = nullptr
        
        if (*result u> 0)
            while (true)
                void* esi_2 = *(ebx_1 + (zx.d(*ebx_1) << 2) - 4) + ebp[*ebp - 1] + ebp + 8
                
                if (sub_448500(esi_2) == 0)
                    sub_465480(".\texture.cpp", 0x27e)
                
                int32_t eax_5 = 6
                char const* const ecx_3 = "@mono@"
                void* edx_2 = esi_2 + 0x1c
                int32_t eax_9
                
                while (true)
                    if (*edx_2 != *ecx_3)
                    label_456589:
                        uint32_t esi_4 = zx.d(*edx_2)
                        uint32_t ebp_1 = zx.d(*ecx_3)
                        uint32_t esi_5 = esi_4 - ebp_1
                        
                        if (esi_4 != ebp_1)
                        label_4565da:
                            ebp = var_11c
                            eax_9 = 1
                            
                            if (esi_5 s<= 0)
                                eax_9 = 0xffffffff
                            
                            break
                        
                        if (eax_5 == 1)
                            ebp = var_11c
                        else
                            uint32_t esi_6 = zx.d(*(edx_2 + 1))
                            uint32_t ebp_2 = zx.d(ecx_3[1])
                            esi_5 = esi_6 - ebp_2
                            
                            if (esi_6 != ebp_2)
                                goto label_4565da
                            
                            if (eax_5 == 2)
                                ebp = var_11c
                            else
                                uint32_t esi_7 = zx.d(*(edx_2 + 2))
                                uint32_t ebp_3 = zx.d(ecx_3[2])
                                esi_5 = esi_7 - ebp_3
                                
                                if (esi_7 != ebp_3)
                                    goto label_4565da
                                
                                if (eax_5 == 3)
                                    ebp = var_11c
                                else
                                    uint32_t esi_8 = zx.d(*(edx_2 + 3))
                                    uint32_t edx_6 = zx.d(ecx_3[3])
                                    esi_5 = esi_8 - edx_6
                                    
                                    if (esi_8 != edx_6)
                                        goto label_4565da
                                    
                                    ebp = var_11c
                    else
                        eax_5 -= 4
                        ecx_3 = &ecx_3[4]
                        edx_2 += 4
                        
                        if (eax_5 u>= 4)
                            continue
                        else if (eax_5 != 0)
                            goto label_456589
                    
                    eax_9 = 0
                    break
                
                if (eax_9 != 0)
                    void* eax_10 = esi_2 + 0x1c
                    int32_t var_104[0x40]
                    
                    do
                        ecx_3.b = *eax_10
                        *(&var_104 - (esi_2 + 0x1c) + eax_10) = ecx_3.b
                        eax_10 += 1
                    while (ecx_3.b != 0)
                    
                    __builtin_strncpy(esi_2 + 0x1c, "@mono@", 7)
                    char* edx_7
                    edx_7.b = 0
                    char* eax_11 = &var_104
                    
                    do
                        edx_7.b = *eax_11
                        eax_11 = &eax_11[1]
                    while (edx_7.b != 0)
                    
                    int32_t eax_12 = eax_11 - &var_104
                    void* edi_2 = esi_2 + 0x1b
                    char i
                    
                    do
                        i = *(edi_2 + 1)
                        edi_2 += 1
                    while (i != 0)
                    int32_t esi_9
                    int32_t edi_3
                    edi_3, esi_9 = __builtin_memcpy(edi_2, &var_104, eax_12 u>> 2 << 2)
                    __builtin_memcpy(edi_3, esi_9, eax_12 & 3)
                    sub_456390(arg1, &var_104)
                    int16_t top = top - 1
                    unimplemented  {call 0x456390}
                
                ebx_1 += zx.d(*ebx_1) << 2
                result = result_1 + 1
                result_1 = result
                
                if (result s>= zx.d(*result_2))
                    break
        
        var_118_1 += 4
        int32_t temp1_1 = var_114_1
        var_114_1 -= 1
        
        if (temp1_1 == 1)
            break

sub_480cd2(result_3 ^ &var_11c)
return result
