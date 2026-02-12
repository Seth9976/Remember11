// 函数: sub_41a850
// 地址: 0x41a850
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx = data_a5d8f8
int32_t eax = sx.d(*(ecx + 0x5c2c))
int32_t edx_1 = eax * 0x5c10
int32_t ecx_1 = *(edx_1 + ecx + 0x74)
void* var_c = ecx_1 * 0x34 + edx_1 + ecx + 0x1c + 0x80
int32_t eax_3
int32_t edx_5
edx_5:eax_3 = sx.q(eax * 0x1b8 + *(edx_1 + ecx + 0x70))
int32_t result = arg1
int32_t ebx_1 = (eax_3 - edx_5) s>> 1
int32_t var_4 = ecx_1
*(edx_1 + ecx + 0x94) = result
*(edx_1 + ecx + 0x98) = arg2
int32_t result_1 = 0

if (arg3 != 0)
    while (true)
        result = *(edx_1 + ecx + 0x70)
        
        if (result s>= ecx_1)
            break
        
        if (*(ecx + 0x5c2c + (result << 1) + 2) != 0)
            uint32_t edi_2 = zx.d(ebx_1.w)
            sub_43aa10(arg1 << 0x10 | edi_2, ecx + 0x5c2c + (result << 1) + 2)
            sub_43aa10(arg2 << 0x10 | edi_2, ecx + 0x5c2c + (*(edx_1 + ecx + 0x70) << 1) + 4)
            ecx_1 = var_4
        
        void* edx_8 = var_c
        *(edx_1 + ecx + 0x70) += 2
        var_c += 0x68
        ebx_1 += 1
        
        if (*edx_8 s> 0)
            result = result_1 + 2
            result_1 = result
            
            if (result == arg3)
                break

return result
