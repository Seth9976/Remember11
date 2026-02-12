// 函数: sub_456390
// 地址: 0x456390
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = arg1 + 8
void* ebp = **(arg1 + 0xc)
void* var_c = arg1
void* var_8 = esi
void* var_4 = ebp

while (true)
    int32_t edi_1 = *(arg1 + 0xc)
    
    if (esi == 0 || esi != arg1 + 8)
        __invalid_parameter_noinfo()
    
    if (ebp == edi_1)
        break
    
    if (esi == 0)
        __invalid_parameter_noinfo()
    
    if (ebp == *(esi + 4))
        __invalid_parameter_noinfo()
    
    if (*(ebp + 0x70) == 1 && sub_451c20(ebp + 0x74, 0, *(ebp + 0x88), &data_49e15e, 0) != 0)
        int32_t* eax_3 = arg2
        void* edx_1 = eax_3 + 1
        char i
        
        do
            i = *eax_3
            eax_3 += 1
        while (i != 0)
        
        if (sub_451c20(ebp + 0x74, 0, *(ebp + 0x88), arg2, eax_3 - edx_1) == 0)
            int32_t* esi_2 = *(ebp + 0x54)
            void* edi_3 = ebp + 0x50
            
            if (esi_2 u> *(ebp + 0x58))
                __invalid_parameter_noinfo()
            
            while (true)
                int32_t ebp_1 = *(edi_3 + 8)
                
                if (*(edi_3 + 4) u> ebp_1)
                    __invalid_parameter_noinfo()
                
                if (edi_3 == 0 || edi_3 != edi_3)
                    __invalid_parameter_noinfo()
                
                if (esi_2 == ebp_1)
                    break
                
                if (edi_3 == 0)
                    __invalid_parameter_noinfo()
                
                if (esi_2 u>= *(edi_3 + 8))
                    __invalid_parameter_noinfo()
                
                int16_t x87control
                int80_t st0_1
                st0_1, x87control = sub_455030(x87control, *(*esi_2 + 0x40))
                
                if (esi_2 u>= *(edi_3 + 8))
                    __invalid_parameter_noinfo()
                
                esi_2 = &esi_2[2]
    
    sub_450e90(&var_8)
    ebp = var_4
    esi = var_8
