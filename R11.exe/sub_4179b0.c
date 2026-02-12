// 函数: sub_4179b0
// 地址: 0x4179b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_442e20()
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(zx.d(*(arg2 + 0x11)) * 0x300)
int32_t eax_6 = (eax_4 + (edx & 0x7f)) s>> 7
char var_26 = 0x80
char var_27 = 0x80
char var_28 = 0x80
char var_25 = 0x80
char var_22 = 0x80
char var_23 = 0x80
char var_24 = 0x80
char var_21 = 0x80
char var_1e = 0x80
char var_1f = 0x80
char var_20 = 0x80
char var_1d = 0x80
char var_1a = 0x80
char var_1b = 0x80
char var_1c = 0x80
char var_19 = 0x80
int32_t var_4 = 0x1c0
int32_t var_18

if (eax_6 s<= 0x80)
    int32_t* edx_4 = data_c7bbc0
    int32_t var_8_2 = eax_6
    char var_1d_2 = 0
    char var_19_2
    __builtin_memset(&var_19_2, 0, 0x11)
    sub_444c80(*edx_4 + 0x58, &var_18, &var_28, arg1)
else
    int32_t* eax_7 = data_c7bbc0
    var_18 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    int32_t var_8 = eax_6 - 0x80
    sub_445470(*eax_7 + 0x58, &var_18, &var_28, arg1)
    int32_t* ecx_3 = data_c7bbc0
    char var_1d_1 = 0
    char var_19_1 = 0
    var_18 = eax_6 - 0x80
    int32_t var_14_2 = 0
    int32_t var_10_2 = eax_6 - 0x80
    int32_t var_c_2 = 0
    int32_t var_8_1 = 0x80
    int32_t var_4_1 = 0x1c0
    sub_444c80(*ecx_3 + 0x58, &var_18, &var_28, arg1)
sub_442d00(*data_c7bbc0 + 0x58, arg1)
sub_442f40()
sub_409c70(0xffffffff, 0)
sub_440020(*(arg2 + 0xfc), 0, arg3, arg4, 0x1a80, 0x920, arg1)
sub_43f580(0)
return sub_409c70(0x90000, 0)
