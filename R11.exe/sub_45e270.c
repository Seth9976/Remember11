// 函数: sub_45e270
// 地址: 0x45e270
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1[0xa].b == 1)
    return 0

int32_t eax_1 = arg1[4]
int32_t ebx
ebx.b = 0

if (arg2 s<= eax_1 && eax_1 s< arg2 + arg4)
    int32_t eax_2 = arg1[5]
    
    if (arg3 s<= eax_2 && eax_2 s< arg5 + arg3)
        ebx.b = 1

int32_t var_10 = arg3
uint32_t var_4 = zx.d(ebx.b)
int32_t var_14 = arg2
int32_t var_c = arg4
int32_t var_8 = arg5
sub_45e100(arg1, &var_14)

if (ebx.b == 0)
    return 0xffffffff

int32_t result = divs.dp.d(sx.q((arg1[4] - arg2) * arg6), arg4)

if (arg6 - 1 s>= result)
    return result

return arg6 - 1
