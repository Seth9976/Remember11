// 函数: sub_413350
// 地址: 0x413350
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float var_80[0x10]
sub_45b930(&var_80)
int32_t ecx_1 = arg3 & 0x80000fff

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffff000) + 1

int32_t edx_1 = arg4 & 0x80000fff
long double x87_r6 = fconvert.t(0.000766990241f)
float var_100 = fconvert.s(float.t(ecx_1) * x87_r6)

if (edx_1 s< 0)
    edx_1 = ((edx_1 - 1) | 0xfffff000) + 1

int32_t eax_1 = arg5 & 0x80000fff
float var_fc = fconvert.s(float.t(edx_1) * x87_r6)

if (eax_1 s< 0)
    eax_1 = ((eax_1 - 1) | 0xfffff000) + 1

float var_f8 = fconvert.s(x87_r6 * float.t(eax_1))
float var_f4 = fconvert.s(float.t(0))
void var_40
sub_45bf50(&var_40, &var_80, &var_100)
var_100 = fconvert.s(float.t(*arg1))
float var_fc_1 = fconvert.s(float.t(arg1[1]))
long double x87_r7_7 = float.t(0)
float var_f8_1 = fconvert.s(x87_r7_7)
float var_f4_1 = fconvert.s(x87_r7_7)
sub_45bce0(&var_80, &var_40, &var_100)
int32_t var_c0
sub_45bd50(&var_c0, &var_80, 0x4b1020, 4, 1)
int32_t var_f0 = var_c0 s>> 4
int32_t var_ac
int32_t var_e4 = var_ac s>> 4
int32_t var_90
int32_t var_d8 = var_90 s>> 4
int32_t var_b0
int32_t var_e8 = var_b0 s>> 4
int32_t var_c8 = 0xf
int32_t var_c4 = 0xf
int32_t var_9c
int32_t var_dc = var_9c s>> 4
int32_t var_bc
int32_t var_ec = var_bc s>> 4
int32_t var_a0
int32_t var_e0 = var_a0 s>> 4
int32_t var_8c
int32_t var_d4 = var_8c s>> 4
int32_t eax_13 = arg2 s/ 0x5dc
int32_t var_d0 = 0
int32_t var_cc = 0

if (eax_13 s>= 1)
    eax_13 = 1

int32_t eax_14 = eax_13 * 2
int32_t eax_15 = neg.d(eax_14)
return sub_4463a0(data_e7e648 + 0x10f1bc, &var_f0, 0, 
    (sbb.d(eax_15, eax_15, eax_14 != 0) & 0xfffffffe) + 3)
