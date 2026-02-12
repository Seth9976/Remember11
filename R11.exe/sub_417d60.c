// 函数: sub_417d60
// 地址: 0x417d60
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_448340(data_4ca040)
int32_t i_3 = 0
int16_t* ecx_1 = data_e7e648 + 0x1f5dc
int32_t var_90[0x24]
var_8c

for (int32_t i = 0; i s< 0x12; )
    if (*ecx_1 != 0xffff)
        int32_t edx_1 = *(ecx_1 + 0xfc)
        var_90[i_3 * 2] = i
        *(&var_8c + (i_3 << 3)) = edx_1
        i_3 += 1
    
    i += 1
    ecx_1 = &ecx_1[0x82]

int32_t i_4 = i_3

if (i_3 s> 0)
    int32_t ecx_2 = 1
    int32_t edi_1 = 0
    int32_t var_98_1 = 1
    int32_t i_2 = i_3
    int32_t i_1
    
    do
        if (ecx_2 s< i_3)
            int32_t __saved_edi
            void* eax = &__saved_edi + edi_1 + 0x24
            int32_t j_1 = i_3 - ecx_2
            int32_t j
            
            do
                if (*(&var_8c + edi_1) u> *(eax + 4))
                    int32_t ecx_4 = *(&var_90 + edi_1)
                    int32_t edx_2 = *(&var_8c + edi_1)
                    *(&var_90 + edi_1) = *eax
                    *(&var_8c + edi_1) = *(eax + 4)
                    i_3 = i_4
                    *eax = ecx_4
                    *(eax + 4) = edx_2
                
                eax += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
            ecx_2 = var_98_1
        
        ecx_2 += 1
        edi_1 += 8
        i_1 = i_2
        i_2 -= 1
        var_98_1 = ecx_2
    while (i_1 != 1)

void* result = *(data_e7e648 + 0x20824)
int32_t ebp = 0

if (i_3 s> 0)
    do
        void* edi_2 = var_90[ebp * 2] * 0x104 + data_e7e648 + 0x1f5dc
        int32_t* eax_3 = *(edi_2 + 0xfc)
        void* ecx_6 = eax_3[*eax_3]
        
        if (eax_3 != result)
            sub_480ea0(result, eax_3, ecx_6)
            *(edi_2 + 0xfc) = result
        
        ebp += 1
        result += ecx_6
    while (ebp s< i_3)

return result
