// 函数: sub_480cf0
// 地址: 0x480cf0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_3 = arg3

if (i_3 == 0)
    return arg1

int32_t eax
eax.b = arg2

if (eax.b == 0 && i_3 u>= 0x100 && data_2b6a9c0 != 0)
    return sub_4854c1(arg1, arg2) __tailcall

char* edi = arg1

if (i_3 u< 4)
label_480d5d:
    int32_t i
    
    do
        *edi = eax.b
        edi = &edi[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    int32_t i_2 = neg.d(arg1) & 3
    
    if (i_2 != 0)
        i_3 -= i_2
        int32_t i_1
        
        do
            *edi = eax.b
            edi = &edi[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    eax *= 0x1010101
    int32_t i_4 = i_3
    i_3 &= 3
    uint32_t ecx_5 = i_4 u>> 2
    
    if (ecx_5 == 0)
        goto label_480d5d
    
    int32_t ecx_6
    edi, ecx_6 = __memfill_u32(edi, eax, ecx_5)
    
    if (i_3 != 0)
        goto label_480d5d

return arg1
