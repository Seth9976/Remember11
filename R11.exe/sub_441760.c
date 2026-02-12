// 函数: sub_441760
// 地址: 0x441760
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t eax = arg2
bool cond:0 = eax s<= *arg1 s>> 0xc
arg1[2] = eax

if (not(cond:0))
    eax += 1

arg1[1] = eax << 0xc
arg1[3] = arg3
return arg3
