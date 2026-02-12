// 函数: sub_491d90
// 地址: 0x491d90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_a = 0
uint8_t lCData
int32_t result

if (GetLocaleInfoA(arg1, 0x1004, &lCData, 6) != 0)
    result = sub_4812c6(&lCData)
else
    result = 0xffffffff

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
