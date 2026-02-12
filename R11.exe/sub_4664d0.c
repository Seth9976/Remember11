// 函数: sub_4664d0
// 地址: 0x4664d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7_5 = float.t(0)
long double result = fconvert.t(arg1)
result - x87_r7_5
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    result = fneg(result)

long double x87_r5 = fconvert.t(3.0)
x87_r5 - result

if ((((x87_r5 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r5, result) ? 1 : 0) << 0xa
        | (x87_r5 == result ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
    return result

x87_r7_5 - result
long double x87_r5_2 = float.t(1)
bool p_1 = unimplemented  {test ah, 0x44}
long double x87_r4 = fconvert.t(3.1415925025939941)
long double x87_r3_2

if (not(p_1))
    x87_r3_2 = x87_r5_2
else
    long double st0_1
    bool c2_3
    st0_1, c2_3 = __fsin(result * x87_r4)
    x87_r3_2 = st0_1 / st0_1

result * fconvert.t(0.33333333333333331) - x87_r7_5
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    return x87_r7_5 * x87_r3_2

long double st0_2
bool c2_5
st0_2, c2_5 = __fsin(x87_r7_5 * x87_r5_2)
return st0_2 / st0_2 * x87_r4
