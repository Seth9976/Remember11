// 函数: sub_464be0
// 地址: 0x464be0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void** edi = arg3
int32_t ebp = **(arg1 + 4)

if (edi == 0 || edi != arg1)
    __invalid_parameter_noinfo()

int32_t ebx = arg4

if (ebx == ebp)
    int32_t ebp_1 = *(arg1 + 4)
    
    if (arg5 == 0 || arg5 != arg1)
        __invalid_parameter_noinfo()
    
    if (arg6 == ebp_1)
        sub_464b80(*(*(arg1 + 4) + 4))
        void* eax_2 = *(arg1 + 4)
        *(eax_2 + 4) = eax_2
        int32_t* eax_3 = *(arg1 + 4)
        *(arg1 + 8) = 0
        *eax_3 = eax_3
        void* eax_4 = *(arg1 + 4)
        *(eax_4 + 8) = eax_4
        int32_t ecx_2 = **(arg1 + 4)
        *arg2 = arg1
        arg2[1] = ecx_2
        return arg2

while (true)
    if (edi == 0 || edi != arg5)
        __invalid_parameter_noinfo()
    
    if (ebx == arg6)
        break
    
    sub_4646d0(&arg3)
    int32_t var_1c_2 = ebx
    int32_t var_8
    sub_464890(arg1, &var_8, edi)
    ebx = arg4
    edi = arg3

*arg2 = edi
arg2[1] = ebx
return arg2
