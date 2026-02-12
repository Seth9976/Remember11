// 函数: sub_403740
// 地址: 0x403740
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* edi = *(arg1 + 0x44)
int32_t eax

if (*(edi + 2) != 0)
    eax = sub_4025e0(arg1)
else
    eax = sub_4024c0(arg1)

if (eax == 0)
    sub_442e20()
    char var_26_1 = 0x80
    char var_27_1 = 0x80
    char var_28 = 0x80
    char var_25_1 = 0x80
    char var_22_1 = 0x80
    char var_23_1 = 0x80
    char var_24_1 = 0x80
    char var_21_1 = 0x80
    char var_1e_1 = 0x80
    char var_1f_1 = 0x80
    char var_20_1 = 0x80
    char var_1d_1 = 0x80
    char var_1a_1 = 0x80
    char var_1b_1 = 0x80
    char var_1c_1 = 0x80
    char var_19_1 = 0x80
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(edi + 0xc) * 0x300)
    int32_t esi_3 = (eax_4 + (edx_1 & 0x7f)) s>> 7
    int32_t var_14_1 = 0
    int32_t var_c_1 = 0
    int32_t var_4_1 = 0x1c0
    int32_t var_18
    
    if (esi_3 s<= 0x280)
        var_18 = esi_3
        int32_t var_10_2 = esi_3
        int16_t* var_54_1
        int32_t* var_50_1
        char* var_4c_1
        int32_t var_48_1
        
        if (esi_3 s<= 0x80)
            int32_t var_8_4 = 0x280 - esi_3
            sub_445470(*data_c7bbc0 + 0x58, &var_18, &var_28, *(edi + 4))
            char var_25_4 = 0
            char var_21_4 = 0
            var_18 = 0
            int32_t var_14_3 = 0
            int32_t var_10_4 = 0
            int32_t var_c_3 = 0
            int32_t var_8_5 = esi_3
            int32_t var_4_3 = 0x1c0
            var_48_1 = *(edi + 4)
            var_4c_1 = &var_28
            var_50_1 = &var_18
            var_54_1 = *data_c7bbc0 + 0x58
        else
            int32_t var_8_2 = 0x280 - esi_3
            sub_445470(*data_c7bbc0 + 0x58, &var_18, &var_28, *(edi + 4))
            char var_25_3 = 0
            char var_21_3 = 0
            var_18 = esi_3 - 0x80
            int32_t var_14_2 = 0
            int32_t var_10_3 = esi_3 - 0x80
            int32_t var_c_2 = 0
            int32_t var_8_3 = 0x80
            int32_t var_4_2 = 0x1c0
            var_48_1 = *(edi + 4)
            var_4c_1 = &var_28
            var_50_1 = &var_18
            var_54_1 = *data_c7bbc0 + 0x58
        
        sub_444c80(var_54_1, var_50_1, var_4c_1, var_48_1)
    else
        var_18 = esi_3 - 0x80
        int32_t var_10_1 = esi_3 - 0x80
        int32_t var_8_1 = 0x300 - esi_3
        char var_25_2 = 0
        char var_21_2 = 0
        sub_444c80(*data_c7bbc0 + 0x58, &var_18, &var_28, *(edi + 4))
    sub_442c30(*data_c7bbc0 + 0x58, *(edi + 4))
    sub_442f40()

return 0
