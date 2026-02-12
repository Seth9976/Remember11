// 函数: sub_410aa0
// 地址: 0x410aa0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float var_f8 = fconvert.s(fconvert.t(data_4b0cb8))
float var_f4 = fconvert.s(fconvert.t(data_4b0cbc))
long double x87_r7_2 = float.t(arg2)
long double x87_r5 = fconvert.t(0.0078125f)
float var_100 = fconvert.s(fconvert.t(data_4b0cb0) * x87_r7_2 * x87_r5)
float var_fc = fconvert.s(x87_r7_2 * fconvert.t(data_4b0cb4) * x87_r5)
float var_e8 = fconvert.s(fconvert.t(data_4b0cc8))
float var_e4 = fconvert.s(fconvert.t(data_4b0ccc))
float var_f0 = fconvert.s(x87_r7_2 * fconvert.t(data_4b0cc0) * x87_r5)
float var_ec = fconvert.s(x87_r7_2 * fconvert.t(data_4b0cc4) * x87_r5)
float var_d8 = fconvert.s(fconvert.t(data_4b0cd8))
float var_d4 = fconvert.s(fconvert.t(data_4b0cdc))
float var_e0 = fconvert.s(x87_r7_2 * fconvert.t(data_4b0cd0) * x87_r5)
float var_dc = fconvert.s(x87_r7_2 * fconvert.t(data_4b0cd4) * x87_r5)
float var_c8 = fconvert.s(fconvert.t(data_4b0ce8))
float var_c4 = fconvert.s(fconvert.t(data_4b0cec))
float var_d0 = fconvert.s(x87_r7_2 * fconvert.t(data_4b0ce0) * x87_r5)
float var_cc = fconvert.s(x87_r5 * x87_r7_2 * fconvert.t(data_4b0ce4))
float var_80[0x10]
sub_45b930(&var_80)
int32_t ecx_1 = arg4 & 0x80000fff

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffff000) + 1

int32_t edx_1 = arg5 & 0x80000fff
long double x87_r6_6 = fconvert.t(0.000766990241f)
float var_140 = fconvert.s(float.t(ecx_1) * x87_r6_6)

if (edx_1 s< 0)
    edx_1 = ((edx_1 - 1) | 0xfffff000) + 1

int32_t eax_1 = arg6 & 0x80000fff
float var_13c = fconvert.s(float.t(edx_1) * x87_r6_6)

if (eax_1 s< 0)
    eax_1 = ((eax_1 - 1) | 0xfffff000) + 1

float var_138 = fconvert.s(x87_r6_6 * float.t(eax_1))
float var_134 = fconvert.s(float.t(0))
void var_40
sub_45bf50(&var_40, &var_80, &var_140)
var_140 = fconvert.s(float.t(*arg1))
float var_13c_1 = fconvert.s(float.t(arg1[1]))
long double x87_r7_12 = float.t(0)
float var_138_1 = fconvert.s(x87_r7_12)
float var_134_1 = fconvert.s(x87_r7_12)
sub_45bce0(&var_80, &var_40, &var_140)
int32_t var_c0
sub_45bd50(&var_c0, &var_80, &var_100, 4, 1)
int32_t var_b0
int32_t var_128 = var_b0 s>> 4
int32_t var_bc
int32_t var_12c = var_bc s>> 4
int32_t var_9c
int32_t var_11c = var_9c s>> 4
int32_t var_110 = 0
int32_t var_10c = 0
int32_t var_a0
int32_t var_120 = var_a0 s>> 4
int32_t var_108 = 0xf
int32_t var_104 = 0xf
int32_t var_8c
int32_t var_114 = var_8c s>> 4
int32_t var_130 = var_c0 s>> 4
int32_t var_ac
int32_t var_124 = var_ac s>> 4
int32_t eax_11 = arg3 s/ 0x5dc
int32_t var_90
int32_t var_118 = var_90 s>> 4

if (eax_11 s>= 1)
    eax_11 = 1

int32_t eax_12 = eax_11 * 2
int32_t eax_13 = neg.d(eax_12)
void* eax_17 = data_e7e648
return sub_4463a0(eax_17 + 0x10f1bc, &var_130, data_2b5670c + (zx.d(*(eax_17 + 0x1f5ee)) << 2), 
    (sbb.d(eax_13, eax_13, eax_12 != 0) & 0xfffffffe) + 3)
