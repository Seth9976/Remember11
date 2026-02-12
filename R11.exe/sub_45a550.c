// 函数: sub_45a550
// 地址: 0x45a550
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a24c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_200
int32_t eax_2 = __security_cookie ^ &var_200
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_1e4 = arg3
var_200 = arg1
int32_t eax_8 = arg3 & 0x7ff
int32_t var_1e0 = 0

if (eax_8 != 0 || (eax_8 | (arg3 & 0x7ff0000)) != 0)
    (*(*data_c78668 + 0x48))(eax_4)

void** eax_11 = var_200
int32_t ecx_3 = eax_11[0x8006]
int32_t edx_2 = eax_11[0x8007]
eax_11.w = arg2
int32_t edi = arg2.d
eax_11.w &= 0x3fff
int16_t var_1fc = eax_11.w
uint32_t ebx_1 = edi u>> 0x18
int32_t eax_13 = ebx_1 & 0x3f
int32_t esi_1 = arg4 & 0xfff
int32_t ebp_1 = arg5 & 0xfff
int32_t var_1d0 = 0
int32_t eax_17
int32_t edx_3
edx_3:eax_17 = sx.q(sub_460120(eax_13) * ebp_1 * esi_1)
void** ebp_2 = var_200
int32_t eax_21
char edx_5
edx_5:eax_21 = sx.q(((eax_17 + (edx_3 & 7)) s>> 3) + 0xff)
uint32_t var_1ec = zx.d(((eax_21 + zx.d(edx_5)) s>> 8).w + var_1fc)
int32_t* ebp_3 = &ebp_2[2]
void* esi_2 = *ebp_2[3]

