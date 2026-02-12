// 函数: sub_438260
// 地址: 0x438260
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* result = data_a5dd14
*(result + 0x78) += 8

if (*(result + 0x78) s> 0x80)
    *(result + 0x74) = 0xffffffff
    *(result + 0x78) = 0x80

int32_t i = 0
int32_t var_20 = 0xc0
int32_t var_1c = 0xec
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0x100
int32_t var_4 = 0x20
char var_26 = 0x80
char var_27 = 0x80
char var_28 = 0x80

if (**(result + 0x60) + 1 s> 0)
    int32_t var_24_1 = 0
    
    do
        void* ebx_1 = *(result + 0x60)
        
        if ((*(ebx_1 + 4))[i] != 0)
            __builtin_memcpy(result + 0x18ac0, result + 0x18a10, 0x2c)
            int32_t ecx_4 = sx.d(*(*(ebx_1 + 4) + i))
            int32_t var_3c_1 = 0x20
            void* esi_2
            
            if (*(result + (ecx_4 << 2) + 0x1c) != 1)
                sub_442930(result + 0x18ac0, 0x1e0)
                esi_2 = data_a5dd14
                int32_t var_c_2 = 0x1e0
            else
                sub_442930(result + 0x18ac0, (*((ecx_4 << 2) + &data_4bf790) << 5).w)
                esi_2 = data_a5dd14
                int32_t var_c_1 = *((sx.d(*(*(*(esi_2 + 0x60) + 4) + i)) << 2) + &data_4bf790) << 5
            
            void* edx_3
            edx_3.b = 0x80
            edx_3.b = 0x80 - *(esi_2 + 0x78)
            char var_25_1 = edx_3.b
            int32_t ecx_10
            
            if (i != *(esi_2 + 0x64) + 1)
                int32_t var_10_2 = 0x100
                int32_t eax_11
                int32_t edx_6
                edx_6:eax_11 = sx.q(*(esi_2 + 0x78) << 0xb)
                ecx_10 = 0x1000 - ((eax_11 + (edx_6 & 0x7f)) s>> 7)
            else
                int32_t var_10_1 = 0
                int32_t eax_7
                int32_t edx_4
                edx_4:eax_7 = sx.q(*(esi_2 + 0x78) << 0xc)
                ecx_10 = ((eax_7 + (edx_4 & 0x7f)) s>> 7) + 0x1000
            
            int32_t eax_16
            int32_t edx_8
            edx_8:eax_16 = sx.q(ecx_10 << 8)
            int32_t eax_18
            int32_t edx_12
            edx_12:eax_18 = sx.q(0x100 - (((edx_8 & 0xfff) + eax_16) s>> 0xc))
            var_20 = ((eax_18 - edx_12) s>> 1) + 0xc0
            int32_t eax_24
            int32_t edx_13
            edx_13:eax_24 = sx.q(ecx_10 << 5)
            int32_t eax_26
            int32_t edx_17
            edx_17:eax_26 = sx.q(0x20 - (((edx_13 & 0xfff) + eax_24) s>> 0xc))
            int32_t var_18_1 = ecx_10
            int32_t var_14_1 = ecx_10
            int32_t var_1c_1 = var_24_1 - ((eax_26 - edx_17) s>> 1) + 0xec
            sub_445af0(esi_2 + 0x18ac0, &var_20, &var_28, 1)
            sub_442c30(data_a5dd14 + 0x18ac0, 1)
            result = data_a5dd14
        
        var_24_1 += 0x1e
        i += 1
    while (i s< **(result + 0x60) + 1)

return result
