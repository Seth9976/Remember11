// 函数: sub_45ba30
// 地址: 0x45ba30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i = 0
float* eax = arg2 + 0x20
int32_t var_50
int32_t var_44
int32_t var_40

do
    i += 1
    long double x87_r7_2 = fconvert.t(*eax) * fconvert.t(arg3[2])
    eax = &eax[1]
    void var_54
    *(&var_54 + (i << 2)) = fconvert.s(x87_r7_2 + fconvert.t(*arg3) * fconvert.t(eax[-9])
        + fconvert.t(eax[3]) * fconvert.t(arg3[3]) + fconvert.t(eax[-5]) * fconvert.t(arg3[1]))
    (&var_44)[i] = fconvert.s(fconvert.t(eax[-1]) * fconvert.t(arg3[6])
        + fconvert.t(arg3[7]) * fconvert.t(eax[3]) + fconvert.t(arg3[5]) * fconvert.t(eax[-5])
        + fconvert.t(arg3[4]) * fconvert.t(eax[-9]))
    *(&var_50 - arg2 + eax - 4) = fconvert.s(fconvert.t(eax[-1]) * fconvert.t(arg3[0xa])
        + fconvert.t(arg3[0xb]) * fconvert.t(eax[3]) + fconvert.t(arg3[9]) * fconvert.t(eax[-5])
        + fconvert.t(arg3[8]) * fconvert.t(eax[-9]))
    *(&var_40 - arg2 + eax - 4) = fconvert.s(fconvert.t(eax[-1]) * fconvert.t(arg3[0xe])
        + fconvert.t(arg3[0xf]) * fconvert.t(eax[3]) + fconvert.t(arg3[0xd]) * fconvert.t(eax[-5])
        + fconvert.t(arg3[0xc]) * fconvert.t(eax[-9]))
while (i s< 4)

*arg1 = var_50
int32_t var_4c
arg1[1] = var_4c
int32_t edx_1 = var_44
int32_t var_48
arg1[2] = var_48
int32_t ecx_3 = var_40
arg1[3] = edx_1
arg1[4] = ecx_3
int32_t var_3c
arg1[5] = var_3c
int32_t var_38
arg1[6] = var_38
int32_t var_34
arg1[7] = var_34
int32_t var_30
arg1[8] = var_30
int32_t var_2c
arg1[9] = var_2c
int32_t var_28
arg1[0xa] = var_28
int32_t var_24
arg1[0xb] = var_24
int32_t var_20
arg1[0xc] = var_20
int32_t var_1c
arg1[0xd] = var_1c
int32_t var_18
arg1[0xe] = var_18
int32_t var_14
arg1[0xf] = var_14
return arg1
