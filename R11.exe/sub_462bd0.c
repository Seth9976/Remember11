// 函数: sub_462bd0
// 地址: 0x462bd0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* ebx = arg2

if (*(ebx + 0xad) == 1)
    int32_t edx_1 = ebx[3]
    int32_t ecx = ebx[2]
    int32_t var_10_1 = *ebx
    int32_t ebp_1 = ebx[4]
    int32_t var_4_1 = ebx[5]
    
    if ((ebp_1 & 0x40) == 0)
        goto label_462d02
    
    int32_t edx_3 = (ecx u>> 4 | edx_1 << 0x1c) & 3
    
    if (edx_3 == 0)
        if ((ecx & 3) == 0 && (ecx & 0xc) == 4 && (ecx & 0xc0) == 0x40)
            goto label_462c7e
        
        ebx = arg2
    else if (edx_3 != 2 || (ecx & 3) != 0 || (ecx & 0xc) != 4 || (ecx & 0xc0) != 0x40)
        ebx = arg2
    else
    label_462c7e:
        int32_t* esi_1
        
        if (edx_3 != 0)
        label_462cba:
            esi_1 = arg2
        else
            int32_t eax_16 = ebp_1 & 0x10
            int32_t var_8_1 = eax_16
            
            if (eax_16 == 0)
                goto label_462cba
            
            int32_t edi_3 = ebx[1] u>> 2 & 1
            int32_t var_8_2 = edi_3
            
            if (edi_3 == 0)
                goto label_462cba
            
            esi_1 = arg2
            
            if (*(esi_1[0x2a] + 0x48) == 1)
                if (esi_1[0x29].b == 1)
                    goto label_462cfe
                
                goto label_462cba
        
        if ((edx_3 != 0 || (ebp_1 & 0x10) != 0 || esi_1[0x29].b != 1)
                && (edx_3 != 2 || zx.d(edx_1.b) u< 0x80))
            ebx = arg2
        else
        label_462cfe:
            ebx = arg2
        label_462d02:
            void* edi_4 = arg1
            void* esi_2 = *(edi_4 + 4)
            
            if (esi_2 u> *(edi_4 + 8))
                __invalid_parameter_noinfo()
            
            void* ebp_3 = esi_2
            
            while (true)
                void* eax_21 = arg1
                int32_t esi_3 = *(eax_21 + 8)
                
                if (*(eax_21 + 4) u> esi_3)
                    __invalid_parameter_noinfo()
                    eax_21 = arg1
                
                if (edi_4 == 0 || edi_4 != eax_21)
                    __invalid_parameter_noinfo()
                
                if (ebp_3 == esi_3)
                    break
                
                if (edi_4 == 0)
                    __invalid_parameter_noinfo()
                
                if (ebp_3 u>= *(edi_4 + 8))
                    __invalid_parameter_noinfo()
                
                if (*(ebp_3 + 0xae) != 0)
                    void* esi_4 = *(arg1 + 4)
                    
                    if (esi_4 u> *(arg1 + 8))
                        __invalid_parameter_noinfo()
                    
                    while (true)
                        if (arg1 == 0 || arg1 != arg1)
                            __invalid_parameter_noinfo()
                        
                        if (esi_4 == ebp_3)
                            break
                        
                        if (arg1 == 0)
                            __invalid_parameter_noinfo()
                        
                        if (esi_4 u>= *(arg1 + 8))
                            __invalid_parameter_noinfo()
                        
                        *(esi_4 + 0xac) = 0
                        
                        if (esi_4 u>= *(arg1 + 8))
                            __invalid_parameter_noinfo()
                        
                        esi_4 += 0xb8
                else
                    int32_t eax_23 = *(ebp_3 + 0x40) & 0x1ff
                    
                    if (eax_23 == 0 || eax_23 == 1)
                        *(ebp_3 + 0xac) = 1
                
                edi_4 = arg1
                
                if (ebp_3 u>= *(edi_4 + 8))
                    __invalid_parameter_noinfo()
                
                ebp_3 += 0xb8

sub_462b20(arg1, ebx)
return 0
