// 函数: sub_40fb40
// 地址: 0x40fb40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

char ecx = -0x80
void* esi = data_e7e648
char var_20 = 0x80
char var_1f = 0x80
char var_1e = 0x80
char var_1d = 0x80
char var_1c = 0
char var_1b = 0
char var_1a = 0
char var_19 = 0
void* result = *(esi + 0xb4464)

if (result != 0)
    if (result s> 0xb0)
        ecx = (-0x10 - result.b) * 2
    else if (result s<= 0x40)
        ecx = result.b * 2
    
    char var_1d_1 = ecx
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(*(esi + 0xb4794))
    char var_1d_2 = ecx
    char var_19_1 = ecx
    int32_t var_18 = 0x140 - ((eax_1 - edx_1) s>> 1)
    int32_t var_14_1 = 0xf8
    sub_43c040(esi + 0xb4584, &var_18, &var_20, 7)
    sub_442e20()
    void* ecx_3 = data_e7e648 + 0x10f298
    data_c7bbf0 = 1
    int32_t var_10 = 0xa8
    int32_t var_c_1 = 0xe2
    int32_t var_8_1 = 0x130
    int32_t var_4_1 = 0x40
    sub_444420(ecx_3, &var_10, &var_20, 7)
    sub_442c30(data_e7e648 + 0x10f298, 7)
    sub_442f40()
    result = data_e7e648
    *(result + 0xb4464) -= 1

return result
