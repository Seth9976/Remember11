// 函数: sub_423b60
// 地址: 0x423b60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi = *(*(data_4b1de0 + 0x54) + (arg1 << 5) + 0xc)
uint32_t eax_2 = zx.d(arg2.w)
int32_t edx_2 = eax_2 & 0xc000

if (edx_2 == 0x4000)
    int32_t eax_11 = eax_2 & 0x2000
    
    if (eax_11 == 0)
        return sx.d(*(((arg2 & 0x1fff) << 1) + &data_22366c4))
    
    if (eax_11 == 0x2000)
        return sx.d(*(esi + ((arg2 & 0x1fff) << 1)))
else
    if (edx_2 != 0x8000)
        return sx.d(arg2.w)
    
    int32_t eax_4 = eax_2 & 0x2000
    uint32_t eax_8
    int32_t ecx_1
    
    if (eax_4 == 0)
        ecx_1 = sx.d(arg2.w)
        eax_8 = zx.d(*((ecx_1 s>> 3 & 0x3ff) + 0x2236704))
    label_423bd9:
        int32_t ecx_3 = ecx_1 & 7
        
        if (ecx_3 s< 0)
            ecx_3 = ((ecx_3 - 1) | 0xfffffff8) + 1
        
        return eax_8 u>> ecx_3.b & 1
    
    if (eax_4 == 0x2000)
        ecx_1 = sx.d(arg2.w)
        eax_8 = zx.d(*((ecx_1 s>> 3 & 0x3ff) + esi + 0xc0))
        goto label_423bd9

return arg1
