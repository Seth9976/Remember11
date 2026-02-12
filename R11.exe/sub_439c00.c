// 函数: sub_439c00
// 地址: 0x439c00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_80
sub_45b930(&var_80)
float var_f0 = fconvert.s(float.t(*arg3))
float var_ec = fconvert.s(float.t(arg3[1]))
float var_e8 = fconvert.s(float.t(0))
float var_e4 = fconvert.s(float.t(1))
void var_c0
sub_45bce0(&var_c0, &var_80, &var_f0)
float var_40
sub_45b930(&var_40)
long double x87_r6 = fconvert.t(1.52587891e-05f)
var_40 = fconvert.s(float.t(*arg4) * x87_r6)
float var_2c = fconvert.s(x87_r6 * float.t(arg4[1]))
sub_45ba30(&var_80, &var_40, &var_c0)
int32_t eax_1 = sx.d(arg1[2])
int32_t ecx = sx.d(arg1[4])
long double x87_r6_2 = fconvert.t(9.58737801e-05f)
long double x87_r7_9 = float.t(sx.d(*arg1)) * x87_r6_2
var_f0 = fconvert.s(x87_r7_9)
float var_ec_1 = fconvert.s(float.t(eax_1) * x87_r6_2)
float var_e8_1 = fconvert.s(x87_r6_2 * float.t(ecx))
float var_e4_1 = fconvert.s(float.t(1))
sub_45be90(&var_c0, &var_80, fconvert.s(x87_r7_9))
sub_45bef0(&var_80, &var_c0, fconvert.s(fconvert.t(var_ec_1)))
int32_t* result = sub_45be30(&var_c0, &var_80, fconvert.s(fconvert.t(var_e8_1)))
long double x87_r7_15 = float.t(1)
float var_d8 = fconvert.s(x87_r7_15)
int32_t esi_1 = 0
float var_d4 = fconvert.s(x87_r7_15)
int32_t entry_ebx

if (entry_ebx s> 0)
    do
        float var_e0 = fconvert.s(float.t(*(arg2 + (esi_1 << 3))))
        float var_dc_1 = fconvert.s(float.t(*(arg2 + (esi_1 << 3) + 4)))
        float var_d0
        sub_45b990(&var_d0, &var_c0, &var_e0)
        *(arg2 + (esi_1 << 3)) = sub_480df0(fconvert.t(var_d0))
        float var_cc
        result = sub_480df0(fconvert.t(var_cc))
        *(arg2 + (esi_1 << 3) + 4) = result
        esi_1 += 1
    while (esi_1 s< entry_ebx)

return result
