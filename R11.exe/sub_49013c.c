// 函数: sub_49013c
// 地址: 0x49013c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void lCData
int32_t eax_5
char ecx
eax_5, ecx = GetLocaleInfoA((arg4 & 0x3ff) | 0x400, 1, &lCData, 0x78)
int32_t result

if (eax_5 != 0)
    int32_t eax_6
    char ecx_1
    eax_6, ecx_1 = sub_490059(ecx, &lCData)
    
    if (arg4 == eax_6 || arg5 == 0)
        result = 1
    else
        char* esi_1 = *arg3
        
        if (sub_49008b(ecx_1, esi_1) == _strlen(esi_1))
            result = 0
        else
            result = 1
else
    result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
