// 函数: sub_421a30
// 地址: 0x421a30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = data_a5d910
int32_t ecx_1 = *result - 3

if (ecx_1 u<= 7)
    uint32_t ecx_2 = zx.d(lookup_table_421b38[ecx_1])
    int32_t var_20
    
    switch (ecx_2)
        case 0
            int32_t __saved_esi_1 = sx.d(result[0xd].b)
            int32_t __saved_esi = __saved_esi_1
            int32_t var_2c_1 = result[9]
            var_20 = 0
            int32_t var_1c_1 = 0
            return sub_4216f0(&var_20, __saved_esi_1, ecx_2)
        case 1
            sub_4417a0(&result[0xe])
            void* eax_4 = data_a5d910
            int32_t esi_2
            
            if (*(eax_4 + 0x30) != 0)
                int32_t eax_10 = sub_441790(eax_4 + 0x38)
                void* eax_11 = data_a5d910
                int32_t ecx_4 = sx.d(*(eax_11 + 0x34))
                int32_t edx_2 = *(eax_11 + 0x24)
                int32_t var_30_2 = ecx_4
                int32_t var_34_2 = edx_2
                var_20 = eax_10 - 0x280
                int32_t var_1c_3 = 0
                sub_4216f0(&var_20, edx_2, ecx_4)
                esi_2 = eax_10
            else
                int32_t esi_1 = 0x280 - sub_441790(eax_4 + 0x38)
                void* eax_7 = data_a5d910
                int32_t ecx_3 = sx.d(*(eax_7 + 0x34))
                int32_t edx_1 = *(eax_7 + 0x24)
                int32_t var_30_1 = ecx_3
                int32_t var_34_1 = edx_1
                var_20 = esi_1
                int32_t var_1c_2 = 0
                sub_4216f0(&var_20, edx_1, ecx_3)
                esi_2 = esi_1 - 0x280
            
            void* eax_13 = data_a5d910
            int32_t edx_3 = *(eax_13 + 0x2c)
            int32_t ecx_5
            ecx_5.b = *(eax_13 + 0x34) == 0
            var_20 = esi_2
            int32_t var_1c_4 = 0
            int32_t var_38_1 = ecx_5
            int32_t var_3c_1 = edx_3
            return sub_4216f0(&var_20, edx_3, ecx_5)

return result
