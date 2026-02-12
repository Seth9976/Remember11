// 函数: sub_45c9e0
// 地址: 0x45c9e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0xc) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x14) u> 0)
        int32_t* edi_1 = nullptr
        
        do
            int32_t* eax_1 = *(arg1 + 0xc)
            int32_t* ecx = *(eax_1 + edi_1)
            
            if (ecx != 0)
                (*(*ecx + 0x20))(*(eax_1 + edi_1))
            
            int32_t* ecx_3 = *(edi_1 + *(arg1 + 0xc))
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 8))(ecx_3)
                *(edi_1 + *(arg1 + 0xc)) = 0
            
            i += 1
            edi_1 = &edi_1[3]
        while (i u< *(arg1 + 0x14))
    
    sub_4813df(*(arg1 + 0xc))

int32_t* result = *(arg1 + 8)

if (result != 0)
    result = (*(*result + 8))(result)
    *(arg1 + 8) = 0

return result
