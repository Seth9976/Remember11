// 函数: sub_45bfa0
// 地址: 0x45bfa0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7 = fconvert.t(arg4[1])
float var_50
__builtin_memcpy(&var_50, 0x4a2f10, 0x40)
long double x87_r7_2 = x87_r7 * fconvert.t(arg3[2]) - fconvert.t(arg3[1]) * fconvert.t(arg4[2])
long double x87_r6_4 =
    fconvert.t(*arg3) * fconvert.t(arg4[2]) - fconvert.t(*arg4) * fconvert.t(arg3[2])
long double x87_r5_4 =
    fconvert.t(arg3[1]) * fconvert.t(*arg4) - fconvert.t(arg4[1]) * fconvert.t(*arg3)
long double x87_r4_6 = sqrt(x87_r5_4 * x87_r5_4 + x87_r7_2 * x87_r7_2 + x87_r6_4 * x87_r6_4)
long double x87_r3_4 = float.t(0)
x87_r3_4 - x87_r4_6
float* eax
eax.w = (x87_r3_4 < x87_r4_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_4, x87_r4_6) ? 1 : 0) << 0xa
    | (x87_r3_4 == x87_r4_6 ? 1 : 0) << 0xe | 0x1800
long double x87_r2 = float.t(1)
bool p = unimplemented  {test ah, 0x5}
long double x87_r4_9
long double x87_r5_5
long double x87_r6_7
long double x87_r7_4

if (p)
    x87_r7_4 = x87_r2
    float var_48
    x87_r6_7 = fconvert.t(var_48)
    x87_r4_9 = x87_r4_6
    float var_4c
    x87_r5_5 = fconvert.t(var_4c)
else
    long double x87_r4_7 = x87_r2 / x87_r2
    x87_r7_4 = x87_r2
    var_50 = fconvert.s(x87_r7_2 * x87_r4_7)
    long double x87_r6_5 = x87_r6_4 * x87_r4_7
    float var_4c_1 = fconvert.s(x87_r6_5)
    x87_r5_5 = x87_r6_5
    long double x87_r4_8 = x87_r4_7 * x87_r5_4
    float var_48_1 = fconvert.s(x87_r4_8)
    x87_r4_9 = x87_r3_4
    x87_r6_7 = x87_r4_8
    float var_44_1 = fconvert.s(x87_r4_9)

long double x87_r3_7 = fconvert.t(arg3[2])
long double x87_r2_3 = fconvert.t(arg3[1])
long double x87_r1_3 = fconvert.t(*arg3)
long double x87_r3_11 = sqrt(x87_r3_7 * x87_r3_7 + x87_r2_3 * x87_r2_3 + x87_r1_3 * x87_r1_3)
x87_r3_11 - x87_r4_9
eax.w = (x87_r3_11 < x87_r4_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_11, x87_r4_9) ? 1 : 0) << 0xa
    | (x87_r3_11 == x87_r4_9 ? 1 : 0) << 0xe | 0x1800
long double x87_r2_11
long double x87_r3_13
long double x87_r4_15
long double x87_r7_7

if ((eax:1.b & 0x41) != 0)
    float var_28
    x87_r4_15 = fconvert.t(var_28)
    float var_30
    x87_r3_13 = fconvert.t(var_30)
    x87_r2_11 = x87_r7_4
    float var_2c
    x87_r7_7 = fconvert.t(var_2c)
else
    long double x87_r7_6 = x87_r7_4 / x87_r3_11
    x87_r3_13 = fconvert.t(*arg3) * x87_r7_6
    float var_30_1 = fconvert.s(x87_r3_13)
    long double x87_r2_8 = fconvert.t(arg3[1]) * x87_r7_6
    float var_2c_1 = fconvert.s(x87_r2_8)
    x87_r7_7 = x87_r2_8
    long double x87_r2_10 = x87_r7_6 * fconvert.t(arg3[2])
    float var_28_1 = fconvert.s(x87_r2_10)
    x87_r2_11 = x87_r4_9
    x87_r4_15 = x87_r2_10
    float var_24_1 = fconvert.s(x87_r2_11)

float var_40 = fconvert.s(x87_r7_7 * x87_r6_7 - x87_r4_15 * x87_r5_5)
long double x87_r1_8 = fconvert.t(var_50)
float var_3c = fconvert.s(x87_r4_15 * x87_r1_8 - x87_r6_7 * x87_r3_13)
float var_38 = fconvert.s(x87_r5_5 * x87_r3_13 - x87_r7_7 * x87_r1_8)
float var_34 = fconvert.s(x87_r2_11)
sub_45bce0(&var_50, &var_50, arg2)
return sub_45bc30(arg1, &var_50)
