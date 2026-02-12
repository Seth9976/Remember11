// 函数: sub_468ba0
// 地址: 0x468ba0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (0xffffffff - *(arg1 + 0x14) u<= arg2)
    sub_4971b8()
    noreturn

if (arg2 u> 0)
    void* edi_2 = *(arg1 + 0x14) + arg2
    
    if (edi_2 u> 0xfffffffe)
        sub_4971b8()
        noreturn
    
    int32_t eax_1 = *(arg1 + 0x18)
    bool cond:0_1
    
    if (eax_1 u>= edi_2)
        cond:0_1 = edi_2 u<= 0
        
        if (edi_2 == 0)
            *(arg1 + 0x14) = edi_2
            
            if (eax_1 u< 0x10)
                *(arg1 + 4) = 0
                return arg1
            
            **(arg1 + 4) = 0
            return arg1
    else
        sub_44ab60(arg1, edi_2, *(arg1 + 0x14))
        cond:0_1 = edi_2 u<= 0
    
    if (not(cond:0_1))
        sub_468670(arg1, *(arg1 + 0x14), arg2, arg3)
        bool cond:2_1 = *(arg1 + 0x18) u< 0x10
        *(arg1 + 0x14) = edi_2
        
        if (not(cond:2_1))
            *(*(arg1 + 4) + edi_2) = 0
            return arg1
        
        *(arg1 + 4 + edi_2) = 0

return arg1
