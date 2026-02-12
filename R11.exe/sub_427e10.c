// 函数: sub_427e10
// 地址: 0x427e10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_3
int32_t eax_1 = __security_cookie ^ &i_3
data_4be3d4 = data_a5dce4 + 0xc264
sub_43a9a0(1, 0x4be3c8)
void* edx = data_a5dce4
char* eax_4 = edx + 0x2c264
int32_t i_4 = 0x68b
int32_t i

do
    *eax_4 = 0
    eax_4 = &eax_4[0x80]
    i = i_4
    i_4 -= 1
while (i != 1)
*(edx + 0x2c264) = 0x4f82
*(edx + 0x2c266) = 0
*(edx + 0x2c2e4) = 0x5082
*(edx + 0x2c2e6) = 0
*(edx + 0x2c364) = 0x5182
*(edx + 0x2c366) = 0
*(edx + 0x2c3e4) = 0x5282
*(edx + 0x2c3e6) = 0
*(edx + 0x2c464) = 0x5382
*(edx + 0x2c466) = 0
*(edx + 0x2c4e4) = 0x5482
*(edx + 0x2c4e6) = 0
*(edx + 0x2c564) = 0x5582
*(edx + 0x2c566) = 0
*(edx + 0x2c5e4) = 0x5682
*(edx + 0x2c5e6) = 0
*(edx + 0x2c664) = 0x5782
*(edx + 0x2c666) = 0
*(edx + 0x2c6e4) = 0x5882
*(edx + 0x2c6e6) = 0
*(edx + 0x2c764) = 0x4681
*(edx + 0x2c766) = 0
int32_t i_1 = 0

