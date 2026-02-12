// 函数: sub_41a5b0
// 地址: 0x41a5b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t i = *(arg1 + 0x74) + 1
int32_t i_1 = 0

if (i s> 0)
    void* edi_1 = arg1 + 0x59e8
    
    do
        int32_t j = 0
        
        if (*edi_1 s> 0)
            void* esi_1 = *(edi_1 - 4) * 0x34 + arg1 + 0xb0
            
            do
                int32_t eax_2 = *esi_1
                
                if (eax_2 != 0xffffffff)
                    int32_t eax_3 = sub_4153c0(eax_2)
                    char ecx_3 = *((eax_3 << 2) + &data_4b1790)
                    *(esi_1 - 0x1c) = ecx_3
                    *(esi_1 - 0x20) = ecx_3
                    ecx_3 = *((eax_3 << 2) + &data_4b1791)
                    *(esi_1 - 0x1b) = ecx_3
                    *(esi_1 - 0x1f) = ecx_3
                    ecx_3 = *((eax_3 << 2) + &data_4b1792)
                    *(esi_1 - 0x1a) = ecx_3
                    *(esi_1 - 0x1e) = ecx_3
                    eax_3.b = *((eax_3 << 2) + &data_4b1793)
                    *(esi_1 - 0x19) = eax_3.b
                    *(esi_1 - 0x1d) = eax_3.b
                
                j += 1
                esi_1 += 0x34
            while (j s< *edi_1)
        
        i = i_1 + 1
        edi_1 += 0x1c
        i_1 = i
    while (i s< *(arg1 + 0x74) + 1)

return i
