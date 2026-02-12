// 函数: sub_4035c0
// 地址: 0x4035c0
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
    int32_t eax_1 = 0x80 - *(edi + 0xc)
    int32_t var_18 = 0
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(eax_1 * 0x300)
    int32_t eax_6 = (eax_4 + (edx_1 & 0x7f)) s>> 7
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    int32_t var_4_1 = 0x1c0
    
    if (eax_6 s<= 0x80)
        int32_t var_8_3 = eax_6
        char var_1d_3 = 0
        char var_19_3 = 0
        sub_444c80(*data_c7bbc0 + 0x58, &var_18, &var_28, *(edi + 4))
    else
        int32_t var_8_1 = eax_6 - 0x80
        sub_445470(*data_c7bbc0 + 0x58, &var_18, &var_28, *(edi + 4))
        char var_1d_2 = 0
        char var_19_2 = 0
        var_18 = eax_6 - 0x80
        int32_t var_14_2 = 0
        int32_t var_10_2 = eax_6 - 0x80
        int32_t var_c_2 = 0
        int32_t var_8_2 = 0x80
        int32_t var_4_2 = 0x1c0
        sub_444c80(*data_c7bbc0 + 0x58, &var_18, &var_28, *(edi + 4))
    
    sub_442c30(*data_c7bbc0 + 0x58, *(edi + 4))
    sub_442f40()

return 0
