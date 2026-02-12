// 函数: sub_430880
// 地址: 0x430880
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edx = data_a5dd08
int16_t* esi
int16_t* edi_1
edi_1, esi = __builtin_memcpy(edx + 0x48e098, 0x4a0880, 0x14)
*edi_1 = *esi
edi_1[1].b = esi[1].b
*(edx + 0x48f098) = 0x5e815182
*(edx + 0x48f09c) = 0
void* result = edx + 0x48f097
char i

do
    i = *(result + 1)
    result += 1
while (i != 0)
*result = 0x5382
int32_t edi_4 = 0
*(result + 2) = 0

if (data_2b55ef8 u> 0)
    int32_t ebp_1 = 0
    
    while (true)
        if (sub_401e00(zx.d(*(data_2b55ef4 + (edi_4 << 1)))) == 0)
            *(edx + ebp_1 + 0x491c98) = 0
            char* eax_3 = *(data_2b55ef0 + (edi_4 << 2))
            char i_1
            
            do
                i_1 = *eax_3
                eax_3 = &eax_3[1]
            while (i_1 != 0)
            
            uint32_t i_4 = (eax_3 - &eax_3[1]) u>> 1
            
            if (i_4 s> 0x17)
                i_4 = 0x17
            label_43095d:
                uint32_t i_3 = i_4
                uint32_t i_2
                
                do
                    void* eax_6 = edx + ebp_1 + 0x491c97
                    
                    do
                        i_1 = *(eax_6 + 1)
                        eax_6 += 1
                    while (i_1 != 0)
                    
                    i_2 = i_3
                    i_3 -= 1
                    *eax_6 = 0x4881
                    *(eax_6 + 2) = 0
                while (i_2 != 1)
            else if (i_4 s> 0)
                goto label_43095d
        else
            char* ecx_2 = *(data_2b55ef0 + (edi_4 << 2))
            char* edx_2 = edx + ebp_1 + 0x491c98
            int32_t eax_2
            
            do
                eax_2.b = *ecx_2
                *edx_2 = eax_2.b
                ecx_2 = &ecx_2[1]
                edx_2 = &edx_2[1]
            while (eax_2.b != 0)
        
        char* esi_4 = data_a5dd08 + ebp_1 + &data_4b2098
        edi_4 += 1
        sub_4414c0(edi_4, esi_4, "%3d")
        int16_t* esi_5 = &esi_4[0xffffffff]
        
        do
            result.b = *(esi_5 + 1)
            esi_5 += 1
        while (result.b != 0)
        
        result.w = 0x4481
        *esi_5 = 0x4481
        esi_5[1].b = 0
        ebp_1 += 0x400
        
        if (edi_4 u>= data_2b55ef8)
            break
        
        edx = data_a5dd08

return result
