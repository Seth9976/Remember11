// 函数: sub_45f9a0
// 地址: 0x45f9a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = arg1
int32_t* esi = arg1

if (data_4cad34 == 0)
    return 

int32_t* __saved_edi_2 = data_c78660

if (__saved_edi_2 != 0)
    int32_t* __saved_edi = __saved_edi_2
    (*(*__saved_edi_2 + 0x2c))(fconvert.s(fconvert.t(0.0666666701f)))
    return 

if (esi[2].b != 0)
    sub_46ab50()
    esi[1] = fconvert.s(sub_46a5f0(0xc79d28))
    *esi = 0
    esi[2].b = 0

sub_46ab50()
long double st0_2 = sub_46a5f0(0xc79d28)
long double x87_r6_1 = fconvert.t(esi[1])
x87_r6_1 - st0_2
bool p_1

if ((((x87_r6_1 < st0_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0_2) ? 1 : 0) << 0xa
        | (x87_r6_1 == st0_2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    sub_46ab50()
    long double x87_r7_5 = sub_46a5f0(0xc79d28) - fconvert.t(esi[1])
    int32_t eax_4 = *esi + 5
    long double x87_r6_2 = float.t(eax_4)
    
    if (eax_4 s< 0)
        x87_r6_2 = x87_r6_2 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_3 = x87_r6_2 * fconvert.t(0.0166666675f)
    x87_r6_3 - x87_r7_5
    eax_4.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
    p_1 = unimplemented  {test ah, 0x5}

if ((((x87_r6_1 < st0_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0_2) ? 1 : 0) << 0xa
        | (x87_r6_1 == st0_2 ? 1 : 0) << 0xe):1.b & 0x41) == 0 || not(p_1))
    sub_46ab50()
    esi[1] = fconvert.s(sub_46a5f0(0xc79d28))
    *esi = 0

sub_46ab50()
long double x87_r7_8 = sub_46a5f0(0xc79d28) - fconvert.t(esi[1])
int32_t ecx_2 = *esi - 1
long double x87_r6_4 = float.t(ecx_2)

if (ecx_2 s< 0)
    x87_r6_4 = x87_r6_4 + fconvert.t(4.2949673e+09f)

long double x87_r6_5 = x87_r6_4 * fconvert.t(0.0166666675f)
x87_r6_5 - x87_r7_8

if ((((x87_r6_5 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_8 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
    sub_46ab50()
    esi[1] = fconvert.s(sub_46a5f0(0xc79d28))
    *esi = 0

sub_464290(5)

if (sub_471370() == 0)
    sub_46ab50()
    long double x87_r7_12 = sub_46a5f0(0xc79d28) - fconvert.t(esi[1])
    long double x87_r6_6 = float.t(*esi)
    
    if (*esi s< 0)
        x87_r6_6 = x87_r6_6 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_7 = x87_r6_6 * fconvert.t(0.0166666675f)
    x87_r6_7 - x87_r7_12
    
    if ((((x87_r6_7 < x87_r7_12 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_7, x87_r7_12) ? 1 : 0) << 0xa
            | (x87_r6_7 == x87_r7_12 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
        int32_t eax_8
        
        do
            Sleep(1)
            sub_46ab50()
            long double x87_r7_14 = sub_46a5f0(0xc79d28) - fconvert.t(esi[1])
            long double x87_r6_8 = float.t(*esi)
            
            if (*esi s< 0)
                x87_r6_8 = x87_r6_8 + fconvert.t(4.2949673e+09f)
            
            long double x87_r6_9 = x87_r6_8 * fconvert.t(0.0166666675f)
            x87_r6_9 - x87_r7_14
            eax_8.w = (x87_r6_9 < x87_r7_14 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_9, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r6_9 == x87_r7_14 ? 1 : 0) << 0xe
        while ((eax_8:1.b & 0x41) == 0)

*esi += 1
