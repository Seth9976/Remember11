// 函数: sub_46fb40
// 地址: 0x46fb40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

long double x87_r7 = float.t(0)
int32_t* ebp = arg2
float var_14 = fconvert.s(x87_r7)
int32_t* esi = arg1

if (*esi == *ebp)
    x87_r7 = fconvert.t(1000f)
    var_14 = fconvert.s(x87_r7)

int32_t eax_1 = esi[1]

if (eax_1 == ebp[1])
    x87_r7 = x87_r7 + fconvert.t(100f)
    var_14 = fconvert.s(x87_r7)

if (eax_1 == 1)
    x87_r7 = x87_r7 + fconvert.t(0.100000001f)
    var_14 = fconvert.s(x87_r7)

if (esi[4] == ebp[0xc])
    x87_r7 = x87_r7 + fconvert.t(10f)
    var_14 = fconvert.s(x87_r7)

int32_t eax_2 = esi[2]
long double result_1 = float.t(1)
int32_t* ebx
int32_t* var_20 = ebx
float var_14_1
long double x87_r6
long double result

if (eax_2 != ebp[2])
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(sub_477a40(eax_2) - sub_477a40(ebp[2]))
    long double x87_r7_4 =
        fconvert.t(0.899999976f) - float.t((eax_6 ^ edx_2) - edx_2) * fconvert.t(0.200000003f)
    long double x87_r6_1 = float.t(0)
    x87_r6_1 - x87_r7_4
    int32_t* eax_8
    eax_8.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        x87_r7_4 = x87_r6_1
    
    long double x87_r7_5 = x87_r7_4 + fconvert.t(var_14)
    var_14_1 = fconvert.s(x87_r7_5)
    x87_r6 = x87_r7_5
    result = float.t(1)
else
    x87_r6 = x87_r7 + result_1
    result = result_1
    var_14_1 = fconvert.s(x87_r6)

if (esi[4] == 0)
    bool cond:3_1
    
    if (sub_477a40(*(arg3 + 0xc)) u< 8)
        cond:3_1 = esi[2] == 0x16
    else
        cond:3_1 = esi[2] == *(arg3 + 0xc)
    
    int32_t eax_10
    eax_10.b = cond:3_1
    
    if (eax_10.b == 0)
        result = float.t(1)
        x87_r6 = fconvert.t(var_14_1)
    else
        long double x87_r7_8 = fconvert.t(var_14_1) + fconvert.t(0.100000001f)
        var_14_1 = fconvert.s(x87_r7_8)
        x87_r6 = x87_r7_8
        result = float.t(1)

if (((ebp[3]).b & 0xc0) != 0 && (*(esi[0x15] + 0x24) & 0x10000) != 0)
    x87_r6 = x87_r6 + result
    var_14_1 = fconvert.s(x87_r6)

if ((*(esi[0x15] + 0x24) & 0x10000) != 0)
    x87_r6 = x87_r6 + fconvert.t(0.100000001f)
    var_14_1 = fconvert.s(x87_r6)

void* eax_13 = esi[0x14]
int32_t i_2 = *(eax_13 + 0x654)
arg1.b = 0

if (i_2 s> 0)
    void* eax_14 = *(eax_13 + 0x650)
    int32_t i
    
    do
        int32_t* var_8_1 = *(eax_14 + 8)
        
        if (*(eax_14 + 0xc) == esi[2] && *eax_14 == arg2[4] && *(eax_14 + 4) == arg2[5])
            arg1.b = 1
        
        eax_14 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
    ebp = arg2
    
    if (arg1.b != i_2.b)
        x87_r6 = x87_r6 + result
        var_14_1 = fconvert.s(x87_r6)

int32_t eax_15 = esi[3]
long double x87_r6_4

if (eax_15 != ebp[6])
    int32_t eax_19
    int32_t edx_5
    edx_5:eax_19 = sx.q(sub_477a40(eax_15) - sub_477a40(ebp[6]))
    long double x87_r7_12 =
        fconvert.t(0.899999976f) - float.t((eax_19 ^ edx_5) - edx_5) * fconvert.t(0.200000003f)
    long double x87_r6_5 = float.t(0)
    x87_r6_5 - x87_r7_12
    int32_t* eax_21
    eax_21.w = (x87_r6_5 < x87_r7_12 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_12) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_12 ? 1 : 0) << 0xe | 0x3000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (not(p_2))
        x87_r7_12 = x87_r6_5
    
    x87_r6_4 = x87_r7_12 + fconvert.t(var_14_1)
    result = float.t(1)
else
    x87_r6_4 = x87_r6 + result

if (esi[3] == esi[2])
    x87_r6_4 = x87_r6_4 + fconvert.t(0.100000001f)

int32_t ecx_3 = esi[9]
int32_t eax_23 = 0

if (ecx_3 s> 0)
    do
        if (*(esi[8] + (eax_23 << 2)) == ebp[8] && *(esi[0xb] + (eax_23 << 2)) u>= ebp[9])
            x87_r6_4 = x87_r6_4 + result
            break
        
        eax_23 += 1
    while (eax_23 s< ecx_3)

int32_t eax_24 = esi[6]

if (eax_24 s> 0 && eax_24 s> 0 && eax_24 s<= eax_24)
    int32_t* ecx_4 = esi[5]
    int32_t eax_25 = 0
    
    do
        if (ebp[0xe] == *ecx_4)
            if (eax_25 != 0xffffffff)
                x87_r6_4 = x87_r6_4 + result
            
            break
        
        eax_25 += 1
        ecx_4 = &ecx_4[1]
    while (eax_25 s< eax_24)

void* eax_26 = esi[0x14]
int32_t i_3 = *(eax_26 + 0x654)
ebx.b = 0

if (i_3 s> 0)
    int32_t* eax_27 = *(eax_26 + 0x650)
    int32_t i_1
    
    do
        int32_t var_10_1 = *eax_27
        int32_t var_c_1 = eax_27[1]
        
        if (eax_27[3] == esi[2] && eax_27[2] == ebp[0x10])
            ebx.b = 1
        
        eax_27 = &eax_27[4]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    
    if (ebx.b != 0)
        x87_r6_4 = x87_r6_4 + result

int32_t eax_28 = esi[0xf]

if (eax_28 s> 0 && eax_28 s> 0 && eax_28 s<= eax_28)
    int32_t* esi_1 = esi[0xe]
    int32_t eax_29 = 0
    
    do
        if (ebp[0x11] == *esi_1)
            if (eax_29 != 0xffffffff)
                return result + x87_r6_4
            
            break
        
        eax_29 += 1
        esi_1 = &esi_1[1]
    while (eax_29 s< eax_28)

return result
