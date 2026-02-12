// 函数: sub_484696
// 地址: 0x484696
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_1fc
int32_t eax_1 = __security_cookie ^ &var_1fc
char* ebx = arg2
int32_t* edi = arg4
void* var_228 = edi
int32_t var_248 = 0
int16_t* i_4 = nullptr
int32_t var_23c = 0
int16_t* i_3 = nullptr
uint32_t var_238 = 0
int32_t var_24c = 0
int32_t var_240 = 0
void var_260
sub_481612(&var_260, arg3)
void* result
void* var_258
char var_254

if (arg1 != 0)
    void* eax_5 = arg1
    int32_t edx
    
    if ((*(eax_5 + 0xc) & 0x40) == 0)
        bool cond:0_1 = sub_48d847(eax_5) == 0xffffffff
        bool cond:2_1
        
        if (not(cond:0_1))
            cond:2_1 = sub_48d847(arg1) == 0xfffffffe
        
        void* eax_13
        
        if (cond:0_1 || cond:2_1)
            eax_13 = &data_4cc7d8
        else
            void* esi_1 = &(&data_2b6a8a0)[sub_48d847(arg1) s>> 5]
            eax_13 = (sub_48d847(arg1) & 0x1f) * 0x38 + *esi_1
        
        if ((*(eax_13 + 0x24) & 0x7f) != 0)
            goto label_4846ff
        
        int32_t eax_14
        eax_14, edx = sub_48d847(arg1)
        int32_t eax_15
        
        if (eax_14 != 0xffffffff)
            eax_15, edx = sub_48d847(arg1)
        
        if (eax_14 == 0xffffffff || eax_15 == 0xfffffffe)
            eax_5 = &data_4cc7d8
        else
            void* esi_2 = &(&data_2b6a8a0)[sub_48d847(arg1) s>> 5]
            int32_t eax_18
            eax_18, edx = sub_48d847(arg1)
            eax_5 = (eax_18 & 0x1f) * 0x38 + *esi_2
        
        if ((*(eax_5 + 0x24) & 0x80) != 0 || ebx == 0)
            goto label_4846ff
    else if (ebx == 0)
        goto label_4846ff
    
    edx.b = *ebx
    void* ecx_7 = nullptr
    void* result_1 = nullptr
    void* var_224 = nullptr
    void* i_14 = nullptr
    char var_215_1 = edx.b
    
    if (edx.b != 0)
        while (true)
            void* var_244_1 = &ebx[1]
            
            if (result_1 s< 0)
                break
            
            eax_5.b = edx.b
            eax_5.b -= 0x20
            int32_t eax_23
            
            if (eax_5.b u> 0x58)
                eax_23 = 0
            else
                eax_23 = zx.d(*(sx.d(edx.b) + &data_4a60a0)) & 0xf
            
            eax_5 = sx.d(*(ecx_7 + (eax_23 << 3) + 0x4a60c0)) s>> 4
            int16_t* i = 7
            void* var_270_1 = eax_5
            int32_t var_274
            
            switch (eax_5)
                case nullptr
                    goto label_4849e0
                case 1
                    i_3 = 0xffffffff
                    var_274 = 0
                    var_24c = 0
                    var_23c = 0
                    var_238 = 0
                    i_4 = nullptr
                    var_240 = 0
                case 2
                    int32_t eax_25 = sx.d(edx.b)
                    
                    if (eax_25 == 0x20)
                        i_4 |= 2
                    else if (eax_25 == 0x23)
                        i_4 |= 0x80
                    else if (eax_25 == 0x2b)
                        i_4 |= 1
                    else if (eax_25 == 0x2d)
                        i_4 |= 4
                    else if (eax_25 == 0x30)
                        i_4 |= 8
                case 3
                    if (edx.b != 0x2a)
                        var_23c = var_23c * 0xa + sx.d(edx.b) - 0x30
                    else
                        var_228 = &edi[1]
                        int32_t edi_2 = *edi
                        var_23c = edi_2
                        
                        if (edi_2 s< 0)
                            i_4 |= 4
                            var_23c = neg.d(var_23c)
                case 4
                    i_3 = nullptr
                case 5
                    if (edx.b != 0x2a)
                        i_3 = i_3 * 0xa + sx.d(edx.b) - 0x30
                    else
                        var_228 = &edi[1]
                        int16_t* i_12 = *edi
                        i_3 = i_12
                        
                        if (i_12 s< 0)
                            i_3 = 0xffffffff
                case 6
                    if (edx.b == 0x49)
                        eax_5.b = ebx[1]
                        
                        if (eax_5.b == 0x36 && ebx[2] == 0x34)
                            i_4 |= 0x8000
                            var_244_1 = &ebx[3]
                        else if (eax_5.b == 0x33 && ebx[2] == 0x32)
                            i_4 &= 0xffff7fff
                            var_244_1 = &ebx[3]
                        else if (eax_5.b != 0x64 && eax_5.b != 0x69 && eax_5.b != 0x6f
                                && eax_5.b != 0x75 && eax_5.b != 0x78 && eax_5.b != 0x58)
                            var_270_1 = nullptr
                        label_4849e0:
                            var_240 = 0
                            uint32_t eax_32
                            int32_t edx_1
                            eax_32, edx_1 = sub_489526(edx.b, &var_260)
                            bool cond:8_1 = eax_32 == 0
                            eax_32.b = var_215_1
                            
                            if (not(cond:8_1))
                                eax_32, edx_1 = sub_4845f5(eax_32, edx_1, arg1, &result_1)
                                eax_32.b = ebx[1]
                                var_244_1 = &ebx[2]
                            
                            if (not(cond:8_1) && eax_32.b == 0)
                            label_484fd0:
                                *__errno() = 0x16
                                int32_t var_29c_3
                                __builtin_memset(&var_29c_3, 0, 0x14)
                                goto label_484706
                            
                            eax_5, edx = sub_4845f5(eax_32, edx_1, arg1, &result_1)
                    else if (edx.b == 0x68)
                        i_4 |= 0x20
                    else if (edx.b == 0x6c)
                        if (ebx[1] != 0x6c)
                            i_4 |= 0x10
                        else
                            i_4 |= 0x1000
                            var_244_1 = &ebx[2]
                    else if (edx.b == 0x77)
                        i_4 |= 0x800
                case 7
                    eax_5 = sx.d(edx.b)
                    char var_234
                    int16_t* i_2
                    
                    if (eax_5 s> 0x64)
                        if (eax_5 s> 0x70)
                            if (eax_5 != 0x73)
                                if (eax_5 == 0x75)
                                    goto label_484c1b
                                
                                if (eax_5 != 0x78)
                                    goto label_484e9a
                                
                                var_248 = 0x27
                                goto label_484d4c
                            
                        label_484aa0:
                            i = i_3
                            
                            if (i == 0xffffffff)
                                i = 0x7fffffff
                            
                            var_228 = &edi[1]
                            int16_t* i_13 = *edi
                            i_2 = i_13
                            
                            if ((i_4.w & 0x810) == 0)
                                if (i_13 == 0)
                                    i_2 = data_4cbdb0
                                
                                int16_t* i_9 = i_2
                                
                                while (i != 0)
                                    i -= 1
                                    
                                    if (*i_9 == 0)
                                        break
                                    
                                    i_9 += 1
                                
                                eax_5 = i_9 - i_2
                            else
                                if (i_13 == 0)
                                    i_2 = data_4cbdb4
                                
                                int16_t* i_8 = i_2
                                var_240 = 1
                                
                                while (i != 0)
                                    i -= 1
                                    
                                    if (*i_8 == 0)
                                        break
                                    
                                    i_8 = &i_8[1]
                                
                                eax_5 = (i_8 - i_2) s>> 1
                            
                            goto label_484e97
                        
                        if (eax_5 == 0x70)
                            i_3 = 8
                        label_484d22:
                            var_248 = 7
                        label_484d4c:
                            var_224 = 0x10
                            
                            if ((i_4.b & 0x80) != 0)
                                eax_5.b = var_248.b
                                eax_5.b += 0x51
                                var_234 = 0x30
                                char var_233_1 = eax_5.b
                                var_238 = 2
                            
                            goto label_484c22
                        
                        if (eax_5 s< 0x65)
                            goto label_484e9a
                        
                        if (eax_5 s<= 0x67)
                            goto label_484a59
                        
                        if (eax_5 == 0x69)
                            goto label_484c17
                        
                        if (eax_5 != 0x6e)
                            if (eax_5 != 0x6f)
                                goto label_484e9a
                            
                            var_224 = 8
                            
                            if ((i_4.b & 0x80) != 0)
                                i_4 |= 0x200
                            
                            goto label_484c22
                        
                        int16_t* esi_5 = *edi
                        var_228 = &edi[1]
                        
                        if (sub_480cbc() == 0)
                            goto label_484fd0
                        
                        if ((i_4.b & 0x20) == 0)
                            *esi_5 = result_1
                        else
                            eax_5.w = result_1.w
                            *esi_5 = eax_5.w
                        
                        var_24c = 1
                    else
                        if (eax_5 == 0x64)
                        label_484c17:
                            i_4 |= 0x40
                        label_484c1b:
                            var_224 = 0xa
                        label_484c22:
                            i = i_4
                            uint32_t eax_48
                            
                            if (i.w s>= 0 && (i.w & 0x1000) == 0)
                                void* edi_8 = &edi[1]
                                
                                if ((i.b & 0x20) == 0)
                                    eax_48 = *(edi_8 - 4)
                                    
                                    if ((i.b & 0x40) == 0)
                                        edx = 0
                                    else
                                        edx:eax_48 = sx.q(eax_48)
                                    
                                    var_228 = edi_8
                                else
                                    var_228 = edi_8
                                    int32_t eax_58
                                    
                                    if ((i.b & 0x40) == 0)
                                        eax_58 = zx.d(*(edi_8 - 4))
                                    else
                                        eax_58 = sx.d(*(edi_8 - 4))
                                    
                                    edx:eax_48 = sx.q(eax_58)
                            else
                                eax_48 = *edi
                                edx = edi[1]
                                var_228 = &edi[2]
                            
                            if ((i.b & 0x40) != 0 && edx s<= 0 && (edx s< 0 || eax_48 u< 0))
                                uint32_t temp17_1 = eax_48
                                eax_48 = neg.d(eax_48)
                                edx = neg.d(adc.d(edx, 0, temp17_1 != 0))
                                i_4 |= 0x100
                            
                            uint32_t ebx_8 = edx
                            uint32_t edi_12 = eax_48
                            
                            if ((i_4.w & 0x9000) == 0)
                                ebx_8 = 0
                            
                            if (i_3 s>= 0)
                                i_4 &= 0xfffffff7
                                
                                if (i_3 s> 0x200)
                                    i_3 = 0x200
                            else
                                i_3 = 1
                            
                            uint32_t eax_60 = edi_12 | ebx_8
                            
                            if (eax_60 == 0)
                                var_238 &= eax_60
                            
                            void var_11
                            char* esi_8 = &var_11
                            
                            while (true)
                                int16_t* i_7 = i_3
                                i_3 -= 1
                                
                                if (i_7 s<= 0 && (edi_12 | ebx_8) == 0)
                                    break
                                
                                int32_t eax_64
                                uint32_t edx_3
                                edx_3:eax_64 = sx.q(var_224)
                                uint32_t eax_65
                                void* ecx_19
                                eax_65, ecx_19, edx = __aulldvrm(edi_12, ebx_8, eax_64, edx_3)
                                i = ecx_19 + 0x30
                                uint32_t var_264_2 = ebx_8
                                edi_12 = eax_65
                                ebx_8 = edx
                                
                                if (i s> 0x39)
                                    i += var_248
                                
                                *esi_8 = i.b
                                esi_8 -= 1
                            
                            eax_5 = &var_11 - esi_8
                            var_224 = eax_5
                            i_2 = &esi_8[1]
                            
                            if ((i_4.w & 0x200) == 0)
                                goto label_484e9a
                            
                            if (eax_5 != 0)
                                i = &esi_8[1]
                            
                            if (eax_5 != 0 && *i == 0x30)
                                goto label_484e9a
                            
                            i_2 -= 1
                            i = i_2
                            *i = 0x30
                            eax_5 += 1
                            goto label_484e97
                        
                        char* i_1
                        char var_210
                        
                        if (eax_5 s<= 0x53)
                            if (eax_5 == 0x53)
                                if ((i_4.w & 0x830) == 0)
                                    i_4 |= 0x800
                                
                                goto label_484aa0
                            
                            if (eax_5 != 0x41)
                                void* eax_34 = eax_5 - 0x42
                                
                                if (eax_34 == 1)
                                    if ((i_4.w & 0x830) == 0)
                                        i_4 |= 0x800
                                    
                                    goto label_484b06
                                
                                if (eax_34 == 3 || eax_34 == 5)
                                    goto label_484a4c
                                
                                goto label_484e9a
                            
                        label_484a4c:
                            edx.b += 0x20
                            var_274 = 1
                            var_215_1 = edx.b
                        label_484a59:
                            i_4 |= 0x40
                            char* i_10 = &var_210
                            i_2 = &var_210
                            uint32_t var_264_1 = 0x200
                            
                            if (i_3 s< 0)
                                i_3 = 6
                            else if (i_3 != 0)
                                if (i_3 s> 0x200)
                                    i_3 = 0x200
                                
                                if (i_3 s> 0xa3)
                                    void* i_6
                                    i_6, edx = sub_48b27c(i_3 + 0x15d)
                                    edx.b = var_215_1
                                    i_14 = i_6
                                    
                                    if (i_6 == 0)
                                        i_3 = 0xa3
                                    else
                                        i_2 = i_6
                                        var_264_1 = i_3 + 0x15d
                                        i_10 = i_6
                            else if (edx.b == 0x67)
                                i_3 = 1
                            
                            int32_t var_27c = *edi
                            int32_t var_278_1 = edi[1]
                            var_228 = &edi[2]
                            sub_488bb0(data_4cbf40)(&var_27c, i_10, var_264_1, sx.d(edx.b), i_3, 
                                var_274, &var_260)
                            void* edi_11 = i_4 & 0x80
                            
                            if (edi_11 != 0 && i_3 == 0)
                                sub_488bb0(data_4cbf4c)(i_10, &var_260)
                            
                            if (var_215_1 == 0x67 && edi_11 == 0)
                                sub_488bb0(data_4cbf48)(i_10, &var_260)
                            
                            if (*i_10 == 0x2d)
                                i_4 |= 0x100
                                i_10 = &i_10[1]
                                i_2 = i_10
                            
                            i_1 = i_10
                            goto label_484b8d
                        
                        if (eax_5 == 0x58)
                            goto label_484d22
                        
                        void* eax_39 = eax_5 - 0x59
                        
                        if (eax_39 != 1)
                            if (eax_39 == 8)
                                goto label_484a59
                            
                            if (eax_39 != 0xa)
                                goto label_484e9a
                            
                        label_484b06:
                            var_228 = &edi[1]
                            
                            if ((i_4.w & 0x810) == 0)
                                eax_5.b = *edi
                                var_210 = eax_5.b
                                var_224 = 1
                            else
                                int32_t eax_44
                                eax_44, i, edx = sub_48e489(&var_224, &var_210, 0x200, zx.d(*edi))
                                
                                if (eax_44 != 0)
                                    var_24c = 1
                            
                            i_2 = &var_210
                            goto label_484e9a
                        
                        int16_t* eax_45 = *edi
                        var_228 = &edi[1]
                        
                        if (eax_45 != 0)
                            i = *(eax_45 + 4)
                        
                        if (eax_45 != 0 && i != 0)
                            eax_5 = sx.d(*eax_45)
                            i_2 = i
                            
                            if ((i_4.w & 0x800) == 0)
                                var_240 = 0
                            else
                                int32_t eax_46
                                edx:eax_46 = sx.q(eax_5)
                                eax_5 = (eax_46 - edx) s>> 1
                                var_240 = 1
                            
                            goto label_484e97
                        
                        char* i_5 = data_4cbdb0
                        i_2 = i_5
                        i_1 = i_5
                    label_484b8d:
                        eax_5, edx = _strlen(i_1)
                        i = i_1
                    label_484e97:
                        var_224 = eax_5
                    label_484e9a:
                        
                        if (var_24c == 0)
                            int16_t eax_69 = i_4.w
                            
                            if ((eax_69.b & 0x40) != 0)
                                if ((eax_69 & 0x100) != 0)
                                    var_234 = 0x2d
                                    var_238 = 1
                                else if ((eax_69.b & 1) != 0)
                                    var_234 = 0x2b
                                    var_238 = 1
                                else if ((eax_69.b & 2) != 0)
                                    var_234 = 0x20
                                    var_238 = 1
                            
                            void* ebx_11 = var_23c - var_224 - var_238
                            
                            if ((i_4.b & 0xc) == 0)
                                int32_t* var_28c_14 = arg1
                                void* var_290_8 = ebx_11
                                edx = sub_484628(&result_1, edx.b, i, 0x20)
                            
                            int32_t edx_4 = sub_48464c(&result_1, edx, &var_234, arg1, var_238)
                            
                            if ((i_4.b & 8) != 0 && (i_4.b & 4) == 0)
                                int32_t* var_28c_16 = arg1
                                void* var_290_9 = ebx_11
                                edx_4 = sub_484628(&result_1, edx_4.b, var_238, 0x30)
                            
                            void* eax_73 = var_224
                            uint32_t ecx_22
                            
                            if (var_240 == 0 || eax_73 s<= 0)
                                eax_5, edx = sub_48464c(&result_1, edx_4, i_2, arg1, eax_73)
                                ecx_22 = eax_73
                            else
                                int16_t* i_11 = i_2
                                void* var_264_3 = eax_73
                                
                                while (true)
                                    int32_t* eax_74 = zx.d(*i_11)
                                    var_264_3 -= 1
                                    i_11 = &i_11[1]
                                    uint32_t var_26c
                                    char var_10
                                    eax_5, ecx_22, edx = sub_48e489(&var_26c, &var_10, 6, eax_74)
                                    
                                    if (eax_5 != 0 || var_26c == eax_5)
                                        result_1 = 0xffffffff
                                        break
                                    
                                    uint32_t var_28c_18 = var_26c
                                    eax_5, edx =
                                        sub_48464c(&result_1, edx, &var_10, arg1, var_28c_18)
                                    ecx_22 = var_28c_18
                                    
                                    if (var_264_3 == 0)
                                        break
                                    
                                    continue
                            
                            if (result_1 s>= 0 && (i_4.b & 4) != 0)
                                int32_t* var_28c_20 = arg1
                                void* var_290_10 = ebx_11
                                eax_5, edx = sub_484628(&result_1, edx.b, ecx_22, 0x20)
                            
                            goto label_484f9f
                label_484f9f:
                    
                    if (i_14 != 0)
                        eax_5, edx = sub_4813df(i_14)
                        i_14 = nullptr
            
            ebx = var_244_1
            eax_5.b = *ebx
            var_215_1 = eax_5.b
            
            if (eax_5.b == 0)
                break
            
            ecx_7 = var_270_1
            edi = var_228
            edx.b = eax_5.b
    
    if (var_254 != 0)
        *(var_258 + 0x70) &= 0xfffffffd
    
    result = result_1
else
label_4846ff:
    *__errno() = 0x16
    int32_t var_29c_1
    __builtin_memset(&var_29c_1, 0, 0x14)
label_484706:
    sub_481d1b(0, 0, 0, 0, 0)
    
    if (var_254 != 0)
        *(var_258 + 0x70) &= 0xfffffffd
    
    result = 0xffffffff
sub_480cd2(eax_1 ^ &var_1fc)
return result
