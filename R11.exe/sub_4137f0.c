// 函数: sub_4137f0
// 地址: 0x4137f0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float var_160
int32_t eax_1 = __security_cookie ^ &var_160
float var_e0[0x10]
sub_45b930(&var_e0)
long double x87_r7 = float.t(0)
void* ecx = data_e7e648
var_160 = fconvert.s(x87_r7)
float var_15c = fconvert.s(x87_r7)
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q((zx.d(*(ecx + 0x2082c)) - 0x80) << 0xa)
int32_t eax_8 = (eax_5 + (edx & 0x7f)) s>> 7 & 0x80000fff

if (eax_8 s< 0)
    eax_8 = ((eax_8 - 1) | 0xfffff000) + 1

float var_158 = fconvert.s(float.t(eax_8) * fconvert.t(0.000766990241f))
float var_154 = fconvert.s(x87_r7)
void var_a0
sub_45bf50(&var_a0, &var_e0, &var_160)
var_160 = fconvert.s(float.t(arg1))
float var_15c_1 = fconvert.s(float.t(arg2))
float var_158_1 = fconvert.s(float.t(arg3))
float var_154_1 = fconvert.s(float.t(0))
sub_45bce0(&var_e0, &var_a0, &var_160)
void var_60
sub_45bd50(&var_60, &var_e0, 0x4b1060, 5, 1)
int32_t i_1 = 0
int16_t var_10 = 0x20
int16_t var_e = 0
int16_t var_c = 0x60
int16_t var_a = 0
int16_t var_8 = 0x20

for (int32_t i = 0; i s< 5; i += 1)
    int16_t eax_11 = (&var_10)[i] * 2
    int16_t entry_ebx
    (&var_10)[i] = eax_11 - entry_ebx
    
    if (eax_11 - entry_ebx s< 0)
        (&var_10)[i] = 0
    
    if ((&var_10)[i] s> 0x80)
        (&var_10)[i] = 0x80

int32_t var_144 = 0x80
int32_t var_148 = 0x80
int32_t var_14c = 0x80
int32_t var_120 = 0x80
int32_t var_124 = 0x80
int32_t var_128 = 0x80
int32_t var_fc = 0x80
int32_t var_100 = 0x80
int32_t var_104 = 0x80
void var_4c
void* esi = &var_4c
int32_t* result

do
    int32_t var_13c_1 = *(esi - 4) s>> 4
    int32_t var_138_1 = *esi s>> 4
    int32_t var_118_1 = *(esi + 0xc) s>> 4
    int32_t var_114_1 = *(esi + 0x10) s>> 4
    int32_t var_f4_1 = *(esi - 0x14) s>> 4
    int32_t var_f0_1 = *(esi - 0x10) s>> 4
    int32_t var_140_1 = sx.d((&var_10)[i_1])
    result = sub_4432e0(&var_14c, 3)
    i_1 += 1
    esi += 0x10
while (i_1 s< 3)

sub_480cd2(eax_1 ^ &var_160)
return result
