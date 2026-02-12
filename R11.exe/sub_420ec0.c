// 函数: sub_420ec0
// 地址: 0x420ec0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* esi = data_a5d910
int32_t var_8 = 0x10
int32_t var_4 = 0x10
char var_28 = 0x80
char var_27 = 0x80
char var_26 = 0x80
char var_25 = 0x80
int32_t var_10 = 0
int32_t var_c = 0
int32_t i = 0xf
void* eax = esi + 0x78f8

do
    int32_t edx_1 = *(eax - 4)
    *eax = *(eax - 8)
    int32_t ecx_2 = *(eax + 0x78)
    *(eax + 4) = edx_1
    int32_t edx_2 = *(eax + 0x7c)
    *(eax + 0x80) = ecx_2
    int32_t ecx_3 = *(eax + 0xf8)
    *(eax + 0x84) = edx_2
    int32_t edx_3 = *(eax + 0xfc)
    *(eax + 0x100) = ecx_3
    int32_t ecx_4 = *(eax + 0x178)
    *(eax + 0x104) = edx_3
    int32_t edx_4 = *(eax + 0x17c)
    *(eax + 0x180) = ecx_4
    *(eax + 0x184) = edx_4
    char edx_5 = *(esi + i + 0x7a8f)
    *(esi + i + 0x7a80) = *(esi + i + 0x7a7f)
    char ecx_6 = *(esi + i + 0x7a9f)
    *(esi + i + 0x7a90) = edx_5
    char edx_6 = *(esi + i + 0x7aaf)
    *(esi + i + 0x7aa0) = ecx_6
    *(esi + i + 0x7ab0) = edx_6
    i -= 1
    eax -= 8
while (i s> 0)

long double x87_r7_1 = float.t(sx.d(*(esi + 0x7ac0))) * fconvert.t(9.58737801e-05f)
long double st0
bool c2
st0, c2 = __fsin(x87_r7_1)
long double st0_1
bool c2_1
st0_1, c2_1 = __fcos(x87_r7_1)
*(esi + 0x7880) = sub_480df0(float.t(arg1[2]) * st0 + float.t(*arg1))
*(esi + 0x7884) = sub_480df0(float.t(arg1[3]) * st0 + float.t(arg1[1]))
*(esi + 0x7900) = sub_480df0(float.t(arg1[2]) * st0 + float.t(*arg1))
*(esi + 0x7904) = sub_480df0(float.t(arg1[1]) - float.t(arg1[3]) * st0)
*(esi + 0x7980) = sub_480df0(float.t(*arg1) - float.t(arg1[2]) * st0)
*(esi + 0x7984) = sub_480df0(float.t(arg1[1]) - float.t(arg1[3]) * st0)
*(esi + 0x7a00) = sub_480df0(float.t(*arg1) - float.t(arg1[2]) * st0)
long double x87_r6_5 = float.t(0)
x87_r6_5 - st0_1
*(esi + 0x7a04) = sub_480df0(st0 * float.t(arg1[3]) + float.t(arg1[1]))
int32_t eax_9
eax_9.w = (x87_r6_5 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, st0_1) ? 1 : 0) << 0xa
    | (x87_r6_5 == st0_1 ? 1 : 0) << 0xe | 0x3000
int16_t eax_10

if ((eax_9:1.b & 0x41) != 0)
    eax_10 = 2
else
    eax_10 = 0

x87_r6_5 - st0_1
*(esi + i + 0x7a80) = eax_10.b
int16_t eax_11

if ((((x87_r6_5 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, st0_1) ? 1 : 0) << 0xa
        | (x87_r6_5 == st0_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
    eax_11 = 0
else
    eax_11 = 2

x87_r6_5 - st0_1
*(esi + i + 0x7a90) = eax_11.b
int16_t eax_12

if ((((x87_r6_5 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, st0_1) ? 1 : 0) << 0xa
        | (x87_r6_5 == st0_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
    eax_12 = 0
else
    eax_12 = 2

x87_r6_5 - st0_1
*(esi + i + 0x7aa0) = eax_12.b
char eax_13

if ((((x87_r6_5 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, st0_1) ? 1 : 0) << 0xa
        | (x87_r6_5 == st0_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    eax_13 = 2
else
    eax_13 = 0

*(esi + i + 0x7ab0) = eax_13
sub_442e20()
void* ecx_7 = data_a5d910
int32_t ebx_1 = 0
data_c7bbe0 = 0xa

for (int32_t i_1 = 0x10; i_1 s> 0; )
    char* eax_14
    eax_14.b = ebx_1.b
    eax_14.w = muls.dp.b(eax_14.b, 7)
    var_28 = 0x80
    char var_27_1 = 0x80
    char var_26_1 = 0x80
    char var_25_1 = 0x80 - eax_14.b
    void* j = 0x7a80
    int32_t esi_1 = ebx_1 << 3
    
    do
        if ((j + ecx_7)[ebx_1] == 2)
            int32_t eax_16
            int32_t edx_8
            edx_8:eax_16 = sx.q(i_1)
            int32_t var_20 = *(esi_1 + ecx_7 + 0x7880) - ((eax_16 - edx_8) s>> 1)
            int32_t eax_20
            int32_t edx_11
            edx_11:eax_20 = sx.q(i_1)
            int32_t var_1c_1 = *(esi_1 + ecx_7 + 0x7884) - ((eax_20 - edx_11) s>> 1)
            sub_445790(ecx_7 + 0x291f0, &var_20, &var_28, 1)
            ecx_7 = data_a5d910
        
        j += 0x10
        esi_1 += 0x80
    while (j s< 0x7ac0)
    
    i_1 -= 1
    ebx_1 += 1

sub_442c30(ecx_7 + 0x291f0, 1)
sub_442f40()
void* result = data_a5d910
*(result + 0x7ac0) += 0x400
return result
