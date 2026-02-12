// 函数: sub_478c50
// 地址: 0x478c50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49ab8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_130
int32_t eax_2 = __security_cookie ^ &var_130
int32_t __saved_edi
int32_t var_144 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2
int32_t i_2 = 0
int32_t result

if (ebx != 0)
label_478cbd:
    arg1[2] = arg4
    *arg1 = ebx
    arg1[1] = arg3
    sub_478b50(arg1)
    void* var_12c = nullptr
    int32_t var_128_1 = 0
    int32_t var_124_1 = 0
    int32_t eax_7 = *(*ebx + 0x10)
    int32_t var_4 = 0
    int32_t var_f8 = 0x16
    int32_t var_f4_1 = 0x18
    int32_t var_f0_1 = 0x17
    int32_t var_ec_1 = 0x23
    int32_t eax_8 = eax_7(ebx)
    int32_t esi_1 = 0
    int32_t var_120_1 = 0
    
    if (eax_8 u> 0)
        while (true)
            void* eax_9 = sub_481fef(0x668)
            
            if (eax_9 == 0)
                void* eax_40 = var_12c
                
                if (eax_40 != 0)
                    sub_4813df(eax_40)
                
                result = 0x8007000e
                goto label_4790ff
            
            __builtin_memset(eax_9 + 0x650, 0, 0x18)
            *eax_9 = esi_1
            (*(*ebx + 0x14))(ebx, esi_1, 0, eax_9 + 4)
            void* eax_11 = var_12c
            
            if (eax_11 != 0)
                sub_4813df(eax_11)
                var_12c = nullptr
            
            int32_t var_124_2 = 0
            int32_t i_4 = 0
            int32_t var_118_1 = 0
            
            while (true)
                int32_t eax_13 = (&var_f8)[var_118_1]
                int32_t eax_14 = (*(*ebx + 0x18))(ebx, esi_1, eax_13)
                int32_t esi_2 = 0
                
                if (eax_14 u> 0)
                    do
                        int32_t var_110
                        (*(*ebx + 0x1c))(ebx, var_120_1, eax_13, esi_2, &var_110)
                        int32_t eax_16 = var_110
                        int32_t var_10c
                        int32_t var_108
                        
                        if (eax_16 u>= arg1[0xe] && var_10c u>= arg1[0x10] && eax_16 u<= arg1[0xf]
                                && var_10c u<= arg1[0x11] && var_108 u>= arg1[0x12]
                                && var_108 u<= arg1[0x13])
                            int32_t i
                            
                            if (sub_477c60(eax_9 + 0x650, *(eax_9 + 0x654) + 1) s>= 0)
                                int32_t* eax_23 = (*(eax_9 + 0x654) << 4) + *(eax_9 + 0x650)
                                *eax_23 = var_110
                                eax_23[1] = var_10c
                                eax_23[2] = var_108
                                eax_23[3] = i
                                *(eax_9 + 0x654) += 1
                            
                            int32_t eax_24
                            
                            if (i_2 s> 0)
                                eax_24 = 0
                                
                                while (i != *(var_12c + (eax_24 << 2)))
                                    eax_24 += 1
                                    
                                    if (eax_24 s>= i_2)
                                        goto label_478e99
                            
                            if (i_2 s<= 0 || eax_24 == 0xffffffff)
                            label_478e99:
                                bool cond:9_1 = sub_477bd0(&var_12c, i_2 + 1) s< 0
                                i_2 = i_4
                                
                                if (not(cond:9_1))
                                    *(var_12c + (i_2 << 2)) = i
                                    i_2 += 1
                                    i_4 = i_2
                        
                        esi_2 += 1
                    while (esi_2 u< eax_14)
                
                bool cond:6_1 = var_118_1 + 1 u< 4
                var_118_1 += 1
                
                if (not(cond:6_1))
                    break
                
                esi_1 = var_120_1
            
            void var_e8
            (*(*ebx + 0x20))(ebx, var_120_1, &var_e8)
            int32_t i_1
            int32_t eax_29
            
            if (i_2 s> 0)
                eax_29 = 0
                
                while (i_1 != *(var_12c + (eax_29 << 2)))
                    eax_29 += 1
                    
                    if (eax_29 s>= i_2)
                        goto label_478f0f
            
            if (i_2 s<= 0 || eax_29 == 0xffffffff)
            label_478f0f:
                
                if (sub_477bd0(&var_12c, i_2 + 1) s>= 0)
                    *(var_12c + (i_4 << 2)) = i_1
                    int32_t var_128_2 = i_4 + 1
            
            int32_t* esi_3 = eax_9
            sub_484150(esi_3[0x194], esi_3[0x195], 0x10, sub_477b80)
            
            if (sub_478a50(arg1, esi_3, &var_12c) s< 0 || esi_3[0x198] s<= 0)
                sub_478960(esi_3)
                j_sub_4813df(esi_3)
            else
                int32_t result_1 = sub_477bd0(&arg1[0x15], arg1[0x16] + 1)
                
                if (result_1 s< 0)
                    void* eax_41 = var_12c
                    
                    if (eax_41 != 0)
                        sub_4813df(eax_41)
                    
                    result = result_1
                    goto label_4790ff
                
                *(arg1[0x15] + (arg1[0x16] << 2)) = eax_9
                arg1[0x16] += 1
            
            int32_t eax_39 = var_120_1 + 1
            i_2 = 0
            var_120_1 = eax_39
            
            if (eax_39 u>= eax_8)
                break
            
            esi_1 = eax_39
    
    char var_12d_1 = 1
    
    if (arg1[0x16] s> 0)
        int32_t ebx_2 = 1
        
        do
            int32_t esi_5 = ebx_2
            
            if (ebx_2 s< arg1[0x16])
                char* eax_43 = *(arg1[0x15] + (i_2 << 2)) + 0x204
                
                while (true)
                    if (sub_484034(eax_43, *(arg1[0x15] + (esi_5 << 2)) + 0x204) == 0)
                        var_12d_1 = 0
                        break
                    
                    esi_5 += 1
                    
                    if (esi_5 s>= arg1[0x16])
                        goto label_47903b
                
                break
            
        label_47903b:
            i_2 += 1
            ebx_2 += 1
        while (i_2 s< arg1[0x16])
    
    int32_t i_3 = 0
    
    if (arg1[0x16] s> 0)
        do
            int32_t* esi_6 = *(arg1[0x15] + (i_3 << 2))
            MultiByteToWideChar(0, 0, &esi_6[0x81], 0xffffffff, &esi_6[0x114], 0x64)
            esi_6[0x146].w = 0
            
            if (var_12d_1 == 0)
                int32_t var_148_16 = *esi_6
                void var_d8
                sub_46ab80(&var_d8, 0x64, u" (#%d)")
                int32_t j_1 = 0x100
                int16_t* eax_49 = &esi_6[0x114]
                int32_t j
                
                do
                    if (*eax_49 == 0)
                        if (j_1 != 0)
                            sub_46aa90(&esi_6[0x114 + 0x100 - j_1], 0x100 * 0 + j_1, &var_d8)
                        
                        break
                    
                    eax_49 = &eax_49[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i_3 += 1
        while (i_3 s< arg1[0x16])
    
    void* eax_51 = var_12c
    
    if (eax_51 != 0)
        sub_4813df(eax_51)
    
    result = 0
else
    ebx = sub_471040()
    
    if (ebx != 0)
        goto label_478cbd
    
    result = 0x80040901

label_4790ff:
fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_130)
return result
