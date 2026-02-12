// 函数: sub_407320
// 地址: 0x407320
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*(arg1 + 0x7e6c) = 0
*(arg1 + 0x7e70) = 0xffffffff
char* eax = sub_481240(arg1 + 0xc0, "\r\n\r\n")

if (eax == 0)
    char const* const __saved_esi = "head size err\n"
    return eax

char* eax_1 = sub_481240(arg1 + 0xc0, "\r\n\r\n")

if (eax_1 == 0)
    char const* const var_c_1 = "head end err\n"

*(arg1 + 0x7e70) = eax_1 - arg1 - 0xbc
*(arg1 + 0x7e6c) = arg1 + 0xc0
return eax_1
