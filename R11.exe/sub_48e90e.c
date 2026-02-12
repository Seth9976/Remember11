// 函数: sub_48e90e
// 地址: 0x48e90e
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_8 = ecx
uint32_t eax = zx.d(*(arg2 + 6))
int32_t* eax_1 = eax & 0x8000
int16_t ecx_3 = (eax u>> 4).w & 0x7ff
int32_t edx_1 = *arg2
uint32_t ebx = zx.d(ecx_3)
int32_t eax_3 = arg2[1] & 0xfffff
int32_t var_8_1 = 0x80000000
int32_t* result
int16_t ecx_4

if (ebx == 0)
    if (eax_3 != 0 || edx_1 != 0)
        ecx_4 = ecx_3 + 0x3c01
        var_8_1 = 0
        goto label_48e97d
    
    result = arg1
    ecx_3 = eax_1.w
    result[1] = 0
    *result = 0
else
    uint32_t edi_1
    
    if (ebx == 0x7ff)
        edi_1 = 0x7fff
    else
        ecx_4 = ecx_3 + 0x3c00
    label_48e97d:
        edi_1 = zx.d(ecx_4)
    
    int32_t ecx_8 = edx_1 u>> 0x15 | eax_3 << 0xb | var_8_1
    result = arg1
    result[1] = ecx_8
    *result = edx_1 << 0xb
    
    if ((0x80000000 & ecx_8) == 0)
        int32_t edx_5
        
        do
            int32_t ecx_9 = *result
            edx_5 = (result[1] * 2) | ecx_9 u>> 0x1f
            edi_1 += 0xffff
            result[1] = edx_5
            *result = ecx_9 * 2
        while ((0x80000000 & edx_5) == 0)
    
    ecx_3 = eax_1.w | edi_1.w
result[2].w = ecx_3
return result
