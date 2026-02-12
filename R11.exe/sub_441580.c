// 函数: sub_441580
// 地址: 0x441580
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2 + 3)
int32_t i_2 = (eax_1 + (edx & 3)) s>> 2
int32_t result = 0

if (i_2 s> 0)
    int32_t i_1 = i_2
    int32_t eax_3 = arg1
    int32_t i
    
    do
        result |= *eax_3
        eax_3 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
