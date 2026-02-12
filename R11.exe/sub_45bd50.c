// 函数: sub_45bd50
// 地址: 0x45bd50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t i_1 = arg4

if (i_1 s<= 0)
    return 

float* edi_1 = arg3
int32_t* esi_2 = arg1 + 8
int32_t i

do
    float var_20
    sub_45b990(&var_20, arg2, edi_1)
    float var_14
    long double x87_r6_1 = fconvert.t(var_14)
    long double x87_r7_2 = float.t(1) / x87_r6_1
    float var_1c
    long double x87_r4_2 = fconvert.t(var_1c) * x87_r7_2
    float var_18
    long double x87_r7_3 = x87_r7_2 * fconvert.t(var_18)
    var_18 = fconvert.s(x87_r7_3)
    long double x87_r3_2 = fconvert.t(16f)
    long double x87_r5_3 = fconvert.t(var_20) * x87_r7_2 * x87_r3_2
    var_20 = fconvert.s(x87_r5_3)
    long double x87_r4_5
    long double x87_r5_6
    long double x87_r6_2
    
    if (arg5 != 0)
        long double x87_r5_7 = x87_r3_2 * x87_r4_2
        var_1c = fconvert.s(x87_r5_7)
        x87_r5_6 = x87_r5_7
        x87_r4_5 = x87_r6_1
        x87_r6_2 = x87_r7_3
    else
        long double x87_r3_5 = x87_r4_2 * x87_r3_2
        var_1c = fconvert.s(x87_r3_5)
        long double x87_r3_7 = x87_r7_3 * x87_r3_2
        var_18 = fconvert.s(x87_r3_7)
        x87_r6_2 = x87_r3_7
        x87_r4_5 = x87_r3_2 * x87_r6_1
        x87_r5_6 = x87_r3_5
        var_14 = fconvert.s(x87_r4_5)
    
    long double x87_r3_9 = fconvert.t(0.5f)
    esi_2[-2] = sub_480df0(x87_r5_3 + x87_r3_9)
    esi_2[-1] = sub_480df0(x87_r5_6 + x87_r3_9)
    *esi_2 = sub_480df0(x87_r6_2 + x87_r3_9)
    esi_2[1] = sub_480df0(x87_r3_9 + x87_r4_5)
    edi_1 = &edi_1[4]
    esi_2 = &esi_2[4]
    i = i_1
    i_1 -= 1
while (i != 1)
