// 函数: sub_409ee0
// 地址: 0x409ee0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* eax = *(arg1 + 0xfc)
void* esi_1 = eax[*eax - 4] + eax
sub_442e20()
data_c7bbf0 = 1
long double x87_r7 = fconvert.t(*((zx.d(*esi_1) << 2) + &data_4afd38))
long double x87_r5 = float.t(*(arg1 + 0xf4))

if (*(arg1 + 0xf4) s< 0)
    x87_r5 = x87_r5 + fconvert.t(4.2949673e+09f)

long double x87_r6_1 = float.t(arg2[2]) / x87_r5
float var_f8 = fconvert.s(x87_r6_1)
long double x87_r4 = float.t(*(arg1 + 0xf8))

if (*(arg1 + 0xf8) s< 0)
    x87_r4 = x87_r4 + fconvert.t(4.2949673e+09f)

long double x87_r5_2 = float.t(arg2[3]) / x87_r4
float var_f4 = fconvert.s(x87_r5_2)
float var_ec = fconvert.s(x87_r6_1 * float.t(sx.d(*(esi_1 + 2))) + float.t(*arg2))
float var_e8 = fconvert.s(x87_r5_2 * float.t(sx.d(*(esi_1 + 4))) + float.t(arg2[1]))
float var_e0 = fconvert.s(float.t(sub_480df0(fconvert.t(-218f) * x87_r7) << 4))
float var_dc = fconvert.s(float.t(sub_480df0(fconvert.t(-140f) * x87_r7) << 4))
long double x87_r6_13 = float.t(0)
float var_d8 = fconvert.s(x87_r6_13)
long double x87_r5_4 = fconvert.t(16f)
float var_d4 = fconvert.s(x87_r5_4)
float var_d0 = fconvert.s(float.t(sub_480df0(x87_r7 * fconvert.t(62f)) << 4))
float var_cc = fconvert.s(float.t(sub_480df0(x87_r7 * fconvert.t(88f)) << 4))
float var_c8 = fconvert.s(x87_r6_13)
float var_c4 = fconvert.s(x87_r5_4)
float var_80[0x5]
sub_45b930(&var_80)
var_80[0] = fconvert.s(fconvert.t(var_80[0]) * fconvert.t(var_f8))
float var_6c
float var_6c_1 = fconvert.s(fconvert.t(var_6c) * fconvert.t(var_f4))
float var_58
float var_58_1 = fconvert.s(fconvert.t(var_58))
long double x87_r7_8 = float.t(0) * fconvert.t(0.000244140625f)
float var_108 = fconvert.s(x87_r7_8)
float var_104 = fconvert.s(x87_r7_8)
float var_100 = fconvert.s(x87_r7_8)
float var_fc = fconvert.s(float.t(0))
void var_40
sub_45bf50(&var_40, &var_80, &var_108)
var_108 = fconvert.s(fconvert.t(var_ec))
float var_104_1 = fconvert.s(fconvert.t(var_e8))
long double x87_r7_12 = float.t(0)
float var_100_1 = fconvert.s(x87_r7_12)
float var_fc_1 = fconvert.s(x87_r7_12)
sub_45bce0(&var_80, &var_40, &var_108)
int32_t var_a0
sub_45bd50(&var_a0, &var_80, &var_e0, 2, 0)
int32_t eax_11 = var_a0
int32_t var_c0 = eax_11 s>> 4
int32_t var_9c
int32_t var_bc = var_9c s>> 4
int32_t var_90
int32_t var_b8 = (var_90 - eax_11) s>> 4
int32_t var_8c
int32_t var_b4 = (var_8c - var_9c) s>> 4
int32_t var_b0 = 0xb
int32_t var_ac = 4
int32_t var_a8 = 0x1c
int32_t var_a4 = 0x1a
void* edi_1 = arg1 + 0xa0
int32_t i_1 = 0xa
int32_t i

do
    int32_t ecx_6 = *edi_1
    
    if (ecx_6 != 0)
        int32_t* eax_15 = *((*(edi_1 + 0x28) << 2) + &data_4aff2c)
        int32_t esi_3 = eax_15[*eax_15 - ecx_6 + 1] * 0x2c
        sub_445790(esi_3 + data_e7e648 + 0x10f348, &var_c0, arg3, arg4)
        sub_442c30(esi_3 + data_e7e648 + 0x10f348, arg4)
    
    edi_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
return sub_442f40() __tailcall
