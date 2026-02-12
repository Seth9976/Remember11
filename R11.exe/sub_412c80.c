// 函数: sub_412c80
// 地址: 0x412c80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = *(arg1 + 0x44)
int32_t ecx = *(eax + 0x4c)
bool cond:0 = *(eax + 0xc) != 1
data_a59b24 = eax
data_a59af8 = ecx

if (not(cond:0))
    *(eax + 0x10) = 1
    *(eax + 8) = 0
    *(arg1 + 0x10) = 0x64

int32_t ecx_1 = sx.d(*(arg1 + 0x10))

if (ecx_1 == 0)
    *(eax + 8) = 0
    sub_412240()
    eax = data_a59b24
    
    if (*(eax + 0x29) == 1)
        int32_t i_1 = 0x12c
        int32_t i
        
        do
            sub_412290(0)
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax = data_a59b24
    
    *(arg1 + 0x10) = 1
    goto label_412d08

if (ecx_1 == 1)
label_412d08:
    int16_t ecx_7 = *(eax + 0x2a)
    
    if (ecx_7 != 0)
        uint32_t edx_1 = zx.d(ecx_7)
        
        if (*(eax + 8) == edx_1)
            int32_t __saved_edi_2 = 0
            sub_40fca0(eax, edx_1.b)
            eax = data_a59b24
        
        *(eax + 8) += 1
    
    sub_412290(1)
else if (ecx_1 == 0x64)
    int32_t __saved_edi_1 = ecx_1 - 0x64
    char edx
    sub_40fca0(eax, edx)

return 0
