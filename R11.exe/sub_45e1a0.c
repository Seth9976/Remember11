// 函数: sub_45e1a0
// 地址: 0x45e1a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg1[0xa].b == 1)
    return 0

int32_t eax_1 = arg1[4]
int32_t ebx
ebx.b = 0

if (arg2 s<= eax_1 && eax_1 s< arg4 + arg2)
    int32_t eax_2 = arg1[5]
    
    if (arg3 s<= eax_2 && eax_2 s< arg3 + arg5)
        ebx.b = 1

int32_t var_14 = arg2
int32_t var_c = arg4
int32_t var_10 = arg3
int32_t var_8 = arg5
uint32_t var_4 = zx.d(ebx.b)
sub_45e100(arg1, &var_14)

if (ebx.b != 0)
    if (data_c785d1 != 0)
        data_c785a0 |= 3
    
    if (data_c78595 != 0 || arg7 != 0)
        data_c785a0 |= 5
else if (arg7 != 0)
    data_c785a0 |= 5

if ((data_c785d8 != 0 || arg6 != 0 || data_c7859c != 0 || arg7 != 0) && ebx.b != 0)
    return 1

return 0
