// 函数: sub_41aa60
// 地址: 0x41aa60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ebp = data_a5d8f8

if (*(ebp + 0x20) != 1)
    return 

int32_t i = 0
void* eax = ebp + 0x9c

if (*(ebp + 0x70) s<= 0)
    return 

do
    int32_t esi_1 = *(eax + 0x18)
    
    if (esi_1 != 0)
        int32_t ecx_1 = *eax
        
        if (ecx_1 s<= 0)
            goto label_41aaa5
        
        if (arg1 != 0)
            *eax = 0
        label_41aaac:
            
            if (*(eax + 4) == 0)
                int32_t ecx_4
                
                if (arg1 == 0)
                    ecx_4 = *(eax + 0xc) + *(eax + 8)
                
                if (arg1 != 0 || ecx_4 s>= 0x80)
                    *(eax + 8) = 0x80
                else
                    *(eax + 8) = ecx_4
            else if (arg1 != 0)
                *(eax + 8) = 0
            else
                int32_t ecx_6 = *(eax + 8) - *(eax + 0xc)
                int32_t ebx_3
                ebx_3.b = ecx_6 s<= 0
                *(eax + 8) = (ebx_3 - 1) & ecx_6
            
            if (esi_1 - 4 u<= 3)
                switch (esi_1)
                    case 4, 5
                        *(eax + 0x1c) += 1
                    case 6, 7
                        int32_t ecx_8 = *(eax + 0x1c)
                        
                        if (ecx_8 s< 0x40)
                            *(eax + 0x1c) = ecx_8 + 1
        else
            *eax = ecx_1 - 1
        label_41aaa5:
            
            if (*eax == 0)
                goto label_41aaac
    
    i += 1
    eax += 0x34
while (i s< *(ebp + 0x70))
