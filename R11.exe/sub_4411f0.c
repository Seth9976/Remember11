// 函数: sub_4411f0
// 地址: 0x4411f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_c0
sub_45b930(&var_c0)
float var_f0 = fconvert.s(float.t(*arg2))
float var_ec = fconvert.s(float.t(arg2[1]))
float var_e8 = fconvert.s(float.t(0))
float var_e4 = fconvert.s(float.t(1))
void var_40
sub_45bce0(&var_40, &var_c0, &var_f0)
float var_80
sub_45b930(&var_80)
long double x87_r6 = fconvert.t(1.52587891e-05f)
var_80 = fconvert.s(float.t(*arg3) * x87_r6)
float var_6c = fconvert.s(x87_r6 * float.t(arg3[1]))
sub_45ba30(&var_c0, &var_80, &var_40)
int32_t ecx = sx.d(arg4[2])
int32_t edx_1 = sx.d(arg4[4])
long double x87_r6_2 = fconvert.t(9.58737801e-05f)
var_f0 = fconvert.s(float.t(sx.d(*arg4)) * x87_r6_2)
float var_ec_1 = fconvert.s(float.t(ecx) * x87_r6_2)
float var_e8_1 = fconvert.s(x87_r6_2 * float.t(edx_1))
float var_e4_1 = fconvert.s(float.t(1))
int32_t* result = sub_45bf50(&var_40, &var_c0, &var_f0)
long double x87_r7_13 = float.t(1)
float var_d8 = fconvert.s(x87_r7_13)
float var_d4 = fconvert.s(x87_r7_13)
int32_t esi = 0

if (arg5 s> 0)
    do
        float var_e0 = fconvert.s(float.t(*(arg1 + (esi << 3))))
        float var_dc_1 = fconvert.s(float.t(*(arg1 + (esi << 3) + 4)))
        float var_d0
        sub_45b990(&var_d0, &var_40, &var_e0)
        *(arg1 + (esi << 3)) = sub_480df0(fconvert.t(var_d0))
        float var_cc
        result = sub_480df0(fconvert.t(var_cc))
        *(arg1 + (esi << 3) + 4) = result
        esi += 1
    while (esi s< arg5)

return result
