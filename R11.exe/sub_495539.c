// 函数: sub_495539
// 地址: 0x495539
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i_10
int32_t* edi = &i_10
void arg_8
void* esi = &arg_8
*edi = *esi
edi[1].w = *(esi + 4)
int16_t var_c
int16_t ecx_1 = var_c & 0x8000
int16_t edx_1 = var_c & 0x7fff
char var_34 = 0xcc
char var_33 = 0xcc
char var_32 = 0xcc
char var_31 = 0xcc
char var_30 = 0xcc
char var_2f = 0xcc
char var_2e = 0xcc
char var_2d = 0xcc
char var_2c = 0xcc
char var_2b = 0xcc
char var_2a = 0xfb
char var_29 = 0x3f

if (ecx_1 == 0)
    arg4[1].b = 0x20
else
    arg4[1].b = 0x2d

uint32_t i_14 = i_10
int32_t result

if (edx_1 == 0 && i_14 == 0 && arg1 == 0)
    *arg4 &= arg1.w
    arg4[1].b = (((ecx_1 != 0x8000) - 1) & 0xd) + 0x20
    *(arg4 + 3) = 1
    arg4[2].b = 0x30
    *(arg4 + 5) = 0
    result = 1
else if (edx_1 != 0x7fff)
    uint32_t ecx_2 = zx.d(edx_1)
    uint32_t ecx_4 = zx.d(((((ecx_2 u>> 8) + (i_14 u>> 0x18 << 1)) * 0x4d + ecx_2 * 0x4d10
        - 0x134312f4) s>> 0x10).w)
    uint32_t var_50_1 = ecx_4
    int32_t i = neg.d(sx.d(ecx_4.w))
    int16_t var_1a_1 = edx_1
    uint32_t i_15 = i_14
    int32_t i_8 = arg1
    int16_t var_24_1 = 0
    int32_t var_6c_1 = 0x4ccc10
    void* j
    int32_t var_40
    void* var_3c
    
    if (i != 0)
        if (i s< 0)
            i = neg.d(i)
            var_6c_1 = 0x4ccd70
        
        while (i != 0)
            var_6c_1 += 0x54
            int32_t ecx_6 = i & 7
            i s>>= 3
            
            if (ecx_6 != 0)
                int32_t* ecx_8 = ecx_6 * 0xc + var_6c_1
                int32_t* var_68_1 = ecx_8
                
                if (*ecx_8 u>= 0x8000)
                    var_40 = *ecx_8
                    void** edi_4 = &var_3c
                    void* esi_4 = &ecx_8[1]
                    *edi_4 = *esi_4
                    edi_4[1] = *(esi_4 + 4)
                    var_40 -= 1
                    var_68_1 = &var_40
                    ecx_8 = &var_40
                
                uint32_t edi_7 = zx.d(*(ecx_8 + 0xa))
                int32_t edx_2 = var_1a_1.d
                int16_t edx_3 = edx_2.w & 0x7fff
                int16_t edi_8 = edi_7.w & 0x7fff
                int32_t var_4c_1 = 0
                uint32_t i_25 = 0
                i_10 = 0
                uint32_t i_16 = 0
                int32_t ecx_11 = (edi_7 ^ edx_2) & 0x8000
                uint32_t eax_15 = zx.d(edi_8 + edx_3)
                
                if (edx_3 u>= 0x7fff || edi_8 u>= 0x7fff || eax_15.w u> 0xbffd)
                label_495972:
                    int16_t temp2_1 = ecx_11.w
                    ecx_11.w = neg.w(ecx_11.w)
                    i_8 = 0
                    var_24_1.d = 0
                    i_15 = (sbb.d(ecx_11, ecx_11, temp2_1 != 0) & 0x80000000) + 0x7fff8000
                else if (eax_15.w u> 0x3fbf)
                    if (edx_3 == 0)
                        eax_15 += 1
                    
                    if (edx_3 != 0 || (i_15 & 0x7fffffff) != 0 || i_8 != 0 || var_24_1.d != 0)
                        if (edi_8 == 0)
                            eax_15 += 1
                        
                        if (edi_8 != 0 || (var_68_1[2] & 0x7fffffff) != 0 || var_68_1[1] != 0
                                || *var_68_1 != 0)
                            int32_t* edi_9 = &i_10
                            int32_t var_60_1 = 0
                            int32_t* var_48_1 = &i_10
                            uint32_t i_21
                            
                            for (j = 5; j s> 0; )
                                void* esi_7 = j
                                void* k = esi_7
                                
                                if (esi_7 s> 0)
                                    void* var_5c_1 = &__saved_ebp + var_60_1 * 2 - 0x20
                                    void* var_58_1 = &var_68_1[2]
                                    
                                    do
                                        int32_t edi_10 = edi_9[-1]
                                        i_21 = zx.d(*var_5c_1) * zx.d(*var_58_1)
                                        int32_t var_74_1 = 0
                                        int32_t esi_10 = edi_10 + i_21
                                        
                                        if (esi_10 u< edi_10 || esi_10 u< i_21)
                                            var_74_1 = 1
                                        
                                        edi_9 = var_48_1
                                        edi_9[-1] = esi_10
                                        
                                        if (var_74_1 != 0)
                                            *edi_9 += 1
                                        
                                        var_5c_1 += 2
                                        var_58_1 -= 2
                                        k -= 1
                                    while (k s> 0)
                                
                                edi_9 += 2
                                var_60_1 += 1
                                j -= 1
                                var_48_1 = edi_9
                            
                            int32_t eax_16 = eax_15 + 0xc002
                            
                            if (eax_16.w s<= 0)
                            label_4958b2:
                                eax_16 += 0xffff
                                
                                if (eax_16.w s< 0)
                                    uint32_t j_7 = zx.d((neg.d(eax_16)).w)
                                    uint32_t j_3 = j_7
                                    eax_16 += j_7
                                    uint32_t j_1
                                    
                                    do
                                        if ((i_25.b & 1) != 0)
                                            var_4c_1 += 1
                                        
                                        uint32_t i_22 = i_16
                                        i_16 u>>= 1
                                        i_21 = i_25 u>> 1 | i_10 << 0x1f
                                        j_1 = j_3
                                        j_3 -= 1
                                        i_10 = i_10 u>> 1 | i_22 << 0x1f
                                        i_25 = i_21
                                    while (j_1 != 1)
                                    
                                    if (var_4c_1 != 0)
                                        i_25.w |= 1
                            else
                                while ((i_16 & 0x80000000) == 0)
                                    uint32_t i_26 = i_25
                                    i_25 <<= 1
                                    i_21 = (i_16 * 2) | i_10 u>> 0x1f
                                    eax_16 += 0xffff
                                    i_10 = (i_10 * 2) | i_26 u>> 0x1f
                                    i_16 = i_21
                                    
                                    if (eax_16.w s<= 0)
                                        break
                                
                                if (eax_16.w s<= 0)
                                    goto label_4958b2
                            
                            if (i_25.w u> 0x8000 || (i_25 & 0x1ffff) == 0x18000)
                                if (i_25 != 0xffffffff)
                                    i_25 += 1
                                else
                                    i_25 = 0
                                    
                                    if (i_10 != 0xffffffff)
                                        i_10 += 1
                                    else
                                        i_10 = 0
                                        
                                        if (i_16:2.w != 0xffff)
                                            i_16:2.w += 1
                                        else
                                            i_16:2.w = 0x8000
                                            eax_16 += 1
                            
                            if (eax_16.w u>= 0x7fff)
                                goto label_495972
                            
                            i_21.w = i_25:2.w
                            var_24_1 = i_21.w
                            i_8 = i_10
                            i_15 = i_16
                            var_1a_1 = eax_16.w | ecx_11.w
                        else
                            i_15 = 0
                            i_8 = 0
                            var_24_1.d = 0
                    else
                        var_1a_1 = 0
                else
                    i_15 = 0
                    i_8 = 0
                    var_24_1.d = 0
    
    uint16_t ecx_16 = (i_15 u>> 0x10).w
    
    if (ecx_16 u>= 0x3fff)
        int32_t esi_15 = var_2a.d
        var_50_1 += 1
        uint32_t edx_22 = zx.d(ecx_16)
        int16_t edx_23 = edx_22.w & 0x7fff
        int16_t esi_16 = esi_15.w & 0x7fff
        int32_t ecx_19 = (esi_15 ^ edx_22) & 0x8000
        int32_t var_5c_2 = 0
        int32_t i_9 = 0
        i_10 = 0
        uint32_t i_17 = 0
        uint32_t edi_19 = zx.d(esi_16 + edx_23)
        
        if (edx_23 u>= 0x7fff || esi_16 u>= 0x7fff || edi_19.w u> 0xbffd)
            int16_t temp0_1 = ecx_19.w
            ecx_19.w = neg.w(ecx_19.w)
            i_15 = (sbb.d(ecx_19, ecx_19, temp0_1 != 0) & 0x80000000) + 0x7fff8000
            i_8 = 0
            var_24_1.d = 0
        else if (edi_19.w u> 0x3fbf)
            if (edx_23 == 0)
                edi_19 += 1
            
            if (edx_23 != 0 || (i_15 & 0x7fffffff) != 0 || i_8 != 0 || var_24_1.d != 0)
                if (esi_16 == 0)
                    edi_19 += 1
                
                if (esi_16 == 0 && (var_2c.d & 0x7fffffff) == 0 && var_30.d == 0 && var_34.d == 0)
                    goto label_4959fb
                
                int32_t var_58_2 = 0
                int32_t* eax_18 = &i_10
                
                for (j = 5; j s> 0; j -= 1)
                    void* j_6 = j
                    void* j_2 = j_6
                    
                    if (j_6 s> 0)
                        char* var_60_2 = &var_2c
                        void* var_4c_2 = &__saved_ebp + var_58_2 * 2 - 0x20
                        
                        do
                            int32_t var_48_2 = 0
                            int32_t edx_29 = zx.d(*var_60_2) * zx.d(*var_4c_2)
                            int32_t esi_19 = eax_18[-1]
                            int32_t ebx_4 = esi_19 + edx_29
                            
                            if (ebx_4 u< esi_19 || ebx_4 u< edx_29)
                                var_48_2 = 1
                            
                            eax_18[-1] = ebx_4
                            
                            if (var_48_2 != 0)
                                *eax_18 += 1
                            
                            var_4c_2 += 2
                            var_60_2 -= 2
                            j_2 -= 1
                        while (j_2 s> 0)
                    
                    eax_18 += 2
                    var_58_2 += 1
                
                int32_t edi_20 = edi_19 + 0xc002
                uint32_t i_6 = 0
                
                if (edi_20.w s<= 0)
                label_495b04:
                    edi_20 += 0xffff
                    
                    if (edi_20.w s< 0)
                        i_6 = zx.d((neg.d(edi_20)).w)
                        edi_20 += i_6
                        uint32_t i_1
                        
                        do
                            if ((i_9.b & 1) != 0)
                                var_5c_2 += 1
                            
                            uint32_t i_24 = i_17
                            i_17 u>>= 1
                            int32_t i_13 = i_9 u>> 1 | i_10 << 0x1f
                            i_1 = i_6
                            i_6 -= 1
                            i_10 = i_10 u>> 1 | i_24 << 0x1f
                            i_9 = i_13
                        while (i_1 != 1)
                        
                        if (var_5c_2 != i_6)
                            i_9.w |= 1
                else
                    while ((i_17 & 0x80000000) == 0)
                        int32_t i_12 = i_9
                        i_9 <<= 1
                        uint32_t i_23 = (i_17 * 2) | i_10 u>> 0x1f
                        edi_20 += 0xffff
                        i_10 = (i_10 * 2) | i_12 u>> 0x1f
                        i_17 = i_23
                        
                        if (edi_20.w s<= 0)
                            break
                    
                    if (edi_20.w s<= 0)
                        goto label_495b04
                
                if (i_9.w u> 0x8000 || (i_9 & 0x1ffff) == 0x18000)
                    if (i_9 != 0xffffffff)
                        i_9 += 1
                    else
                        i_9 = i_6
                        
                        if (i_10 != 0xffffffff)
                            i_10 += 1
                        else
                            i_10 = i_6
                            
                            if (i_17:2.w != 0xffff)
                                i_17:2.w += 1
                            else
                                i_17:2.w = 0x8000
                                edi_20 += 1
                
                if (edi_20.w u< 0x7fff)
                    i_6.w = i_9:2.w
                    var_24_1 = i_6.w
                    i_8 = i_10
                    i_15 = i_17
                    int16_t var_1a_3 = edi_20.w | ecx_19.w
                else
                    int16_t temp4_1 = ecx_19.w
                    ecx_19.w = neg.w(ecx_19.w)
                    i_8 = i_6
                    var_24_1.d = i_6
                    i_15 = (sbb.d(ecx_19, ecx_19, temp4_1 != 0) & 0x80000000) + 0x7fff8000
            else
                int16_t var_1a_2 = 0
        else
        label_4959fb:
            i_15 = 0
            i_8 = 0
            var_24_1.d = 0
    
    int16_t ecx_26 = var_50_1.w
    *arg4 = ecx_26
    
    if ((arg3 & 1) != 0)
        arg2 += sx.d(ecx_26)
    
    if ((arg3 & 1) == 0 || arg2 s> 0)
        if (arg2 s> 0x15)
            arg2 = 0x15
        
        int32_t esi_26 = (i_15 u>> 0x10) - 0x3ffe
        int16_t var_1a_4 = 0
        int32_t i_7 = 8
        int32_t i_2
        
        do
            int32_t eax_24 = var_24_1.d
            var_24_1.d <<= 1
            uint32_t i_18 = (i_15 * 2) | i_8 u>> 0x1f
            i_2 = i_7
            i_7 -= 1
            i_8 = (i_8 * 2) | eax_24 u>> 0x1f
            i_15 = i_18
        while (i_2 != 1)
        
        if (esi_26 s< 0)
            uint32_t i_3 = zx.d((neg.d(esi_26)).b)
            
            while (i_3 s> 0)
                uint32_t i_19 = i_15
                i_15 u>>= 1
                int32_t eax_31 = var_24_1.d u>> 1 | i_8 << 0x1f
                i_3 -= 1
                i_8 = i_8 u>> 1 | i_19 << 0x1f
                var_24_1.d = eax_31
        
        void* j_5 = &arg4[2]
        j = j_5
        uint32_t i_4 = arg2 + 1
        
        if (arg2 + 1 s> 0)
            do
                int32_t edx_39 = var_24_1.d
                int32_t i_11 = i_8
                var_40 = var_24_1.d
                void** edi_28 = &var_3c
                void** esi_28 = &i_8:2
                *edi_28 = *esi_28
                edi_28[1] = esi_28[1]
                var_24_1.d <<= 1
                int32_t edi_31 = var_24_1.d
                var_24_1.d <<= 1
                int32_t ecx_33 = (i_11 * 2) | edx_39 u>> 0x1f
                int32_t edx_44 = var_40
                uint32_t ecx_35 = (((i_15 * 2) | i_11 u>> 0x1f) * 2) | ecx_33 u>> 0x1f
                int32_t eax_36 = var_24_1.d
                int32_t esi_34 = (ecx_33 * 2) | edi_31 u>> 0x1f
                int32_t edi_33 = edx_44 + eax_36
                
                if (edi_33 u< eax_36 || edi_33 u< edx_44)
                    int32_t edx_45 = 0
                    
                    if (esi_34 + 1 u< esi_34 || esi_34 + 1 u< 1)
                        edx_45 = 1
                    
                    esi_34 += 1
                    
                    if (edx_45 != 0)
                        ecx_35 += 1
                
                void* eax_38 = var_3c
                void* edx_46 = eax_38 + esi_34
                
                if (edx_46 u< esi_34 || edx_46 u< eax_38)
                    ecx_35 += 1
                
                int32_t var_38
                int32_t i_20 = ((ecx_35 + var_38) * 2) | edx_46 u>> 0x1f
                var_24_1.d = edi_33 * 2
                i_15 = i_20
                *j_5 = (i_20 u>> 0x18).b + 0x30
                j_5 += 1
                i_4 -= 1
                i_8 = (edx_46 * 2) | edi_33 u>> 0x1f
                var_1a_4:1.b = 0
            while (i_4 s> 0)
        
        uint32_t eax_33
        eax_33.b = *(j_5 - 1)
        void* i_5 = j_5 - 2
        int16_t* eax_40
        
        if (eax_33.b s>= 0x35)
            for (; i_5 u>= j; i_5 -= 1)
                if (*i_5 != 0x39)
                    break
                
                *i_5 = 0x30
            
            eax_40 = arg4
            
            if (i_5 u< j)
                i_5 += 1
                *eax_40 += 1
            
            *i_5 += 1
            goto label_495da4
        
        void* j_4
        
        for (j_4 = j; i_5 u>= j_4; i_5 -= 1)
            if (*i_5 != 0x30)
                break
        
        eax_40 = arg4
        
        if (i_5 u>= j_4)
        label_495da4:
            i_5.b -= eax_40.b
            i_5.b -= 3
            *(eax_40 + 3) = i_5.b
            *(sx.d(i_5.b) + eax_40 + 4) = 0
            result = 1
        else
            *eax_40 = 0
            *(eax_40 + 3) = 1
            int16_t* edx_38
            edx_38.b = ecx_1 != 0x8000
            edx_38.b -= 1
            edx_38.b &= 0xd
            edx_38.b += 0x20
            eax_40[1].b = edx_38.b
            *j_4 = 0x30
            *(eax_40 + 5) = 0
            result = 1
    else
        *arg4 = 0
        *(arg4 + 3) = 1
        arg4[1].b = (((ecx_1 != 0x8000) - 1) & 0xd) + 0x20
        arg4[2].b = 0x30
        *(arg4 + 5) = 0
        result = 1
else
    *arg4 = 1
    char* var_88_1
    
    if ((i_14 != 0x80000000 || arg1 != 0) && (i_14 & 0x40000000) == 0)
        var_88_1 = "1#SNAN"
    label_495673:
        
        if (sub_48a315(&arg4[2], 0x16, var_88_1) != 0)
            int32_t var_98_1
            __builtin_memset(&var_98_1, 0, 0x14)
            sub_481c1f()
            noreturn
        
        *(arg4 + 3) = 6
    else
        char* var_88_2
        
        if (ecx_1 == 0 || i_14 != 0xc0000000)
            if (i_14 != 0x80000000 || arg1 != 0)
            label_495668:
                var_88_1 = "1#QNAN"
                goto label_495673
            
            var_88_2 = "1#INF"
        else
            if (arg1 != 0)
                goto label_495668
            
            var_88_2 = "1#IND"
        
        if (sub_48a315(&arg4[2], 0x16, var_88_2) != 0)
            int32_t var_98
            __builtin_memset(&var_98, 0, 0x14)
            sub_481c1f()
            noreturn
        
        *(arg4 + 3) = 5
    result = 0

sub_480cd2(eax_1 ^ &__saved_ebp)
return result
