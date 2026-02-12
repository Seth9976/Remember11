// 函数: sub_461940
// 地址: 0x461940
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*(((*(arg1 + 0x10) & 7) << 2) + &data_4a393c) == *(((*(arg2 + 0x10) & 7) << 2) + &data_4a393c))
    int32_t eax_2 = *(arg1 + 0x10)
    int32_t esi_1 = *(arg2 + 0x10)
    
    if (((eax_2 ^ esi_1) & 8) == 0)
        int32_t ebx_3 = (eax_2 u>> 4 | *(arg1 + 0x14) << 0x1c) & 1
        
        if (ebx_3 == ((esi_1 u>> 4 | *(arg2 + 0x14) << 0x1c) & 1) && ((eax_2 ^ esi_1) & 0x20) == 0
                && ((eax_2 ^ esi_1) & 0x40) == 0 && ((eax_2 ^ esi_1) & 0x80) == 0)
            int32_t edx_25 = (eax_2 ^ esi_1) & 0x100
            
            if (edx_25 == 0)
                int32_t eax_5 = ((eax_2 ^ esi_1) & 0x400) | edx_25
                
                if (eax_5 == 0)
                    if ((ebx_3 | eax_5) == 0)
                    label_461a2b:
                        
                        if (*(arg1 + 8) == *(arg2 + 8) && *(arg1 + 0xc) == *(arg2 + 0xc)
                                && *(arg1 + 0x38) == *(arg2 + 0x38)
                                && *(arg1 + 0x3c) == *(arg2 + 0x3c)
                                && *(arg1 + 0x28) == *(arg2 + 0x28)
                                && *(arg1 + 0x2c) == *(arg2 + 0x2c)
                                && *(arg1 + 0x40) == *(arg2 + 0x40)
                                && *(arg1 + 0x44) == *(arg2 + 0x44)
                                && *(arg1 + 0x30) == *(arg2 + 0x30)
                                && *(arg1 + 0x34) == *(arg2 + 0x34)
                                && *(arg1 + 0x48) == *(arg2 + 0x48)
                                && *(arg1 + 0x4c) == *(arg2 + 0x4c)
                                && *(arg1 + 0x50) == *(arg2 + 0x50)
                                && *(arg1 + 0x54) == *(arg2 + 0x54)
                                && *(arg1 + 0x58) == *(arg2 + 0x58)
                                && *(arg1 + 0x5c) == *(arg2 + 0x5c)
                                && *(arg1 + 0x60) == *(arg2 + 0x60)
                                && *(arg1 + 0x64) == *(arg2 + 0x64)
                                && *(arg1 + 0x88) == *(arg2 + 0x88))
                            return 1
                    else
                        void* edx_26 = *(arg1 + 0xa8)
                        
                        if (edx_26 != 0)
                            void* eax_6 = *(arg2 + 0xa8)
                            
                            if (eax_6 != 0 && *(edx_26 + 0x40) == *(eax_6 + 0x40))
                                goto label_461a2b

return 0
