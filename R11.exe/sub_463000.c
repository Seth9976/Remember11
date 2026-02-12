// 函数: sub_463000
// 地址: 0x463000
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = arg2
int32_t ebx_1 = ebp & 0x1ff

if (ebx_1 u> 1)
    int32_t edi_1 = 0
    
    while (true)
        int32_t ecx = *(arg1 + 0x1ce8)
        int32_t eax_1
        
        if (ecx != 0)
            eax_1 = (*(arg1 + 0x1cec) - ecx) s>> 2
        else
            eax_1 = 0
        
        if (edi_1 == eax_1)
            break
        
        if (ecx == 0 || edi_1 u>= (*(arg1 + 0x1cec) - ecx) s>> 2)
            __invalid_parameter_noinfo()
        
        if (*(*(arg1 + 0x1ce8) + (edi_1 << 2)) == ebx_1)
            break
        
        edi_1 += 1
    
    int32_t ecx_1 = *(arg1 + 0x1ce8)
    int32_t eax_9
    
    if (ecx_1 != 0)
        eax_9 = (*(arg1 + 0x1cec) - ecx_1) s>> 2
    else
        eax_9 = 0
    
    if (edi_1 != eax_9)
        if (ecx_1 != 0 && (*(arg1 + 0x1cec) - ecx_1) s>> 2 != 0)
            sub_465480(".\render.cpp", 0x87a)
        
        arg2 = ebp & 0x1ff
        sub_44e9b0(arg1 + 0x1ce4, &arg2)
    
    int32_t __saved_esi_1
    
    __saved_esi_1 = ebx_1 != 0x1ff ? 1 : 3
    
    (*(*data_c78664 + 0x20))((ebp & 0x1ff) << 5, 0x280, 0x1c0, __saved_esi_1)

return 0
