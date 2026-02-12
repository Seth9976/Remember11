// 函数: sub_4270f0
// 地址: 0x4270f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0
int32_t var_4 = 0
void* eax = arg1
int32_t ecx = *(eax + 0x234)
void* ebx = eax + 0x23c
void* var_10 = ebx

while (true)
    int32_t esi_1 = 0
    
    if (ecx s> 0)
        char* ebp_1 = *(eax + 0x238)
        char* edi_1 = ebp_1
        
        while (true)
            char* ecx_1 = edi_1
            void* eax_1 = ebx + 0x20
            int32_t eax_3
            
            while (true)
                void* edx
                edx.b = *eax_1
                char temp0_1 = *ecx_1
                bool c_1 = edx.b u< temp0_1
                
                if (edx.b == temp0_1)
                    if (edx.b == 0)
                        eax_3 = 0
                        break
                    
                    edx.b = *(eax_1 + 1)
                    char temp3_1 = ecx_1[1]
                    c_1 = edx.b u< temp3_1
                    
                    if (edx.b == temp3_1)
                        eax_1 += 2
                        ecx_1 = &ecx_1[2]
                        
                        if (edx.b != 0)
                            continue
                        
                        eax_3 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_3 = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
                break
            
            if (eax_3 == 0)
                if (*(var_10 + 0x10) != *(esi_1 * 0x104 + ebp_1 + 0x100))
                    return 1
                
                var_8 += 1
                break
            
            esi_1 += 1
            edi_1 = &edi_1[0x104]
            
            if (esi_1 s>= ecx)
                break
    
    ebx = var_10 + 0x40
    bool cond:0_1 = var_4 + 1 s< 5
    var_4 += 1
    var_10 = ebx
    
    if (not(cond:0_1))
        break
    
    eax = arg1

int32_t result
result.b = var_8 != ecx
return result
