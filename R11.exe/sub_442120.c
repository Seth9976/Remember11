// 函数: sub_442120
// 地址: 0x442120
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0

if (data_c7cc74 s<= 0)
    return 

void* esi_1 = nullptr
void* var_4_1 = nullptr
bool cond:1_1

do
    int32_t eax_1 = data_c7cc70
    int32_t* esi_2 = esi_1 + eax_1
    uint32_t eax_3 = *esi_2 u>> 4
    esi_2[5] = *(esi_1 + eax_1 + 4)
    esi_2[1] = 0
    esi_2[7] = 0x80
    esi_2[8] = 0x80
    esi_2[9] = 0x80
    esi_2[0xa] = 0x80
    
    if (eax_3 == 0xffff)
        sub_441f60(esi_2, data_c7cc60)
        sub_441f60(esi_2, data_c7cc60 + 0x22)
    else
        sub_441f60(esi_2, data_c7cc60 + eax_3 * 0x22)
    
    int32_t ecx_3 = esi_2[5]
    int32_t eax_7 = esi_2[1]
    esi_2[3] = not.d(eax_7) & ecx_3
    esi_2[2] = not.d(ecx_3) & eax_7
    int32_t i = 0
    void* eax_10 = &esi_2[0xb]
    
    do
        if ((esi_2[1] & 1 << i.b) == 0)
            *eax_10 = 0
        else
            int32_t edx_9 = *eax_10
            
            if (edx_9 != 0xffffffff)
                *eax_10 = edx_9 + 1
        
        i += 1
        eax_10 += 4
    while (i s< 0x20)
    
    if (data_c7cc64 != 0)
        esi_2[4] = 0
        int32_t edi_1 = 2
        void* ebx_1 = &esi_2[0xc]
        
        do
            int32_t ecx_4 = *(ebx_1 - 4)
            data_c7cc64
            
            if (divs.dp.d(sx.q(ecx_4), data_c7cc64) != 0)
                int32_t ebp_2 = data_c7cc6c
                
                if (ebp_2 != 0 && mods.dp.d(sx.q(ecx_4 - 1), ebp_2) == 0)
                    esi_2[4] |= 1 << (edi_1.b - 2)
            else
                int32_t ebp_1 = data_c7cc68
                
                if (ebp_1 != 0 && mods.dp.d(sx.q(ecx_4 - 1), ebp_1) == 0)
                    esi_2[4] |= 1 << (edi_1.b - 2)
            
            int32_t ecx_7 = *ebx_1
            data_c7cc64
            
            if (divs.dp.d(sx.q(ecx_7), data_c7cc64) != 0)
                int32_t ebp_4 = data_c7cc6c
                
                if (ebp_4 != 0 && mods.dp.d(sx.q(ecx_7 - 1), ebp_4) == 0)
                    esi_2[4] |= 1 << (edi_1.b - 1)
            else
                int32_t ebp_3 = data_c7cc68
                
                if (ebp_3 != 0 && mods.dp.d(sx.q(ecx_7 - 1), ebp_3) == 0)
                    esi_2[4] |= 1 << (edi_1.b - 1)
            
            int32_t ecx_10 = *(ebx_1 + 4)
            data_c7cc64
            
            if (divs.dp.d(sx.q(ecx_10), data_c7cc64) != 0)
                int32_t ebp_6 = data_c7cc6c
                
                if (ebp_6 != 0 && mods.dp.d(sx.q(ecx_10 - 1), ebp_6) == 0)
                    esi_2[4] |= 1 << edi_1.b
            else
                int32_t ebp_5 = data_c7cc68
                
                if (ebp_5 != 0 && mods.dp.d(sx.q(ecx_10 - 1), ebp_5) == 0)
                    esi_2[4] |= 1 << edi_1.b
            
            int32_t ecx_13 = *(ebx_1 + 8)
            data_c7cc64
            
            if (divs.dp.d(sx.q(ecx_13), data_c7cc64) != 0)
                int32_t ebp_8 = data_c7cc6c
                
                if (ebp_8 != 0 && mods.dp.d(sx.q(ecx_13 - 1), ebp_8) == 0)
                    esi_2[4] |= 1 << (edi_1.b + 1)
            else
                int32_t ebp_7 = data_c7cc68
                
                if (ebp_7 != 0 && mods.dp.d(sx.q(ecx_13 - 1), ebp_7) == 0)
                    esi_2[4] |= 1 << (edi_1.b + 1)
            
            edi_1 += 4
            ebx_1 += 0x10
        while (edi_1 - 2 s< 0x20)
    
    esi_1 = var_4_1 + 0xac
    cond:1_1 = var_8 + 1 s< data_c7cc74
    var_8 += 1
    var_4_1 = esi_1
while (cond:1_1)
