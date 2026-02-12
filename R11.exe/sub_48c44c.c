// 函数: sub_48c44c
// 地址: 0x48c44c
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_3f8
int32_t eax_1 = __security_cookie ^ &var_3f8
void* ebx = arg4
int16_t* edi = arg2
void* var_41c = ebx
int32_t var_458 = 0
int32_t var_40c = 0
int32_t var_430 = 0
int32_t i_3 = 0
int32_t* var_428 = nullptr
int32_t var_454 = 0
int32_t var_42c = 0
void* var_450
sub_481612(&var_450, arg3)

if (arg1 == 0)
label_48c4b0:
    *__errno() = 0x16
    int32_t var_498_1
    __builtin_memset(&var_498_1, 0, 0x14)
    goto label_48c4bd

int32_t result
void* var_448
char var_444

if (edi != 0)
    uint32_t ecx_1 = zx.d(*edi)
    int32_t result_1 = 0
    void* i_2 = nullptr
    uint32_t var_438_1 = 0
    void* var_45c_1 = nullptr
    uint32_t var_420_1 = ecx_1
    
    if (ecx_1.w != 0)
        while (true)
            edi = &edi[1]
            int32_t eax_5 = 0
            
            if (result_1 s>= 0)
                if (ecx_1.w - 0x20 u<= 0x58)
                    eax_5 = zx.d((*"UTF-8")[zx.d(ecx_1.w)]) & 0xf
                
                uint32_t eax_10 = zx.d(*(eax_5 * 9 + var_438_1 + 0x4a69f0)) u>> 4
                int32_t edx_3 = 8
                var_438_1 = eax_10
                
                if (eax_10 == 8)
                    goto label_48c4b0
                
                int32_t var_460
                
                if (eax_10 u> 7)
                    ebx = var_41c
                else
                    switch (eax_10)
                        case 0
                            goto label_48c713
                        case 1
                            i_3 = 0xffffffff
                            var_460 = 0
                            var_454 = 0
                            var_430 = 0
                            var_428 = nullptr
                            var_40c = 0
                            var_42c = 0
                        case 2
                            uint32_t eax_11 = zx.d(ecx_1.w)
                            
                            if (eax_11 == 0x20)
                                var_40c |= 2
                            else if (eax_11 == 0x23)
                                var_40c |= 0x80
                            else if (eax_11 == 0x2b)
                                var_40c |= 1
                            else if (eax_11 == 0x2d)
                                var_40c |= 4
                            else if (eax_11 != 0x30)
                                ebx = var_41c
                            else
                                var_40c |= 8
                        case 3
                            if (ecx_1.w != 0x2a)
                                var_430 = var_430 * 0xa + zx.d(ecx_1.w) - 0x30
                            else
                                int32_t eax_17 = *ebx
                                ebx += 4
                                var_41c = ebx
                                var_430 = eax_17
                                
                                if (eax_17 s< 0)
                                    var_40c |= 4
                                    var_430 = neg.d(var_430)
                        case 4
                            i_3 = 0
                        case 5
                            if (ecx_1.w != 0x2a)
                                i_3 = i_3 * 0xa + zx.d(ecx_1.w) - 0x30
                            else
                                int32_t i_5 = *ebx
                                ebx += 4
                                var_41c = ebx
                                i_3 = i_5
                                
                                if (i_5 s< 0)
                                    i_3 = 0xffffffff
                        case 6
                            uint32_t eax_24 = zx.d(ecx_1.w)
                            
                            if (eax_24 == 0x49)
                                int16_t eax_25 = *edi
                                
                                if (eax_25 == 0x36 && edi[1] == 0x34)
                                    edi = &edi[2]
                                    var_40c |= 0x8000
                                else if (eax_25 == 0x33 && edi[1] == 0x32)
                                    edi = &edi[2]
                                    var_40c &= 0xffff7fff
                                else if (eax_25 != 0x64 && eax_25 != 0x69 && eax_25 != 0x6f
                                        && eax_25 != 0x75 && eax_25 != 0x78 && eax_25 != 0x58)
                                    var_438_1 = 0
                                label_48c713:
                                    uint32_t var_488_1 = ecx_1
                                    var_42c = 1
                                    sub_48c3b3(arg1, &result_1, 8)
                            else if (eax_24 == 0x68)
                                var_40c |= 0x20
                            else if (eax_24 == 0x6c)
                                if (*edi != 0x6c)
                                    var_40c |= 0x10
                                else
                                    edi = &edi[1]
                                    var_40c |= 0x1000
                            else if (eax_24 == 0x77)
                                var_40c |= 0x800
                        case 7
                            uint32_t eax_27 = zx.d(ecx_1.w)
                            int16_t var_434
                            int32_t var_420_2
                            void* var_414
                            void* i_6
                            
                            if (eax_27 s> 0x64)
                                if (eax_27 s> 0x70)
                                    if (eax_27 != 0x73)
                                        if (eax_27 == 0x75)
                                            goto label_48c95c
                                        
                                        if (eax_27 != 0x78)
                                            goto label_48cbdc
                                        
                                        var_458 = 0x27
                                        goto label_48ca91
                                    
                                label_48c7b1:
                                    int32_t i = i_3
                                    
                                    if (i == 0xffffffff)
                                        i = 0x7fffffff
                                    
                                    var_41c = ebx + 4
                                    void* ebx_2 = *ebx
                                    var_414 = ebx_2
                                    
                                    if ((var_40c.b & 0x20) == 0)
                                        if (ebx_2 == 0)
                                            var_414 = data_4cbdb4
                                        
                                        void* eax_66 = var_414
                                        var_42c = 1
                                        
                                        while (i != 0)
                                            i -= 1
                                            
                                            if (*eax_66 == 0)
                                                break
                                            
                                            eax_66 += 2
                                        
                                        i_6 = (eax_66 - var_414) s>> 1
                                        goto label_48cbd9
                                    
                                    if (ebx_2 == 0)
                                        var_414 = data_4cbdb0
                                    
                                    i_2 = nullptr
                                    char* esi_3 = var_414
                                    
                                    if (i s> 0)
                                        do
                                            eax_27.b = *esi_3
                                            
                                            if (eax_27.b == 0)
                                                break
                                            
                                            void** var_488_2 = &var_450
                                            eax_27, edx_3 = sub_489526(eax_27.b, var_488_2)
                                            ecx_1 = var_488_2
                                            
                                            if (eax_27 != 0)
                                                esi_3 = &esi_3[1]
                                            
                                            esi_3 = &esi_3[1]
                                            i_2 += 1
                                        while (i_2 s< i)
                                    
                                    goto label_48cbdc
                                
                                if (eax_27 == 0x70)
                                    i_3 = 8
                                label_48ca63:
                                    var_458 = 7
                                label_48ca91:
                                    var_420_2 = 0x10
                                    
                                    if ((var_40c.b & 0x80) != 0)
                                        var_434 = 0x30
                                        int16_t var_432_1 = var_458.w + 0x51
                                        var_428 = 2
                                    
                                    goto label_48cabc
                                
                                if (eax_27 s< 0x65)
                                    goto label_48cbdc
                                
                                if (eax_27 s<= 0x67)
                                    goto label_48c768
                                
                                if (eax_27 == 0x69)
                                    goto label_48c958
                                
                                if (eax_27 != 0x6e)
                                    if (eax_27 != 0x6f)
                                        goto label_48cbdc
                                    
                                    var_420_2 = 8
                                    
                                    if ((var_40c.b & 0x80) != 0)
                                        var_40c |= 0x200
                                    
                                    goto label_48cabc
                                
                                int16_t* esi_4 = *ebx
                                var_41c = ebx + 4
                                
                                if (sub_480cbc() == 0)
                                    goto label_48c4b0
                                
                                if ((var_40c.b & 0x20) == 0)
                                    *esi_4 = result_1
                                else
                                    int32_t eax_43
                                    eax_43.w = result_1.w
                                    *esi_4 = eax_43.w
                                
                                var_454 = 1
                            else
                                if (eax_27 == 0x64)
                                label_48c958:
                                    var_40c |= 0x40
                                label_48c95c:
                                    var_420_2 = 0xa
                                label_48cabc:
                                    int32_t eax_45
                                    void* ebx_6
                                    
                                    if ((var_40c.w & 0x8000) == 0 && (var_40c.w & 0x1000) == 0)
                                        ebx_6 = ebx + 4
                                        
                                        if ((var_40c.b & 0x20) == 0)
                                            eax_45 = *(ebx_6 - 4)
                                            
                                            if ((var_40c.b & 0x40) == 0)
                                                edx_3 = 0
                                            else
                                                edx_3:eax_45 = sx.q(eax_45)
                                            
                                            var_41c = ebx_6
                                        else
                                            var_41c = ebx_6
                                            int32_t eax_57
                                            
                                            if ((var_40c.b & 0x40) == 0)
                                                eax_57 = zx.d(*(ebx_6 - 4))
                                            else
                                                eax_57 = sx.d(*(ebx_6 - 4))
                                            
                                            edx_3:eax_45 = sx.q(eax_57)
                                    else
                                        ebx_6 = ebx + 8
                                        eax_45 = *(ebx_6 - 8)
                                        edx_3 = *(ebx_6 - 4)
                                        var_41c = ebx_6
                                    
                                    if ((var_40c.b & 0x40) != 0 && edx_3 s<= 0
                                            && (edx_3 s< 0 || eax_45 u< 0))
                                        int32_t temp18_1 = eax_45
                                        eax_45 = neg.d(eax_45)
                                        edx_3 = neg.d(adc.d(edx_3, 0, temp18_1 != 0))
                                        var_40c |= 0x100
                                    
                                    int32_t ebx_10 = edx_3
                                    int32_t edi_3 = eax_45
                                    
                                    if ((var_40c.w & 0x9000) == 0)
                                        ebx_10 = 0
                                    
                                    if (i_3 s>= 0)
                                        var_40c &= 0xfffffff7
                                        
                                        if (i_3 s> 0x200)
                                            i_3 = 0x200
                                    else
                                        i_3 = 1
                                    
                                    int32_t eax_59 = edi_3 | ebx_10
                                    
                                    if (eax_59 == 0)
                                        var_428 &= eax_59
                                    
                                    void var_209
                                    char* esi_5 = &var_209
                                    
                                    while (true)
                                        int32_t i_7 = i_3
                                        i_3 -= 1
                                        
                                        if (i_7 s<= 0 && (edi_3 | ebx_10) == 0)
                                            break
                                        
                                        int32_t eax_63
                                        uint32_t edx_5
                                        edx_5:eax_63 = sx.q(var_420_2)
                                        uint32_t eax_64
                                        int32_t ecx_10
                                        eax_64, ecx_10, edx_3 =
                                            __aulldvrm(edi_3, ebx_10, eax_63, edx_5)
                                        ecx_1 = ecx_10 + 0x30
                                        int32_t var_474_1 = ebx_10
                                        edi_3 = eax_64
                                        ebx_10 = edx_3
                                        
                                        if (ecx_1 s> 0x39)
                                            ecx_1 += var_458
                                        
                                        *esi_5 = ecx_1.b
                                        esi_5 -= 1
                                    
                                    void* i_8 = &var_209 - esi_5
                                    i_2 = i_8
                                    var_414 = &esi_5[1]
                                    
                                    if ((var_40c.w & 0x200) == 0)
                                        goto label_48cbdc
                                    
                                    if (i_8 != 0)
                                        ecx_1 = &esi_5[1]
                                    
                                    if (i_8 != 0 && *ecx_1 == 0x30)
                                        goto label_48cbdc
                                    
                                    var_414 -= 1
                                    ecx_1 = var_414
                                    *ecx_1 = 0x30
                                    i_6 = i_8 + 1
                                    goto label_48cbd9
                                
                                int16_t* var_488_4
                                int16_t var_408
                                
                                if (eax_27 s<= 0x53)
                                    if (eax_27 == 0x53)
                                        if ((var_40c.w & 0x830) == 0)
                                            var_40c |= 0x20
                                        
                                        goto label_48c7b1
                                    
                                    if (eax_27 != 0x41)
                                        if (eax_27 == 0x43)
                                            if ((var_40c.w & 0x830) == 0)
                                                var_40c |= 0x20
                                            
                                            goto label_48c839
                                        
                                        if (eax_27 == 0x45 || eax_27 == 0x47)
                                            goto label_48c75b
                                        
                                        goto label_48cbdc
                                    
                                label_48c75b:
                                    ecx_1 += 0x20
                                    var_460 = 1
                                    var_420_1 = ecx_1
                                label_48c768:
                                    var_40c |= 0x40
                                    int16_t* esi_2 = &var_408
                                    var_414 = &var_408
                                    uint32_t var_418_1 = 0x200
                                    
                                    if (i_3 s< 0)
                                        i_3 = 6
                                    else if (i_3 != 0)
                                        if (i_3 s> 0x200)
                                            i_3 = 0x200
                                        
                                        if (i_3 s> 0xa3)
                                            void* eax_46 = sub_48b27c(i_3 + 0x15d)
                                            ecx_1 = var_420_1
                                            var_45c_1 = eax_46
                                            
                                            if (eax_46 == 0)
                                                i_3 = 0xa3
                                            else
                                                var_414 = eax_46
                                                var_418_1 = i_3 + 0x15d
                                                esi_2 = eax_46
                                    else if (ecx_1.w == 0x67)
                                        i_3 = 1
                                    
                                    int32_t var_470 = *ebx
                                    int32_t var_46c_1 = *(ebx + 4)
                                    var_41c = ebx + 8
                                    sub_488bb0(data_4cbf40)(&var_470, esi_2, var_418_1, 
                                        sx.d(ecx_1.b), i_3, var_460, &var_450)
                                    int32_t ebx_9 = var_40c & 0x80
                                    
                                    if (ebx_9 != 0 && i_3 == 0)
                                        sub_488bb0(data_4cbf4c)(esi_2, &var_450)
                                    
                                    if (var_420_1.w == 0x67 && ebx_9 == 0)
                                        sub_488bb0(data_4cbf48)(esi_2, &var_450)
                                    
                                    if (*esi_2 == 0x2d)
                                        var_40c |= 0x100
                                        esi_2 += 1
                                        var_414 = esi_2
                                    
                                    var_488_4 = esi_2
                                    goto label_48c8d2
                                
                                if (eax_27 == 0x58)
                                    goto label_48ca63
                                
                                uint32_t i_11
                                
                                if (eax_27 != 0x5a)
                                    if (eax_27 == 0x61)
                                        goto label_48c768
                                    
                                    if (eax_27 != 0x63)
                                        goto label_48cbdc
                                    
                                label_48c839:
                                    uint32_t i_12 = zx.d(*ebx)
                                    var_42c = 1
                                    var_41c = ebx + 4
                                    i_11 = i_12
                                    
                                    if ((var_40c.b & 0x20) == 0)
                                        var_408 = i_12.w
                                    else
                                        char var_43c = i_12.b
                                        char var_43b_1 = 0
                                        int32_t eax_38
                                        eax_38, ecx_1, edx_3 = sub_492405(&var_408, &var_43c, 
                                            *(var_450 + 0xac), &var_450)
                                        
                                        if (eax_38 s< 0)
                                            var_454 = 1
                                    
                                    var_414 = &var_408
                                    i_2 = 1
                                    goto label_48cbdc
                                
                                int16_t* eax_39 = *ebx
                                var_41c = ebx + 4
                                
                                if (eax_39 != 0)
                                    ecx_1 = *(eax_39 + 4)
                                
                                if (eax_39 != 0 && ecx_1 != 0)
                                    i_6 = sx.d(*eax_39)
                                    var_414 = ecx_1
                                    
                                    if ((var_40c.w & 0x800) == 0)
                                        var_42c = 0
                                        goto label_48cbd9
                                    
                                    int32_t eax_40
                                    edx_3:eax_40 = sx.q(i_6)
                                    var_42c = 1
                                    i_6 = (eax_40 - edx_3) s>> 1
                                    goto label_48cbd9
                                
                                int16_t* eax_42 = data_4cbdb0
                                var_414 = eax_42
                                var_488_4 = eax_42
                            label_48c8d2:
                                i_6, edx_3 = _strlen(var_488_4)
                                ecx_1 = var_488_4
                            label_48cbd9:
                                i_2 = i_6
                            label_48cbdc:
                                
                                if (var_454 == 0)
                                    int16_t eax_67 = var_40c.w
                                    
                                    if ((eax_67.b & 0x40) != 0)
                                        if ((eax_67 & 0x100) != 0)
                                            var_434 = 0x2d
                                            var_428 = 1
                                        else if ((eax_67.b & 1) != 0)
                                            var_434 = 0x2b
                                            var_428 = 1
                                        else if ((eax_67.b & 2) != 0)
                                            var_434 = 0x20
                                            var_428 = 1
                                    
                                    void* ebx_13 = var_430 - i_2 - var_428
                                    
                                    if ((var_40c.b & 0xc) == 0)
                                        uint32_t var_488_10 = arg1
                                        void* var_48c_7 = ebx_13
                                        edx_3 = sub_48c3d8(&result_1, edx_3, ecx_1, 0x20)
                                    
                                    int32_t edx_6 =
                                        sub_48c3fd(&result_1, edx_3.w, &var_434, arg1, var_428)
                                    
                                    if ((var_40c.b & 8) != 0 && (var_40c.b & 4) == 0)
                                        uint32_t var_488_12 = arg1
                                        void* var_48c_8 = ebx_13
                                        edx_6 = sub_48c3d8(&result_1, edx_6, var_428, 0x30)
                                    
                                    uint32_t i_9
                                    int32_t edx_7
                                    
                                    if (var_42c != 0 || i_2 s<= 0)
                                        uint32_t i_4 = i_2
                                        edx_7 = sub_48c3fd(&result_1, edx_6.w, var_414, arg1, i_4)
                                        i_9 = i_4
                                    else
                                        void* edi_5 = var_414
                                        void* i_1 = i_2
                                        
                                        do
                                            i_1 -= 1
                                            int32_t eax_72
                                            eax_72, i_9, edx_7 = sub_492405(&i_11, edi_5, 
                                                *(var_450 + 0xac), &var_450)
                                            
                                            if (eax_72 s<= 0)
                                                result_1 = 0xffffffff
                                                break
                                            
                                            uint32_t i_10 = i_11
                                            edx_7 = sub_48c3b3(arg1, &result_1, edx_7.w)
                                            edi_5 += eax_72
                                            i_9 = i_10
                                        while (i_1 s> 0)
                                    
                                    if (result_1 s>= 0 && (var_40c.b & 4) != 0)
                                        uint32_t var_488_14 = arg1
                                        void* var_48c_10 = ebx_13
                                        sub_48c3d8(&result_1, edx_7, i_9, 0x20)
                            
                            if (var_45c_1 != 0)
                                sub_4813df(var_45c_1)
                                var_45c_1 = nullptr
                            
                            ebx = var_41c
                uint32_t eax_76 = zx.d(*edi)
                var_420_1 = eax_76
                
                if (eax_76.w != 0)
                    ecx_1 = eax_76
                    continue
            
            if (var_438_1 == 0)
                break
            
            if (var_438_1 != 7)
                goto label_48c4b0
            
            break
    
    if (var_444 != 0)
        *(var_448 + 0x70) &= 0xfffffffd
    
    result = result_1
else
    *__errno() = 0x16
    int32_t var_498_2
    __builtin_memset(&var_498_2, 0, 0x14)
label_48c4bd:
    sub_481d1b(0, 0, 0, 0, 0)
    
    if (var_444 != 0)
        *(var_448 + 0x70) &= 0xfffffffd
    
    result = 0xffffffff
sub_480cd2(eax_1 ^ &var_3f8)
return result
