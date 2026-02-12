// 函数: sub_467a80
// 地址: 0x467a80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (arg2 u> 0x3fffffff)
    sub_44d6e0()
    noreturn

int32_t ecx = *(arg1 + 4)
int32_t result

if (ecx != 0)
    result = (*(arg1 + 0xc) - ecx) s>> 2
else
    result = 0

if (result u< arg2)
    int32_t __saved_ebp_1 = 0
    void* eax_2 = sub_44d100(arg2)
    int32_t edi_1 = *(arg1 + 8)
    
    if (*(arg1 + 4) u> edi_1)
        __invalid_parameter_noinfo()
    
    int128_t* ebp_1 = *(arg1 + 4)
    
    if (ebp_1 u> *(arg1 + 8))
        __invalid_parameter_noinfo()
    
    int32_t edi_3 = (edi_1 - ebp_1) s>> 2
    
    if (edi_3 != 0)
        int32_t eax_3 = edi_3 << 2
        sub_481dca(eax_2, eax_3, ebp_1, eax_3)
    
    void* eax_4 = *(arg1 + 4)
    int32_t edi_4
    
    if (eax_4 != 0)
        edi_4 = (*(arg1 + 8) - eax_4) s>> 2
    else
        edi_4 = 0
    
    if (eax_4 != 0)
        j_sub_4813df(eax_4)
    
    result = arg2
    *(arg1 + 4) = eax_2
    *(arg1 + 0xc) = eax_2 + (result << 2)
    *(arg1 + 8) = eax_2 + (edi_4 << 2)

return result
