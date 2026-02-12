// 函数: sub_467dc0
// 地址: 0x467dc0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = *(arg1 + 4)
int32_t* result

if (ecx != 0)
    int32_t eax
    int32_t edx_3
    edx_3:eax = muls.dp.d(0x55555556, *(arg1 + 8) - ecx)
    result = (edx_3 u>> 0x1f) + edx_3
else
    result = nullptr

if (result u< arg2)
    int32_t edi_1
    
    if (ecx != 0)
        int32_t eax_3
        int32_t edx_6
        edx_6:eax_3 = muls.dp.d(0x55555556, *(arg1 + 8) - ecx)
        edi_1 = (edx_6 u>> 0x1f) + edx_6
    else
        edi_1 = 0
    
    void* ebp_1 = *(arg1 + 8)
    
    if (ecx u> ebp_1)
        __invalid_parameter_noinfo()
    
    void arg_8
    void* var_1c_1 = &arg_8
    int32_t var_20_1 = arg2 - edi_1
    return sub_467b30(arg1, arg1, ebp_1)

if (ecx != 0)
    int16_t* edi_4 = *(arg1 + 8)
    result = (edi_4 - ecx) s/ 3
    
    if (arg2 u< result)
        if (ecx u> edi_4)
            __invalid_parameter_noinfo()
        
        int32_t ebp_2 = *(arg1 + 4)
        
        if (ebp_2 u> *(arg1 + 8))
            __invalid_parameter_noinfo()
        
        int32_t ebx_2 = arg2 * 3 + ebp_2
        int32_t var_4_1 = ebp_2
        
        if (ebx_2 u> *(arg1 + 8) || ebx_2 u< *(arg1 + 4))
            __invalid_parameter_noinfo()
        
        void var_8
        return sub_4679f0(arg1, &var_8, arg1, ebx_2, arg1, edi_4)

return result
