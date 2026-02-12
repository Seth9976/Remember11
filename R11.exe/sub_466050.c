// 函数: sub_466050
// 地址: 0x466050
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = *(arg1 + 4)
void* ecx

if (result != 0)
    ecx = *(arg1 + 8) - result
else
    ecx = nullptr

if (ecx u< arg2)
    void* ebx_1
    
    if (result != 0)
        ebx_1 = *(arg1 + 8) - result
    else
        ebx_1 = nullptr
    
    void* ebp_1 = *(arg1 + 8)
    
    if (result u> ebp_1)
        __invalid_parameter_noinfo()
    
    void arg_8
    void* var_1c_1 = &arg_8
    return sub_465ea0(arg1, arg1, ebp_1, arg2 - ebx_1)

if (result != 0)
    int128_t* ebp_2 = *(arg1 + 8)
    
    if (arg2 u< ebp_2 - result)
        if (result u> ebp_2)
            __invalid_parameter_noinfo()
        
        int32_t ebx_3 = *(arg1 + 4)
        
        if (ebx_3 u> *(arg1 + 8))
            __invalid_parameter_noinfo()
        
        int128_t* edi_2 = arg2 + ebx_3
        int32_t var_4_1 = ebx_3
        
        if (edi_2 u> *(arg1 + 8) || edi_2 u< *(arg1 + 4))
            __invalid_parameter_noinfo()
        
        void var_8
        return sub_465d00(arg1, &var_8, arg1, edi_2, arg1, ebp_2)

return result
