// 函数: sub_428800
// 地址: 0x428800
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void* eax = data_a5dce4
int32_t ecx_1 = *(eax + 0xa14) - 1
int32_t ecx_2 = neg.d(ecx_1)
int32_t var_14 = (sbb.d(ecx_2, ecx_2, ecx_1 != 0) & 0x30) + 0x78
char var_35 = arg2
int32_t var_20 = 4
int32_t var_1c = 0x10
int32_t var_18 = 0x60
int32_t var_10 = 0x20
int32_t var_c = 0x18
char var_38 = 0x80
char var_37 = 0x80
char var_36 = 0x80
sub_445470(eax + 0x143e24, &var_20, &var_38, 1)
sub_442c30(data_a5dce4 + 0x143e24, 1)
void* eax_4 = data_a5dce4
int32_t esi_1 = *(eax_4 + 0xa2c) + *(eax_4 + 0xa28)
char var_35_1 = arg2
char var_25 = arg2
char var_21 = arg2
var_20 = 0x1e
int32_t var_1c_1 = 0x10
var_38 = 0x80
char var_37_1 = 0x80
char var_36_1 = 0x80
char var_28 = 0x80
char var_27 = 0x80
char var_26 = 0x80
char var_24 = 0x60
char var_23 = 0x60
char var_22 = 0x80
sub_43c450((esi_1 << 4) + eax_4 + 0x60894, &var_20, &var_28, 1)
int32_t* eax_5 = esi_1 * 0x21c + data_a5dce4 + 0x795c8
var_20 = 0x4a
int32_t var_1c_2 = 0x10
sub_43bf80(eax_5, &var_20, &var_28, 1)
void* ecx_9 = data_a5dce4
int32_t* var_88
char* var_84_1
void* edx_18

if (*(ecx_9 + 0xa14) == 0 || *(ecx_9 + 0xa34) == 1)
    char var_35_3 = arg2
    char var_25_2 = arg2
    char var_21_2 = arg2
    var_38 = 0x70
    char var_37_3 = 0x70
    char var_36_3 = 0x80
    var_28 = 0x80
    char var_27_2 = 0x80
    char var_26_2 = 0x80
    char var_24_2 = 0x60
    char var_23_2 = 0x60
    char var_22_2 = 0x80
    var_20 = 0x210
    int32_t var_1c_7 = 0x10
    sub_43c450(ecx_9 + 0x607e4, &var_20, &var_28, 1)
    void* edx_20 = data_a5dce4 + 0x60884
    var_20 = 0x222
    int32_t var_1c_8 = 0x10
    sub_43c450(edx_20, &var_20, &var_28, 1)
    void* edx_22 = data_a5dce4 + 0x607e4
    var_20 = 0x234
    int32_t var_1c_9 = 0x10
    sub_43c450(edx_22, &var_20, &var_28, 1)
    void* edx_23 = data_a5dce4
    int32_t var_80_2 = 1
    var_84_1 = &var_28
    var_20 = 0x246
    int32_t var_1c_10 = 0x10
    var_88 = &var_20
    edx_18 = edx_23 + 0x607e4
else
    char var_35_2 = arg2
    char var_25_1 = arg2
    char var_21_1 = arg2
    var_38 = 0x70
    char var_37_2 = 0x70
    char var_36_2 = 0x80
    var_28 = 0x80
    char var_27_1 = 0x80
    char var_26_1 = 0x80
    char var_24_1 = 0x60
    char var_23_1 = 0x60
    char var_22_1 = 0x80
    var_20 = 0x210
    int32_t var_1c_3 = 0x10
    sub_43c450(((*(ecx_9 + 0xa1c) s/ 0xe10) << 4) + ecx_9 + 0x607e4, &var_20, &var_28, 1)
    void* ecx_12 = data_a5dce4 + 0x60884
    var_20 = 0x222
    int32_t var_1c_4 = 0x10
    sub_43c450(ecx_12, &var_20, &var_28, 1)
    void* ecx_13 = data_a5dce4
    var_20 = 0x234
    int32_t var_1c_5 = 0x10
    int32_t eax_12
    int32_t edx_7
    edx_7:eax_12 = muls.dp.d(0x1b4e81b5, *(ecx_13 + 0xa1c))
    int32_t edx_8 = edx_7 s>> 6
    sub_43c450((mods.dp.d(sx.q((edx_8 u>> 0x1f) + edx_8), 6) << 4) + ecx_13 + 0x607e4, &var_20, 
        &var_28, 1)
    void* esi_4 = data_a5dce4
    int32_t var_80_1 = 1
    var_84_1 = &var_28
    var_88 = &var_20
    var_20 = 0x246
    int32_t var_1c_6 = 0x10
    edx_18 = (mods.dp.d(sx.q(*(esi_4 + 0xa1c) s/ 0x3c), 0xa) << 4) + esi_4 + 0x607e4

