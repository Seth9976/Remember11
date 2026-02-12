// 函数: sub_49037e
// 地址: 0x49037e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2
char ecx
eax_2, ecx = __getptd()
uint32_t Locale = sub_490059(ecx, arg1)
int32_t eax_3 = *(eax_2 + 0xac)
int32_t eax_4 = neg.d(eax_3)
void lCData
int32_t eax_8 =
    GetLocaleInfoA(Locale, (sbb.d(eax_4, eax_4, eax_3 != 0) & 0xfffff002) + 0x1001, &lCData, 0x78)
int32_t result

if (eax_8 != 0)
    uint32_t eax_9
    int32_t edx_1
    eax_9, edx_1 = sub_484034(*(eax_2 + 0x9c), &lCData)
    uint32_t var_8c_2
    
    if (eax_9 != 0)
        if (*(eax_2 + 0xac) == 0 && *(eax_2 + 0xa8) != 0)
            eax_9, edx_1 = sub_484034(*(eax_2 + 0x9c), &lCData)
            
            if (eax_9 == 0)
                var_8c_2 = eax_9
                goto label_490412
    else if (*(eax_2 + 0xac) != eax_9)
    label_490418:
        *(eax_2 + 0xa4) |= 4
        *(eax_2 + 0xb4) = Locale
        *(eax_2 + 0xb8) = Locale
    else
        var_8c_2 = 1
    label_490412:
        
        if (sub_49013c(eax_9, edx_1, eax_2 + 0x9c, Locale, var_8c_2) != 0)
            goto label_490418
    result = not.d(*(eax_2 + 0xa4) u>> 2) & 1
else
    *(eax_2 + 0xa4) &= eax_8
    result = eax_8 + 1

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
