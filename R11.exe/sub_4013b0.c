// 函数: sub_4013b0
// 地址: 0x4013b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (data_2b60340 == 0)
    sub_447c60(0x2b60348)
    data_2b60340 = 1
    uint32_t ecx_1 = zx.d(data_2b60349)
    data_2b60344 = data_2b603a8
    int32_t eax_2 = ecx_1 u>> 4 & 0x8000000f
    
    if (eax_2 s< 0)
        eax_2 = ((eax_2 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_2 = ecx_1 & 0x8000000f
    
    if (ecx_2 s< 0)
        ecx_2 = ((ecx_2 - 1) | 0xfffffff0) + 1
    
    data_2b60350 = ecx_2 + eax_2 * 0xa
    goto label_40146b

int32_t result = data_2b603a8 - data_2b60344

if (result s> 0x3c || result s< 0)
    sub_447c60(0x2b60348)
    uint32_t ecx_6 = zx.d(data_2b60349)
    int32_t eax_9 = ecx_6 u>> 4 & 0x8000000f
    data_2b60344 = data_2b603a8
    
    if (eax_9 s< 0)
        eax_9 = ((eax_9 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_7 = ecx_6 & 0x8000000f
    
    if (ecx_7 s< 0)
        ecx_7 = ((ecx_7 - 1) | 0xfffffff0) + 1
    
    data_2b60350 = ecx_7 + eax_9 * 0xa
label_40146b:
    uint32_t ecx_10 = zx.d(data_2b6034a)
    int32_t eax_14 = ecx_10 u>> 4 & 0x8000000f
    
    if (eax_14 s< 0)
        eax_14 = ((eax_14 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_11 = ecx_10 & 0x8000000f
    
    if (ecx_11 s< 0)
        ecx_11 = ((ecx_11 - 1) | 0xfffffff0) + 1
    
    data_2b60354 = ecx_11 + eax_14 * 0xa
    uint32_t ecx_15 = zx.d(data_2b6034b)
    int32_t eax_19 = ecx_15 u>> 4 & 0x8000000f
    
    if (eax_19 s< 0)
        eax_19 = ((eax_19 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_16 = ecx_15 & 0x8000000f
    
    if (ecx_16 s< 0)
        ecx_16 = ((ecx_16 - 1) | 0xfffffff0) + 1
    
    data_2b60358 = ecx_16 + eax_19 * 0xa
    uint32_t ecx_20 = zx.d(data_2b6034d)
    int32_t eax_24 = ecx_20 u>> 4 & 0x8000000f
    
    if (eax_24 s< 0)
        eax_24 = ((eax_24 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_21 = ecx_20 & 0x8000000f
    
    if (ecx_21 s< 0)
        ecx_21 = ((ecx_21 - 1) | 0xfffffff0) + 1
    
    data_2b6035c = ecx_21 + eax_24 * 0xa
    uint32_t ecx_25 = zx.d(data_2b6034e)
    int32_t eax_29 = ecx_25 u>> 4 & 0x8000000f
    
    if (eax_29 s< 0)
        eax_29 = ((eax_29 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_26 = ecx_25 & 0x8000000f
    
    if (ecx_26 s< 0)
        ecx_26 = ((ecx_26 - 1) | 0xfffffff0) + 1
    
    data_2b60360 = ecx_26 + eax_29 * 0xa
    uint32_t ecx_30 = zx.d(data_2b6034f)
    int32_t eax_34 = ecx_30 u>> 4 & 0x8000000f
    
    if (eax_34 s< 0)
        eax_34 = ((eax_34 - 1) | 0xfffffff0) + 1
    
    int32_t ecx_31 = ecx_30 & 0x8000000f
    result = (eax_34 + 0xc8) * 5
    
    if (ecx_31 s< 0)
        ecx_31 = ((ecx_31 - 1) | 0xfffffff0) + 1
    
    data_2b60364 = ecx_31 + (result << 1)

return result
