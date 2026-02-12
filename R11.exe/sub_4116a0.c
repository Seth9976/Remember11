// 函数: sub_4116a0
// 地址: 0x4116a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = *(arg1 + 0x44)
int32_t eax = *(esi + 0x4c)
bool cond:0 = *(esi + 0xc) != 1
data_a59b24 = esi
data_a59b0c = eax

if (not(cond:0))
    *(esi + 0x10) = 1
    *(esi + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t eax_1 = sx.d(*(arg1 + 0x10))
char edx

if (eax_1 == 0)
    *(esi + 8) = 0
    edx = sub_411440()
    
    if (*(esi + 0x29) == 1)
        int32_t i_1 = 0x12c
        int32_t i
        
        do
            edx = sub_411470(0)
            i = i_1
            i_1 -= 1
        while (i != 1)
        esi = data_a59b24
    
    *(arg1 + 0x10) = 1
    goto label_411778

if (eax_1 == 1)
label_411778:
    int16_t eax_11 = *(esi + 0x2a)
    
    if (eax_11 != 0)
        if (*(esi + 8) == zx.d(eax_11))
            int32_t var_10_4 = 0
            sub_40fca0(esi, edx)
            esi = data_a59b24
        
        *(esi + 8) += 1
    
    sub_411470(1)
else if (eax_1 == 0x64)
    if (*(esi + 0x29) == 1)
        int32_t var_10_1 = eax_1 - 0x64
        sub_40fca0(esi, edx)
        return 0
    
    int32_t eax_7
    char edx_1
    eax_7, edx_1 = sub_411470(2)
    void* eax_8 = data_a59b24
    
    if (eax_7 == 0)
        int32_t var_10_2 = 0
        sub_40fca0(eax_8, edx_1)
        return 0
    
    if (*(eax_8 + 8) s>= 0x258)
        int32_t var_10_3 = 0
        sub_40fca0(eax_8, edx_1)
        eax_8 = data_a59b24
    
    *(eax_8 + 8) += 1

return 0
