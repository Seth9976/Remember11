// 函数: sub_45ef00
// 地址: 0x45ef00
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

if (*arg1 != 0)
    sub_46ab50()
    *(arg1 + 4) = fconvert.s(sub_46a5f0(0xc79d28))

*(arg1 + 8) += 1
sub_46ab50()
long double x87_r7_3 = sub_46a5f0(0xc79d28) - fconvert.t(*(arg1 + 4))
long double temp0 = fconvert.t(1.0)
x87_r7_3 - temp0
int16_t result = (x87_r7_3 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp0) ? 1 : 0) << 0xa
    | (x87_r7_3 == temp0 ? 1 : 0) << 0xe

if ((result:1.b & 0x41) == 0)
    sub_46ab50()
    sub_46a5f0(0xc79d28)
    long double x87_r6_1 = float.t(*(arg1 + 8))
    *(arg1 + 4)
    *(arg1 + 0xc) = fconvert.s(x87_r6_1 / x87_r6_1)
    sub_46ab50()
    long double st0_4
    st0_4, result = sub_46a5f0(0xc79d28)
    *(arg1 + 4) = fconvert.s(st0_4)
    *(arg1 + 8) = 0

return result
