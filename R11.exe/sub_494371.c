// 函数: sub_494371
// 地址: 0x494371
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = 0
void var_24
void* var_5c = &var_24
int16_t var_7c = 0
int32_t var_68 = 1
int32_t var_50 = 0
int32_t var_60 = 0
int32_t var_70 = 0
int32_t var_64 = 0
int32_t var_6c = 0
int32_t var_54 = 0
int32_t result_1 = 0
int32_t result

if (arg8 != 0)
    int16_t* edx_1 = arg3
    void* var_58_1 = edx_1
    
    while (true)
        int16_t eax_5 = *edx_1
        
        if (eax_5 != 0x20 && eax_5 != 9 && eax_5 != 0xa && eax_5 != 0xd)
            break
        
        edx_1 = &edx_1[1]
    
    while (true)
        int16_t i = *edx_1
        edx_1 = &edx_1[1]
        int32_t var_90_1
        uint32_t i_3
        bool cond:6_1
        
        switch (ecx)
            case 0
                if (i - 0x31 u<= 8)
                label_494425:
                    var_90_1 = 3
                    goto label_494427
                
                uint32_t i_2 = zx.d(i)
                
                if (i_2 == sx.d(***(*arg8 + 0xbc)))
                label_494443:
                    ecx = 5
                    continue
                else if (i_2 == 0x2b)
                    var_7c = 0
                    ecx = 2
                    continue
                else if (i_2 == 0x2d)
                    ecx = 2
                    var_7c = -0x8000
                    continue
                else
                    if (i_2 != 0x30)
                        edx_1 -= 2
                        break
                    
                    ecx = 1
                    continue
            case 1
                var_60 = 1
                
                if (i - 0x31 u<= 8)
                    goto label_494425
                
                i_3 = zx.d(i)
                
                if (i_3 == sx.d(***(*arg8 + 0xbc)))
                label_494494:
                    ecx = 4
                    continue
                else if (i_3 == 0x2b || i_3 == 0x2d)
                label_4944c3:
                    edx_1 -= 2
                    ecx = 0xb
                    continue
                else if (i_3 == 0x30)
                    ecx = 1
                    continue
                else
                label_4944a6:
                    
                    if (i_3 s<= 0x43 || (i_3 s> 0x45 && i_3 - 0x64 u> 1))
                        edx_1 -= 2
                        break
                    
                    ecx = 6
                    continue
            case 2
                if (i - 0x31 u<= 8)
                    goto label_494425
                
                uint32_t i_4 = zx.d(i)
                
                if (i_4 == sx.d(***(*arg8 + 0xbc)))
                    goto label_494443
                
                if (i_4 != 0x30)
                    edx_1 = var_58_1
                    break
                
                ecx = 1
                continue
            case 3
                var_60 = 1
                
                while (i u>= 0x30)
                    if (i u> 0x39)
                        break
                    
                    if (var_50 u>= 0x19)
                        var_54 += 1
                    else
                        void* ecx_19 = var_5c
                        var_50 += 1
                        i.b -= 0x30
                        var_5c += 1
                        *ecx_19 = i.b
                    
                    i = *edx_1
                    edx_1 = &edx_1[1]
                
                i_3 = zx.d(i)
                
                if (i_3 == sx.d(***(*arg8 + 0xbc)))
                    goto label_494494
                
            label_49454c:
                
                if (i_3 == 0x2b || i_3 == 0x2d)
                    goto label_4944c3
                
                goto label_4944a6
            case 4
                var_60 = 1
                var_70 = 1
                
                if (var_50 == 0)
                    while (i == 0x30)
                        var_54 -= 1
                        i = *edx_1
                        edx_1 = &edx_1[1]
                
                while (i u>= 0x30)
                    if (i u> 0x39)
                        break
                    
                    if (var_50 u< 0x19)
                        var_50 += 1
                        void* ecx_25 = var_5c
                        i.b -= 0x30
                        var_5c += 1
                        var_54 -= 1
                        *ecx_25 = i.b
                    
                    i = *edx_1
                    edx_1 = &edx_1[1]
                
                i_3 = zx.d(i)
                goto label_49454c
            case 5
                var_70 = 1
                
                if (i - 0x30 u> 9)
                    edx_1 = var_58_1
                    break
                
                var_90_1 = 4
            label_494427:
                ecx = var_90_1
                edx_1 -= 2
                continue
            case 6
                var_58_1 = &edx_1[-2]
                
                if (i - 0x31 u<= 8)
                    var_90_1 = 9
                    goto label_494427
                
                uint32_t i_5 = zx.d(i)
                
                if (i_5 == 0x2b)
                label_494600:
                    ecx = 7
                    continue
                else
                    if (i_5 != 0x2d)
                        cond:6_1 = i_5 != 0x30
                        goto label_4945e7
                    
                label_4945f4:
                    var_68 = 0xffffffff
                    ecx = 7
                    continue
            case 7
                if (i - 0x31 u<= 8)
                    var_90_1 = 9
                    goto label_494427
                
                cond:6_1 = i != 0x30
            label_4945e7:
                
                if (cond:6_1)
                    edx_1 = var_58_1
                    break
                
                ecx = 8
                continue
            case 8
                var_64 = 1
                
                while (i == 0x30)
                    i = *edx_1
                    edx_1 = &edx_1[1]
                
                if (i - 0x31 u<= 8)
                    var_90_1 = 9
                    goto label_494427
                
                edx_1 -= 2
                break
            case 9
                var_64 = 1
                int32_t ecx_30 = 0
                
                while (i u>= 0x30)
                    if (i u> 0x39)
                        break
                    
                    ecx_30 = ecx_30 * 0xa + zx.d(i) - 0x30
                    
                    if (ecx_30 s> 0x1450)
                        ecx_30 = 0x1451
                        break
                    
                    i = *edx_1
                    edx_1 = &edx_1[1]
                
                var_6c = ecx_30
                
                while (i u>= 0x30)
                    if (i u> 0x39)
                        break
                    
                    i = *edx_1
                    edx_1 = &edx_1[1]
                
                edx_1 -= 2
                break
            case 0xb
                if (arg7 != 0)
                    uint32_t i_6 = zx.d(i)
                    var_58_1 = &edx_1[-1]
                    
                    if (i_6 == 0x2b)
                        goto label_494600
                    
                    if (i_6 == 0x2d)
                        goto label_4945f4
                    
                    edx_1 = &edx_1[-1]
                    break
                
                ecx = 0xa
                edx_1 -= 2
        
        if (ecx == 0xa)
            break
    
    *arg2 = edx_1
    uint16_t eax_32
    int16_t ecx_52
    uint32_t edx_12
    int32_t esi_11
    
    if (var_60 == 0)
        result_1 = 4
    label_494a38:
        ecx_52 = 0
        eax_32 = 0
        edx_12 = 0
        esi_11 = 0
    else
        void* eax_19
        
        if (var_50 u<= 0x18)
            eax_19 = var_5c
        else
            char var_d
            
            if (var_d s>= 5)
                char var_d_1 = var_d + 1
            
            var_50 = 0x18
            eax_19 = var_5c - 1
            var_54 += 1
        
        if (var_50 u<= 0)
            goto label_494a38
        
        while (true)
            eax_19 -= 1
            
            if (*eax_19 != 0)
                break
            
            var_50 -= 1
            var_54 += 1
        
        int16_t var_40
        sub_496e47(&var_24, var_50, &var_40)
        int32_t eax_20 = var_6c
        
        if (var_68 s< 0)
            eax_20 = neg.d(eax_20)
        
        int32_t i_7 = eax_20 + var_54
        
        if (var_64 == 0)
            i_7 += arg5
        
        if (var_70 == 0)
            i_7 -= arg6
        
        if (i_7 s> 0x1450)
            esi_11 = 0
            eax_32 = 0x7fff
            edx_12 = 0x80000000
            ecx_52 = 0
            result_1 = 2
        else
            if (i_7 s< 0xffffebb0)
                result_1 = 1
                goto label_494a38
            
            int32_t esi_1 = 0x4ccc10
            int32_t i_1 = i_7
            int32_t var_3e
            uint32_t var_3a
            int32_t var_38
            
            if (i_7 != 0)
                if (i_7 s< 0)
                    i_1 = neg.d(i_7)
                    esi_1 = 0x4ccd70
                
                if (arg4 == 0)
                    var_40 = 0
                
                while (i_1 != 0)
                    int32_t i_8 = i_1
                    i_1 s>>= 3
                    esi_1 += 0x54
                    int32_t eax_22 = i_8 & 7
                    int32_t var_54_1 = esi_1
                    
                    if (eax_22 != 0)
                        int32_t* ebx_1 = eax_22 * 0xc + esi_1
                        int32_t* var_74_1 = ebx_1
                        
                        if (*ebx_1 u>= 0x8000)
                            int32_t var_4c = *ebx_1
                            void var_48
                            void* edi_2 = &var_48
                            void* esi_3 = &ebx_1[1]
                            *edi_2 = *esi_3
                            *(edi_2 + 4) = *(esi_3 + 4)
                            var_4c -= 1
                            esi_1 = var_54_1
                            ebx_1 = &var_4c
                            var_74_1 = &var_4c
                        
                        uint32_t edx_2 = zx.d(*(ebx_1 + 0xa))
                        int32_t var_5c_1 = 0
                        int32_t var_30_1 = 0
                        int32_t var_2c = 0
                        uint32_t var_28_1 = 0
                        int16_t ecx_33 = var_38.w & 0x7fff
                        int16_t edx_3 = edx_2.w & 0x7fff
                        int32_t eax_27 = (edx_2 ^ var_38) & 0x8000
                        uint32_t edi_6 = zx.d(edx_3 + ecx_33)
                        
                        if (ecx_33 u>= 0x7fff || edx_3 u>= 0x7fff || edi_6.w u> 0xbffd)
                        label_4949db:
                            int16_t temp8_1 = eax_27.w
                            eax_27.w = neg.w(eax_27.w)
                            var_3e = 0
                            var_40.d = 0
                            var_38 = (sbb.d(eax_27, eax_27, temp8_1 != 0) & 0x80000000) + 0x7fff8000
                        else if (edi_6.w u> 0x3fbf)
                            if (ecx_33 == 0)
                                edi_6 += 1
                            
                            if (ecx_33 != 0 || (var_38 & 0x7fffffff) != 0 || var_3e != 0
                                    || var_40.d != 0)
                                if (edx_3 == 0)
                                    edi_6 += 1
                                
                                if (edx_3 != 0 || (ebx_1[2] & 0x7fffffff) != 0 || ebx_1[1] != 0
                                        || *ebx_1 != 0)
                                    int32_t var_68_1 = 0
                                    int32_t* esi_6 = &var_2c
                                    int32_t ecx_35
                                    
                                    for (int32_t j = 5; j s> 0; j -= 1)
                                        int32_t k = j
                                        
                                        if (j s> 0)
                                            void* var_70_1 = &__saved_ebp + var_68_1 * 2 - 0x3c
                                            void* var_64_1 = &ebx_1[2]
                                            
                                            do
                                                uint32_t edx_6 = zx.d(*var_64_1)
                                                uint32_t ecx_38 = zx.d(*var_70_1)
                                                var_50 = 0
                                                ecx_35 = ecx_38 * edx_6
                                                int32_t edx_7 = esi_6[-1]
                                                int32_t ebx_3 = edx_7 + ecx_35
                                                
                                                if (ebx_3 u< edx_7 || ebx_3 u< ecx_35)
                                                    var_50 = 1
                                                
                                                bool cond:13_1 = var_50 == 0
                                                esi_6[-1] = ebx_3
                                                
                                                if (not(cond:13_1))
                                                    *esi_6 += 1
                                                
                                                var_70_1 += 2
                                                var_64_1 -= 2
                                                k -= 1
                                            while (k s> 0)
                                            
                                            ebx_1 = var_74_1
                                        
                                        esi_6 += 2
                                        var_68_1 += 1
                                    
                                    int32_t edi_7 = edi_6 + 0xc002
                                    
                                    if (edi_7.w s<= 0)
                                    label_49491c:
                                        edi_7 += 0xffff
                                        
                                        if (edi_7.w s< 0)
                                            uint32_t j_2 = zx.d((neg.d(edi_7)).w)
                                            edi_7 += j_2
                                            uint32_t j_1
                                            
                                            do
                                                if ((var_30_1.b & 1) != 0)
                                                    var_5c_1 += 1
                                                
                                                uint32_t ecx_45 = var_28_1
                                                var_28_1 u>>= 1
                                                ecx_35 = var_30_1 u>> 1 | var_2c << 0x1f
                                                j_1 = j_2
                                                j_2 -= 1
                                                var_2c = var_2c u>> 1 | ecx_45 << 0x1f
                                                var_30_1 = ecx_35
                                            while (j_1 != 1)
                                            
                                            if (var_5c_1 != j_2)
                                                var_30_1.w |= 1
                                    else
                                        while ((var_28_1 & 0x80000000) == 0)
                                            int32_t esi_8 = var_2c
                                            int32_t ecx_39 = var_30_1
                                            var_30_1 <<= 1
                                            edi_7 += 0xffff
                                            var_2c = (esi_8 * 2) | ecx_39 u>> 0x1f
                                            var_28_1 = (var_28_1 * 2) | esi_8 u>> 0x1f
                                            
                                            if (edi_7.w s<= 0)
                                                break
                                        
                                        if (edi_7.w s<= 0)
                                            goto label_49491c
                                    
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
                                                    edi_7 += 1
                                    
                                    esi_1 = var_54_1
                                    
                                    if (edi_7.w u>= 0x7fff)
                                        goto label_4949db
                                    
                                    ecx_35.w = var_30_1:2.w
                                    var_40 = ecx_35.w
                                    var_3e = var_2c
                                    var_3a = var_28_1
                                    var_38:2.w = edi_7.w | eax_27.w
                                else
                                    var_38 = 0
                                    var_3e = 0
                                    var_40.d = 0
                            else
                                var_38:2.w &= ecx_33
                        else
                            var_3e = 0
                            var_40.d = 0
                            var_38 = 0
            
            ecx_52 = var_40
            esi_11 = var_3e
            edx_12 = var_3a
            eax_32 = (var_38 u>> 0x10).w
    
    *arg1 = ecx_52
    arg1[5] = eax_32 | var_7c
    result = result_1
    *(arg1 + 2) = esi_11
    *(arg1 + 6) = edx_12
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
