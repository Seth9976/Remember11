// 函数: sub_430a30
// 地址: 0x430a30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_118
int32_t eax_1 = __security_cookie ^ &var_118
void* eax_2 = data_a5dd08
char* esi
char* edi_1
edi_1, esi = __builtin_memcpy(eax_2 + 0x48e498, 0x4a08a0, 0x18)
*edi_1 = *esi
*(eax_2 + 0x48f498) = 0x5e815282
*(eax_2 + 0x48f49c) = 0
void* result = eax_2 + 0x48f497
char i

do
    i = *(result + 1)
    result += 1
while (i != 0)
*result = 0x5382
int32_t edi_3 = 0
*(result + 2) = 0
int32_t var_108 = 0

if (data_2b55e8c u> 0)
    int32_t ebp_1 = 0
    int32_t var_114_1 = 0
    int32_t* var_10c_1 = 0x484
    
    while (true)
        int32_t esi_5
        
        if (sub_4020f0(edi_3) == 0)
            esi_5 = data_a5dd08
            *(esi_5 + ebp_1 + 0x4d2498) = 0
            char* eax_21 = *(data_2b55e88 + (edi_3 << 3) + 4)
            char i_1
            
            do
                i_1 = *eax_21
                eax_21 = &eax_21[1]
            while (i_1 != 0)
            
            int32_t i_6 = ((eax_21 - &eax_21[1]) u>> 1) + 1
            
            if (i_6 s> 0x17)
                i_6 = 0x17
            label_430c40:
                int32_t i_5 = i_6
                int32_t i_2
                
                do
                    void* eax_25 = esi_5 + ebp_1 + 0x4d2497
                    
                    do
                        i_1 = *(eax_25 + 1)
                        eax_25 += 1
                    while (i_1 != 0)
                    
                    i_2 = i_5
                    i_5 -= 1
                    *eax_25 = 0x4881
                    void* edx_11
                    edx_11.b = 0
                    *(eax_25 + 2) = 0
                while (i_2 != 1)
                ebp_1 = var_114_1
            else if (i_6 s> 0)
                goto label_430c40
            
            *(esi_5 + ebp_1 + 0x5d2c98) = 0
            *(var_10c_1 + esi_5) = 0xffffffff
        else
            char* ecx_1 = *(data_2b55e88 + (edi_3 << 3) + 4)
            char* edx_2 = data_a5dd08 + ebp_1 + 0x4d2498
            int32_t eax_5
            
            do
                eax_5.b = *ecx_1
                *edx_2 = eax_5.b
                ecx_1 = &ecx_1[1]
                edx_2 = &edx_2[1]
            while (eax_5.b != 0)
            int32_t ecx_2 = 0
            int32_t i_3 = 0
            bool cond:1_1 = data_2b55ebc u<= 0
            int32_t var_110_1 = 0
            var_118 = 0
            
            if (not(cond:1_1))
                int32_t* ebx_1 = nullptr
                
                do
                    if (sx.d(*(data_2b5a720 + (i_3 << 1))) == edi_3)
                        int32_t edi_4 = *(ebx_1 + data_2b55e84)
                        ecx_2 += edi_4
                        int32_t esi_2 = 0
                        var_110_1 = ecx_2
                        
                        if (edi_4 s> 0)
                            do
                                if (sub_401f80(i_3, esi_2) != 0)
                                    var_118 += 1
                                
                                esi_2 += 1
                            while (esi_2 s< edi_4)
                            
                            ecx_2 = var_110_1
                        
                        edi_3 = var_108
                    
                    i_3 += 1
                    ebx_1 = &ebx_1[3]
                while (i_3 u< data_2b55ebc)
            
            if (cond:1_1 || ecx_2 s<= 0)
                var_110_1 = 1
                ecx_2 = 1
            
            if (var_118 s> ecx_2)
                var_118 = ecx_2
            
            void* esi_3 = var_114_1 + data_a5dd08 + 0x5d2c98
            void var_104
            sub_4414c0(divs.dp.d(sx.q(var_118 * 0x64), ecx_2), &var_104, "%3d")
            void* eax_14 = &var_104
            char i_4
            
            do
                i_4 = *eax_14
                *(esi_3 - &var_104 + eax_14) = i_4
                eax_14 += 1
            while (i_4 != 0)
            
            void* eax_15 = esi_3 - 1
            
            do
                i_4 = *(eax_15 + 1)
                eax_15 += 1
            while (i_4 != 0)
            
            *eax_15 = 0x9381
            *(eax_15 + 2) = 0
            esi_5 = data_a5dd08
            ebp_1 = var_114_1
            *(var_10c_1 + esi_5) = divs.dp.d(sx.q(var_118 << 7), var_110_1)
        
        sub_4414c0(edi_3 + 1, esi_5 + ebp_1 + 0x552898, "%3d")
        int16_t* esi_7 = esi_5 + ebp_1 + 0x552897
        
        do
            result.b = *(esi_7 + 1)
            esi_7 += 1
        while (result.b != 0)
        
        var_10c_1 = &var_10c_1[1]
        var_114_1 += 0x400
        *esi_7 = 0x4481
        esi_7[1].b = 0
        var_108 = edi_3 + 1
        
        if (edi_3 + 1 u>= data_2b55e8c)
            break
        
        edi_3 = var_108
        ebp_1 = var_114_1

sub_480cd2(eax_1 ^ &var_118)
return result
