// 函数: sub_43f690
// 地址: 0x43f690
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float var_80[0x5]
sub_45b930(&var_80)
var_80[0] = fconvert.s(fconvert.t(*arg3) * fconvert.t(var_80[0]))
float var_6c
float var_6c_1 = fconvert.s(fconvert.t(arg3[1]) * fconvert.t(var_6c))
float var_58
float var_58_1 = fconvert.s(fconvert.t(arg3[2]) * fconvert.t(var_58))
long double x87_r6 = fconvert.t(-4096f)
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(mods.dp.d(sx.q(0x3243 - sub_480df0(fconvert.t(*arg2) * x87_r6)), 0x6486))
long double x87_r5 = fconvert.t(0.000244140625f)
float var_90 = fconvert.s(float.t((eax_5 ^ edx_2) - edx_2 - 0x3243) * x87_r5)
int32_t eax_13
int32_t edx_6
edx_6:eax_13 = sx.q(mods.dp.d(sx.q(0x3243 - sub_480df0(fconvert.t(arg2[1]) * x87_r6)), 0x6486))
float var_8c = fconvert.s(float.t((eax_13 ^ edx_6) - edx_6 - 0x3243) * x87_r5)
int32_t eax_21
int32_t edx_10
edx_10:eax_21 = sx.q(mods.dp.d(sx.q(0x3243 - sub_480df0(x87_r6 * fconvert.t(arg2[2]))), 0x6486))
float var_88 = fconvert.s(x87_r5 * float.t((eax_21 ^ edx_10) - edx_10 - 0x3243))
float var_84 = fconvert.s(float.t(0))
void var_40
sub_45bf50(&var_40, &var_80, &var_90)
var_90 = fconvert.s(fconvert.t(*arg1))
float var_8c_1 = fconvert.s(fconvert.t(arg1[1]))
float var_88_1 = fconvert.s(fconvert.t(arg1[2]))
float var_84_1 = fconvert.s(float.t(0))
sub_45bce0(&var_80, &var_40, &var_90)
int32_t* result = data_e7e624
int32_t esi_1 = 0

if (result s> 0)
    void* edi_1 = &data_c7e620
    
    do
        int32_t eax_26 = data_e7e620
        sub_45bd50(&(&data_d7e620)[eax_26 * esi_1 * 4], &var_80, edi_1, eax_26, 0)
        result = data_e7e624
        esi_1 += 1
        edi_1 += 0x800
    while (esi_1 s< result)

int32_t i_1 = data_e7e620 * result

if (i_1 s> 0)
    int32_t edx_11 = data_c7bbd4
    int32_t esi_2 = data_c7bbd0
    result = &data_d7e624
    int32_t i
    
    do
        result[-1] += esi_2
        *result += edx_11
        result = &result[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
