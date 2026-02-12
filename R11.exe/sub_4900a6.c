// 函数: sub_4900a6
// 地址: 0x4900a6
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
int32_t eax_8 =
    GetLocaleInfoA(Locale, (sbb.d(eax_4, eax_4, eax_3 != 0) & 0xfffff005) + 0x1002, &lCData, 0x78)
int32_t result

if (eax_8 != 0)
    if (sub_484034(*(eax_2 + 0xa0), &lCData) == 0 && sub_49003b(Locale.w) != 0)
        *(eax_2 + 0xa4) |= 4
        *(eax_2 + 0xb8) = Locale
        *(eax_2 + 0xb4) = Locale
    
    result = not.d(*(eax_2 + 0xa4) u>> 2) & 1
else
    *(eax_2 + 0xa4) &= eax_8
    result = eax_8 + 1

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
