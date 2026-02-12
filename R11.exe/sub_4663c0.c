// 函数: sub_4663c0
// 地址: 0x4663c0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7_3 = fconvert.t(arg2)
*arg1 = &CResampling::MitchellNetravaliFilter::`vftable'{for `CResampling::ResamplingFunction'}
long double x87_r5 = fconvert.t(6.0)
long double x87_r4_1 = fconvert.t(0.16666666666666666)
*(arg1 + 8) = fconvert.d((x87_r5 - (x87_r7_3 + x87_r7_3)) * x87_r4_1)
long double x87_r4_3 = fconvert.t(arg3)
long double x87_r3_1 = x87_r4_3 * x87_r5
long double x87_r1 = fconvert.t(12.0)
*(arg1 + 0x10) = fconvert.d((x87_r7_3 * x87_r1 + x87_r3_1 - fconvert.t(18.0)) * x87_r4_1)
*(arg1 + 0x18) = fconvert.d((x87_r1 - x87_r7_3 * fconvert.t(9.0) - x87_r3_1) * x87_r4_1)
*(arg1 + 0x20) = fconvert.d((x87_r7_3 * fconvert.t(8.0) + x87_r4_3 * fconvert.t(24.0)) * x87_r4_1)
*(arg1 + 0x28) = fconvert.d((x87_r7_3 * fconvert.t(-12.0) - x87_r4_3 * fconvert.t(48.0)) * x87_r4_1)
*(arg1 + 0x30) = fconvert.d((x87_r5 * x87_r7_3 + x87_r4_3 * fconvert.t(30.0)) * x87_r4_1)
*(arg1 + 0x38) = fconvert.d((fneg(x87_r7_3) - x87_r3_1) * x87_r4_1)
return arg1
