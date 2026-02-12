// 函数: sub_48dd87
// 地址: 0x48dd87
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int16_t* eax = arg1
int16_t i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
return ((eax - arg1) s>> 1) - 1
