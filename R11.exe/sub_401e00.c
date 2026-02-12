// 函数: sub_401e00
// 地址: 0x401e00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx = zx.d(arg1.w)
int32_t esi_1 = ecx & 0xc000

if (esi_1 == 0x4000)
    int32_t ecx_7 = ecx & 0x2000
    
    if (ecx_7 == 0)
        return sx.d(*(((arg1 & 0x1fff) << 1) + &data_2b5aa20))
    
    if (ecx_7 == 0x2000)
        return sx.d(*(((arg1 & 0x1fff) << 1) + &data_2b5a860))
else
    if (esi_1 != 0x8000)
        return sx.d(arg1.w)
    
    int32_t ecx_1 = ecx & 0x2000
    uint32_t eax_5
    int32_t ecx_2
    
    if (ecx_1 == 0)
        ecx_2 = sx.d(arg1.w)
        eax_5 = zx.d(*((ecx_2 s>> 3 & 0x3ff) + &data_2b5aa60))
    label_401e68:
        int32_t ecx_4 = ecx_2 & 7
        
        if (ecx_4 s< 0)
            ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
        
        return eax_5 u>> ecx_4.b & 1
    
    if (ecx_1 == 0x2000)
        ecx_2 = sx.d(arg1.w)
        eax_5 = zx.d(*((ecx_2 s>> 3 & 0x3ff) + &data_2b5a920))
        goto label_401e68

return 0
