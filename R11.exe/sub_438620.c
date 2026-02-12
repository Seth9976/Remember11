// 函数: sub_438620
// 地址: 0x438620
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* result = data_a5dd14
int32_t i = 0
int32_t var_20 = 0xc0
int32_t var_1c = 0xec
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0x100
int32_t var_c = 0x20

if (**(result + 0x60) + 1 s> 0)
    int32_t var_24_1 = 0xec
    
    do
        void* ebx_1 = *(result + 0x60)
        
        if ((*(ebx_1 + 4))[i] != 0)
            __builtin_memcpy(result + 0x18ac0, result + 0x18a10, 0x2c)
            int32_t ecx_3 = sx.d(*(*(ebx_1 + 4) + i))
            int32_t var_3c_1 = 0x20
            void* eax_2
            
            if (*(result + (ecx_3 << 2) + 0x1c) != 1)
                sub_442930(result + 0x18ac0, 0x1e0)
                eax_2 = data_a5dd14
                int32_t var_14_2 = 0x1e0
            else
                sub_442930(result + 0x18ac0, (*((ecx_3 << 2) + &data_4bf790) << 5).w)
                eax_2 = data_a5dd14
                int32_t var_14_1 = *((sx.d(*(*(*(eax_2 + 0x60) + 4) + i)) << 2) + &data_4bf790) << 5
            
            int32_t var_1c_1 = var_24_1
            int32_t* var_44_3
            
            if (i == *(eax_2 + 0x64) + 1 || i == 0)
                int32_t var_3c_3 = 1
                int32_t var_40_3 = 0
                int32_t var_18_2 = 0
                var_44_3 = &var_20
            else
                int32_t var_3c_2 = 1
                int32_t var_40_2 = 0
                int32_t var_18_1 = 0x100
                var_44_3 = &var_20
            
            sub_445470(eax_2 + 0x18ac0, var_44_3, 0, 1)
            sub_442c30(data_a5dd14 + 0x18ac0, 1)
            result = data_a5dd14
        
        var_24_1 += 0x1e
        i += 1
    while (i s< **(result + 0x60) + 1)

var_4
return result
