// 函数: sub_4901ae
// 地址: 0x4901ae
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2
char ecx
eax_2, ecx = __getptd()
uint32_t Locale = sub_490059(ecx, arg1)
int32_t eax_3 = *(eax_2 + 0xb0)
int32_t eax_4 = neg.d(eax_3)
void lCData
int32_t result

if (GetLocaleInfoA(Locale, (sbb.d(eax_4, eax_4, eax_3 != 0) & 0xfffff005) + 0x1002, &lCData, 0x78)
        != 0)
    if (sub_484034(*(eax_2 + 0xa0), &lCData) != 0)
    label_4902bc:
        
        if ((*(eax_2 + 0xa4) & 0x300) == 0x300)
            result = not.d(*(eax_2 + 0xa4) u>> 2) & 1
        else
            int32_t eax_21 = *(eax_2 + 0xac)
            int32_t eax_22 = neg.d(eax_21)
            
            if (GetLocaleInfoA(Locale, (sbb.d(eax_22, eax_22, eax_21 != 0) & 0xfffff002) + 0x1001, 
                    &lCData, 0x78) == 0)
                *(eax_2 + 0xa4) = 0
                result = 1
            else
                int32_t var_90_8
                void* eax_30
                int32_t edx_3
                
                if (sub_484034(*(eax_2 + 0x9c), &lCData) == 0)
                    *(eax_2 + 0xa4) |= 0x200
                    
                    if (*(eax_2 + 0xac) == 0)
                        if (*(eax_2 + 0xa8) != 0)
                            eax_30, edx_3 = _strlen(*(eax_2 + 0x9c))
                            
                            if (eax_30 != *(eax_2 + 0xa8))
                                goto label_490353
                            
                            var_90_8 = 1
                            goto label_49034d
                        
                    label_490353:
                        *(eax_2 + 0xa4) |= 0x100
                    else
                        *(eax_2 + 0xa4) |= 0x100
                    
                    if (*(eax_2 + 0xb4) == 0)
                        *(eax_2 + 0xb4) = Locale
                else if (*(eax_2 + 0xac) == 0 && *(eax_2 + 0xa8) != 0)
                    eax_30, edx_3 = sub_484034(*(eax_2 + 0x9c), &lCData)
                    
                    if (eax_30 == 0)
                        var_90_8 = 0
                    label_49034d:
                        
                        if (sub_49013c(eax_30, edx_3, eax_2 + 0x9c, Locale, var_90_8) != 0)
                            goto label_490353
                result = not.d(*(eax_2 + 0xa4) u>> 2) & 1
    else
        int32_t eax_10 = *(eax_2 + 0xac)
        int32_t eax_11 = neg.d(eax_10)
        
        if (GetLocaleInfoA(Locale, (sbb.d(eax_11, eax_11, eax_10 != 0) & 0xfffff002) + 0x1001, 
                &lCData, 0x78) != 0)
            if (sub_484034(*(eax_2 + 0x9c), &lCData) == 0)
                *(eax_2 + 0xa4) |= 0x304
                *(eax_2 + 0xb4) = Locale
                *(eax_2 + 0xb8) = Locale
            else if ((*(eax_2 + 0xa4) & 2) == 0)
                int32_t eax_17 = *(eax_2 + 0xa8)
                uint32_t eax_18
                
                if (eax_17 != 0)
                    eax_18 = sub_496320(*(eax_2 + 0x9c), &lCData, eax_17)
                
                if (eax_17 == 0 || eax_18 != 0)
                    int32_t edx_1 = *(eax_2 + 0xa4)
                    
                    if ((edx_1.b & 1) == 0 && sub_49003b(Locale.w) != 0)
                        *(eax_2 + 0xa4) = edx_1 | 1
                        *(eax_2 + 0xb8) = Locale
                else
                    char* var_90_4 = *(eax_2 + 0x9c)
                    *(eax_2 + 0xa4) |= 2
                    *(eax_2 + 0xb8) = Locale
                    
                    if (_strlen(var_90_4) == *(eax_2 + 0xa8))
                        *(eax_2 + 0xb4) = Locale
            
            goto label_4902bc
        
        *(eax_2 + 0xa4) = 0
        result = 1
else
    *(eax_2 + 0xa4) = 0
    result = 1

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
