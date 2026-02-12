// 函数: sub_410350
// 地址: 0x410350
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float var_15c
int32_t eax_1 = __security_cookie ^ &var_15c
float var_e0[0x10]
sub_45b930(&var_e0)
long double x87_r7 = float.t(0)
var_15c = fconvert.s(x87_r7)
float var_158 = fconvert.s(x87_r7)
float var_154 = fconvert.s(float.t(arg7) * fconvert.t(0.0174532887f))
float var_150 = fconvert.s(x87_r7)
void var_a0
sub_45bf50(&var_a0, &var_e0, &var_15c)
var_15c = fconvert.s(float.t(arg4))
float var_158_1 = fconvert.s(float.t(arg5))
float var_154_1 = fconvert.s(float.t(arg6))
float var_150_1 = fconvert.s(float.t(0))
sub_45bce0(&var_e0, &var_a0, &var_15c)
void var_60
sub_45bd50(&var_60, &var_e0, 0x4b0c60, 5, 1)
int32_t i_1 = 0
int16_t var_10 = 0x10
int16_t var_e = 0
int16_t var_c = 0x60
int16_t var_a = 0
int16_t var_8 = 0x10

for (int32_t i = 0; i s< 5; i += 1)
    (&var_10)[i] -= arg3
    
    if ((&var_10)[i] s< 0)
        (&var_10)[i] = 0
    
    if ((&var_10)[i] s> 0x80)
        (&var_10)[i] = 0x80

void* esi_1 = data_a59b20
int32_t eax_5 = (sx.d(*(esi_1 + 4)) << 7) s/ 0xf
int32_t var_104 = eax_5
int32_t var_128 = eax_5
int32_t var_14c = eax_5
int32_t eax_9 = (sx.d(*(esi_1 + 6)) << 7) s/ 0xf
int32_t var_100 = eax_9
int32_t var_124 = eax_9
int32_t var_148 = eax_9
int32_t eax_13 = (sx.d(*(esi_1 + 8)) << 7) s/ 0xf
int32_t var_fc = eax_13
int32_t var_120 = eax_13
int32_t var_144 = eax_13
void var_4c
void* esi_2 = &var_4c
int32_t* result

do
    int32_t var_13c_1 = *(esi_2 - 4) s>> 4
    int32_t var_138_1 = *esi_2 s>> 4
    int32_t var_140_1 = sx.d((&var_e)[i_1])
    int32_t var_118_1 = *(esi_2 + 0xc) s>> 4
    int32_t var_114_1 = *(esi_2 + 0x10) s>> 4
    int32_t var_11c_1 = sx.d((&var_c)[i_1])
    int32_t var_f4_1 = *(esi_2 - 0x14) s>> 4
    int32_t var_f0_1 = *(esi_2 - 0x10) s>> 4
    int32_t var_f8_1 = sx.d((&var_10)[i_1])
    result = sub_4432e0(&var_14c, 3)
    i_1 += 1
    esi_2 += 0x10
while (i_1 s< 3)

sub_480cd2(eax_1 ^ &var_15c)
return result
