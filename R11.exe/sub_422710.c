// 函数: sub_422710
// 地址: 0x422710
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* result = data_a5d910
int32_t ecx = *result
int32_t ecx_1 = ecx - 7
char var_24
int32_t* edx

if (ecx == 7)
    int32_t var_2c_3 = 1
    char* var_30_3 = &var_24
label_422783:
    int32_t eax_2 = result[0x1eb1]
    char var_22_2 = 0x80
    char var_23_2 = 0x80
    var_24 = 0x80
    char var_21_2 = 0x80
    sub_422490(eax_2, edx, ecx_1)
    result = data_a5d910
else
    int32_t temp1_1 = ecx_1
    ecx_1 -= 1
    
    if (temp1_1 == 1)
        int32_t var_2c_2 = 0
        char* var_30_2 = &var_24
        goto label_422783
    
    if (ecx_1 == 1)
        int32_t ecx_2
        ecx_2.b = result[0x1eb5].b
        int32_t eax = result[0x1eb1]
        int32_t var_2c_1 = 0
        char* var_30_1 = &var_24
        char var_22_1 = 0x80
        char var_23_1 = 0x80
        var_24 = 0x80
        char var_21_1 = ecx_2.b
        int32_t* edx_1 = sub_422490(eax, edx, ecx_2)
        int32_t ecx_3 = data_a5d910
        int32_t var_34_1 = 0
        int32_t eax_1
        eax_1.b = *(ecx_3 + 0x7ac4) == 0
        int32_t var_38_1 = 0
        sub_422490(eax_1, edx_1, ecx_3)
        result = data_a5d910

if (result[0x1eb3] != 1 && *result != 8)
    return result

int32_t var_20 = 0
int32_t var_1c_1 = 0
char var_22_3 = 0
char var_23_3 = 0
var_24 = 0
char var_21_3 = 0x80
int32_t var_18_1 = 0x280
int32_t var_14_1 = 0x1c0
return sub_4437c0(&var_20, &var_24, 1)