sub_43c450(edx_18, var_88, var_84_1, 1)
void* ecx_17 = data_a5dce4
int32_t esi_6 = *(ecx_17 + 0xa2c) + *(ecx_17 + 0xa28)
int32_t edi_1 = (esi_6 + 0x414) << 5

if (*(edi_1 + ecx_17) == 0 || *(ecx_17 + 0xa34) == 1)
    int32_t esi_9 = esi_6 * 0x21c
    char var_35_6 = arg2
    char var_25_5 = arg2
    char var_21_5 = arg2
    var_38 = 0x70
    char var_37_6 = 0x70
    char var_36_6 = 0x80
    var_28 = 0x80
    char var_27_5 = 0x80
    char var_26_5 = 0x80
    char var_24_5 = 0x60
    char var_23_5 = 0x60
    char var_22_5 = 0x80
    var_20 = 0x20
    int32_t var_1c_15 = 0x168
    sub_43bf80(esi_9 + ecx_17 + 0x9b1c8, &var_20, &var_28, 1)
    int32_t ecx_21 = data_a5dce4
    int32_t eax_60 = 0x260 - *(esi_9 + ecx_21 + 0xac1d8)
    
    if (eax_60 s> 0x100)
        eax_60 = 0x100
    
    var_20 = eax_60
    int32_t var_1c_16 = 0x188
    sub_43bf80(esi_9 + ecx_21 + 0xabfc8, &var_20, &var_28, 1)
