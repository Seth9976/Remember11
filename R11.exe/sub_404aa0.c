// 函数: sub_404aa0
// 地址: 0x404aa0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7_1 = fconvert.t(arg3) + fconvert.t(0.499999911f)
int32_t esi = 0
long double x87_r7_2 = x87_r7_1 + x87_r7_1
float var_8 = fconvert.s(x87_r7_2)
long double x87_r6 = float.t(0)
x87_r6 - x87_r7_2
bool p = unimplemented  {test ah, 0x5}

if (p)
    return x87_r7_2

long double x87_r5 = x87_r6
long double x87_r4 = fconvert.t(0.75f)
long double x87_r6_2

while (true)
    long double x87_r4_5 = fconvert.t(arg3) - x87_r5 * fconvert.t(0.5f)
    x87_r4_5 - x87_r4
    
    if ((((x87_r4_5 < x87_r4 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_5, x87_r4) ? 1 : 0) << 0xa
            | (x87_r4_5 == x87_r4 ? 1 : 0) << 0xe | 0x2000):1.b & 1) == 0)
        goto label_404b0f
    
    x87_r4_5 - x87_r4
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        x87_r4_5 - x87_r6
    
    long double x87_r5_2
    long double x87_r7_5
    
    if (p_1 || (((x87_r4_5 < x87_r6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_5, x87_r6) ? 1 : 0) << 0xa
            | (x87_r4_5 == x87_r6 ? 1 : 0) << 0xe | 0x2000):1.b & 0x41) != 0)
        x87_r6_2 = x87_r4_5
        x87_r5_2 = x87_r7_2
        x87_r7_5 = x87_r6
    else
        x87_r6 = x87_r4_5
    label_404b0f:
        int32_t ecx
        int32_t var_1c_1 = ecx
        int32_t entry_ebx
        ecx = sub_404670(arg2, fconvert.s(float.t(1) - x87_r6), entry_ebx, arg1)
        x87_r7_5 = float.t(0)
        x87_r6_2 = fconvert.t(0.75f)
        x87_r5_2 = fconvert.t(var_8)
    
    esi += 1
    long double x87_r4_6 = float.t(esi)
    x87_r4_6 - x87_r5_2
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        break
    
    x87_r5 = x87_r4_6
    x87_r7_2 = x87_r5_2
    x87_r4 = x87_r6_2
    x87_r6 = x87_r7_5

return x87_r6_2
