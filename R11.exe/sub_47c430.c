// 函数: sub_47c430
// 地址: 0x47c430
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(arg1 + 0x70) != 0 && *(arg1 + 0x74) == 0 && *(arg1 + 0xc0) == 0)
    int32_t* eax_1 = *(arg1 + 0x18)
    
    if (eax_1 == 0)
        return sub_47a540(arg1)
    
    int32_t edi_1 = *(arg1 + 0xb8)
    int32_t edi_2 = edi_1 + *(arg1 + 0x20)
    int32_t ebx_2 = adc.d(*(arg1 + 0xbc), *(arg1 + 0x24), edi_1 + *(arg1 + 0x20) u< edi_1)
    int32_t var_8
    (*(*eax_1 + 0xc))(eax_1, &var_8)
    int32_t var_4
    uint32_t uDelay = __alldiv(edi_2 - var_8, sbb.d(ebx_2, var_4, edi_2 u< var_8), 0x2710, 0)
    
    if (uDelay s< 0x32)
        return sub_47a540(arg1)
    
    uint32_t eax_4 = timeSetEvent(uDelay, 0xa, sub_47c420, arg1, 0)
    *(arg1 + 0xc0) = eax_4
    
    if (eax_4 == 0)
        return sub_47a540(arg1)

return 0
