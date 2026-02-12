// 函数: sub_430300
// 地址: 0x430300
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_a5dd08
int32_t ecx = *arg1
int32_t eax_1 = arg1[1] + 4
char var_22 = 0x80
char var_23 = 0x80
char var_24 = 0x80
char var_21 = 0x80
int32_t var_20 = ecx
int32_t var_1c = eax_1
sub_442e20()
int32_t edi_1 = arg3 - 1
data_c7bbf0 = 1

if (edi_1 s<= 0)
    edi_1 = 1

int32_t temp0 = divs.dp.d(sx.q(arg4 << 7), edi_1)
int32_t var_14 = 6
int32_t var_10 = 0
int32_t var_18 = 9
int32_t var_8 = 9
char* var_3c = &var_24

if (temp0 != 0)
    int32_t* var_40_1 = &var_20
    int32_t var_c_3 = 0x14
    int32_t var_4_2 = 0x14
    
    if (temp0 != 0x80)
        sub_445790(esi + 0x80f714, var_40_1, var_3c, 1)
        var_20 += 9
        int32_t ebp_1 = temp0 * 2
        int32_t var_18_4 = ebp_1
        int32_t var_14_4
        __builtin_memcpy(&var_14_4, 
            "\x06\x00\x00\x00\x09\x00\x00\x00\x14\x00\x00\x00\x01\x00\x00\x00\x14\x00\x00\x00", 
            0x14)
        sub_445790(esi + 0x80f714, &var_20, &var_24, 1)
        var_20 += ebp_1
        int32_t ebp_3 = (0x7f - temp0) * 2
        int32_t var_18_5 = ebp_3
        int32_t var_14_5 = 6
        int32_t var_10_3 = 9
        int32_t var_c_5 = 0
        int32_t var_8_3 = 1
        int32_t var_4_4 = 0x14
        sub_445790(esi + 0x80f714, &var_20, &var_24, 1)
        var_20 += ebp_3
        int32_t var_18_6 = 9
        int32_t var_14_6 = 6
        int32_t var_10_4 = 0xa
        int32_t var_c_6 = 0
        int32_t var_8_4 = 9
        int32_t var_4_5 = 0x14
        sub_445790(esi + 0x80f714, &var_20, &var_24, 1)
        sub_442c30(esi + 0x80f714, 1)
        return sub_442f40()
    
    sub_445790(esi + 0x80f714, var_40_1, var_3c, 1)
    var_20 += 9
    int32_t var_18_2
    __builtin_memcpy(&var_18_2, 
        "\xfe\x00\x00\x00\x06\x00\x00\x00\x09\x00\x00\x00\x14\x00\x00\x00\x01\x00\x00\x00\x14\x00\x00\x00", 
        0x18)
    sub_445790(esi + 0x80f714, &var_20, &var_24, 1)
    int32_t var_14_3 = 6
    int32_t var_c_4 = 0x14
else
    int32_t var_c = 0
    int32_t var_4 = 0x14
    sub_445790(esi + 0x80f714, &var_20, var_3c, 1)
    var_20 += 9
    int32_t var_18_1 = 0xfe
    int32_t var_14_1 = 6
    int32_t var_10_1 = 9
    int32_t var_c_1 = 0
    int32_t var_8_1 = 1
    int32_t var_4_1 = 0x14
    sub_445790(esi + 0x80f714, &var_20, &var_24, 1)
    int32_t var_14_2 = 6
    int32_t var_c_2 = 0

var_20 += 0xfe
int32_t var_10_2 = 0xa
int32_t var_18_3 = 9
int32_t var_8_2 = 9
int32_t var_4_3 = 0x14
sub_445790(esi + 0x80f714, &var_20, &var_24, 1)
sub_442c30(esi + 0x80f714, 1)
return sub_442f40()
