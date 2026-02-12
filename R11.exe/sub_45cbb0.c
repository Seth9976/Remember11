// 函数: sub_45cbb0
// 地址: 0x45cbb0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t* var_524
int32_t eax_1 = __security_cookie ^ &var_524
bool cond:0 = class InputSpace::CInputManager `RTTI Type Descriptor'.__offset(0x27).b != 1
var_524 = arg1

if (not(cond:0))
    (*(*arg1 + 0x10))()
    class InputSpace::CInputManager `RTTI Type Descriptor'.__offset(0x27).b = 0

void* eax_3 = arg1[2]

if (eax_3 != 0)
    int32_t* i_1
    int32_t* i_2
    int32_t* i_3
    
    if (&i_1 == 0 || &i_1 == 0)
        i_2 = i_1
        i_3 = i_1
    else
        i_3 = *(eax_3 + 0xc)
        i_2 = *(eax_3 + 0x14)
    
    int32_t var_520
    
    if (i_2 u> 0)
        int32_t* i_4 = i_3
        i_1 = i_2
        int32_t* i
        
        do
            int32_t* edi_1 = *i_4
            var_520 = 0xa
            
            if ((*(*edi_1 + 0x64))(edi_1) s>= 0)
                int32_t var_450
                sub_480cf0(&var_450, 0, 0x44c)
                int32_t eax_8 = *(*edi_1 + 0x3c)
                var_450 = 0x44c
                eax_8(edi_1, &var_450)
                void var_518
                int32_t eax_9
                eax_9, i_3 = (*(*edi_1 + 0x28))(edi_1, 0x14, &var_518, &var_520, 0)
                
                if (eax_9 s>= 0)
                    int32_t j_3 = var_520
                    
                    if (j_3 u> 0)
                        long double x87_r7_1 = fconvert.t(0.00999999978f)
                        void var_514
                        int32_t** edi_2 = &var_514
                        int32_t j_2 = j_3
                        int32_t j
                        
                        do
                            i_3 = *edi_2
                            int32_t edx_4 = edi_2[3]
                            var_520 = i_3
                            j_3.b = i_3 == 0x80
                            long double x87_r6_2 = float.t(var_520) * x87_r7_1
                            
                            if (edx_4 - 1 u> 0x19)
                                x87_r7_1 = x87_r6_2
                            else
                                switch (edx_4)
                                    case 1
                                        arg3[6].b = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 2
                                        x87_r7_1 = x87_r6_2
                                        
                                        if (j_3.b != 0)
                                            arg3[4].b = 1
                                    case 3
                                        *(arg3 + 0x12) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 4
                                        *(arg3 + 0x11) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 5
                                        *(arg3 + 0x13) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 6
                                        arg3[5].b = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 7
                                        *arg3 = fconvert.s(x87_r6_2)
                                    case 8
                                        arg3[1] = fconvert.s(x87_r6_2)
                                    case 9
                                        arg3[2] = fconvert.s(x87_r6_2)
                                    case 0xa
                                        arg3[3] = fconvert.s(x87_r6_2)
                                    case 0xb
                                        *(arg3 + 0x15) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0xc
                                        *(arg3 + 0x17) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0xd
                                        *(arg3 + 0x16) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0xe
                                        *(arg3 + 0x1b) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0xf
                                        arg3[7].b = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x10
                                        *(arg3 + 0x19) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x11
                                        *(arg3 + 0x1a) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x12
                                        *(arg3 + 0x1f) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x13
                                        *(arg3 + 0x1d) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x14
                                        *(arg3 + 0x1e) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x15
                                        x87_r7_1 = x87_r6_2
                                    case 0x16
                                        arg3[0xa] = i_3
                                        x87_r7_1 = x87_r6_2
                                    case 0x17
                                        arg3[8].b = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x18
                                        *(arg3 + 0x21) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x19
                                        *(arg3 + 0x22) = j_3.b
                                        x87_r7_1 = x87_r6_2
                                    case 0x1a
                                        arg3[9] = i_3
                                        x87_r7_1 = x87_r6_2
                            
                            edi_2 = &edi_2[5]
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
            else
                int32_t eax_7
                eax_7, i_3 = (*(*edi_1 + 0x1c))(edi_1)
                
                if (eax_7 == 0x8007001e)
                    int32_t j_1
                    
                    do
                        j_1 = (*(*edi_1 + 0x1c))(edi_1)
                        sub_4653f0("DIERR_INPUTLOST\n")
                    while (j_1 == 0x8007001e)
            
            i_4 = &i_4[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t* edx_6 = var_524
    data_c785b4 = 0
    data_c785b8 = 0
    data_c785bc = 0
    data_c785c0 = 0
    data_c785b4:2.b = 0x80
    data_c785b4:3.b = 0x80
    data_c785b8.b = 0x80
    data_c785b8:1.b = 0x80
    
    if (edx_6[0xa3] != 0)
        i_3.w = 0
        data_c785b4.w = 0
        
        if (*(edx_6 + 0x26d) != 0)
            i_3.w = 0x2000
            data_c785b4.w = 0x2000
        
        if (*(edx_6 + 0x26e) != 0)
            i_3.w |= 0x4000
            data_c785b4.w = i_3.w
        
        if (*(edx_6 + 0x26f) != 0)
            i_3.w |= 0x8000
            data_c785b4.w = i_3.w
        
        if (arg3[6].b != 0)
            i_3.w |= 0x1000
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x19) != 0)
            i_3.w |= 0x800
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x1a) != 0)
            i_3.w |= 0x200
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x1b) != 0)
            i_3.w |= 0x400
            data_c785b4.w = i_3.w
        
        if (arg3[7].b != 0)
            i_3.w |= 0x100
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x1f) != 0)
            i_3.w |= 4
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x1d) != 0)
            i_3.w |= 8
            data_c785b4.w = i_3.w
        
        if (*(edx_6 + 0x276) != 0)
            i_3.w |= 1
            data_c785b4.w = i_3.w
        
        int32_t eax_10 = edx_6[0xa0]
        
        if (eax_10 s>= 0)
            if (eax_10 == 0)
                i_3.w |= 0x10
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x1194)
                i_3.w |= 0x30
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x2328)
                i_3.w |= 0x20
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x34bc)
                i_3.w |= 0x60
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x4650)
                i_3.w |= 0x40
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x57e4)
                i_3.w |= 0xc0
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x6978)
                i_3.w |= 0x80
                data_c785b4.w = i_3.w
            
            if (edx_6[0xa0] == 0x7b0c)
                i_3.w |= 0x90
                data_c785b4.w = i_3.w
        
        long double x87_r6_3 = float.t(1)
        long double x87_r5_1 = fconvert.t(128f)
        long double x87_r7_4 = (fconvert.t(arg3[2]) + x87_r6_3) * x87_r5_1
        long double x87_r4_1 = fconvert.t(255f)
        x87_r4_1 - x87_r7_4
        eax_10.w = (x87_r4_1 < x87_r7_4 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x2000
        long double x87_r3_1 = float.t(0)
        bool p_1 = unimplemented  {test ah, 0x5}
        bool p_2
        
        if (p_1)
            x87_r7_4 - x87_r3_1
            eax_10.w = (x87_r7_4 < x87_r3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_4, x87_r3_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == x87_r3_1 ? 1 : 0) << 0xe | 0x1800
            p_2 = unimplemented  {test ah, 0x5}
        
        long double x87_r3_2
        
        if (not(p_1) || p_2)
            int80_t x87_r4_2 = x87_r3_1
            x87_r4_1 - x87_r7_4
            eax_10.w = (x87_r4_1 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x1800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                x87_r3_2 = x87_r7_4
                x87_r7_4 = x87_r4_2
            else
                long double x87_r4_3 = x87_r7_4
                long double x87_r3_6 = x87_r7_4
                x87_r7_4 = x87_r4_2
                x87_r3_2 = x87_r4_3
                x87_r4_1 = x87_r3_6
        else
            x87_r3_2 = x87_r7_4
        
        int16_t x87status_1
        int16_t temp0_7
        temp0_7, x87status_1 = __fnstcw_memmem16(arg2)
        var_520.w = temp0_7
        var_524 = zx.d(var_520.w) | 0xc00
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(var_524.w)
        var_524 = int.d(x87_r3_2)
        edx_6.b = var_524.b
        data_c785b4:2.b = edx_6.b
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(var_520.w)
        long double x87_r3_10 = (fconvert.t(arg3[3]) + x87_r6_3) * x87_r5_1
        x87_r3_10 - x87_r4_1
        int32_t* eax_12
        eax_12.w = (x87_r3_10 < x87_r4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_10, x87_r4_1) ? 1 : 0) << 0xa
            | (x87_r3_10 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
        
        if ((eax_12:1.b & 0x41) == 0)
        label_45d05e:
            x87_r3_10 - x87_r4_1
            eax_12.w = (x87_r3_10 < x87_r4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_10, x87_r4_1) ? 1 : 0) << 0xa
                | (x87_r3_10 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_12:1.b & 0x41) == 0)
                x87_r4_1 = x87_r3_10
                x87_r3_10 = x87_r4_1
        else
            x87_r3_10 - x87_r7_4
            eax_12.w = (x87_r3_10 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_10, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r3_10 == x87_r7_4 ? 1 : 0) << 0xe | 0x1800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (p_4)
                goto label_45d05e
            
            x87_r4_1 = x87_r3_10
            x87_r3_10 = x87_r7_4
        
        int16_t x87status_4
        int16_t temp0_8
        temp0_8, x87status_4 = __fnstcw_memmem16(x87control_1)
        var_520.w = temp0_8
        var_524 = zx.d(var_520.w) | 0xc00
        int16_t x87control_2
        int16_t x87status_5
        x87control_2, x87status_5 = __fldcw_memmem16(var_524.w)
        var_524 = int.d(x87_r3_10)
        int32_t* eax_14
        eax_14.b = var_524.b
        data_c785b4:3.b = eax_14.b
        int16_t x87control_3
        int16_t x87status_6
        x87control_3, x87status_6 = __fldcw_memmem16(var_520.w)
        long double x87_r3_13 = (fconvert.t(arg3[1]) + x87_r6_3) * x87_r5_1
        x87_r3_13 - x87_r4_1
        eax_14.w = (x87_r3_13 < x87_r4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_13, x87_r4_1) ? 1 : 0) << 0xa
            | (x87_r3_13 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
        
        if ((eax_14:1.b & 0x41) == 0)
        label_45d0b1:
            x87_r3_13 - x87_r4_1
            eax_14.w = (x87_r3_13 < x87_r4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_13, x87_r4_1) ? 1 : 0) << 0xa
                | (x87_r3_13 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_14:1.b & 0x41) == 0)
                x87_r4_1 = x87_r3_13
                x87_r3_13 = x87_r4_1
        else
            x87_r3_13 - x87_r7_4
            eax_14.w = (x87_r3_13 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_13, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r3_13 == x87_r7_4 ? 1 : 0) << 0xe | 0x1800
            bool p_5 = unimplemented  {test ah, 0x5}
            
            if (p_5)
                goto label_45d0b1
            
            x87_r4_1 = x87_r3_13
            x87_r3_13 = x87_r7_4
        
        int16_t x87status_7
        int16_t temp0_9
        temp0_9, x87status_7 = __fnstcw_memmem16(x87control_3)
        var_520.w = temp0_9
        var_524 = zx.d(var_520.w) | 0xc00
        int16_t x87control_4
        int16_t x87status_8
        x87control_4, x87status_8 = __fldcw_memmem16(var_524.w)
        var_524 = int.d(x87_r3_13)
        edx_6.b = var_524.b
        data_c785b8.b = edx_6.b
        int16_t x87control_5
        int16_t x87status_9
        x87control_5, x87status_9 = __fldcw_memmem16(var_520.w)
        long double x87_r5_2 = x87_r5_1 * (x87_r6_3 + fconvert.t(*arg3))
        x87_r5_2 - x87_r4_1
        int32_t* eax_16
        eax_16.w = (x87_r5_2 < x87_r4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, x87_r4_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r4_1 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_16:1.b & 0x41) == 0)
        label_45d19c:
            x87_r4_1 - x87_r7_4
            eax_16.w = (x87_r4_1 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
            bool p_7 = unimplemented  {test ah, 0x5}
            
            if (p_7)
                x87_r7_4 = x87_r4_1
        else
            x87_r5_2 - x87_r7_4
            eax_16.w = (x87_r5_2 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r5_2 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (p_6)
                goto label_45d19c
            
            x87_r7_4 = x87_r5_2
        
        int16_t x87status_10
        int16_t temp0_11
        temp0_11, x87status_10 = __fnstcw_memmem16(x87control_5)
        var_520.w = temp0_11
        var_524 = zx.d(var_520.w) | 0xc00
        int16_t x87control_6
        int16_t x87status_11
        x87control_6, x87status_11 = __fldcw_memmem16(var_524.w)
        var_524 = int.d(x87_r7_4)
        int32_t* eax_18
        eax_18.b = var_524.b
        data_c785b8:1.b = eax_18.b
        bool cond:5_1 = *(arg3 + 0x13) == 0
        int16_t x87control_7
        int16_t x87status_12
        x87control_7, x87status_12 = __fldcw_memmem16(var_520.w)
        
        if (not(cond:5_1))
            i_3.w |= 0x10
            data_c785b4.w = i_3.w
        
        if (arg3[5].b != 0)
            i_3.w |= 0x40
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x12) != 0)
            i_3.w |= 0x80
            data_c785b4.w = i_3.w
        
        if (*(arg3 + 0x11) != 0)
            i_3.w |= 0x20
            data_c785b4.w = i_3.w
        
        data_c78614 = zx.d(i_3.w)

sub_480cd2(eax_1 ^ &var_524)
