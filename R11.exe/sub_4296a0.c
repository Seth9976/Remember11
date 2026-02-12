// 函数: sub_4296a0
// 地址: 0x4296a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* ecx_12 = data_a5dce4
int32_t* result = *(ecx_12 + 0xa04)

if (result u> 3)
    return result

char var_24
int32_t var_20
int16_t x87control

switch (result)
    case nullptr
        return sub_429170()
    case 1
        sub_428800(x87control, (*(ecx_12 + 0xa44)).b)
        void* eax_1 = data_a5dce4
        var_20 = 0
        int32_t var_1c_1 = 0xfffffff0
        int32_t var_18_1 = 0x280
        int32_t var_14_1 = 0x1e0
        var_24 = 0x80
        char var_23_1 = 0x80
        char var_22_1 = 0x80
        char var_21_1 = *(eax_1 + 0xa44)
        int32_t edx_2 = *(eax_1 + 0xa3c) & 0x80000001
        
        if (edx_2 s< 0)
            edx_2 = ((edx_2 - 1) | 0xfffffffe) + 1
        
        sub_440ec0((edx_2 << 0x16) + eax_1 + 0x343e50, &var_20, &var_24, 1)
        return sub_429170()
    case 2
        sub_428800(x87control, 0x80)
        void* eax_4 = data_a5dce4
        var_20 = 0
        int32_t var_1c_2 = 0xfffffff0
        int32_t var_18_2 = 0x280
        int32_t var_14_2 = 0x1e0
        var_24 = 0x80
        char var_23_2 = 0x80
        char var_22_2 = 0x80
        char var_21_2 = 0x80
        int32_t ecx_2 = *(eax_4 + 0xa3c) & 0x80000001
        
        if (ecx_2 s< 0)
            ecx_2 = ((ecx_2 - 1) | 0xfffffffe) + 1
        
        return sub_440ec0((ecx_2 << 0x16) + eax_4 + 0x343e50, &var_20, &var_24, 1)
    case 3
        sub_428800(x87control, 0x80)
        void* eax_6 = data_a5dce4
        var_20 = 0
        int32_t var_1c_3 = 0xfffffff0
        int32_t var_18_3 = 0x280
        int32_t var_14_3 = 0x1e0
        var_24 = 0x80
        char var_23_3 = 0x80
        char var_22_3 = 0x80
        char var_21_3 = *(eax_6 + 0xa44)
        int32_t edx_9 = (*(eax_6 + 0xa3c) + 1) & 0x80000001
        
        if (edx_9 s< 0)
            edx_9 = ((edx_9 - 1) | 0xfffffffe) + 1
        
        sub_440ec0((edx_9 << 0x16) + eax_6 + 0x343e50, &var_20, &var_24, 1)
        void* eax_8 = data_a5dce4
        var_20 = 0
        int32_t var_1c_4 = 0xfffffff0
        int32_t var_18_4 = 0x280
        int32_t var_14_4 = 0x1e0
        var_24 = 0x80
        char var_23_4 = 0x80
        char var_22_4 = 0x80
        char var_21_4 = 0x80
        int32_t ecx_8 = *(eax_8 + 0xa3c) & 0x80000001
        
        if (ecx_8 s< 0)
            ecx_8 = ((ecx_8 - 1) | 0xfffffffe) + 1
        
        return sub_440ec0((ecx_8 << 0x16) + eax_8 + 0x343e50, &var_20, &var_24, 1)
