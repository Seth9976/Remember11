// 函数: sub_4621e0
// 地址: 0x4621e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
sub_4710a0()
long double x87_r7 = fconvert.t(0.000195312503f)
float var_50 = fconvert.s(x87_r7)
long double x87_r6 = float.t(0)
float var_4c = fconvert.s(x87_r6)
float var_48 = fconvert.s(x87_r6)
float var_44 = fconvert.s(x87_r6)
float var_40 = fconvert.s(x87_r6)
long double x87_r5 = fconvert.t(-0.00027901787f)
float var_3c = fconvert.s(x87_r5)
float var_38 = fconvert.s(x87_r6)
float var_34 = fconvert.s(x87_r6)
float var_30 = fconvert.s(x87_r6)
float var_2c = fconvert.s(x87_r6)
long double x87_r4 = float.t(1)
float var_28 = fconvert.s(x87_r4)
float var_24 = fconvert.s(x87_r6)
long double x87_r3 = float.t(data_c79db8)

if (data_c79db8 s< 0)
    x87_r3 = x87_r3 + fconvert.t(4.2949673e+09f)

uint32_t edi_1 = zx.d(*(arg2 + 0x48))
int32_t ecx_1 = adc.d(0, 0, edi_1 u>= 0xffffec00)
int32_t var_54 = ecx_1 & 0x7fffffff
long double x87_r2 = fconvert.t(2f)
int32_t var_54_1 = ecx_1 & 0x80000000
float var_20 = fconvert.s(fconvert.t(-0.5f) / x87_r3 * x87_r2
    - x87_r7 * (float.t((edi_1 + 0x1400).q) + fneg(float.t(0.q))))
int32_t eax = data_c79dbc
long double x87_r3_5 = float.t(eax)

if (eax s< 0)
    x87_r3_5 = x87_r3_5 + fconvert.t(4.2949673e+09f)

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(zx.d(*(arg2 + 0x4c)))
int32_t edx_2 = adc.d(edx_1, 0, eax_2 u>= 0xfffff200)
int32_t var_54_2 = edx_2 & 0x7fffffff
int32_t var_54_3 = edx_2 & 0x80000000
float var_1c = fconvert.s(x87_r2 * fconvert.t(0.5f) / x87_r3_5
    - x87_r5 * (float.t((eax_2 + 0xe00).q) + fneg(float.t(0.q))))
float var_18 = fconvert.s(x87_r6)
float var_14 = fconvert.s(x87_r4)
(*(*arg1 + 0x30))(&var_50)
return 0
