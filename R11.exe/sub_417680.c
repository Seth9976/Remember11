// 函数: sub_417680
// 地址: 0x417680
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

sub_442e20()
void* ecx = data_e7e648
int32_t eax_1 = *(ecx + 0x1f5d0) + *(arg1 + 0x1c)
int32_t edx_1 = *(arg1 + 0x4c) + *(arg1 + 0x2c)
int32_t var_10 = eax_1
int32_t ecx_2 = *(ecx + 0x1f5d4) - *(arg1 + 0x20)
var_10 = eax_1 + *(arg1 + 0x3c)
int32_t ecx_3 = ecx_2 - *(arg1 + 0x40)
long double x87_r7 = float.t(*(arg1 + 0x44) + *(arg1 + 0x24))
long double x87_r6 = float.t(*(arg1 + 0x48) + *(arg1 + 0x28))
long double x87_r5 = float.t(edx_1)
long double x87_r4 = float.t(*(arg1 + 0x50) + *(arg1 + 0x30))
int32_t eax_7 = sub_480df0(float.t(var_10) - x87_r5 * fconvert.t(0.5f))
long double x87_r2_3 = float.t(*(arg1 + 0xf4))

if (*(arg1 + 0xf4) s< 0)
    x87_r2_3 = x87_r2_3 + fconvert.t(4.2949673e+09f)

int32_t eax_8 = sub_480df0(float.t(eax_7) + x87_r7 - x87_r7 * x87_r5 / x87_r2_3)
bool cond:1 = *(arg1 + 0xf8) s>= 0
var_10 = eax_8
long double x87_r3_5 = float.t(*(arg1 + 0xf8))

if (not(cond:1))
    x87_r3_5 = x87_r3_5 + fconvert.t(4.2949673e+09f)

int32_t var_c_1 = sub_480df0(float.t(ecx_3) + x87_r6 - x87_r6 * x87_r4 / x87_r3_5)
int32_t var_8 = sub_480df0(x87_r5)
int32_t var_4 = sub_480df0(x87_r4)
int32_t* var_20 = &var_10
sub_440160(*(arg1 + 0xfc), nullptr)
long double x87_r7_5 = float.t(1)
long double temp1 = fconvert.t(fconvert.s(x87_r5))
x87_r7_5 - temp1
int32_t eax_12
eax_12.w = (x87_r7_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1) ? 1 : 0) << 0xa
    | (x87_r7_5 == temp1 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x44}
bool p_1

if (not(p))
    long double temp2_1 = fconvert.t(fconvert.s(x87_r4))
    x87_r7_5 - temp2_1
    eax_12.w = (x87_r7_5 < temp2_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, temp2_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe
    p_1 = unimplemented  {test ah, 0x44}

if (p || p_1)
    data_c7bbf0 = 1

int32_t entry_ebx

if (entry_ebx != 0)
    sub_409ee0(arg1, &var_10, arg2, 2)
    
    if (entry_ebx != 2)
        int32_t eax_13 = *(arg1 + 0x7c)
        
        if (eax_13 != 0)
            sub_440e00(*(arg1 + 0xfc), eax_13, &var_10, arg2, 0x1a80, 0x920, 2)
        
        int32_t eax_14 = *(arg1 + 0x88)
        
        if (eax_14 != 0)
            sub_440e00(*(arg1 + 0xfc), eax_14 + 2, &var_10, arg2, 0x1a80, 0x920, 2)

sub_440e00(*(arg1 + 0xfc), 0, &var_10, arg2, 0x1a80, 0x920, 2)
sub_43f580(2)
sub_442f40()
