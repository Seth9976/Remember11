// 函数: sub_4415b0
// 地址: 0x4415b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r6 = fconvert.t(0.000244140625f)
long double x87_r7_1 = float.t(0x1000 - arg5) * x87_r6
long double x87_r4 = fconvert.t(4096f)
long double x87_r4_3 = float.t(sub_480df0(x87_r7_1 * x87_r7_1 * x87_r4)) * x87_r6
int32_t eax_2 = sub_480df0(x87_r4_3 * x87_r7_1 * x87_r4)
long double x87_r3_4 = float.t(arg5) * x87_r6
int32_t eax_3 = sub_480df0(x87_r4_3 * x87_r3_4 * x87_r4)
long double x87_r3_11 = float.t(sub_480df0(x87_r3_4 * x87_r3_4 * x87_r4)) * x87_r6
int32_t eax_5 = sub_480df0(x87_r3_4 * x87_r3_11 * x87_r4)
int32_t* esi = arg1
long double x87_r5_6 = float.t(eax_2) * x87_r6
long double x87_r4_9 = float.t(eax_3 * 3) * x87_r6
long double x87_r3_15 = float.t(sub_480df0(x87_r7_1 * x87_r3_11 * x87_r4) * 3) * x87_r6
arg5 = fconvert.s(float.t(eax_5) * x87_r6)
long double x87_r1 = fconvert.t(-4096f)
int32_t eax_7 = sub_480df0(float.t(*esi) * x87_r6 * x87_r5_6 * x87_r1)
*arg6 = sub_480df0(float.t(*arg2) * x87_r6 * x87_r4_9 * x87_r4) - eax_7
    - sub_480df0(float.t(*arg3) * x87_r6 * x87_r3_15 * x87_r1)
    - sub_480df0(float.t(*arg4) * x87_r6 * fconvert.t(arg5) * x87_r1)
int32_t eax_13 = sub_480df0(float.t(arg4[1]) * x87_r6 * fconvert.t(arg5) * x87_r1)
int32_t eax_14 = sub_480df0(x87_r4 * x87_r5_6 * float.t(esi[1]) * x87_r6)
int32_t eax_16 = sub_480df0(x87_r3_15 * float.t(arg3[1]) * x87_r6 * x87_r1)
int32_t result = sub_480df0(x87_r4_9 * x87_r6 * float.t(arg2[1]) * x87_r1)
arg6[1] = eax_14 - eax_13 - eax_16 - result
return result
