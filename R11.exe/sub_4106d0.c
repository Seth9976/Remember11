// 函数: sub_4106d0
// 地址: 0x4106d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
void* i_2 = *(eax + 0x4c)
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax
data_a59b20 = i_2

if (not(cond:0))
    *(eax + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t ecx = sx.d(*(arg1 + 0x10))

if (ecx == 0)
    int16_t* ecx_4 = i_2 + 0x20
    *(eax + 8) = 0
    i_2 = 0x1e
    void* i
    
    do
        *ecx_4 = 0x100
        ecx_4 = &ecx_4[5]
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    if (*(eax + 0x29) == 1)
        void* i_3 = i_2 + 0x1e
        void* i_1
        
        do
            i_2 = sub_4105a0(0)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        eax = data_a59b24
    
    *(arg1 + 0x10) = 1
    goto label_41079d

if (ecx == 1)
label_41079d:
    int16_t ecx_5 = *(eax + 0x2a)
    
    if (ecx_5 != 0)
        if (*(eax + 8) == zx.d(ecx_5))
            int32_t __saved_esi_3 = 0
            sub_40fca0(eax, i_2.b)
            eax = data_a59b24
        
        *(eax + 8) += 1
    
    sub_4105a0(1)
else if (ecx == 0x64)
    int32_t eax_1
    char edx
    eax_1, edx = sub_4105a0(2)
    void* eax_2 = data_a59b24
    
    if (eax_1 == 0x1e)
        int32_t __saved_esi_1 = 0
        sub_40fca0(eax_2, edx)
        return 0
    
    if (*(eax_2 + 8) s>= 0x258)
        int32_t __saved_esi_2 = 0
        sub_40fca0(eax_2, edx)
        eax_2 = data_a59b24
    
    *(eax_2 + 8) += 1

return 0