while (true)
    void* var_1f4_1 = esi_2
    int32_t* var_1f8 = ebp_3
    
    while (true)
        void** eax_28 = var_200
        int32_t ecx_4 = eax_28[3]
        
        if (ebp_3 == 0 || ebp_3 != &eax_28[2])
            __invalid_parameter_noinfo()
        
        if (esi_2 == ecx_4)
            int16_t var_98
            sub_453bf0(&var_98)
            int128_t* ebp_4 = arg6
            var_98 = var_1fc
            int16_t var_94 = esi_1.w
            int32_t var_74 = arg3 u>> 0x10 & 0x7ff
            int32_t var_70 = esi_1
            int16_t var_8c = ebx_1.w & 0x3f
            void* i_3 = arg7
            int32_t var_4 = 0
            int16_t var_92 = ebp_1.w
            int32_t var_78 = var_1e4 & 0x7ff
            int32_t var_6c = ebp_1
            uint16_t var_8a = (edi u>> 0x10).w & 0x3f
            int32_t var_50 = ecx_3
            int32_t var_4c = edx_2
            int128_t* var_68 = ebp_4
            void* i_4 = i_3
            char var_40
            void var_3c
            
            if (sub_448500(ebp_4) != 0)
                void* eax_41 = ebp_4 + 0x1c
                var_40 = 1
                void* edx_11 = eax_41 + 1
                i_3 = *(ebp_4 + 0x18)
                char i
                
                do
                    i = *eax_41
                    eax_41 += 1
                while (i != 0)
                sub_44b9c0(&var_3c, ebp_4 + 0x1c, eax_41 - edx_11)
                
                if (data_c78675 == 1)
                    void* var_218_4 = ebp_4 + 0x1c
                    sub_4653f0("tex = %s\n")
            
            int32_t eax_43 = 9
            char const* const ecx_15 = "@capture@"
            int32_t* edx_12 = ebp_4
            int32_t eax_47
            
            while (true)
                if (*edx_12 != *ecx_15)
                label_45a8a8:
                    uint32_t esi_6 = zx.d(*edx_12)
                    uint32_t edi_2 = zx.d(*ecx_15)
                    uint32_t esi_7 = esi_6 - edi_2
                    
                    if (esi_6 != edi_2)
                    label_45a8f9:
                        eax_47 = 1
                        
                        if (esi_7 s<= 0)
                            eax_47 = 0xffffffff
                        
                        break
                    
                    if (eax_43 != 1)
                        uint32_t esi_8 = zx.d(*(edx_12 + 1))
                        uint32_t edi_3 = zx.d(ecx_15[1])
                        esi_7 = esi_8 - edi_3
                        
                        if (esi_8 != edi_3)
                            goto label_45a8f9
                        
                        if (eax_43 != 2)
                            uint32_t esi_9 = zx.d(*(edx_12 + 2))
                            uint32_t edi_4 = zx.d(ecx_15[2])
                            esi_7 = esi_9 - edi_4
                            
                            if (esi_9 != edi_4)
                                goto label_45a8f9
                            
                            if (eax_43 != 3)
                                uint32_t esi_10 = zx.d(*(edx_12 + 3))
                                uint32_t ecx_19 = zx.d(ecx_15[3])
                                esi_7 = esi_10 - ecx_19
                                
                                if (esi_10 != ecx_19)
                                    goto label_45a8f9
                else
                    eax_43 -= 4
                    ecx_15 = &ecx_15[4]
                    edx_12 = &edx_12[1]
                    
                    if (eax_43 u>= 4)
                        continue
                    else if (eax_43 != 0)
                        goto label_45a8a8
                
                eax_47 = 0
                break
            
            char var_3f
            
            if (eax_47 == 0)
                var_3f = 1
            
            void** edi_5 = var_200
            void** ecx_20 = edi_5[3]
            void** eax_48 = ecx_20[1]
            void** esi_11 = ecx_20
            
            while (*(eax_48 + 0xa1) == 0)
                if (eax_48[4].w u>= var_1fc)
                    esi_11 = eax_48
                    eax_48 = *eax_48
                else
                    eax_48 = eax_48[2]
            
            void** eax_49 = ecx_20[1]
            bool cond:4 = *(eax_49 + 0xa1) != 0
            var_200 = ecx_20
            
            if (not(cond:4))
                do
                    if (var_1fc u>= eax_49[4].w)
                        eax_49 = eax_49[2]
                    else
                        ecx_20 = eax_49
                        eax_49 = *eax_49
                while (*(eax_49 + 0xa1) == 0)
                
                var_200 = ecx_20
            
            uint32_t eax_50 = &edi_5[2]
            void** var_1e0_1 = ecx_20
            var_1e4 = eax_50
            var_1ec = eax_50
            
            while (true)
                if (eax_50 == 0 || eax_50 != &edi_5[2])
                    __invalid_parameter_noinfo()
                
                if (esi_11 == var_200)
                    break
                
                int16_t* esi_13 = sub_455d20(&var_1ec) + 8
                
                if (sub_455670(esi_13, &var_98) != 0)
                    if (*(esi_13 + 0x59) == 1)
                        break
                    
                    if (var_40 == 1)
                        if (esi_13[0x2c].b == 1 && sub_456260(&var_3c, &data_49e15e) != 0
                                && sub_455db0(&esi_13[0x2e], &var_3c) != 0)
                            break
                    else if (esi_13[0x2c].b != 1)
                        int32_t eax_53
                        int32_t ecx_24
                        
                        if (ecx_3 != 0xf0f0f0f0 || edx_2 != 0xf0f0f0f0)
                            eax_53 = *(esi_13 + 0x48)
                            ecx_24 = *(esi_13 + 0x4c)
                        
                        uint32_t esi_17
                        bool cond:16_1
                        
                        if ((ecx_3 == 0xf0f0f0f0 && edx_2 == 0xf0f0f0f0)
                                || (eax_53 == 0xf0f0f0f0 && ecx_24 == eax_53))
                            edi_5[0x800c] += 1
                            
                            if (i_3 == *(esi_13 + 0x34))
                                int32_t* esi_21 = *(esi_13 + 0x14)
                                
                                if (esi_21 != 0)
                                    void* i_1 = i_3
                                    int32_t* ecx_31 = esi_21
                                    int128_t* edx_24 = ebp_4
                                    
                                    if (i_3 u>= 4)
                                        do
                                            if (*edx_24 != *ecx_31)
                                                goto label_45ab48
                                            
                                            i_1 -= 4
                                            ecx_31 = &ecx_31[1]
                                            edx_24 += 4
                                        while (i_1 u>= 4)
                                    
                                    int32_t eax_60
                                    
                                    if (i_1 != 0)
                                    label_45ab48:
                                        uint32_t esi_23 = zx.d(*edx_24)
                                        uint32_t ebp_8 = zx.d(*ecx_31)
                                        esi_17 = esi_23 - ebp_8
                                        
                                        if (esi_23 != ebp_8)
                                        label_45ab99:
                                            eax_60 = 1
                                            
                                            if (esi_17 s<= 0)
                                                eax_60 = 0xffffffff
                                            
                                            goto label_45aba9
                                        
                                        if (i_1 == 1)
                                            goto label_45aba5
                                        
                                        uint32_t esi_24 = zx.d(*(edx_24 + 1))
                                        uint32_t ebp_9 = zx.d(*(ecx_31 + 1))
                                        esi_17 = esi_24 - ebp_9
                                        
                                        if (esi_24 != ebp_9)
                                            goto label_45ab99
                                        
                                        if (i_1 == 2)
                                            goto label_45aba5
                                        
                                        uint32_t esi_25 = zx.d(*(edx_24 + 2))
                                        uint32_t ebp_10 = zx.d(*(ecx_31 + 2))
                                        esi_17 = esi_25 - ebp_10
                                        
                                        if (esi_25 != ebp_10)
                                            goto label_45ab99
                                        
                                        if (i_1 == 3)
                                            goto label_45aba5
                                        
                                        uint32_t esi_26 = zx.d(*(edx_24 + 3))
                                        uint32_t edx_28 = zx.d(*(ecx_31 + 3))
                                        esi_17 = esi_26 - edx_28
                                        cond:16_1 = esi_26 == edx_28
                                    label_45ab95:
                                        
                                        if (cond:16_1)
                                            goto label_45aba5
                                        
                                        goto label_45ab99
                                    
                                label_45aba5:
                                    eax_60 = 0
                                label_45aba9:
                                    ebp_4 = arg6
                                    
                                    if (eax_60 == 0)
                                        break
                        else if (eax_53 == ecx_3 && ecx_24 == edx_2)
                            if (edx_2 == 0xf2000000)
                                break
                            
                            if (edx_2 == 0xf3000000)
                                break
                            
                            if (i_3 == *(esi_13 + 0x34))
                                int32_t* esi_14 = *(esi_13 + 0x14)
                                
                                if (esi_14 != 0)
                                    void* i_2 = i_3
                                    int32_t* ecx_26 = esi_14
                                    int32_t* edx_20 = ebp_4
                                    
                                    if (i_3 u>= 4)
                                        do
                                            if (*edx_20 != *ecx_26)
                                                goto label_45aa9c
                                            
                                            i_2 -= 4
                                            ecx_26 = &ecx_26[1]
                                            edx_20 = &edx_20[1]
                                        while (i_2 u>= 4)
                                    
                                    if (i_2 == 0)
                                        goto label_45aba5
                                    
                                label_45aa9c:
                                    uint32_t esi_16 = zx.d(*edx_20)
                                    uint32_t ebp_5 = zx.d(*ecx_26)
                                    esi_17 = esi_16 - ebp_5
                                    
                                    if (esi_16 != ebp_5)
                                        goto label_45ab99
                                    
                                    if (i_2 == 1)
                                        goto label_45aba5
                                    
                                    uint32_t esi_18 = zx.d(*(edx_20 + 1))
                                    uint32_t ebp_6 = zx.d(*(ecx_26 + 1))
                                    esi_17 = esi_18 - ebp_6
                                    
                                    if (esi_18 != ebp_6)
                                        goto label_45ab99
                                    
                                    if (i_2 == 2)
                                        goto label_45aba5
                                    
                                    uint32_t esi_19 = zx.d(*(edx_20 + 2))
                                    uint32_t ebp_7 = zx.d(*(ecx_26 + 2))
                                    esi_17 = esi_19 - ebp_7
                                    
                                    if (esi_19 != ebp_7)
                                        goto label_45ab99
                                    
                                    if (i_2 == 3)
                                        goto label_45aba5
                                    
                                    uint32_t esi_20 = zx.d(*(edx_20 + 3))
                                    uint32_t ecx_30 = zx.d(*(ecx_26 + 3))
                                    esi_17 = esi_20 - ecx_30
                                    cond:16_1 = esi_20 == ecx_30
                                    goto label_45ab95
                
                sub_450e90(&var_1ec)
                eax_50 = var_1ec
            
            int16_t* esi_30
            
            if (sub_45c550(&var_1ec, &var_1e4) == 0)
                esi_30 = sub_455d20(&var_1ec) + 8
                *(esi_30 + 0x30) = ebp_4
            else
                if (var_3f != 0)
                    void* eax_65 = sub_481fef(0x80)
                    void* const eax_66
                    
                    if (eax_65 == 0)
                        eax_66 = nullptr
                    else
                        eax_66 = sub_451db0(eax_65)
                    
                    sub_459c20(&var_1f8, eax_66)
                    int32_t* eax_67 = var_1f8
                    eax_67[4] = 0x280
                    eax_67[5] = 0x1c0
                    eax_67[0x1e].b = 1
                    var_4.b = 1
                    void var_60
                    sub_458940(&var_60, &var_1f8)
                    var_4.b = 0
                    sub_451be0(&var_1f8)
                else if (var_40 == 0 && edx_2 != 0xf2000000 && edx_2 != 0xf3000000)
                    void* eax_62 = j_sub_481fef(i_3)
                    sub_480ea0(eax_62, ebp_4, i_3)
                    void var_84
                    sub_4562a0(&var_84, eax_62)
                
                int32_t eax_71
                int32_t edx_29
                edx_29:eax_71 = sx.q(sub_460120(eax_13) * ebp_1 * esi_1)
                int32_t eax_75
                char edx_31
                edx_31:eax_75 = sx.q(((eax_71 + (edx_29 & 7)) s>> 3) + 0xff)
                int16_t var_96_1 = ((eax_75 + zx.d(edx_31)) s>> 8).w + var_1fc
                int32_t eax_79 = edi_5[0x8005]
                int32_t var_88_1 = eax_79
                edi_5[0x8005] = eax_79 + 1
                var_4.b = 2
                int16_t var_1b8
                int16_t var_128
                sub_4587c0(&var_1b8, sub_4589d0(&var_128, &var_98, &var_98))
                var_4.b = 3
                void var_1d4
                sub_4596d0(&var_1d4, &var_1b8)
                var_4.b = 2
                void var_1b0
                sub_453cc0(&var_1b0)
                var_4.b = 0
                void var_120
                sub_453cc0(&var_120)
                esi_30 = sub_455d20(&var_1d4) + 8
            
            bool cond:8 = *esi_30 u<= 0x4000
            *(esi_30 + 0x50) = data_c78630
            *(esi_30 + 0x54) = data_c78634
            esi_30[0x3e].b = 0
            
            if (not(cond:8) && data_4ca435 == 1)
                sub_464790(".\texture.cpp", 0x366)
                data_4ca435 = 0
            
            var_1e4 = 0
            int32_t var_1e0_2 = 0
            
            if (sub_455650(&esi_30[0x10], &var_1e4) == 0)
                edi_5[zx.d(*esi_30) + 0x4005] = esi_30
            else
                edi_5[zx.d(*esi_30) + 5] = esi_30
                edi_5[zx.d(*esi_30) + 0x4005] = 0
            
            (*(*edi_5 + 0x34))(eax_4)
            int32_t var_4_1 = 0xffffffff
            void* result = sub_453cc0(&var_98)
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_480cd2(eax_2 ^ &var_200)
            return result
        
        if (ebp_3 == 0)
            __invalid_parameter_noinfo()
        
        if (esi_2 == ebp_3[1])
            __invalid_parameter_noinfo()
        
        if (*(esi_2 + 0x72) == 0 && *(esi_2 + 0x71) == 0 && var_1fc u<= *(esi_2 + 0x18))
            uint32_t edx_6
            edx_6.w = var_1ec.w
            
            if (*(esi_2 + 0x1a) u<= edx_6.w)
                int32_t eax_31 = data_c78630
                int32_t ecx_6 = sbb.d(data_c78634, *(esi_2 + 0x6c), eax_31 u< *(esi_2 + 0x68))
                int32_t var_1c4_1 = ecx_6
                
                if (ecx_6 != 0 || eax_31 - *(esi_2 + 0x68) u> 0x3c)
                    int32_t eax_33
                    int32_t edx_8
                    
                    if (*(esi_2 + 0x94) != 1)
                        eax_33 = data_c781f8
                        edx_8 = sbb.d(data_c781fc, *(esi_2 + 0x9c), eax_33 u< *(esi_2 + 0x98))
                        int32_t var_1c4_2 = edx_8
                    
                    if (*(esi_2 + 0x94) == 1 || edx_8 != 0 || eax_33 - *(esi_2 + 0x98) u> 0x100)
                        void* var_218_1 = esi_2
                        int32_t var_1c0
                        int32_t* eax_35
                        eax_35, edx_6 = sub_4549f0(&var_200[2], &var_1c0, ebp_3)
                        ebp_3 = *eax_35
                        esi_2 = eax_35[1]
                        break
        
        sub_450e90(&var_1f8)
        esi_2 = var_1f4_1
        ebp_3 = var_1f8
