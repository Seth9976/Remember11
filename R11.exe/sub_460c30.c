// 函数: sub_460c30
// 地址: 0x460c30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t ebp = *(arg2 + 0x10)
int32_t eax = *(arg2 + 0x14)
int32_t var_2c = 0
int32_t var_30 = 0
int32_t eax_2 = (ebp u>> 4 | eax << 0x1c) & 1
int32_t edx = 0x100
int32_t esi = 0x100
float var_28
float var_24

if (eax_2 != 0)
    void* eax_3 = *(arg2 + 0xa8)
    edx = *(eax_3 + 0x10)
    var_28 = fconvert.s(fconvert.t(*(eax_3 + 0x28)))
    esi = *(eax_3 + 0x14)
    var_24 = fconvert.s(fconvert.t(*(eax_3 + 0x2c)))
    var_2c = *(eax_3 + 0x20) << 4
    var_30 = *(eax_3 + 0x24) << 4

int32_t edx_1 = edx << 4
int32_t esi_1 = esi << 4
int32_t var_44 = 0
char var_20 = 0
char var_45 = 1

if ((ebp & 0x40) != 0)
    int32_t edx_2 = *(arg2 + 8)
    int32_t var_c_1 = *(arg2 + 0xc)
    
    if ((edx_2 & 3) == 0 && (edx_2 & 0xc) == 4 && (edx_2 & 0x30) == 0x20 && (edx_2 & 0xc0) == 0x40)
        char eax_15 = *(arg2 + 0xc)
        
        if (eax_15 u< 0x80)
            var_45 = 0
        
        int32_t eax_17
        int32_t edx_4
        edx_4:eax_17 = sx.q(zx.d(eax_15))
        int32_t edx_5 = edx_4 << 1 | eax_17 u>> 0xffffffe1
        int32_t eax_18 = eax_17 * 2
        
        if (edx_5 u> 0 || (edx_5 u>= 0 && eax_18 u>= 0xff))
            eax_18 = 0xff
            int32_t var_c_3 = 0
        else
            int32_t var_c_2 = edx_5
        
        var_44 = eax_18 << 0x18
        var_20 = 1

uint32_t i_6 = arg4
*(arg1 + &data_441e64) = 0
int16_t edx_6 = (*(arg2 + 0x74)).w
int16_t* esi_2 = *(arg1 + 0x441d14)
void* var_3c = *(arg1 + 0x441d10)
int32_t eax_22 = *(arg2 + 0x40) & 0x1ff

if ((eax_22 == 0 || eax_22 == 1) && (ebp & 7) == 6 && arg3 == 2)
    int32_t var_c_4 = 0
    int32_t var_c_5 = 0
    long double x87_r7_4 = float.t(zx.q(*(arg2 + 0x48))) + fneg(float.t(0.q))
    long double x87_r5_1 = fconvert.t(8f)
    int32_t eax_26
    int32_t edx_9
    edx_9:eax_26 = sx.q(sub_480df0(fconvert.t(*i_6) - x87_r7_4 + x87_r5_1))
    
    if ((eax_26 + (edx_9 & 0xf)) s>> 4 == 0)
        long double x87_r5_3 = float.t(zx.d(*(arg2 + 0x4c)))
        int32_t eax_29
        int32_t edx_11
        edx_11:eax_29 = sx.q(sub_480df0(fconvert.t(*(i_6 + 4)) - x87_r5_3 + x87_r5_1))
        
        if ((eax_29 + (edx_11 & 0xf)) s>> 4 == 0)
            int32_t eax_32
            int32_t edx_13
            edx_13:eax_32 = sx.q(sub_480df0(fconvert.t(*(i_6 + 0x18)) - x87_r7_4 + x87_r5_1))
            
            if ((eax_32 + (edx_13 & 0xf)) s>> 4 == 0x280)
                int32_t eax_35
                int32_t edx_15
                edx_15:eax_35 = sx.q(sub_480df0(fconvert.t(*(i_6 + 0x1c)) - x87_r5_3 + x87_r5_1))
                
                if ((eax_35 + (edx_15 & 0xf)) s>> 4 == 0x1c0)
                    *(arg2 + 0xad) = 1

uint32_t ecx_3 = arg3
long double result = fconvert.t(4096f)
long double x87_r6_7 = fconvert.t(61440f)
int32_t edx_17 = 0

