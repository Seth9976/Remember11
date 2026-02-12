// 函数: sub_410220
// 地址: 0x410220
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
int32_t edx = *(eax + 0x4c)
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax
data_a59b18 = edx

if (not(cond:0))
    *(eax + 0x10) = 1
    *(eax + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t ecx = sx.d(*(arg1 + 0x10))

if (ecx == 0)
    *(eax + 8) = 0
    int32_t ebx_1 = edx + 0x20
    int32_t i_2 = 0x7fb
    int32_t i
    
    do
        sub_40ff90()
        ebx_1 += 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    eax = data_a59b24
    
    if (*(eax + 0x29) == 1)
        int32_t i_3 = 0x1e
        int32_t i_1
        
        do
            sub_410040(0)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        eax = data_a59b24
    
    *(arg1 + 0x10) = 1
    goto label_410317

if (ecx == 1)
label_410317:
    int16_t ecx_9 = *(eax + 0x2a)
    
    if (ecx_9 != 0)
        uint32_t edx_1 = zx.d(ecx_9)
        
        if (*(eax + 8) == edx_1)
            int32_t var_10_3 = 0
            sub_40fca0(eax, edx_1.b)
            eax = data_a59b24
        
        *(eax + 8) += 1
    
    sub_410040(1)
else if (ecx == 0x64)
    if (*(eax + 0x29) != 1)
        int32_t eax_2 = sub_410040(2)
        int32_t eax_4
        edx:eax_4 = muls.dp.d(0x55555556, sx.d(*data_a59b18) * 2)
        eax = data_a59b24
        
        if (eax_2 != (edx u>> 0x1f) + edx)
            if (*(eax + 8) s>= 0x258)
                int32_t var_10_2 = 0
                sub_40fca0(eax, edx.b)
                eax = data_a59b24
            
            *(eax + 8) += 1
            return 0
    
    int32_t var_10_1 = 0
    sub_40fca0(eax, edx.b)

return 0
