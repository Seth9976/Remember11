// 函数: sub_404670
// 地址: 0x404670
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

float var_70
float var_6c
float var_68
long double x87_r7_2

if (arg1 != 0)
    var_70 = fconvert.s(fconvert.t(*arg1))
    var_6c = fconvert.s(fconvert.t(arg1[1]))
    var_68 = fconvert.s(fconvert.t(arg1[2]))
    x87_r7_2 = fconvert.t(arg1[3])
else
    long double x87_r7 = float.t(0)
    var_70 = fconvert.s(x87_r7)
    var_6c = fconvert.s(x87_r7)
    var_68 = fconvert.s(fconvert.t(640f))
    x87_r7_2 = fconvert.t(448f)

sub_442e20()
long double x87_r7_6 = fconvert.t(var_70)
int32_t* eax = data_c7bbc0
data_c7bbf0 = 1
data_c7bbe0 = 3
data_c7bbe4 = 0x80
int16_t* eax_2 = *eax + 0x58
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q((0x80 - arg4) * 0xc8)
int32_t eax_8
int32_t edx_2
edx_2:eax_8 = sx.q(data_4cd178)
int32_t eax_11
int32_t edx_3
edx_3:eax_11 = sx.q(data_4cd17c)
int32_t edi_1 = (eax_5 + (edx & 0x7f)) s>> 7
int32_t ebx_1 = (eax_8 - edx_2) s>> 1
int32_t ebp_1 = (eax_11 - edx_3) s>> 1
int32_t var_60 = sub_480df0(x87_r7_6)
long double x87_r6_1 = fconvert.t(var_6c)
long double x87_r5_1 = fconvert.t(var_68)
int32_t var_5c = sub_480df0(x87_r6_1)
long double x87_r4_1 = fconvert.t(fconvert.s(x87_r7_2))
int32_t var_58 = sub_480df0(x87_r5_1)
long double x87_r3_1 = fconvert.t(arg2)
int32_t var_54 = sub_480df0(x87_r4_1)
int32_t eax_17 = sub_480df0(x87_r7_6 * x87_r3_1)
int32_t eax_18 = sub_480df0(x87_r6_1 * x87_r3_1)
int32_t eax_19 = sub_480df0(x87_r5_1 * x87_r3_1)
int32_t eax_20 = sub_480df0(x87_r3_1 * x87_r4_1)
int32_t var_78 = 0
bool cond:0_1

do
    int32_t eax_22
    int32_t edx_4
    edx_4:eax_22 = sx.q(var_78)
    int32_t esi_3 = ((eax_22 + (edx_4 & 0x1f)) s>> 5 << 0x10) s/ 0x168
    int32_t var_40[0x2]
    var_40[0] = ebx_1
    var_40[1] = ebp_1
    int32_t eax_27
    int32_t edx_9
    edx_9:eax_27 = muls.dp.d(0x66666667, ((sub_441360(esi_3) * edi_1) s>> 0x10) * (ebx_1 + 0x20))
    int32_t edx_10 = edx_9 s>> 6
    int32_t ecx_15 = ((sub_441380(esi_3) * edi_1) s>> 0x10) * (ebp_1 + 0x20)
    int32_t eax_37
    int32_t edx_14
    edx_14:eax_37 = sx.q(var_78 + 0x168)
    int32_t esi_6 = ((eax_37 + (edx_14 & 0x1f)) s>> 5 << 0x10) s/ 0x168
    int32_t eax_42
    int32_t edx_19
    edx_19:eax_42 = muls.dp.d(0x66666667, ((sub_441360(esi_6) * edi_1) s>> 0x10) * (ebx_1 + 0x20))
    int32_t edx_20 = edx_19 s>> 6
    int32_t ecx_30 = ((sub_441380(esi_6) * edi_1) s>> 0x10) * (ebp_1 + 0x20)
    int32_t i = 0
    int32_t ecx_32 = data_4cd178 - 1
    int32_t edx_25 = data_4cd17c - 2
    
    do
        if ((&var_40)[i][0] s< 0)
            (&var_40)[i][0] = 0
        
        if ((&var_40)[i][0] s> ecx_32)
            (&var_40)[i][0] = ecx_32
        
        var_3c
        
        if (*(&var_3c + (i << 3)) s< 0)
            *(&var_3c + (i << 3)) = 0
        
        if (*(&var_3c + (i << 3)) s> edx_25)
            *(&var_3c + (i << 3)) = edx_25
        
        i += 1
    while (i s< 3)
    
    long double x87_r6_3 = fconvert.t(arg2)
    int32_t var_28_1 = sub_480df0(float.t(var_40[0]) * x87_r6_3)
    int32_t var_24_1 = sub_480df0(float.t(var_40[1]) * x87_r6_3)
    int32_t var_20_1 = sub_480df0(float.t((edx_10 u>> 0x1f) + edx_10 + ebx_1) * x87_r6_3)
    int32_t var_1c_1 = sub_480df0(float.t(ecx_15 s/ 0x78 + ebp_1) * x87_r6_3)
    int32_t var_18_1 = sub_480df0(float.t((edx_20 u>> 0x1f) + edx_20 + ebx_1) * x87_r6_3)
    int32_t var_14_1 = sub_480df0(x87_r6_3 * float.t(ecx_30 s/ 0x78 + ebp_1))
    sub_4466c0(eax_2, &var_40, 0, arg3)
    cond:0_1 = var_78 + 0x168 s< 0x2d00
    var_78 += 0x168
while (cond:0_1)
int32_t var_58_1 = eax_19 + eax_17
var_60 = 0
int32_t var_5c_1 = 0
int32_t var_54_1 = eax_20 + eax_18
sub_442d50(&var_60, arg3)
sub_442d00(eax_2, arg3)
sub_409c70(0xffffffff, arg3)
long double x87_r7_14 = float.t(data_4cd178)
long double x87_r6_13 = fconvert.t(arg2)
var_60 = 0
int32_t var_5c_2 = 0
int32_t var_58_2 = sub_480df0(x87_r7_14 * x87_r6_13)
int32_t eax_61 = sub_480df0(x87_r6_13 * float.t(data_4cd17c))
int32_t esi_7 = data_2b603b0
int32_t esi_8 = neg.d(esi_7)
int32_t var_54_2 = eax_61
int32_t var_48_1 = data_4cd178
int32_t var_50_1 = 0
int32_t var_4c_1 = 0
int32_t var_44_1 = data_4cd17c
int16_t* esi_12 = (sbb.d(esi_8, esi_8, esi_7 != 0) + 1) * 0x2c + *data_c7bbc0
sub_445790(esi_12, &var_60, 0, arg3)
int32_t eax_63 = data_4cd17c
int32_t edx_30 = data_4cd178 - 1
var_60 = 0
int32_t var_5c_3 = 0
int32_t var_58_3 = edx_30
int32_t var_54_3 = eax_63
sub_442d50(&var_60, arg3)
sub_442d00(esi_12, arg3)
sub_409c70(0x90000, arg3)
return sub_442f40()
