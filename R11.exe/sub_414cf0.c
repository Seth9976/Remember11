// 函数: sub_414cf0
// 地址: 0x414cf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx = zx.d(arg1.w)
int32_t edx_1 = ecx & 0xc000
int32_t esi = data_e7e648

if (edx_1 == 0x4000)
    int32_t ecx_7 = ecx & 0x2000
    
    if (ecx_7 == 0)
        return sx.d(*(esi + ((arg1 & 0x1fff) << 1)))
    
    if (ecx_7 == 0x2000)
        return sx.d(*(esi + ((arg1 & 0x1fff) << 1) + 0x2636))
else
    if (edx_1 != 0x8000)
        return sx.d(arg1.w)
    
    int32_t ecx_1 = ecx & 0x2000
    uint32_t eax_4
    int32_t ecx_2
    
    if (ecx_1 == 0)
        ecx_2 = sx.d(arg1.w)
        eax_4 = zx.d(*((ecx_2 s>> 3 & 0x3ff) + esi + 0x200))
    label_414d5e:
        int32_t ecx_4 = ecx_2 & 7
        
        if (ecx_4 s< 0)
            ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
        
        return eax_4 u>> ecx_4.b & 1
    
    if (ecx_1 == 0x2000)
        ecx_2 = sx.d(arg1.w)
        eax_4 = zx.d(*((ecx_2 s>> 3 & 0x3ff) + esi + 0x2836))
        goto label_414d5e

return arg1
