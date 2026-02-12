// 函数: sub_417b40
// 地址: 0x417b40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_e7e648
int32_t var_10 = *(eax + 0x1f5d0) + *(arg1 + 0x1c)
int32_t edx_1 = *(eax + 0x1f5d4) - *(arg1 + 0x20)
data_4b1398 = *(arg1 + 0x24) + *(arg1 + 0x44)
data_4b139c = *(arg1 + 0x28) + *(arg1 + 0x48)
data_4b13a0 = *(arg1 + 0x2c) + *(arg1 + 0x4c)
data_4b13a4 = *(arg1 + 0x50) + *(arg1 + 0x30)

if (*(arg1 + 6) == 7)
    return sub_4179b0(0, arg1, &var_10, data_2b5670c)

sub_442e20()
data_c7bbf0 = 1
long double x87_r7_1 = fconvert.t(640f) / float.t(*(arg1 + 0x2c) + *(arg1 + 0x4c))
long double x87_r6_1 = fconvert.t(448f) / float.t(*(arg1 + 0x50) + *(arg1 + 0x30))
int32_t eax_7 = sub_480df0(float.t(var_10) - float.t(*(arg1 + 0x24) + *(arg1 + 0x44)) * x87_r7_1)
int32_t ecx_7 = *(arg1 + 0x28) + *(arg1 + 0x48)
var_10 = eax_7
int32_t eax_8 = sub_480df0(float.t(edx_1) - float.t(ecx_7) * x87_r6_1)
long double x87_r5_4 = float.t(*(arg1 + 0xf4))
int32_t var_c_1 = eax_8

if (*(arg1 + 0xf4) s< 0)
    x87_r5_4 = x87_r5_4 + fconvert.t(4.2949673e+09f)

int32_t eax_9 = sub_480df0(x87_r7_1 * x87_r5_4)
long double x87_r6_3 = float.t(*(arg1 + 0xf8))
int32_t var_8 = eax_9

if (*(arg1 + 0xf8) s< 0)
    x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)

int32_t var_4 = sub_480df0(x87_r6_1 * x87_r6_3)
sub_440e50(*(arg1 + 0xfc), nullptr, &var_10, data_2b5670c, 0)
return sub_442f40()
