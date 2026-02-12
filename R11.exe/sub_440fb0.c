// 函数: sub_440fb0
// 地址: 0x440fb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t edx = *arg1
int32_t ecx = arg2

if (ecx u>= edx)
    ecx = edx - 1

int32_t edx_1 = arg1[1]
arg1[4] = ecx

if (arg3 u< edx_1)
    arg1[5] = arg3
    return arg1

arg1[5] = edx_1 - 1
return arg1
