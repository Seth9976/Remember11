// 函数: sub_414db0
// 地址: 0x414db0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

uint32_t ecx_9 = zx.d(arg1)
int32_t eax = data_e7e648
int32_t edx_1 = ecx_9 & 0xc000

if (edx_1 == 0x4000)
    int32_t edx_10 = ecx_9 & 0x2000
    
    if (edx_10 == 0)
        edx_10.w = arg2
        *(eax + ((ecx_9 & 0x1fff) << 1)) = edx_10.w
    else if (edx_10 == 0x2000)
        edx_10.w = arg2
        *(eax + ((ecx_9 & 0x1fff) << 1) + 0x2636) = edx_10.w
else if (edx_1 == 0x8000)
    int32_t edx_3 = ecx_9 & 0x2000
    char* eax_1
    int32_t ecx
    
    if (edx_3 == 0)
        ecx = ecx_9 & 0x1fff
        eax_1 = (ecx_9 u>> 3 & 0x3ff) + eax + 0x200
    label_414e22:
        int32_t edx_6
        
        if ((arg2.b & 1) != 0)
            int32_t ecx_4 = ecx & 0x80000007
            
            if (ecx_4 s< 0)
                ecx_4 = ((ecx_4 - 1) | 0xfffffff8) + 1
            
            edx_6.b = 1
            edx_6.b = 1 << ecx_4.b
            *eax_1 |= edx_6.b
            return eax_1
        
        int32_t ecx_1 = ecx & 0x80000007
        
        if (ecx_1 s< 0)
            ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1
        
        edx_6.b = 1
        edx_6.b = 1 << ecx_1.b
        edx_6.b = not.b(edx_6.b)
        *eax_1 &= edx_6.b
        return eax_1
    
    if (edx_3 == 0x2000)
        ecx = ecx_9 & 0x1fff
        eax_1 = (ecx_9 u>> 3 & 0x3ff) + eax + 0x2836
        goto label_414e22

return eax
