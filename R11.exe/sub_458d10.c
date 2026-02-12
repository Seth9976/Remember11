// 函数: sub_458d10
// 地址: 0x458d10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg3 == 0 || arg3 != arg5)
    __invalid_parameter_noinfo()

if (arg4 != arg6)
    void* eax_1 = sub_458be0(arg6, *(arg1 + 8), arg4)
    int32_t* var_20_1 = arg2
    void* var_24_1 = arg1
    sub_4538e0(eax_1, *(arg1 + 8))
    *(arg1 + 8) = eax_1

*arg2 = arg3
arg2[1] = arg4
return arg2
