// 函数: sub_46f4f0
// 地址: 0x46f4f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

*arg1 += arg3 * 2
int16_t* eax = *arg1

if (*eax != 0x3a)
    *arg2 = 0
    int16_t* eax_6
    eax_6.b = 0
    return eax_6

*arg1 = &eax[1]
sub_46aa90(arg2, 0x100, &eax[1])
int16_t* eax_2 = arg2

if (*arg2 != 0)
    while (*eax_2 u> 0x20)
        eax_2 = &eax_2[1]
        
        if (*eax_2 == 0)
            break

*eax_2 = 0
int16_t* eax_3 = arg2
int16_t i

do
    i = *eax_3
    eax_3 = &eax_3[1]
while (i != 0)
*arg1 += ((eax_3 - &eax_3[1]) s>> 1) * 2
int32_t eax_5
eax_5.b = 1
return eax_5
