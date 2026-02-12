// 函数: sub_466470
// 地址: 0x466470
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7 = fabs(fconvert.t(arg2))
long double x87_r6 = float.t(1)
x87_r6 - x87_r7

if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
    return x87_r7 * (fconvert.t(*(arg1 + 0x18)) * x87_r7 + fconvert.t(*(arg1 + 0x10))) * x87_r7
        + fconvert.t(*(arg1 + 8))

long double x87_r6_5 = fconvert.t(2.0)
x87_r6_5 - x87_r7

if ((((x87_r6_5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    return float.t(0)

return x87_r7 * ((fconvert.t(*(arg1 + 0x38)) * x87_r7 + fconvert.t(*(arg1 + 0x30))) * x87_r7
    + fconvert.t(*(arg1 + 0x28))) + fconvert.t(*(arg1 + 0x20))
