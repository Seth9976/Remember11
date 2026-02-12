// 函数: sub_41b790
// 地址: 0x41b790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_18
int32_t eax_1 = __security_cookie ^ &var_18
__builtin_strncpy(&var_18, "0123456789ABCDEF", 0x11)
int32_t result = 0

while (*arg1 != *(&var_18 + result))
    result += 1
    
    if (result s>= 0x10)
        result = 0
        break

sub_480cd2(eax_1 ^ &var_18)
return result
