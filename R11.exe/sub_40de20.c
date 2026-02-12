// 函数: sub_40de20
// 地址: 0x40de20
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = arg1[0x11]
void* eax = *(ecx + 8)
int16_t edx = *(eax + 2)
uint32_t __saved_edi_1
bool cond:2_1

if (edx != 0)
    if (edx == 2)
        if (*(data_e7e648 + 0x289c) != 1)
            __saved_edi_1 = zx.d(*(eax + 1))
            goto label_40de41
        
        sub_41db10(zx.d(*(eax + 1)))
        void* eax_6 = arg1[0x11]
        *(eax_6 + 8) += 4
        sub_40a8a0(arg1)
        return 0
    
    int32_t edx_2 = data_e7e648
    uint32_t eax_8 = zx.d(*(eax + 1))
    
    if (*(edx_2 + 0x289c) != 1)
        if (*(edx_2 + eax_8 * 0xa + 0x20979) != 2)
            goto label_40ded8
        
        int32_t eax_9 = sub_41dba0(eax_8)
        
        if (eax_9 s>= 3)
            if (eax_9 s<= 4)
                goto label_40de49
            
            cond:2_1 = eax_9 != 6
            goto label_40de43
    else if (*(edx_2 + eax_8 * 0xa + 0x20979) != 2)
    label_40ded8:
        *(ecx + 8) += 4
        sub_40a8a0(arg1)
        return 0
else
    __saved_edi_1 = zx.d(*(eax + 1))
label_40de41:
    cond:2_1 = sub_41d820(__saved_edi_1) != 0
label_40de43:
    
    if (not(cond:2_1))
    label_40de49:
        void* eax_3 = arg1[0x11]
        *(eax_3 + 8) += 4
        sub_40a8a0(arg1)
        return 0
*(arg1 + 0xe) = 0
*(arg1 + 0xd) = 0
return 0
