// 函数: sub_451010
// 地址: 0x451010
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = arg3
int32_t* ecx = arg2
int32_t* edx = arg1

while (i u>= 4)
    if (*edx != *ecx)
        goto label_45103b
    
    i -= 4
    ecx = &ecx[1]
    edx = &edx[1]

if (i != 0)
label_45103b:
    uint32_t esi_2 = zx.d(*edx)
    uint32_t edi_1 = zx.d(*ecx)
    uint32_t esi_3 = esi_2 - edi_1
    
    if (esi_2 != edi_1)
    label_45108c:
        
        if (esi_3 s> 0)
            return 1
        
        return 0xffffffff
    
    if (i != 1)
        uint32_t esi_4 = zx.d(*(edx + 1))
        uint32_t edi_2 = zx.d(*(ecx + 1))
        esi_3 = esi_4 - edi_2
        
        if (esi_4 != edi_2)
            goto label_45108c
        
        if (i != 2)
            uint32_t esi_5 = zx.d(*(edx + 2))
            uint32_t edi_3 = zx.d(*(ecx + 2))
            esi_3 = esi_5 - edi_3
            
            if (esi_5 != edi_3)
                goto label_45108c
            
            if (i != 3)
                uint32_t esi_6 = zx.d(*(edx + 3))
                uint32_t eax_3 = zx.d(*(ecx + 3))
                esi_3 = esi_6 - eax_3
                
                if (esi_6 != eax_3)
                    goto label_45108c

return 0