else
    int32_t eax_25 = sx.d(*(ecx_17 + 0x9264))
    int32_t edx_24 = *(ecx_17 + 0xa1c)
    
    if (edx_24 s< eax_25)
        int32_t eax_26 = eax_25 - edx_24
        int32_t var_3c_1 = eax_26
        
        if (eax_26 s>= 0x20)
            var_3c_1 = 0x20
        
        int32_t esi_7 = esi_6 * 0x21c
        long double x87_r7_3 = float.t(arg2.d) * fconvert.t(0.03125f) * float.t(var_3c_1)
        int16_t x87status_1
        int16_t temp0_3
        temp0_3, x87status_1 = __fnstcw_memmem16(arg1)
        var_3c_1.w = temp0_3
        var_20 = 0x20
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(var_3c_1.w | 0xc00)
        var_38 = 0x70
        char var_37_4 = 0x70
        char var_36_4 = 0x80
        var_28 = 0x80
        char var_27_3 = 0x80
        char var_26_3 = 0x80
        int16_t eax_28
        eax_28.b = (int.d(x87_r7_3)).b
        char var_35_4 = eax_28.b
        char var_25_3 = eax_28.b
        char var_21_3 = eax_28.b
        int16_t x87status_3
        arg1, x87status_3 = __fldcw_memmem16(var_3c_1.w)
        char var_24_3 = 0x60
        char var_23_3 = 0x60
        char var_22_3 = 0x80
        int32_t var_1c_11 = 0x168
        sub_43bf80(esi_7 + ecx_17 + 0x9b1c8, &var_20, &var_28, 1)
        int32_t ecx_18 = data_a5dce4
        int32_t eax_30 = 0x260 - *(esi_7 + ecx_18 + 0xac1d8)
        
        if (eax_30 s> 0x100)
            eax_30 = 0x100
        
        var_20 = eax_30
        int32_t var_1c_12 = 0x188
        sub_43bf80(esi_7 + ecx_18 + 0xabfc8, &var_20, &var_28, 1)
        ecx_17 = data_a5dce4
    
    while (*(ecx_17 + 0xa1c) + 0x3c s>= sx.d(*(ecx_17 + (*(ecx_17 + 0xa48) + 0xc33) * 0xc)))
        int32_t eax_34 = *(ecx_17 + 0xa48)
        
        if (eax_34 s>= zx.d(*(edi_1 + ecx_17)) - 2)
            break
        
        int32_t edx_31 = eax_34 & 0x80000001
        
        if (edx_31 s< 0)
            edx_31 = ((edx_31 - 1) | 0xfffffffe) + 1
        
        *(ecx_17 + (edx_31 << 2) + 0xa5c) = eax_34
        int32_t eax_35 = *(ecx_17 + 0xa48)
        int32_t eax_36 = eax_35 & 0x80000001
        
        if (eax_36 s< 0)
            eax_36 = ((eax_36 - 1) | 0xfffffffe) + 1
        
        *(ecx_17 + (eax_36 << 2) + 0xa54) = sx.d(*(ecx_17 + ((eax_35 * 3 + 0x249c) << 2))) + 0x96
        int32_t eax_39 = *(ecx_17 + 0xa48)
        int32_t eax_40 = eax_39 & 0x80000001
        int32_t edx_38 = sx.d(*(ecx_17 + ((eax_39 * 3 + 0x249f) << 2)))
        
        if (eax_40 s< 0)
            eax_40 = ((eax_40 - 1) | 0xfffffffe) + 1
        
        if (*(ecx_17 + (eax_40 << 2) + 0xa54) s> edx_38 - 0x3c)
            *(ecx_17 + (eax_40 << 2) + 0xa54) = edx_38 - 0x5a
        
        int32_t eax_45 = *(ecx_17 + 0xa48) & 0x80000001
        
        if (eax_45 s< 0)
            eax_45 = ((eax_45 - 1) | 0xfffffffe) + 1
        
        *(ecx_17 + (eax_45 << 2) + 0xa4c) = 0
        *(ecx_17 + 0xa48) += 1
    
    for (int32_t i = 0; i s< 2; i += 1)
        if (*(ecx_17 + (i << 2) + 0xa5c) != 0xffffffff && *(ecx_17 + 0xa34) == 0)
            int32_t eax_51 = *(ecx_17 + (i << 2) + 0xa4c)
            int32_t var_3c_2
            
            if (eax_51 s>= 0x20)
                int32_t eax_52 = *(ecx_17 + (i << 2) + 0xa54)
                int32_t edx_43 = *(ecx_17 + 0xa1c)
                
                if (eax_52 - 0x20 s> edx_43)
                    var_3c_2 = 0x20
                else
                    var_3c_2 = eax_52 - edx_43
            else
                var_3c_2 = eax_51
            
            var_38 = 0x70
            char var_37_5 = 0x70
            char var_36_5 = 0x80
            var_28 = 0x80
            char var_27_4 = 0x80
            char var_26_4 = 0x80
            long double x87_r7_6 = float.t(arg2.d) * fconvert.t(0.03125f) * float.t(var_3c_2)
            char var_24_4 = 0x60
            char var_23_4 = 0x60
            int16_t x87status_4
            int16_t temp0_4
            temp0_4, x87status_4 = __fnstcw_memmem16(arg1)
            var_3c_2.w = temp0_4
            char var_22_4 = 0x80
            int16_t x87control_1
            int16_t x87status_5
            x87control_1, x87status_5 = __fldcw_memmem16(var_3c_2.w | 0xc00)
            int16_t eax_55
            eax_55.b = (int.d(x87_r7_6)).b
            char var_35_5 = eax_55.b
            char var_25_4 = eax_55.b
            int16_t x87status_6
            arg1, x87status_6 = __fldcw_memmem16(var_3c_2.w)
            char var_21_4 = eax_55.b
            
            if (i != 0)
                int32_t eax_56 = 0x260 - *(*(ecx_17 + (i << 2) + 0xa5c) * 0x21c + ecx_17 + 0xbcfd8)
                
                if (eax_56 s> 0x100)
                    eax_56 = 0x100
                
                var_20 = eax_56
                int32_t var_1c_14 = 0x188
            else
                var_20 = 0x20
                int32_t var_1c_13 = 0x168
            
            sub_43bf80(*(ecx_17 + (i << 2) + 0xa5c) * 0x21c + ecx_17 + 0xbcdc8, &var_20, &var_28, 1)
            ecx_17 = data_a5dce4
            *(ecx_17 + (i << 2) + 0xa4c) += 1
            
            if (*(ecx_17 + 0xa1c) s>= *(ecx_17 + (i << 2) + 0xa54))
                *(ecx_17 + (i << 2) + 0xa5c) = 0xffffffff

