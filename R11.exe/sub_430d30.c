// 函数: sub_430d30
// 地址: 0x430d30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ecx
int32_t var_4 = ecx
void* result = data_a5dd08
__builtin_memcpy(result + 0x48e898, 
    "\x81\x7c\x82\x73\x82\x68\x82\x6f\x82\x72\x83\x8a\x83\x58\x83\x67\x81\x7c\x00", 0x13)
*(result + 0x48f898) = 0x5e815382
*(result + 0x48f89c) = 0
void* ecx_2 = result + 0x48f897
char i

do
    i = *(ecx_2 + 1)
    ecx_2 += 1
while (i != 0)
*ecx_2 = 0x5382
int32_t ebp = 0
*(ecx_2 + 2) = 0

if (data_2b5a740 u> 0)
    var_4 = 0
    
    while (true)
        uint32_t eax = sub_402210(ebp)
        char* eax_1 = sub_402220(eax, 0)
        char* eax_3 = eax_1
        char i_1
        
        if (sub_4021b0(eax) == 0)
            void* edx_3 = &eax_3[1]
            
            do
                i_1 = *eax_3
                eax_3 = &eax_3[1]
            while (i_1 != 0)
            
            *(var_4 + result + 0x653098) = i_1
            
            if (((eax_3 - edx_3) u>> 1) + 1 s> 0)
                int32_t i_3 = ((eax_3 - edx_3) u>> 1) + 1
                int32_t i_2
                
                do
                    void* eax_8 = var_4 + result + 0x653097
                    
                    do
                        i_1 = *(eax_8 + 1)
                        eax_8 += 1
                    while (i_1 != 0)
                    
                    i_2 = i_3
                    i_3 -= 1
                    *eax_8 = 0x4881
                    *(eax_8 + 2) = 0
                while (i_2 != 1)
        else
            do
                i_1 = *eax_3
                *(var_4 + result + 0x653098 - eax_1 + eax_3) = i_1
                eax_3 = &eax_3[1]
            while (i_1 != 0)
        char* esi_2 = var_4 + data_a5dd08 + 0x693498
        int32_t ecx_4
        result, ecx_4 = sub_4414c0(ebp + 1, esi_2, "%3d")
        int16_t* esi_3 = &esi_2[0xffffffff]
        
        do
            result.b = *(esi_3 + 1)
            esi_3 += 1
        while (result.b != 0)
        
        var_4 += 0x400
        *esi_3 = 0x4481
        ebp += 1
        esi_3[1].b = 0
        
        if (ebp u>= data_2b5a740)
            break
        
        result = data_a5dd08

return result
