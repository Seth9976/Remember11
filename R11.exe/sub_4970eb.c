// 函数: sub_4970eb
// 地址: 0x4970eb
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = 0
uint8_t lCData
int32_t eax_3
int32_t ecx
eax_3, ecx = GetLocaleInfoA(GetThreadLocale(), 0x1004, &lCData, 7)

if (eax_3 == 0)
    result = GetACP()
else
    ecx.b = lCData
    uint8_t* eax_4 = &lCData
    
    if (ecx.b == 0)
        result = GetACP()
    else
        do
            eax_4 = &eax_4[1]
            result = result * 0xa + sx.d(ecx.b) - 0x30
            ecx.b = *eax_4
        while (ecx.b != 0)
        
        if (result == 0)
            result = GetACP()

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
