// 函数: sub_44bc30
// 地址: 0x44bc30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = arg1
char* eax = arg2
*(result + 0x18) = 0xf
*(result + 0x14) = 0
*(result + 4) = 0

do
    arg1.b = *eax
    eax = &eax[1]
while (arg1.b != 0)

sub_44b9c0(result, arg2, eax - &eax[1])
return result
