// 函数: sub_4530f0
// 地址: 0x4530f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = *(arg1 + 8)

if (ebx u> *(arg1 + 0xc))
    __invalid_parameter_noinfo()

*arg2 = nullptr
arg2[1] = ebx
arg2[2] = 0

if (arg1 == 0)
    __invalid_parameter_noinfo()

*arg2 = arg1
return arg2
