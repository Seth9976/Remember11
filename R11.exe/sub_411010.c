// 函数: sub_411010
// 地址: 0x411010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
void* edx = *(eax + 0x4c)
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax
data_a59b10 = edx

if (not(cond:0))
    *(eax + 0x10) = 1
    *(eax + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t ecx = sx.d(*(arg1 + 0x10))

if (ecx == 0)
    int16_t* ecx_4 = edx + 0x20
    int32_t i_2 = 0x32
    int32_t i
    
    do
        *ecx_4 = 0xffff
        ecx_4 = &ecx_4[0x16]
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    if (*(eax + 0x29) == 1)
        int32_t i_3 = 0x12c
        int32_t i_1
        
        do
            sub_410d50(0)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x10) = 1
    sub_410d50(1)
else if (ecx == 1)
    sub_410d50(1)
else if (ecx == 0x64)
    if (*(eax + 0x29) != 1)
        int32_t eax_2
        eax_2, edx = sub_410d50(2)
        eax = data_a59b24
        
        if (eax_2 != 0x32)
            if (*(eax + 8) s>= 0x258)
                int32_t __saved_esi_2 = 0
                sub_40fca0(eax, edx.b)
                eax = data_a59b24
            
            *(eax + 8) += 1
            return 0
    
    int32_t __saved_esi_1 = 0
    sub_40fca0(eax, edx.b)

return 0
