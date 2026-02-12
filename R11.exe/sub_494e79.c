// 函数: sub_494e79
// 地址: 0x494e79
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = 0
void var_24
void* edi = &var_24
int16_t var_78 = 0
int32_t var_6c = 1
int32_t var_50 = 0
int32_t var_5c = 0
int32_t var_60 = 0
int32_t var_64 = 0
int32_t var_68 = 0
int32_t var_54 = 0
int32_t result_1 = 0
int32_t result

if (arg8 != 0)
    char* edx_1 = arg3
    void* var_58_1 = edx_1
    char** eax_3
    
    while (true)
        eax_3.b = *edx_1
        
        if (eax_3.b != 0x20 && eax_3.b != 9 && eax_3.b != 0xa && eax_3.b != 0xd)
            break
        
        edx_1 = &edx_1[1]
    
    while (true)
        eax_3.b = *edx_1
        edx_1 = &edx_1[1]
        int32_t var_90_1
        bool cond:6_1
        
        switch (ecx)
            case 0
                ecx.b = eax_3.b
                ecx.b -= 0x31
                
                if (ecx.b u<= 8)
                label_494f1b:
                    var_90_1 = 3
                    goto label_494f1d
                
                if (eax_3.b != ***(*arg8 + 0xbc))
                    int32_t eax_5 = sx.d(eax_3.b)
                    
                    if (eax_5 == 0x2b)
                        var_78 = 0
                        ecx = 2
                        continue
                    else if (eax_5 == 0x2d)
                        ecx = 2
                        var_78 = -0x8000
                        continue
                    else
                        if (eax_5 != 0x30)
                            edx_1 -= 1
                            break
                        
                        ecx = 1
                        continue
                else
                label_494f32:
                    ecx = 5
                    continue
            case 1
                ecx.b = eax_3.b
                ecx.b -= 0x31
                var_5c = 1
                
                if (ecx.b u<= 8)
                    goto label_494f1b
                
                if (eax_3.b == ***(*arg8 + 0xbc))
                label_494f83:
                    ecx = 4
                    continue
                else if (eax_3.b == 0x2b || eax_3.b == 0x2d)
                label_494fb3:
                    edx_1 -= 1
                    ecx = 0xb
                    continue
                else if (eax_3.b == 0x30)
                    ecx = 1
                    continue
                else
                label_494f93:
                    
                    if (eax_3.b s<= 0x43
                            || (eax_3.b s> 0x45 && (eax_3.b s<= 0x63 || eax_3.b s> 0x65)))
                        edx_1 -= 1
                        break
                    
                    ecx = 6
                    continue
            case 2
                ecx.b = eax_3.b
                ecx.b -= 0x31
                
                if (ecx.b u<= 8)
                    goto label_494f1b
                
                if (eax_3.b == ***(*arg8 + 0xbc))
                    goto label_494f32
                
                if (eax_3.b != 0x30)
                    edx_1 = var_58_1
                    break
                
                ecx = 1
                continue
            case 3
                var_5c = 1
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    if (var_50 u>= 0x19)
                        var_54 += 1
                    else
                        var_50 += 1
                        eax_3.b -= 0x30
                        *edi = eax_3.b
                        edi += 1
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                if (eax_3.b == ***(*arg8 + 0xbc))
                    goto label_494f83
                
            label_495026:
                
                if (eax_3.b == 0x2b || eax_3.b == 0x2d)
                    goto label_494fb3
                
                goto label_494f93
            case 4
                var_5c = 1
                var_60 = 1
                
                if (var_50 == 0)
                    while (eax_3.b == 0x30)
                        var_54 -= 1
                        eax_3.b = *edx_1
                        edx_1 = &edx_1[1]
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    if (var_50 u< 0x19)
                        var_50 += 1
                        eax_3.b -= 0x30
                        *edi = eax_3.b
                        edi += 1
                        var_54 -= 1
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                goto label_495026
            case 5
                eax_3.b -= 0x30
                var_60 = 1
                
                if (eax_3.b u> 9)
                    edx_1 = var_58_1
                    break
                
                var_90_1 = 4
            label_494f1d:
                ecx = var_90_1
                edx_1 -= 1
                continue
            case 6
                var_58_1 = &edx_1[0xfffffffe]
                void* ecx_17
                ecx_17.b = eax_3.b
                ecx_17.b -= 0x31
                
                if (ecx_17.b u<= 8)
                    var_90_1 = 9
                    goto label_494f1d
                
                int32_t eax_7 = sx.d(eax_3.b)
                
                if (eax_7 == 0x2b)
                label_4950be:
                    ecx = 7
                    continue
                else
                    if (eax_7 != 0x2d)
                        cond:6_1 = eax_7 != 0x30
                        goto label_4950a5
                    
                label_4950b2:
                    var_6c = 0xffffffff
                    ecx = 7
                    continue
            case 7
                ecx.b = eax_3.b
                ecx.b -= 0x31
                
                if (ecx.b u<= 8)
                    var_90_1 = 9
                    goto label_494f1d
                
                cond:6_1 = eax_3.b != 0x30
            label_4950a5:
                
                if (cond:6_1)
                    edx_1 = var_58_1
                    break
                
                ecx = 8
                continue
            case 8
                var_64 = 1
                
                while (eax_3.b == 0x30)
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                eax_3.b -= 0x31
                
                if (eax_3.b u<= 8)
                    var_90_1 = 9
                    goto label_494f1d
                
                edx_1 -= 1
                break
            case 9
                var_64 = 1
                int32_t ecx_19 = 0
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    ecx_19 = ecx_19 * 0xa + sx.d(eax_3.b) - 0x30
                    
                    if (ecx_19 s> 0x1450)
                        ecx_19 = 0x1451
                        break
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                var_68 = ecx_19
                
                while (eax_3.b s>= 0x30)
                    if (eax_3.b s> 0x39)
                        break
                    
                    eax_3.b = *edx_1
                    edx_1 = &edx_1[1]
                
                edx_1 -= 1
                break
            case 0xb
                if (arg7 != 0)
                    int32_t eax_9 = sx.d(eax_3.b)
                    var_58_1 = &edx_1[0xffffffff]
                    
                    if (eax_9 == 0x2b)
                        goto label_4950be
                    
                    if (eax_9 == 0x2d)
                        goto label_4950b2
                    
                    edx_1 = &edx_1[0xffffffff]
                    break
                
                ecx = 0xa
                edx_1 -= 1
        
        if (ecx == 0xa)
            break
    
    *arg2 = edx_1
    uint16_t eax_24
    int16_t ecx_41
    uint32_t edx_12
    int32_t esi_12
    
    if (var_5c == 0)
        result_1 = 4
    label_4954dc:
        ecx_41 = 0
        eax_24 = 0
        edx_12 = 0
        esi_12 = 0
    else
        if (var_50 u> 0x18)
            char var_d
            
            if (var_d s>= 5)
                char var_d_1 = var_d + 1
            
            edi -= 1
            var_54 += 1
            var_50 = 0x18
        
        if (var_50 u<= 0)
            goto label_4954dc
        
        while (true)
            edi -= 1
            
            if (*edi != 0)
                break
            
            var_50 -= 1
            var_54 += 1
        
        int16_t var_40
        sub_496e47(&var_24, var_50, &var_40)
        int32_t eax_12 = var_68
        
        if (var_6c s< 0)
            eax_12 = neg.d(eax_12)
        
        int32_t i_1 = eax_12 + var_54
        
        if (var_64 == 0)
            i_1 += arg5
        
        if (var_60 == 0)
            i_1 -= arg6
        
        if (i_1 s> 0x1450)
            esi_12 = 0
            eax_24 = 0x7fff
            edx_12 = 0x80000000
            ecx_41 = 0
            result_1 = 2
        else
            if (i_1 s< 0xffffebb0)
                result_1 = 1
                goto label_4954dc
            
            int32_t esi_2 = 0x4ccc10
            int32_t i = i_1
            int32_t var_3e
            uint32_t var_3a
            int32_t var_38
            
            if (i_1 != 0)
                if (i_1 s< 0)
                    i = neg.d(i_1)
                    esi_2 = 0x4ccd70
                
                if (arg4 == 0)
                    var_40 = 0
                
                while (i != 0)
                    int32_t i_2 = i
                    i s>>= 3
                    esi_2 += 0x54
                    int32_t eax_14 = i_2 & 7
                    var_50 = esi_2
                    
                    if (eax_14 != 0)
                        int32_t* ebx_1 = eax_14 * 0xc + esi_2
                        int32_t* var_74_1 = ebx_1
                        
                        if (*ebx_1 u>= 0x8000)
                            int32_t var_4c = *ebx_1
                            void var_48
                            void* edi_1 = &var_48
                            void* esi_4 = &ebx_1[1]
                            *edi_1 = *esi_4
                            *(edi_1 + 4) = *(esi_4 + 4)
                            var_4c -= 1
                            esi_2 = var_50
                            ebx_1 = &var_4c
                            var_74_1 = &var_4c
                        
                        uint32_t edx_2 = zx.d(*(ebx_1 + 0xa))
                        int32_t var_54_1 = 0
                        int32_t var_30_1 = 0
                        int32_t var_2c = 0
                        uint32_t var_28_1 = 0
                        int16_t ecx_22 = var_38.w & 0x7fff
                        int16_t edx_3 = edx_2.w & 0x7fff
                        int32_t eax_19 = (edx_2 ^ var_38) & 0x8000
                        uint32_t edi_5 = zx.d(edx_3 + ecx_22)
                        
                        if (ecx_22 u>= 0x7fff || edx_3 u>= 0x7fff || edi_5.w u> 0xbffd)
                        label_49547f:
                            int16_t temp8_1 = eax_19.w
                            eax_19.w = neg.w(eax_19.w)
                            var_3e = 0
                            var_40.d = 0
                            var_38 = (sbb.d(eax_19, eax_19, temp8_1 != 0) & 0x80000000) + 0x7fff8000
                        else if (edi_5.w u> 0x3fbf)
                            if (ecx_22 == 0)
                                edi_5 += 1
                            
                            if (ecx_22 != 0 || (var_38 & 0x7fffffff) != 0 || var_3e != 0
                                    || var_40.d != 0)
                                if (edx_3 == 0)
                                    edi_5 += 1
                                
                                if (edx_3 != 0 || (ebx_1[2] & 0x7fffffff) != 0 || ebx_1[1] != 0
                                        || *ebx_1 != 0)
                                    int32_t var_6c_1 = 0
                                    int32_t* esi_7 = &var_2c
                                    int32_t ecx_24
                                    
                                    for (int32_t j = 5; j s> 0; j -= 1)
                                        int32_t k = j
                                        
                                        if (j s> 0)
                                            void* var_60_1 = &__saved_ebp + var_6c_1 * 2 - 0x3c
                                            void* var_64_1 = &ebx_1[2]
                                            
                                            do
                                                int32_t var_7c_1 = 0
                                                ecx_24 = zx.d(*var_64_1) * zx.d(*var_60_1)
                                                int32_t edx_7 = esi_7[-1]
                                                int32_t ebx_3 = edx_7 + ecx_24
                                                
                                                if (ebx_3 u< edx_7 || ebx_3 u< ecx_24)
                                                    var_7c_1 = 1
                                                
                                                esi_7[-1] = ebx_3
                                                
                                                if (var_7c_1 != 0)
                                                    *esi_7 += 1
                                                
                                                var_60_1 += 2
                                                var_64_1 -= 2
                                                k -= 1
                                            while (k s> 0)
                                            
                                            ebx_1 = var_74_1
                                        
                                        esi_7 += 2
                                        var_6c_1 += 1
                                    
                                    int32_t edi_6 = edi_5 + 0xc002
                                    
                                    if (edi_6.w s<= 0)
                                    label_4953c0:
                                        edi_6 += 0xffff
                                        
                                        if (edi_6.w s< 0)
                                            uint32_t j_2 = zx.d((neg.d(edi_6)).w)
                                            edi_6 += j_2
                                            uint32_t j_1
                                            
                                            do
                                                if ((var_30_1.b & 1) != 0)
                                                    var_54_1 += 1
                                                
                                                uint32_t ecx_34 = var_28_1
                                                var_28_1 u>>= 1
                                                ecx_24 = var_30_1 u>> 1 | var_2c << 0x1f
                                                j_1 = j_2
                                                j_2 -= 1
                                                var_2c = var_2c u>> 1 | ecx_34 << 0x1f
                                                var_30_1 = ecx_24
                                            while (j_1 != 1)
                                            
                                            if (var_54_1 != j_2)
                                                var_30_1.w |= 1
                                    else
                                        while ((var_28_1 & 0x80000000) == 0)
                                            int32_t esi_9 = var_2c
                                            int32_t ecx_28 = var_30_1
                                            var_30_1 <<= 1
                                            edi_6 += 0xffff
                                            var_2c = (esi_9 * 2) | ecx_28 u>> 0x1f
                                            var_28_1 = (var_28_1 * 2) | esi_9 u>> 0x1f
                                            
                                            if (edi_6.w s<= 0)
                                                break
                                        
                                        if (edi_6.w s<= 0)
                                            goto label_4953c0
                                    
                                    if (var_30_1.w u> 0x8000 || (var_30_1 & 0x1ffff) == 0x18000)
                                        if (var_30_1 != 0xffffffff)
                                            var_30_1 += 1
                                        else
                                            var_30_1 = 0
                                            
                                            if (var_2c != 0xffffffff)
                                                var_2c += 1
                                            else
                                                var_2c = 0
                                                
                                                if (var_28_1:2.w != 0xffff)
                                                    var_28_1:2.w += 1
                                                else
                                                    var_28_1:2.w = 0x8000
                                                    edi_6 += 1
                                    
                                    esi_2 = var_50
                                    
                                    if (edi_6.w u>= 0x7fff)
                                        goto label_49547f
                                    
                                    ecx_24.w = var_30_1:2.w
                                    var_40 = ecx_24.w
                                    var_3e = var_2c
                                    var_3a = var_28_1
                                    var_38:2.w = edi_6.w | eax_19.w
                                else
                                    var_38 = 0
                                    var_3e = 0
                                    var_40.d = 0
                            else
                                var_38:2.w &= ecx_22
                        else
                            var_3e = 0
                            var_40.d = 0
                            var_38 = 0
            
            ecx_41 = var_40
            esi_12 = var_3e
            edx_12 = var_3a
            eax_24 = (var_38 u>> 0x10).w
    
    *arg1 = ecx_41
    arg1[5] = eax_24 | var_78
    result = result_1
    *(arg1 + 2) = esi_12
    *(arg1 + 6) = edx_12
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