if (ecx_3 s>= 4)
    int32_t i_4 = ((ecx_3 - 4) u>> 2) + 1
    edx_17 = i_4 << 2
    int32_t i
    
    do
        long double result_1 = result
        long double x87_r7_11 = x87_r6_7
        long double temp1_1 = fconvert.t(*i_6)
        result_1 - temp1_1
        eax_22.w = (result_1 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(result_1, temp1_1) ? 1 : 0) << 0xa
            | (result_1 == temp1_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_460ef0
        
        long double temp3_1 = fconvert.t(*(i_6 + 4))
        result_1 - temp3_1
        eax_22.w = (result_1 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(result_1, temp3_1) ? 1 : 0) << 0xa
            | (result_1 == temp3_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_460ef0
        
        long double x87_r6_8 = x87_r7_11
        long double result_4 = result_1
        long double temp6_1 = fconvert.t(*i_6)
        x87_r6_8 - temp6_1
        eax_22.w = (x87_r6_8 < temp6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_8, temp6_1) ? 1 : 0) << 0xa
            | (x87_r6_8 == temp6_1 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
        label_460eee:
            result_1 = result_4
            x87_r7_11 = x87_r6_8
        label_460ef0:
            *(arg2 + 0x95) = 1
            x87_r6_8 = x87_r7_11
            result_4 = result_1
        else
            long double temp10_1 = fconvert.t(*(i_6 + 4))
            x87_r6_8 - temp10_1
            eax_22.w = (x87_r6_8 < temp10_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_8, temp10_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == temp10_1 ? 1 : 0) << 0xe | 0x3000
            result_1 = result_4
            x87_r7_11 = x87_r6_8
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                goto label_460ef0
            
            long double temp14_1 = fconvert.t(*(i_6 + 0x18))
            result_1 - temp14_1
            eax_22.w = (result_1 < temp14_1 ? 1 : 0) << 8
                | (is_unordered.t(result_1, temp14_1) ? 1 : 0) << 0xa
                | (result_1 == temp14_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_460ef0
            
            long double temp18_1 = fconvert.t(*(i_6 + 0x1c))
            result_1 - temp18_1
            eax_22.w = (result_1 < temp18_1 ? 1 : 0) << 8
                | (is_unordered.t(result_1, temp18_1) ? 1 : 0) << 0xa
                | (result_1 == temp18_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_460ef0
            
            x87_r6_8 = x87_r7_11
            result_4 = result_1
            long double temp24_1 = fconvert.t(*(i_6 + 0x18))
            x87_r6_8 - temp24_1
            eax_22.w = (x87_r6_8 < temp24_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_8, temp24_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == temp24_1 ? 1 : 0) << 0xe | 0x3000
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                goto label_460eee
            
            long double temp29_1 = fconvert.t(*(i_6 + 0x1c))
            x87_r6_8 - temp29_1
            eax_22.w = (x87_r6_8 < temp29_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_8, temp29_1) ? 1 : 0) << 0xa
                | (x87_r6_8 == temp29_1 ? 1 : 0) << 0xe | 0x3000
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (not(p_4))
                goto label_460eee
        
        long double result_6 = result_4
        long double x87_r7_12 = x87_r6_8
        long double temp5_1 = fconvert.t(*i_6)
        result_6 - temp5_1
        eax_22.w = (result_6 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(result_6, temp5_1) ? 1 : 0) << 0xa
            | (result_6 == temp5_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_460f51
        
        long double temp9_1 = fconvert.t(*(i_6 + 4))
        result_6 - temp9_1
        eax_22.w = (result_6 < temp9_1 ? 1 : 0) << 8
            | (is_unordered.t(result_6, temp9_1) ? 1 : 0) << 0xa
            | (result_6 == temp9_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_460f51
        
        long double x87_r6_9 = x87_r7_12
        long double result_8 = result_6
        long double temp13_1 = fconvert.t(*i_6)
        x87_r6_9 - temp13_1
        eax_22.w = (x87_r6_9 < temp13_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_9, temp13_1) ? 1 : 0) << 0xa
            | (x87_r6_9 == temp13_1 ? 1 : 0) << 0xe | 0x3000
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5))
        label_460f4f:
            result_6 = result_8
            x87_r7_12 = x87_r6_9
        label_460f51:
            *(arg2 + 0x95) = 1
            x87_r6_9 = x87_r7_12
            result_8 = result_6
        else
            long double temp17_1 = fconvert.t(*(i_6 + 4))
            x87_r6_9 - temp17_1
            eax_22.w = (x87_r6_9 < temp17_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_9, temp17_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == temp17_1 ? 1 : 0) << 0xe | 0x3000
            result_6 = result_8
            x87_r7_12 = x87_r6_9
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (not(p_6))
                goto label_460f51
            
            long double temp23_1 = fconvert.t(*(i_6 + 0x18))
            result_6 - temp23_1
            eax_22.w = (result_6 < temp23_1 ? 1 : 0) << 8
                | (is_unordered.t(result_6, temp23_1) ? 1 : 0) << 0xa
                | (result_6 == temp23_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_460f51
            
            long double temp28_1 = fconvert.t(*(i_6 + 0x1c))
            result_6 - temp28_1
            eax_22.w = (result_6 < temp28_1 ? 1 : 0) << 8
                | (is_unordered.t(result_6, temp28_1) ? 1 : 0) << 0xa
                | (result_6 == temp28_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_460f51
            
            x87_r6_9 = x87_r7_12
            result_8 = result_6
            long double temp35_1 = fconvert.t(*(i_6 + 0x18))
            x87_r6_9 - temp35_1
            eax_22.w = (x87_r6_9 < temp35_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_9, temp35_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == temp35_1 ? 1 : 0) << 0xe | 0x3000
            bool p_7 = unimplemented  {test ah, 0x5}
            
            if (not(p_7))
                goto label_460f4f
            
            long double temp38_1 = fconvert.t(*(i_6 + 0x1c))
            x87_r6_9 - temp38_1
            eax_22.w = (x87_r6_9 < temp38_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_9, temp38_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == temp38_1 ? 1 : 0) << 0xe | 0x3000
            bool p_8 = unimplemented  {test ah, 0x5}
            
            if (not(p_8))
                goto label_460f4f
        
        long double result_7 = result_8
        long double x87_r7_13 = x87_r6_9
        long double temp12_1 = fconvert.t(*i_6)
        result_7 - temp12_1
        eax_22.w = (result_7 < temp12_1 ? 1 : 0) << 8
            | (is_unordered.t(result_7, temp12_1) ? 1 : 0) << 0xa
            | (result_7 == temp12_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_460fb2
        
        long double temp16_1 = fconvert.t(*(i_6 + 4))
        result_7 - temp16_1
        eax_22.w = (result_7 < temp16_1 ? 1 : 0) << 8
            | (is_unordered.t(result_7, temp16_1) ? 1 : 0) << 0xa
            | (result_7 == temp16_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_460fb2
        
        long double x87_r6_10 = x87_r7_13
        long double result_5 = result_7
        long double temp22_1 = fconvert.t(*i_6)
        x87_r6_10 - temp22_1
        eax_22.w = (x87_r6_10 < temp22_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_10, temp22_1) ? 1 : 0) << 0xa
            | (x87_r6_10 == temp22_1 ? 1 : 0) << 0xe | 0x3000
        bool p_9 = unimplemented  {test ah, 0x5}
        
        if (not(p_9))
        label_460fb0:
            result_7 = result_5
            x87_r7_13 = x87_r6_10
        label_460fb2:
            *(arg2 + 0x95) = 1
            x87_r6_10 = x87_r7_13
            result_5 = result_7
        else
            long double temp27_1 = fconvert.t(*(i_6 + 4))
            x87_r6_10 - temp27_1
            eax_22.w = (x87_r6_10 < temp27_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_10, temp27_1) ? 1 : 0) << 0xa
                | (x87_r6_10 == temp27_1 ? 1 : 0) << 0xe | 0x3000
            result_7 = result_5
            x87_r7_13 = x87_r6_10
            bool p_10 = unimplemented  {test ah, 0x5}
            
            if (not(p_10))
                goto label_460fb2
            
            long double temp34_1 = fconvert.t(*(i_6 + 0x18))
            result_7 - temp34_1
            eax_22.w = (result_7 < temp34_1 ? 1 : 0) << 8
                | (is_unordered.t(result_7, temp34_1) ? 1 : 0) << 0xa
                | (result_7 == temp34_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_460fb2
            
            long double temp37_1 = fconvert.t(*(i_6 + 0x1c))
            result_7 - temp37_1
            eax_22.w = (result_7 < temp37_1 ? 1 : 0) << 8
                | (is_unordered.t(result_7, temp37_1) ? 1 : 0) << 0xa
                | (result_7 == temp37_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_460fb2
            
            x87_r6_10 = x87_r7_13
            result_5 = result_7
            long double temp40_1 = fconvert.t(*(i_6 + 0x18))
            x87_r6_10 - temp40_1
            eax_22.w = (x87_r6_10 < temp40_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_10, temp40_1) ? 1 : 0) << 0xa
                | (x87_r6_10 == temp40_1 ? 1 : 0) << 0xe | 0x3000
            bool p_11 = unimplemented  {test ah, 0x5}
            
            if (not(p_11))
                goto label_460fb0
            
            long double temp42_1 = fconvert.t(*(i_6 + 0x1c))
            x87_r6_10 - temp42_1
            eax_22.w = (x87_r6_10 < temp42_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_10, temp42_1) ? 1 : 0) << 0xa
                | (x87_r6_10 == temp42_1 ? 1 : 0) << 0xe | 0x3000
            bool p_12 = unimplemented  {test ah, 0x5}
            
            if (not(p_12))
                goto label_460fb0
        
        long double result_2 = result_5
        long double x87_r7_14 = x87_r6_10
        long double temp21_1 = fconvert.t(*i_6)
        result_2 - temp21_1
        eax_22.w = (result_2 < temp21_1 ? 1 : 0) << 8
            | (is_unordered.t(result_2, temp21_1) ? 1 : 0) << 0xa
            | (result_2 == temp21_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_461013
        
        long double temp26_1 = fconvert.t(*(i_6 + 4))
        result_2 - temp26_1
        eax_22.w = (result_2 < temp26_1 ? 1 : 0) << 8
            | (is_unordered.t(result_2, temp26_1) ? 1 : 0) << 0xa
            | (result_2 == temp26_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_461013
        
        x87_r6_7 = x87_r7_14
        result = result_2
        long double temp33_1 = fconvert.t(*i_6)
        x87_r6_7 - temp33_1
        eax_22.w = (x87_r6_7 < temp33_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, temp33_1) ? 1 : 0) << 0xa
            | (x87_r6_7 == temp33_1 ? 1 : 0) << 0xe | 0x3000
        bool p_13 = unimplemented  {test ah, 0x5}
        
        if (not(p_13))
        label_461011:
            result_2 = result
            x87_r7_14 = x87_r6_7
        label_461013:
            *(arg2 + 0x95) = 1
            x87_r6_7 = x87_r7_14
            result = result_2
        else
            long double temp36_1 = fconvert.t(*(i_6 + 4))
            x87_r6_7 - temp36_1
            eax_22.w = (x87_r6_7 < temp36_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, temp36_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp36_1 ? 1 : 0) << 0xe | 0x3000
            result_2 = result
            x87_r7_14 = x87_r6_7
            bool p_14 = unimplemented  {test ah, 0x5}
            
            if (not(p_14))
                goto label_461013
            
            long double temp39_1 = fconvert.t(*(i_6 + 0x18))
            result_2 - temp39_1
            eax_22.w = (result_2 < temp39_1 ? 1 : 0) << 8
                | (is_unordered.t(result_2, temp39_1) ? 1 : 0) << 0xa
                | (result_2 == temp39_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_461013
            
            long double temp41_1 = fconvert.t(*(i_6 + 0x1c))
            result_2 - temp41_1
            eax_22.w = (result_2 < temp41_1 ? 1 : 0) << 8
                | (is_unordered.t(result_2, temp41_1) ? 1 : 0) << 0xa
                | (result_2 == temp41_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_461013
            
            x87_r6_7 = x87_r7_14
            result = result_2
            long double temp43_1 = fconvert.t(*(i_6 + 0x18))
            x87_r6_7 - temp43_1
            eax_22.w = (x87_r6_7 < temp43_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, temp43_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp43_1 ? 1 : 0) << 0xe | 0x3000
            bool p_15 = unimplemented  {test ah, 0x5}
            
            if (not(p_15))
                goto label_461011
            
            long double temp44_1 = fconvert.t(*(i_6 + 0x1c))
            x87_r6_7 - temp44_1
            eax_22.w = (x87_r6_7 < temp44_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, temp44_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp44_1 ? 1 : 0) << 0xe | 0x3000
            bool p_16 = unimplemented  {test ah, 0x5}
            
            if (not(p_16))
                goto label_461011
        
        i = i_4
        i_4 -= 1
    while (i != 1)
    ecx_3 = arg3

if (edx_17 s< ecx_3)
    int32_t i_5 = arg3 - edx_17
    int32_t i_1
    
    do
        long double result_3 = result
        long double x87_r7_15 = x87_r6_7
        long double temp2_1 = fconvert.t(*i_6)
        result_3 - temp2_1
        eax_22.w = (result_3 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(result_3, temp2_1) ? 1 : 0) << 0xa
            | (result_3 == temp2_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_46108b
        
        long double temp4_1 = fconvert.t(*(i_6 + 4))
        result_3 - temp4_1
        eax_22.w = (result_3 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(result_3, temp4_1) ? 1 : 0) << 0xa
            | (result_3 == temp4_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_22:1.b & 0x41) == 0)
            goto label_46108b
        
        x87_r6_7 = x87_r7_15
        result = result_3
        long double temp8_1 = fconvert.t(*i_6)
        x87_r6_7 - temp8_1
        eax_22.w = (x87_r6_7 < temp8_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_7, temp8_1) ? 1 : 0) << 0xa
            | (x87_r6_7 == temp8_1 ? 1 : 0) << 0xe | 0x3000
        bool p_17 = unimplemented  {test ah, 0x5}
        
        if (not(p_17))
        label_461089:
            result_3 = result
            x87_r7_15 = x87_r6_7
        label_46108b:
            *(arg2 + 0x95) = 1
            x87_r6_7 = x87_r7_15
            result = result_3
        else
            long double temp11_1 = fconvert.t(*(i_6 + 4))
            x87_r6_7 - temp11_1
            eax_22.w = (x87_r6_7 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, temp11_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp11_1 ? 1 : 0) << 0xe | 0x3000
            result_3 = result
            x87_r7_15 = x87_r6_7
            bool p_18 = unimplemented  {test ah, 0x5}
            
            if (not(p_18))
                goto label_46108b
            
            long double temp15_1 = fconvert.t(*(i_6 + 0x18))
            result_3 - temp15_1
            eax_22.w = (result_3 < temp15_1 ? 1 : 0) << 8
                | (is_unordered.t(result_3, temp15_1) ? 1 : 0) << 0xa
                | (result_3 == temp15_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_46108b
            
            long double temp20_1 = fconvert.t(*(i_6 + 0x1c))
            result_3 - temp20_1
            eax_22.w = (result_3 < temp20_1 ? 1 : 0) << 8
                | (is_unordered.t(result_3, temp20_1) ? 1 : 0) << 0xa
                | (result_3 == temp20_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_22:1.b & 0x41) == 0)
                goto label_46108b
            
            x87_r6_7 = x87_r7_15
            result = result_3
            long double temp25_1 = fconvert.t(*(i_6 + 0x18))
            x87_r6_7 - temp25_1
            eax_22.w = (x87_r6_7 < temp25_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, temp25_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp25_1 ? 1 : 0) << 0xe | 0x3000
            bool p_19 = unimplemented  {test ah, 0x5}
            
            if (not(p_19))
                goto label_461089
            
            long double temp31_1 = fconvert.t(*(i_6 + 0x1c))
            x87_r6_7 - temp31_1
            eax_22.w = (x87_r6_7 < temp31_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_7, temp31_1) ? 1 : 0) << 0xa
                | (x87_r6_7 == temp31_1 ? 1 : 0) << 0xe | 0x3000
            bool p_20 = unimplemented  {test ah, 0x5}
            
            if (not(p_20))
                goto label_461089
        
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int32_t eax_39 = (*(arg2 + 0x30) u>> 0x18 | *(arg2 + 0x34) << 8) & 0xf

if (eax_39 u> 0x32 || eax_39 u> 0x32)
    sub_465480(".\render.cpp", 0x702)
else
    switch (eax_39)
        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xb, 0xc, 0xd, 0xe, 0xf
            sub_465480(".\render.cpp", 0x702)

int32_t eax_42 = ebp & 7
uint32_t ecx_10
int32_t ebp_4

if (eax_42 != 6)
    if (eax_2 != 1)
        void* ebp_3 = var_3c
        
        if (arg3 s> 0)
            float* edi_2 = i_6 + 8
            i_6 = arg3
            uint32_t i_2
            
            do
                *ebp_3 = fconvert.s(fconvert.t(edi_2[-2]))
                *(ebp_3 + 4) = fconvert.s(fconvert.t(edi_2[-1]))
                *(ebp_3 + 8) = fconvert.s(fconvert.t(*edi_2))
                *(ebp_3 + 0xc) = sub_460b80(arg1, edi_2[1], var_20, var_44, &var_45)
                edi_2 = &edi_2[6]
                ebp_3 += 0x10
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        var_3c = ebp_3
    else if ((ebp & 0x100) != 0)
        void* edi_1 = var_3c
        
        if (arg3 s> 0)
            float* eax_46 = edi_1 - i_6
            void* ebp_2 = i_6 + 8
            i_6 = arg3
            float var_34_1 = fconvert.s(float.t(edx_1))
            float var_30_1 = fconvert.s(float.t(var_30))
            float var_2c_1 = fconvert.s(float.t(esi_1))
            uint32_t i_3
            
            do
                *edi_1 = fconvert.s(fconvert.t(*(ebp_2 - 8)))
                *(edi_1 + 4) = fconvert.s(fconvert.t(*(ebp_2 - 4)))
                *(eax_46 + ebp_2) = fconvert.s(fconvert.t(*ebp_2))
                *(edi_1 + 0xc) = sub_460b80(arg1, *(ebp_2 + 4), var_20, var_44, &var_45)
                long double x87_r7_23 = float.t(*(ebp_2 + 8))
                edi_1 += 0x18
                ebp_2 += 0x18
                i_3 = i_6
                i_6 -= 1
                *(edi_1 - 8) = fconvert.s((x87_r7_23 * fconvert.t(var_28)
                    + fconvert.t(fconvert.s(float.t(var_2c)))) / fconvert.t(var_34_1))
                *(edi_1 - 4) = fconvert.s((float.t(*(ebp_2 - 0xc)) * fconvert.t(var_24)
                    + fconvert.t(var_30_1)) / fconvert.t(var_2c_1))
            while (i_3 != 1)
        
        var_3c = edi_1
    else
        sub_465480(".\render.cpp", 0x707)
    
    ebp_4 = eax_42
    int16_t eax_55
    
    if (ebp_4 u> 5 || ebp_4 u> 5)
        sub_465480(".\render.cpp", 0x749)
        ecx_10 = arg3
    else
        switch (ebp_4)
            case 0
                ecx_10 = arg3
            case 1
                ecx_10 = arg3
                eax_55 = edx_6
                int32_t edx_24 = 0
                
                if (ecx_10 s> 0)
                    do
                        int16_t ebx_11 = edx_24.w
                        *esi_2 = eax_55 + ebx_11
                        esi_2[1] = eax_55 + ebx_11 + 1
                        edx_24 += 2
                        esi_2 = &esi_2[2]
                    while (edx_24 s< ecx_10)
                
                goto label_461347
            case 2
                ecx_10 = arg3
                int32_t eax_54 = 1
                
                if (ecx_10 s> 1)
                    do
                        int16_t edx_23 = eax_54.w + edx_6
                        *esi_2 = edx_23 - 1
                        esi_2[1] = edx_23
                        eax_54 += 1
                        esi_2 = &esi_2[2]
                    while (eax_54 s< ecx_10)
            case 3
                ecx_10 = arg3
                int32_t edx_22 = 0
                
                if (ecx_10 s> 0)
                    do
                        int16_t eax_52 = edx_22.w
                        *esi_2 = edx_6 + eax_52
                        esi_2[1] = edx_6 + eax_52 + 1
                        esi_2[2] = edx_6 + eax_52 + 2
                        edx_22 += 3
                        esi_2 = &esi_2[3]
                    while (edx_22 s< ecx_10)
            case 4
                ecx_10 = arg3
                int32_t edx_21 = 2
                
                if (ecx_10 s> 2)
                    do
                        int16_t eax_51 = edx_21.w + edx_6
                        *esi_2 = eax_51 - 2
                        esi_2[1] = eax_51 - 1
                        esi_2[2] = eax_51
                        edx_21 += 1
                        esi_2 = &esi_2[3]
                    while (edx_21 s< ecx_10)
            case 5
                eax_55 = edx_6
                ecx_10 = arg3
            label_461347:
                int32_t edx_25 = 2
                
                if (ecx_10 s> 2)
                    do
                        *esi_2 = eax_55
                        int16_t ebx_12 = edx_25.w + eax_55
                        esi_2[1] = ebx_12 - 1
                        esi_2[2] = ebx_12
                        edx_25 += 1
                        esi_2 = &esi_2[3]
                    while (edx_25 s< ecx_10)
else
    void* edi_10
    
    if (eax_2 != 1)
        edi_10 = var_3c
        arg4 = 0
        
        if (arg3 s> 0)
            int32_t eax_77 = (ebp u>> 3 | eax << 0x1d) & 1
            void* ebp_8 = i_6 + 0x18
            bool cond:18_1
            
            do
                *edi_10 = fconvert.s(fconvert.t(*(ebp_8 - 0x18)))
                *(edi_10 + 4) = fconvert.s(fconvert.t(*(ebp_8 - 0x14)))
                *(edi_10 + 8) = fconvert.s(fconvert.t(*(ebp_8 - 0x10)))
                int32_t eax_78 = data_c78890
                
                if (eax_77 != 0)
                    eax_78 = *(ebp_8 - 0xc)
                
                *(edi_10 + 0xc) = sub_460b80(arg1, eax_78, var_20, var_44, &var_45)
                *(edi_10 + 0x10) = fconvert.s(fconvert.t(*ebp_8))
                *(edi_10 + 0x14) = fconvert.s(fconvert.t(*(ebp_8 - 0x14)))
                *(edi_10 + 0x18) = fconvert.s(fconvert.t(*(ebp_8 - 0x10)))
                int32_t eax_80 = data_c78890
                
                if (eax_77 != 0)
                    eax_80 = *(ebp_8 - 0xc)
                
                *(edi_10 + 0x1c) = sub_460b80(arg1, eax_80, var_20, var_44, &var_45)
                *(edi_10 + 0x20) = fconvert.s(fconvert.t(*ebp_8))
                *(edi_10 + 0x24) = fconvert.s(fconvert.t(*(ebp_8 + 4)))
                *(edi_10 + 0x28) = fconvert.s(fconvert.t(*(ebp_8 - 0x10)))
                int32_t eax_82 = data_c78890
                
                if (eax_77 != 0)
                    eax_82 = *(ebp_8 - 0xc)
                
                *(edi_10 + 0x2c) = sub_460b80(arg1, eax_82, var_20, var_44, &var_45)
                *(edi_10 + 0x30) = fconvert.s(fconvert.t(*(ebp_8 - 0x18)))
                *(edi_10 + 0x34) = fconvert.s(fconvert.t(*(ebp_8 + 4)))
                *(edi_10 + 0x38) = fconvert.s(fconvert.t(*(ebp_8 - 0x10)))
                int32_t eax_84 = data_c78890
                
                if (eax_77 != 0)
                    eax_84 = *(ebp_8 - 0xc)
                
                *(edi_10 + 0x3c) = sub_460b80(arg1, eax_84, var_20, var_44, &var_45)
                int16_t eax_87 = edx_6 + (arg4 << 1).w
                *esi_2 = eax_87 + 1
                esi_2[1] = eax_87
                esi_2[2] = eax_87 + 2
                esi_2[3] = eax_87
                esi_2[4] = eax_87 + 3
                esi_2[5] = eax_87 + 2
                edi_10 += 0x40
                ebp_8 += 0x30
                esi_2 = &esi_2[6]
                cond:18_1 = arg4 + 2 s< arg3
                arg4 += 2
            while (cond:18_1)
        
        var_3c = edi_10
    else if ((ebp & 0x100) != 0)
        edi_10 = var_3c
        int32_t var_3c_1 = 0
        
        if (arg3 s> 0)
            arg4 = fconvert.s(float.t(var_2c))
            int32_t eax_63 = (ebp u>> 3 | eax << 0x1d) & 1
            int32_t* ebp_6 = i_6 + 0x14
            float var_34_2 = fconvert.s(float.t(edx_1))
            float var_30_2 = fconvert.s(float.t(var_30))
            float var_2c_2 = fconvert.s(float.t(esi_1))
            int32_t edx_34
            
            do
                *edi_10 = fconvert.s(fconvert.t(ebp_6[-5]))
                *(edi_10 + 4) = fconvert.s(fconvert.t(ebp_6[-4]))
                *(edi_10 + 8) = fconvert.s(fconvert.t(ebp_6[-3]))
                int32_t eax_64 = data_c78890
                
                if (eax_63 != 0)
                    eax_64 = ebp_6[-2]
                
                *(edi_10 + 0xc) = sub_460b80(arg1, eax_64, var_20, var_44, &var_45)
                *(edi_10 + 0x10) = fconvert.s((float.t(ebp_6[-1]) * fconvert.t(var_28)
                    + fconvert.t(arg4)) / fconvert.t(var_34_2))
                *(edi_10 + 0x14) = fconvert.s((float.t(*ebp_6) * fconvert.t(var_24)
                    + fconvert.t(var_30_2)) / fconvert.t(var_2c_2))
                *(edi_10 + 0x18) = fconvert.s(fconvert.t(ebp_6[1]))
                *(edi_10 + 0x1c) = fconvert.s(fconvert.t(ebp_6[-4]))
                *(edi_10 + 0x20) = fconvert.s(fconvert.t(ebp_6[-3]))
                int32_t eax_66 = data_c78890
                
                if (eax_63 != 0)
                    eax_66 = ebp_6[-2]
                
                *(edi_10 + 0x24) = sub_460b80(arg1, eax_66, var_20, var_44, &var_45)
                *(edi_10 + 0x28) = fconvert.s((float.t(ebp_6[5]) * fconvert.t(var_28)
                    + fconvert.t(arg4)) / fconvert.t(var_34_2))
                *(edi_10 + 0x2c) = fconvert.s((float.t(*ebp_6) * fconvert.t(var_24)
                    + fconvert.t(var_30_2)) / fconvert.t(var_2c_2))
                *(edi_10 + 0x30) = fconvert.s(fconvert.t(ebp_6[1]))
                *(edi_10 + 0x34) = fconvert.s(fconvert.t(ebp_6[2]))
                *(edi_10 + 0x38) = fconvert.s(fconvert.t(ebp_6[-3]))
                int32_t eax_68 = data_c78890
                
                if (eax_63 != 0)
                    eax_68 = ebp_6[-2]
                
                *(edi_10 + 0x3c) = sub_460b80(arg1, eax_68, var_20, var_44, &var_45)
                *(edi_10 + 0x40) = fconvert.s((float.t(ebp_6[5]) * fconvert.t(var_28)
                    + fconvert.t(arg4)) / fconvert.t(var_34_2))
                *(edi_10 + 0x44) = fconvert.s((float.t(ebp_6[6]) * fconvert.t(var_24)
                    + fconvert.t(var_30_2)) / fconvert.t(var_2c_2))
                *(edi_10 + 0x48) = fconvert.s(fconvert.t(ebp_6[-5]))
                *(edi_10 + 0x4c) = fconvert.s(fconvert.t(ebp_6[2]))
                *(edi_10 + 0x50) = fconvert.s(fconvert.t(ebp_6[-3]))
                int32_t eax_70 = data_c78890
                
                if (eax_63 != 0)
                    eax_70 = ebp_6[-2]
                
                *(edi_10 + 0x54) = sub_460b80(arg1, eax_70, var_20, var_44, &var_45)
                int16_t eax_73 = edx_6 + (var_3c_1 << 1).w
                long double x87_r7_77 = (float.t(ebp_6[-1]) * fconvert.t(var_28) + fconvert.t(arg4))
                    / fconvert.t(var_34_2)
                edx_34 = var_3c_1 + 2
                edi_10 += 0x60
                ebp_6 = &ebp_6[0xc]
                esi_2 = &esi_2[6]
                var_3c_1 = edx_34
                *(edi_10 - 8) = fconvert.s(x87_r7_77)
                *(edi_10 - 4) = fconvert.s((float.t(ebp_6[-6]) * fconvert.t(var_24)
                    + fconvert.t(var_30_2)) / fconvert.t(var_2c_2))
                esi_2[-6] = eax_73 + 1
                esi_2[-5] = eax_73
                esi_2[-4] = eax_73 + 2
                esi_2[-3] = eax_73
                esi_2[-2] = eax_73 + 3
                esi_2[-1] = eax_73 + 2
            while (edx_34 s< arg3)
        
        var_3c = edi_10
    else
        sub_465480(".\render.cpp", 0x74e)
    ebp_4 = eax_42
    int32_t eax_90
    int32_t edx_43
    edx_43:eax_90 = sx.q(arg3)
    ecx_10 = ((eax_90 - edx_43) s>> 1) * 4

*(arg1 + 0x441d14) = esi_2
*(arg1 + 0x441d10) = var_3c
int32_t eax_57 = *(arg1 + &data_441e64)
*(arg2 + 0x74) += ecx_10
bool cond:10 = var_45 != 0
*(arg2 + 0x98) = eax_57

if (not(cond:10))
    *(arg2 + 0xa4) = 0

if (ebp_4 u<= 6 && ebp_4 u<= 6)
    switch (ebp_4)
        case 0
            *(arg2 + 0x70) += ecx_10
            return result
        case 1
            int32_t eax_97
            int32_t edx_44
            edx_44:eax_97 = sx.q(ecx_10)
            *(arg2 + 0x70) += (eax_97 - edx_44) s>> 1
            return result
        case 2
            *(arg2 + 0x70) += ecx_10 - 1
            return result
        case 3
            *(arg2 + 0x70) += ecx_10 s/ 3
            return result
        case 4, 5
            *(arg2 + 0x70) += ecx_10 - 2
            return result
        case 6
            int32_t eax_106
            int32_t edx_46
            edx_46:eax_106 = sx.q(ecx_10)
            *(arg2 + 0x70) += ((eax_106 + (edx_46 & 3)) s>> 2) * 2
            return result

if (data_4caddc == 1)
    sub_464790(".\render.cpp", 0x7d6)
    data_4caddc = 0

return result
