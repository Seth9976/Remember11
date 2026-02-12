// 函数: sub_4527e0
// 地址: 0x4527e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* var_4_1 = arg1
void** eax = *(arg1 + 4)
void** esi = eax[1]
void** var_4 = eax

if (*(esi + 0x31) != 0)
    return eax

void* ecx = *(arg2 + 0x18)
int32_t ebx_1 = *(arg2 + 0x14)

do
    void* edx_1
    
    if (ecx u< 0x10)
        edx_1 = arg2 + 4
    else
        edx_1 = *(arg2 + 4)
    
    int32_t edi_1 = esi[8]
    int32_t ecx_1 = edi_1
    
    if (edi_1 u>= ebx_1)
        ecx_1 = ebx_1
    
    int32_t* eax_2
    
    if (esi[9] u< 0x10)
        eax_2 = &esi[4]
    else
        eax_2 = esi[4]
    
    int32_t eax_3 = sub_451010(eax_2, edx_1, ecx_1)
    bool cond:2_1 = eax_3 s>= 0
    
    if (eax_3 != 0)
        goto label_45284d
    
    if (edi_1 u< ebx_1)
        esi = esi[2]
    else
        eax_3.b = edi_1 != ebx_1
        cond:2_1 = eax_3 s>= 0
    label_45284d:
        
        if (cond:2_1)
            var_4 = esi
            esi = *esi
        else
            esi = esi[2]
while (*(esi + 0x31) == 0)

return var_4
