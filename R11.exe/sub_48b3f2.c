// 函数: sub_48b3f2
// 地址: 0x48b3f2
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_3f8
int32_t eax_1 = __security_cookie ^ &var_3f8
int32_t* ebx = arg4
int16_t* esi = arg2
void* var_420 = ebx
int32_t var_44c = 0
int32_t var_40c = 0
int32_t var_430 = 0
int32_t i_3 = 0
int32_t* var_428 = nullptr
int32_t var_440 = 0
int32_t var_42c = 0
void* var_45c
sub_481612(&var_45c, arg3)
int32_t result
void* var_454
char var_450

if (arg1 != 0 && esi != 0)
    uint32_t edx_1 = zx.d(*esi)
    int32_t ecx_1 = 0
    int32_t result_1 = 0
    void* i_2 = nullptr
    void* var_448_1 = nullptr
    uint32_t var_41c_1 = edx_1
    
    if (edx_1.w != 0)
        while (true)
            void* var_444_1 = &esi[1]
            
            if (result_1 s< 0)
                break
            
            int32_t eax_8
            
            if (edx_1.w - 0x20 u> 0x58)
                eax_8 = 0
            else
                eax_8 = zx.d(*(zx.d(edx_1.w) + &data_4a60a0)) & 0xf
            
            int32_t eax_10 = sx.d(*(ecx_1 + (eax_8 << 3) + 0x4a60c0)) s>> 4
            char* ecx_2 = 7
            int32_t var_460_1 = eax_10
            int32_t var_464
            
            switch (eax_10)
                case 0
                    goto label_48b6a4
                case 1
                    i_3 = 0xffffffff
                    var_464 = 0
                    var_440 = 0
                    var_430 = 0
                    var_428 = nullptr
                    var_40c = 0
                    var_42c = 0
                case 2
                    uint32_t eax_11 = zx.d(edx_1.w)
                    
                    if (eax_11 == 0x20)
                        var_40c |= 2
                    else if (eax_11 == 0x23)
                        var_40c |= 0x80
                    else if (eax_11 == 0x2b)
                        var_40c |= 1
                    else if (eax_11 == 0x2d)
                        var_40c |= 4
                    else if (eax_11 == 0x30)
                        var_40c |= 8
                case 3
                    if (edx_1.w != 0x2a)
                        var_430 = var_430 * 0xa + zx.d(edx_1.w) - 0x30
                    else
                        var_420 = &ebx[1]
                        int32_t ebx_2 = *ebx
                        var_430 = ebx_2
                        
                        if (ebx_2 s< 0)
                            var_40c |= 4
                            var_430 = neg.d(var_430)
                case 4
                    i_3 = 0
                case 5
                    if (edx_1.w != 0x2a)
                        i_3 = i_3 * 0xa + zx.d(edx_1.w) - 0x30
                    else
                        var_420 = &ebx[1]
                        int32_t i_8 = *ebx
                        i_3 = i_8
                        
                        if (i_8 s< 0)
                            i_3 = 0xffffffff
                case 6
                    uint32_t eax_23 = zx.d(edx_1.w)
                    
                    if (eax_23 == 0x49)
                        int16_t eax_24 = esi[1]
                        
                        if (eax_24 == 0x36 && esi[2] == 0x34)
                            var_40c |= 0x8000
                            var_444_1 = &esi[3]
                        else if (eax_24 == 0x33 && esi[2] == 0x32)
                            var_40c &= 0xffff7fff
                            var_444_1 = &esi[3]
                        else if (eax_24 != 0x64 && eax_24 != 0x69 && eax_24 != 0x6f
                                && eax_24 != 0x75 && eax_24 != 0x78 && eax_24 != 0x58)
                            var_460_1 = 0
                        label_48b6a4:
                            void* var_488_1 = edx_1
                            var_42c = 1
                            sub_48c3b3(arg1, &result_1, edx_1.w)
                    else if (eax_23 == 0x68)
                        var_40c |= 0x20
                    else if (eax_23 == 0x6c)
                        if (esi[1] != 0x6c)
                            var_40c |= 0x10
                        else
                            var_40c |= 0x1000
                            var_444_1 = &esi[2]
                    else if (eax_23 == 0x77)
                        var_40c |= 0x800
                case 7
                    uint32_t eax_26 = zx.d(edx_1.w)
                    int16_t var_43c
                    int32_t var_41c_2
                    char* var_414
                    void* i_5
                    
                    if (eax_26 s> 0x64)
                        if (eax_26 s> 0x70)
                            if (eax_26 != 0x73)
                                if (eax_26 == 0x75)
                                    goto label_48b8ef
                                
                                if (eax_26 != 0x78)
                                    goto label_48bb6c
                                
                                var_44c = 0x27
                                goto label_48ba21
                            
                        label_48b741:
                            int32_t i = i_3
                            
                            if (i == 0xffffffff)
                                i = 0x7fffffff
                            
                            var_420 = &ebx[1]
                            char* ebx_5 = *ebx
                            var_414 = ebx_5
                            
                            if ((var_40c.b & 0x20) == 0)
                                if (ebx_5 == 0)
                                    var_414 = data_4cbdb4
                                
                                char* eax_66 = var_414
                                var_42c = 1
                                
                                while (i != 0)
                                    i -= 1
                                    
                                    if (*eax_66 == 0)
                                        break
                                    
                                    eax_66 = &eax_66[2]
                                
                                i_5 = (eax_66 - var_414) s>> 1
                                goto label_48bb69
                            
                            if (ebx_5 == 0)
                                var_414 = data_4cbdb0
                            
                            i_2 = nullptr
                            char* esi_7 = var_414
                            
                            if (i s> 0)
                                do
                                    eax_26.b = *esi_7
                                    
                                    if (eax_26.b == 0)
                                        break
                                    
                                    void** var_488_2 = &var_45c
                                    eax_26, edx_1 = sub_489526(eax_26.b, var_488_2)
                                    ecx_2 = var_488_2
                                    
                                    if (eax_26 != 0)
                                        esi_7 = &esi_7[1]
                                    
                                    esi_7 = &esi_7[1]
                                    i_2 += 1
                                while (i_2 s< i)
                            
                            goto label_48bb6c
                        
                        if (eax_26 == 0x70)
                            i_3 = 8
                        label_48b9f7:
                            var_44c = 7
                        label_48ba21:
                            var_41c_2 = 0x10
                            
                            if ((var_40c.b & 0x80) != 0)
                                var_43c = 0x30
                                int16_t var_43a_1 = var_44c.w + 0x51
                                var_428 = 2
                            
                            goto label_48ba4c
                        
                        if (eax_26 s< 0x65)
                            goto label_48bb6c
                        
                        if (eax_26 s<= 0x67)
                            goto label_48b6f8
                        
                        if (eax_26 == 0x69)
                            goto label_48b8eb
                        
                        if (eax_26 != 0x6e)
                            if (eax_26 != 0x6f)
                                goto label_48bb6c
                            
                            var_41c_2 = 8
                            
                            if ((var_40c.b & 0x80) != 0)
                                var_40c |= 0x200
                            
                            goto label_48ba4c
                        
                        int16_t* esi_8 = *ebx
                        var_420 = &ebx[1]
                        
                        if (sub_480cbc() == 0)
                            *__errno() = 0x16
                            int32_t var_498_3
                            __builtin_memset(&var_498_3, 0, 0x14)
                            goto label_48b462
                        
                        if ((var_40c.b & 0x20) == 0)
                            *esi_8 = result_1
                        else
                            int32_t eax_42
                            eax_42.w = result_1.w
                            *esi_8 = eax_42.w
                        
                        var_440 = 1
                    else
                        if (eax_26 == 0x64)
                        label_48b8eb:
                            var_40c |= 0x40
                        label_48b8ef:
                            var_41c_2 = 0xa
                        label_48ba4c:
                            uint32_t eax_44
                            
                            if ((var_40c.w & 0x8000) == 0 && (var_40c.w & 0x1000) == 0)
                                void* ebx_9 = &ebx[1]
                                
                                if ((var_40c.b & 0x20) == 0)
                                    eax_44 = *(ebx_9 - 4)
                                    
                                    if ((var_40c.b & 0x40) == 0)
                                        edx_1 = 0
                                    else
                                        edx_1:eax_44 = sx.q(eax_44)
                                    
                                    var_420 = ebx_9
                                else
                                    var_420 = ebx_9
                                    int32_t eax_56
                                    
                                    if ((var_40c.b & 0x40) == 0)
                                        eax_56 = zx.d(*(ebx_9 - 4))
                                    else
                                        eax_56 = sx.d(*(ebx_9 - 4))
                                    
                                    edx_1:eax_44 = sx.q(eax_56)
                            else
                                eax_44 = *ebx
                                edx_1 = ebx[1]
                                var_420 = &ebx[2]
                            
                            if ((var_40c.b & 0x40) != 0 && edx_1 s<= 0
                                    && (edx_1 s< 0 || eax_44 u< 0))
                                uint32_t temp18_1 = eax_44
                                eax_44 = neg.d(eax_44)
                                edx_1 = neg.d(adc.d(edx_1, 0, temp18_1 != 0))
                                var_40c |= 0x100
                            
                            uint32_t ebx_13 = edx_1
                            uint32_t edi_3 = eax_44
                            
                            if ((var_40c.w & 0x9000) == 0)
                                ebx_13 = 0
                            
                            if (i_3 s>= 0)
                                var_40c &= 0xfffffff7
                                
                                if (i_3 s> 0x200)
                                    i_3 = 0x200
                            else
                                i_3 = 1
                            
                            uint32_t eax_58 = edi_3 | ebx_13
                            
                            if (eax_58 == 0)
                                var_428 &= eax_58
                            
                            void var_209
                            char* esi_9 = &var_209
                            
                            while (true)
                                int32_t i_6 = i_3
                                i_3 -= 1
                                
                                if (i_6 s<= 0 && (edi_3 | ebx_13) == 0)
                                    break
                                
                                int32_t eax_62
                                uint32_t edx_3
                                edx_3:eax_62 = sx.q(var_41c_2)
                                uint32_t eax_63
                                void* ecx_11
                                eax_63, ecx_11, edx_1 = __aulldvrm(edi_3, ebx_13, eax_62, edx_3)
                                ecx_2 = ecx_11 + 0x30
                                uint32_t var_474_1 = ebx_13
                                edi_3 = eax_63
                                ebx_13 = edx_1
                                
                                if (ecx_2 s> 0x39)
                                    ecx_2 = &ecx_2[var_44c]
                                
                                *esi_9 = ecx_2.b
                                esi_9 -= 1
                            
                            void* i_7 = &var_209 - esi_9
                            i_2 = i_7
                            var_414 = &esi_9[1]
                            
                            if ((var_40c.w & 0x200) == 0)
                                goto label_48bb6c
                            
                            if (i_7 != 0)
                                ecx_2 = &esi_9[1]
                            
                            if (i_7 != 0 && *ecx_2 == 0x30)
                                goto label_48bb6c
                            
                            var_414 -= 1
                            ecx_2 = var_414
                            *ecx_2 = 0x30
                            i_5 = i_7 + 1
                            goto label_48bb69
                        
                        int16_t* var_488_4
                        int16_t var_408
                        
                        if (eax_26 s<= 0x53)
                            if (eax_26 == 0x53)
                                if ((var_40c.w & 0x830) == 0)
                                    var_40c |= 0x20
                                
                                goto label_48b741
                            
                            if (eax_26 != 0x41)
                                if (eax_26 == 0x43)
                                    if ((var_40c.w & 0x830) == 0)
                                        var_40c |= 0x20
                                    
                                    goto label_48b7c8
                                
                                if (eax_26 == 0x45 || eax_26 == 0x47)
                                    goto label_48b6eb
                                
                                goto label_48bb6c
                            
                        label_48b6eb:
                            edx_1 += 0x20
                            var_464 = 1
                            var_41c_1 = edx_1
                        label_48b6f8:
                            var_40c |= 0x40
                            int16_t* esi_6 = &var_408
                            var_414 = &var_408
                            uint32_t var_418_1 = 0x200
                            
                            if (i_3 s< 0)
                                i_3 = 6
                            else if (i_3 != 0)
                                if (i_3 s> 0x200)
                                    i_3 = 0x200
                                
                                if (i_3 s> 0xa3)
                                    void* eax_45 = sub_48b27c(i_3 + 0x15d)
                                    edx_1 = var_41c_1
                                    var_448_1 = eax_45
                                    
                                    if (eax_45 == 0)
                                        i_3 = 0xa3
                                    else
                                        var_414 = eax_45
                                        var_418_1 = i_3 + 0x15d
                                        esi_6 = eax_45
                            else if (edx_1.w == 0x67)
                                i_3 = 1
                            
                            int32_t var_470 = *ebx
                            int32_t var_46c_1 = ebx[1]
                            var_420 = &ebx[2]
                            sub_488bb0(data_4cbf40)(&var_470, esi_6, var_418_1, sx.d(edx_1.b), i_3, 
                                var_464, &var_45c)
                            int32_t ebx_12 = var_40c & 0x80
                            
                            if (ebx_12 != 0 && i_3 == 0)
                                sub_488bb0(data_4cbf4c)(esi_6, &var_45c)
                            
                            if (var_41c_1.w == 0x67 && ebx_12 == 0)
                                sub_488bb0(data_4cbf48)(esi_6, &var_45c)
                            
                            if (*esi_6 == 0x2d)
                                var_40c |= 0x100
                                esi_6 += 1
                                var_414 = esi_6
                            
                            var_488_4 = esi_6
                            goto label_48b861
                        
                        if (eax_26 == 0x58)
                            goto label_48b9f7
                        
                        uint32_t i_11
                        
                        if (eax_26 != 0x5a)
                            if (eax_26 == 0x61)
                                goto label_48b6f8
                            
                            if (eax_26 != 0x63)
                                goto label_48bb6c
                            
                        label_48b7c8:
                            uint32_t i_12 = zx.d(*ebx)
                            var_42c = 1
                            var_420 = &ebx[1]
                            i_11 = i_12
                            
                            if ((var_40c.b & 0x20) == 0)
                                var_408 = i_12.w
                            else
                                char var_438 = i_12.b
                                char var_437_1 = 0
                                int32_t eax_37
                                eax_37, ecx_2, edx_1 =
                                    sub_492405(&var_408, &var_438, *(var_45c + 0xac), &var_45c)
                                
                                if (eax_37 s< 0)
                                    var_440 = 1
                            
                            var_414 = &var_408
                            i_2 = 1
                            goto label_48bb6c
                        
                        int16_t* eax_38 = *ebx
                        var_420 = &ebx[1]
                        
                        if (eax_38 != 0)
                            ecx_2 = *(eax_38 + 4)
                        
                        if (eax_38 != 0 && ecx_2 != 0)
                            i_5 = sx.d(*eax_38)
                            var_414 = ecx_2
                            
                            if ((var_40c.w & 0x800) == 0)
                                var_42c = 0
                                goto label_48bb69
                            
                            int32_t eax_39
                            edx_1:eax_39 = sx.q(i_5)
                            var_42c = 1
                            i_5 = (eax_39 - edx_1) s>> 1
                            goto label_48bb69
                        
                        int16_t* eax_41 = data_4cbdb0
                        var_414 = eax_41
                        var_488_4 = eax_41
                    label_48b861:
                        i_5, edx_1 = _strlen(var_488_4)
                        ecx_2 = var_488_4
                    label_48bb69:
                        i_2 = i_5
                    label_48bb6c:
                        
                        if (var_440 == 0)
                            int16_t eax_67 = var_40c.w
                            
                            if ((eax_67.b & 0x40) != 0)
                                if ((eax_67 & 0x100) != 0)
                                    var_43c = 0x2d
                                    var_428 = 1
                                else if ((eax_67.b & 1) != 0)
                                    var_43c = 0x2b
                                    var_428 = 1
                                else if ((eax_67.b & 2) != 0)
                                    var_43c = 0x20
                                    var_428 = 1
                            
                            int32_t ebx_16 = var_430 - i_2 - var_428
                            
                            if ((var_40c.b & 0xc) == 0)
                                uint32_t var_488_10 = arg1
                                int32_t var_48c_7 = ebx_16
                                edx_1 = sub_48c3d8(&result_1, edx_1, ecx_2, 0x20)
                            
                            int32_t edx_4 = sub_48c3fd(&result_1, edx_1.w, &var_43c, arg1, var_428)
                            
                            if ((var_40c.b & 8) != 0 && (var_40c.b & 4) == 0)
                                uint32_t var_488_12 = arg1
                                int32_t var_48c_8 = ebx_16
                                edx_4 = sub_48c3d8(&result_1, edx_4, var_428, 0x30)
                            
                            uint32_t i_9
                            int32_t edx_5
                            
                            if (var_42c != 0 || i_2 s<= 0)
                                uint32_t i_4 = i_2
                                edx_5 = sub_48c3fd(&result_1, edx_4.w, var_414, arg1, i_4)
                                i_9 = i_4
                            else
                                char* edi_5 = var_414
                                void* i_1 = i_2
                                
                                do
                                    i_1 -= 1
                                    int32_t eax_72
                                    eax_72, i_9, edx_5 =
                                        sub_492405(&i_11, edi_5, *(var_45c + 0xac), &var_45c)
                                    
                                    if (eax_72 s<= 0)
                                        result_1 = 0xffffffff
                                        break
                                    
                                    uint32_t i_10 = i_11
                                    edx_5 = sub_48c3b3(arg1, &result_1, edx_5.w)
                                    edi_5 = &edi_5[eax_72]
                                    i_9 = i_10
                                while (i_1 s> 0)
                            
                            if (result_1 s>= 0 && (var_40c.b & 4) != 0)
                                uint32_t var_488_14 = arg1
                                int32_t var_48c_10 = ebx_16
                                sub_48c3d8(&result_1, edx_5, i_9, 0x20)
                    
                    if (var_448_1 != 0)
                        sub_4813df(var_448_1)
                        var_448_1 = nullptr
            
            esi = var_444_1
            uint32_t eax_76 = zx.d(*esi)
            var_41c_1 = eax_76
            
            if (eax_76.w == 0)
                break
            
            ecx_1 = var_460_1
            ebx = var_420
            edx_1 = eax_76
    
    if (var_450 != 0)
        *(var_454 + 0x70) &= 0xfffffffd
    
    result = result_1
else
    *__errno() = 0x16
    int32_t var_498_1
    __builtin_memset(&var_498_1, 0, 0x14)
label_48b462:
    sub_481d1b(0, 0, 0, 0, 0)
    
    if (var_450 != 0)
        *(var_454 + 0x70) &= 0xfffffffd
    
    result = 0xffffffff
sub_480cd2(eax_1 ^ &var_3f8)
return result
