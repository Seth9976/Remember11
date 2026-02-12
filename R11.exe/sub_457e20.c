// 函数: sub_457e20
// 地址: 0x457e20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx = *(arg1 + 4)
int32_t* result

if (ecx != 0)
    result = (*(arg1 + 8) - ecx) s>> 2
else
    result = nullptr

if (result u< arg2)
    int32_t edi_1
    
    if (ecx != 0)
        edi_1 = (*(arg1 + 8) - ecx) s>> 2
    else
        edi_1 = 0
    
    int32_t ebp_1 = *(arg1 + 8)
    
    if (ecx u> ebp_1)
        __invalid_parameter_noinfo()
    
    void arg_8
    void* var_1c_1 = &arg_8
    return sub_44dde0(arg1, arg1, ebp_1, arg2 - edi_1)

if (ecx != 0)
    int128_t* ebp_2 = *(arg1 + 8)
    result = (ebp_2 - ecx) s>> 2
    
    if (arg2 u< result)
        if (ecx u> ebp_2)
            __invalid_parameter_noinfo()
        
        int32_t edi_4 = *(arg1 + 4)
        
        if (edi_4 u> *(arg1 + 8))
            __invalid_parameter_noinfo()
        
        int32_t var_4_1 = edi_4
        int128_t* edi_5 = edi_4 + (arg2 << 2)
        
        if (edi_5 u> *(arg1 + 8) || edi_5 u< *(arg1 + 4))
            __invalid_parameter_noinfo()
        
        void var_8
        return sub_455d50(arg1, &var_8, arg1, edi_5, arg1, ebp_2)

return result
