// 函数: sub_438460
// 地址: 0x438460
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* result = data_a5dd14
*(result + 0x78) += 6
int32_t i = 0

if (*(result + 0x78) s> 0x80)
    *(result + 0x74) = 0
    *(result + 0x78) = 0x80

int32_t var_20 = 0xc0
int32_t var_1c = 0xec
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0x100
int32_t var_c = 0x20
char var_22 = 0x80
char var_23 = 0x80
char var_24 = 0x80

if (**(result + 0x60) + 1 s> 0)
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
                int32_t var_14_2 = 0x1e0
            else
                sub_442930(result + 0x18ac0, (*((ecx_4 << 2) + &data_4bf790) << 5).w)
                esi_2 = data_a5dd14
                int32_t var_14_1 = *((sx.d(*(*(*(esi_2 + 0x60) + 4) + i)) << 2) + &data_4bf790) << 5
            
            if (i != 0)
                void* edx_3
                edx_3.b = *(esi_2 + 0x78)
                char var_21_2 = edx_3.b
                int32_t eax_7
                int32_t edx_4
                edx_4:eax_7 = sx.q(*(esi_2 + 0x78) * i * 0x1e)
                int32_t var_1c_2 = ((eax_7 + (edx_4 & 0x7f)) s>> 7) + 0xec
            else
                char var_21_1 = 0x80
                int32_t var_1c_1 = 0xec
            
            int32_t* var_44_3
            char* var_40_2
            
            if (i == *(esi_2 + 0x64) + 1 || i == 0)
                int32_t var_3c_3 = 1
                var_40_2 = &var_24
                int32_t var_18_2 = 0
                var_44_3 = &var_20
            else
                int32_t var_3c_2 = 1
                var_40_2 = &var_24
                int32_t var_18_1 = 0x100
                var_44_3 = &var_20
            
            sub_445470(esi_2 + 0x18ac0, var_44_3, var_40_2, 1)
            sub_442c30(data_a5dd14 + 0x18ac0, 1)
            result = data_a5dd14
        
        i += 1
    while (i s< **(result + 0x60) + 1)

var_4
return result
