// 函数: sub_401eb0
// 地址: 0x401eb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx_9 = zx.d(arg1)
int32_t eax_1 = ecx_9 & 0xc000

if (eax_1 == 0x4000)
    eax_1 = ecx_9 & 0x2000
    
    if (eax_1 == 0)
        *(((ecx_9 & 0x1fff) << 1) + &data_2b5aa20) = arg2
    else if (eax_1 == 0x2000)
        eax_1.w = arg2
        *(((ecx_9 & 0x1fff) << 1) + &data_2b5a860) = eax_1.w
else if (eax_1 == 0x8000)
    eax_1 = ecx_9 & 0x2000
    void* eax_6
    int32_t ecx
    
    if (eax_1 == 0)
        ecx = ecx_9 & 0x1fff
        eax_6 = (ecx_9 u>> 3 & 0x3ff) + &data_2b5aa60
    label_401f10:
        int16_t edx
        
        if ((arg2.b & 1) != 0)
            int32_t ecx_4 = ecx & 0x80000007
            
            if (ecx_4 s< 0)
                ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
            
            edx.b = 1
            edx.b = 1 << ecx_4.b
            *eax_6 |= edx.b
            return eax_6
        
        int32_t ecx_1 = ecx & 0x80000007
        
        if (ecx_1 s< 0)
            ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1
        
        edx.b = 1
        edx.b = 1 << ecx_1.b
        edx.b = not.b(edx.b)
        *eax_6 &= edx.b
        return eax_6
    
    if (eax_1 == 0x2000)
        ecx = ecx_9 & 0x1fff
        eax_6 = (ecx_9 u>> 3 & 0x3ff) + &data_2b5a920
        goto label_401f10

return eax_1