if (data_2b5a730 u> 0)
    int32_t ebp_1 = 0
    int32_t ebx_1 = 0
    
    do
        i_3 = i_1 + 1
        sub_4414c0(i_1 + 1, edx + ebp_1 + 0x2c7e4, "%02d")
        edx = data_a5dce4
        void* eax_7 = edx + ebp_1 + 0x2c7e3
        char j
        
        do
            j = *(eax_7 + 1)
            eax_7 += 1
        while (j != 0)
        *eax_7 = 0x4481
        *(eax_7 + 2) = 0
        
        if (*(ebx_1 + edx + 0x8266) != 1)
            char* eax_18 = *(ebx_1 + edx + 0x826c)
            char j_1
            
            do
                j_1 = *eax_18
                eax_18 = &eax_18[1]
            while (j_1 != 0)
            
            void* j_10 = (eax_18 - &eax_18[1]) u>> 1
            
            if (j_10 s> 0x17)
                j_10 = 0x17
            else if (j_10 s<= 0)
                j_10 = 0xc
            
            *(edx + ebp_1 + 0x307e4) = 0
            
            if (j_10 s> 0)
                void* j_7 = j_10
                void* j_2
                
                do
                    j_10 = edx + ebp_1 + 0x307e3
                    
                    do
                        j_1 = *(j_10 + 1)
                        j_10 += 1
                    while (j_1 != 0)
                    
                    j_2 = j_7
                    j_7 -= 1
                    *j_10 = 0x4881
                    *(j_10 + 2) = 0
                while (j_2 != 1)
            
            *(edx + ebp_1 + 0x347e4) = 0x7c81
            *(edx + ebp_1 + 0x347e6) = 0
            void* eax_22 = edx + ebp_1 + 0x347e3
            
            do
                j_1 = *(eax_22 + 1)
                eax_22 += 1
            while (j_1 != 0)
            
            *eax_22 = 0x4681
            *(eax_22 + 2) = 0
            void* esi_8 = edx + ebp_1 + 0x347e3
            
            do
                eax_22.b = *(esi_8 + 1)
                esi_8 += 1
            while (eax_22.b != 0)
            
            *esi_8 = 0x7c817c81
            *(esi_8 + 4) = 0
            char* eax_23 = *(ebx_1 + edx + 0x8274)
            
            do
                j_1 = *eax_23
                eax_23 = &eax_23[1]
            while (j_1 != 0)
            
            uint32_t j_11 = (eax_23 - &eax_23[1]) u>> 1
            
            if (j_11 s> 0x17)
                j_11 = 0x17
            else if (j_11 s<= 0)
                j_11 = 0xc
            
            *(edx + ebp_1 + 0x387e4) = 0
            
            if (j_11 s> 0)
                uint32_t j_8 = j_11
                uint32_t j_3
                
                do
                    void* eax_26 = edx + ebp_1 + 0x387e3
                    
                    do
                        j_1 = *(eax_26 + 1)
                        eax_26 += 1
                    while (j_1 != 0)
                    
                    j_3 = j_8
                    j_8 -= 1
                    *eax_26 = 0x4881
                    *(eax_26 + 2) = 0
                while (j_3 != 1)
            
            char* eax_27 = *(ebx_1 + edx + 0x8278)
            
            do
                j_1 = *eax_27
                eax_27 = &eax_27[1]
            while (j_1 != 0)
            
            uint32_t j_12 = (eax_27 - &eax_27[1]) u>> 1
            
            if (j_12 s> 0x17)
                j_12 = 0x17
            else if (j_12 s<= 0)
                j_12 = 0xc
            
            *(edx + ebp_1 + 0x3c7e4) = 0
            
            if (j_12 s> 0)
                uint32_t j_9 = j_12
                uint32_t j_4
                
                do
                    void* eax_30 = edx + ebp_1 + 0x3c7e3
                    
                    do
                        j_1 = *(eax_30 + 1)
                        eax_30 += 1
                    while (j_1 != 0)
                    
                    j_4 = j_9
                    j_9 -= 1
                    *eax_30 = 0x4881
                    *(eax_30 + 2) = 0
                while (j_4 != 1)
        else
            char* ecx_2 = *(ebx_1 + edx + 0x826c)
            char* esi_1 = edx + ebp_1 + 0x307e4
            
            do
                eax_7.b = *ecx_2
                *esi_1 = eax_7.b
                ecx_2 = &ecx_2[1]
                esi_1 = &esi_1[1]
            while (eax_7.b != 0)
            
            int32_t eax_9
            int32_t edx_1
            edx_1:eax_9 = mulu.dp.d(0x91a2b3c5, *(ebx_1 + edx + 0x8270))
            sub_4414c0(edx_1 u>> 0xb, edx + ebp_1 + 0x347e4, "%1d")
            int32_t ecx_3 = data_a5dce4
            void* eax_11 = ecx_3 + ebp_1 + 0x347e3
            char j_5
            
            do
                j_5 = *(eax_11 + 1)
                eax_11 += 1
            while (j_5 != 0)
            *eax_11 = 0x4681
            *(eax_11 + 2) = 0
            int32_t eax_12
            int32_t edx_3
            edx_3:eax_12 = mulu.dp.d(0x88888889, *(ebx_1 + ecx_3 + 0x8270))
            void var_84
            sub_4414c0(modu.dp.d(0:(edx_3 u>> 5), 0x3c), &var_84, "%02d")
            edx = data_a5dce4
            void* eax_16 = &var_84
            char j_6
            
            do
                j_6 = *eax_16
                eax_16 += 1
            while (j_6 != 0)
            
            int32_t eax_17 = eax_16 - &var_84
            void* edi_2 = edx + ebp_1 + 0x347e3
            
            do
                j_6 = *(edi_2 + 1)
                edi_2 += 1
            while (j_6 != 0)
            
            int32_t esi_2
            int32_t edi_3
            edi_3, esi_2 = __builtin_memcpy(edi_2, &var_84, eax_17 u>> 2 << 2)
            __builtin_memcpy(edi_3, esi_2, eax_17 & 3)
            char* ecx_8 = *(ebx_1 + edx + 0x8274)
            void* esi_3 = edx + ebp_1 + 0x387e4
            
            do
                eax_17.b = *ecx_8
                *esi_3 = eax_17.b
                ecx_8 = &ecx_8[1]
                esi_3 += 1
            while (eax_17.b != 0)
            
            char* ecx_9 = *(ebx_1 + edx + 0x8278)
            void* esi_4 = edx + ebp_1 + 0x3c7e4
            
            do
                eax_17.b = *ecx_9
                *esi_4 = eax_17.b
                ecx_9 = &ecx_9[1]
                esi_4 += 1
            while (eax_17.b != 0)
        
        i_1 = i_3
        ebx_1 += 0x20
        ebp_1 += 0x80
    while (i_1 u< data_2b5a730)

void* eax_31 = edx + 0x2c264
void* ecx_10 = edx + 0x607e4
int32_t i_5 = 0x68b
int32_t i_2

do
    *ecx_10 = eax_31
    eax_31 += 0x80
    ecx_10 += 0x10
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
sub_43c320(edx + 0x607e4, 0x68b, 1, i_5, 0x12)
void* eax_32 = data_a5dce4
int32_t result = sub_43be40(eax_32 + 0x67094, eax_32 + 0x607e4, 0x68b, 0x1000)
sub_480cd2(eax_1 ^ &i_3)
return result