var_20 = 0
int32_t var_1c_17 = 0
var_38 = 0
char var_37_7 = 0
char var_36_7 = 0
int32_t eax_62
int32_t edx_47
edx_47:eax_62 = sx.q(arg2.d)
int32_t ebx_1 = (eax_62 - edx_47) s>> 1
int32_t var_18_1 = 0x280
int32_t var_14_1 = 0x30
char var_35_7 = ebx_1.b
sub_4437c0(&var_20, &var_38, 1)
int32_t i_1 = 0
int32_t i_3 = 0
float var_30_6 = fconvert.s(float.t(ebx_1))
float var_34 = fconvert.s(float.t(arg2.d) * fconvert.t(0.03125f))

do
    int16_t x87status_7
    int16_t temp0_5
    temp0_5, x87status_7 = __fnstcw_memmem16(arg1)
    arg2.w = temp0_5
    int32_t var_1c_18 = i_1 + 0x30
    int16_t x87control_2
    int16_t x87status_8
    x87control_2, x87status_8 = __fldcw_memmem16(arg2.w | 0xc00)
    var_20 = 0
    int32_t var_18_2 = 0x280
    int32_t var_14_2 = 1
    var_38 = 0
    char var_37_8 = 0
    char var_36_8 = 0
    char var_35_8 = (int.d(fconvert.t(var_30_6) - float.t(i_3) * fconvert.t(var_34))).b
    int16_t x87status_9
    arg1, x87status_9 = __fldcw_memmem16(arg2.w)
    sub_4437c0(&var_20, &var_38, 1)
    i_1 += 1
    i_3 = i_1
while (i_1 s< 0x10)

char var_35_9 = ebx_1.b
var_20 = 0
int32_t var_1c_19 = 0x158
int32_t var_18_3 = 0x280
int32_t var_14_3 = 0x68
var_38 = 0
char var_37_9 = 0
char var_36_9 = 0
sub_4437c0(&var_20, &var_38, 1)
int32_t var_3c_5 = 0
int32_t* result

for (int32_t i_2 = 0x157; i_2 s> 0x147; i_2 -= 1)
    int16_t x87status_10
    int16_t temp0_6
    temp0_6, x87status_10 = __fnstcw_memmem16(arg1)
    arg2.w = temp0_6
    int16_t x87control_3
    int16_t x87status_11
    x87control_3, x87status_11 = __fldcw_memmem16(arg2.w | 0xc00)
    var_20 = 0
    int32_t i_4 = i_2
    int32_t var_18_4 = 0x280
    int32_t var_14_4 = 1
    char var_2c_2 = (int.d(fconvert.t(var_30_6) - float.t(var_3c_5) * fconvert.t(var_34))).b
    var_38 = 0
    char var_37_10 = 0
    char var_36_10 = 0
    char var_35_10 = var_2c_2
    int16_t x87status_12
    arg1, x87status_12 = __fldcw_memmem16(arg2.w)
    result = sub_4437c0(&var_20, &var_38, 1)
    var_3c_5 += 1

return result
