// 函数: sub_41e280
// 地址: 0x41e280
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char* eax = arg1
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
return sub_41e110(arg1, eax - &eax[1], arg2, 0xffff, 0, 0)
