// 函数: sub_458b10
// 地址: 0x458b10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebx = arg1[2]

if (ebx u> arg1[3])
    __invalid_parameter_noinfo()

if (arg1 == 0)
    __invalid_parameter_noinfo()

int32_t result = ((arg2 - ebx) s>> 2 << 5) + arg3

if (arg4 != 0)
    int32_t eax_1 = *arg1
    
    if (0xffffffff - eax_1 u< arg4)
        sub_4567e0()
        noreturn
    
    int32_t var_20_1 = 0
    sub_457e20(&arg1[1], (eax_1 + arg4 + 0x1f) u>> 5)
    
    if (*arg1 == 0)
        *arg1 = arg4
        return result
    
    void arg_4
    sub_456750(arg1, &arg_4)
    *arg1 += arg4
    int32_t* var_28
    sub_456750(arg1, &var_28)
    void var_34
    sub_4527b0(&var_34, &arg_4)
    int32_t var_40
    void* var_c
    sub_453320(sub_4530f0(arg1, &var_c), &var_40, result)
    sub_458890(&arg_4)

return result
