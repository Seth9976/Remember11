// 函数: sub_455cf0
// 地址: 0x455cf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *(arg1 + 4)
bool cond:0 = ebx u<= *(arg1 + 8)
*arg2 = nullptr

if (not(cond:0))
    __invalid_parameter_noinfo()

*arg2 = arg1
arg2[1] = ebx
return arg2
