// 函数: sub_45b990
// 地址: 0x45b990
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r6_10 = fconvert.t(arg2[0xd]) * fconvert.t(arg3[3])
    + fconvert.t(arg2[1]) * fconvert.t(*arg3) + fconvert.t(arg2[9]) * fconvert.t(arg3[2])
    + fconvert.t(arg2[5]) * fconvert.t(arg3[1])
long double x87_r5_10 = fconvert.t(arg2[0xe]) * fconvert.t(arg3[3])
    + fconvert.t(arg2[2]) * fconvert.t(*arg3) + fconvert.t(arg2[0xa]) * fconvert.t(arg3[2])
    + fconvert.t(arg2[6]) * fconvert.t(arg3[1])
long double x87_r4_10 = fconvert.t(arg2[0xf]) * fconvert.t(arg3[3])
    + fconvert.t(arg2[3]) * fconvert.t(*arg3) + fconvert.t(arg2[0xb]) * fconvert.t(arg3[2])
    + fconvert.t(arg2[7]) * fconvert.t(arg3[1])
*arg1 = fconvert.s(fconvert.t(arg2[0xc]) * fconvert.t(arg3[3])
    + fconvert.t(arg2[8]) * fconvert.t(arg3[2]) + fconvert.t(arg2[4]) * fconvert.t(arg3[1])
    + fconvert.t(*arg2) * fconvert.t(*arg3))
arg1[1] = fconvert.s(x87_r6_10)
arg1[2] = fconvert.s(x87_r5_10)
arg1[3] = fconvert.s(x87_r4_10)
return arg1
