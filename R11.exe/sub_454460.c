// 函数: sub_454460
// 地址: 0x454460
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_499e67
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_11c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *arg1
int32_t var_108 = arg1[1]
int32_t* var_e4 = esi
int32_t edx = 8
char const* const ecx = "EMUARC__"
void* eax_8 = esi[*esi - 1] + esi
int32_t eax_12

while (true)
    if (*eax_8 != *ecx)
    label_4544cf:
        uint32_t edi_2 = zx.d(*eax_8)
        uint32_t ebx_1 = zx.d(*ecx)
        uint32_t edi_3 = edi_2 - ebx_1
        
        if (edi_2 != ebx_1)
        label_454520:
            eax_12 = 1
            
            if (edi_3 s<= 0)
                eax_12 = 0xffffffff
            
            break
        
        if (edx != 1)
            uint32_t edi_4 = zx.d(*(eax_8 + 1))
            uint32_t ebx_2 = zx.d(ecx[1])
            edi_3 = edi_4 - ebx_2
            
            if (edi_4 != ebx_2)
                goto label_454520
            
            if (edx != 2)
                uint32_t edi_5 = zx.d(*(eax_8 + 2))
                uint32_t ebx_3 = zx.d(ecx[2])
                edi_3 = edi_5 - ebx_3
                
                if (edi_5 != ebx_3)
                    goto label_454520
                
                if (edx != 3)
                    uint32_t edi_6 = zx.d(*(eax_8 + 3))
                    uint32_t ecx_4 = zx.d(ecx[3])
                    edi_3 = edi_6 - ecx_4
                    
                    if (edi_6 != ecx_4)
                        goto label_454520
    else
        edx -= 4
        ecx = &ecx[4]
        eax_8 += 4
        
        if (edx u>= 4)
            continue
        else if (edx != 0)
            goto label_4544cf
    
    eax_12 = 0
    break

if (eax_12 != 0)
    sub_465480(".\texture.cpp", 0x855)

int32_t edi_8 = *esi - 4

if (edi_8 != 1)
    edi_8 -= 1

if (edi_8 u> 0)
    void* var_104_1 = &esi[1]
    int32_t var_f4_1 = edi_8
    
    while (true)
        void* edi_10 = *var_104_1 + esi
        void* eax_14 = edi_10 + 0xc
        void* var_e8_1 = edi_10
        void* var_fc_1 = eax_14
        int32_t var_f8_1 = 0
        
        if (*edi_10 u> 0)
            while (true)
                void* ebx_4 = *(eax_14 + (zx.d(*eax_14) << 2) - 4) + esi[*esi - 1] + esi + 8
                
                if (sub_448500(ebx_4) != 0)
                    int32_t eax_18 = 8
                    char const* const ecx_6 = "PNGFILE2"
                    void* edx_6 = ebx_4
                    int32_t eax_22
                    
                    while (true)
                        if (*edx_6 != *ecx_6)
                        label_4545fd:
                            uint32_t edi_11 = zx.d(*edx_6)
                            uint32_t esi_2 = zx.d(*ecx_6)
                            uint32_t edi_12 = edi_11 - esi_2
                            
                            if (edi_11 != esi_2)
                            label_45464e:
                                eax_22 = 1
                                
                                if (edi_12 s<= 0)
                                    eax_22 = 0xffffffff
                                
                                break
                            
                            if (eax_18 != 1)
                                uint32_t edi_13 = zx.d(*(edx_6 + 1))
                                uint32_t esi_3 = zx.d(ecx_6[1])
                                edi_12 = edi_13 - esi_3
                                
                                if (edi_13 != esi_3)
                                    goto label_45464e
                                
                                if (eax_18 != 2)
                                    uint32_t edi_14 = zx.d(*(edx_6 + 2))
                                    uint32_t esi_4 = zx.d(ecx_6[2])
                                    edi_12 = edi_14 - esi_4
                                    
                                    if (edi_14 != esi_4)
                                        goto label_45464e
                                    
                                    if (eax_18 != 3)
                                        uint32_t edi_15 = zx.d(*(edx_6 + 3))
                                        uint32_t ecx_10 = zx.d(ecx_6[3])
                                        edi_12 = edi_15 - ecx_10
                                        
                                        if (edi_15 != ecx_10)
                                            goto label_45464e
                        else
                            eax_18 -= 4
                            ecx_6 = &ecx_6[4]
                            edx_6 += 4
                            
                            if (eax_18 u>= 4)
                                continue
                            else if (eax_18 != 0)
                                goto label_4545fd
                        
                        eax_22 = 0
                        break
                    
                    if (eax_22 == 0)
                    label_4546ed:
                        int32_t eax_28 = *(ebx_4 + 0x64)
                        
                        if (eax_28 == 0x15)
                            var_108 = 0
                        else if (eax_28 == 0x35545846)
                            var_108 = 0x13
                        else if (eax_28 == 0x35545847)
                            var_108 = 1
                        else
                            sub_465480(".\texture.cpp", 0x875)
                    else
                        int32_t eax_23 = 8
                        char const* const ecx_11 = "PNGFILE3"
                        void* edx_10 = ebx_4
                        int32_t eax_27
                        
                        while (true)
                            if (*edx_10 != *ecx_11)
                            label_454688:
                                uint32_t edi_17 = zx.d(*edx_10)
                                uint32_t esi_5 = zx.d(*ecx_11)
                                uint32_t edi_18 = edi_17 - esi_5
                                
                                if (edi_17 != esi_5)
                                label_4546d9:
                                    eax_27 = 1
                                    
                                    if (edi_18 s<= 0)
                                        eax_27 = 0xffffffff
                                    
                                    break
                                
                                if (eax_23 != 1)
                                    uint32_t edi_19 = zx.d(*(edx_10 + 1))
                                    uint32_t esi_6 = zx.d(ecx_11[1])
                                    edi_18 = edi_19 - esi_6
                                    
                                    if (edi_19 != esi_6)
                                        goto label_4546d9
                                    
                                    if (eax_23 != 2)
                                        uint32_t edi_20 = zx.d(*(edx_10 + 2))
                                        uint32_t esi_7 = zx.d(ecx_11[2])
                                        edi_18 = edi_20 - esi_7
                                        
                                        if (edi_20 != esi_7)
                                            goto label_4546d9
                                        
                                        if (eax_23 != 3)
                                            uint32_t edi_21 = zx.d(*(edx_10 + 3))
                                            uint32_t edx_14 = zx.d(ecx_11[3])
                                            edi_18 = edi_21 - edx_14
                                            
                                            if (edi_21 != edx_14)
                                                goto label_4546d9
                            else
                                eax_23 -= 4
                                ecx_11 = &ecx_11[4]
                                edx_10 += 4
                                
                                if (eax_23 u>= 4)
                                    continue
                                else if (eax_23 != 0)
                                    goto label_454688
                            
                            eax_27 = 0
                            break
                        
                        if (eax_27 == 0)
                            goto label_4546ed
                    
                    EnterCriticalSection(&data_c781dc)
                    void var_b4
                    sub_44bc30(&var_b4, ebx_4 + 0x1c)
                    int32_t var_c_1 = 0
                    void var_d8
                    sub_453250(0xc78200, &var_d8, &var_b4)
                    int32_t var_c_2 = 0xffffffff
                    sub_44b780(&var_b4)
                    int32_t var_dc_1 = data_c78204
                    int32_t var_e0 = 0xc78200
                    
                    if (sub_45c550(&var_d8, &var_e0) == 0)
                        LeaveCriticalSection(&data_c781dc)
                    else
                        LeaveCriticalSection(&data_c781dc)
                        int32_t* var_100 = nullptr
                        int32_t var_c_3 = 1
                        char var_98[0x48]
                        sub_451db0(&var_98)
                        var_c_3.b = 2
                        sub_480cf0(&var_98, 0, 0x80)
                        sub_452920(0, ebx_4 + 0x1c, &var_100, ebx_4, var_108, &var_98, 0, 0, 
                            nullptr)
                        EnterCriticalSection(&data_c781dc)
                        int32_t* var_f0 = nullptr
                        var_c_3.b = 3
                        sub_4519d0(&var_f0, &var_100)
                        char var_50
                        char var_ec_1 = var_50
                        void var_d0
                        sub_44bc30(&var_d0, ebx_4 + 0x1c)
                        var_c_3.b = 4
                        sub_451fb0(sub_4540f0(0xc78200, &var_d0), &var_f0)
                        sub_44b780(&var_d0)
                        LeaveCriticalSection(&data_c781dc)
                        int32_t* eax_36 = var_f0
                        var_c_3.b = 2
                        
                        if (eax_36 != 0)
                            (*(*eax_36 + 8))(eax_36)
                        
                        var_c_3.b = 1
                        sub_4543f0(&var_98)
                        int32_t* eax_37 = var_100
                        int32_t var_c_4 = 0xffffffff
                        
                        if (eax_37 != 0)
                            (*(*eax_37 + 8))(eax_37)
                    
                    edi_10 = var_e8_1
                    esi = var_e4
                    var_fc_1 += zx.d(*var_fc_1) << 2
                else
                    sub_465480(".\texture.cpp", 0x865)
                
                bool cond:2_1 = var_f8_1 + 1 s< zx.d(*edi_10)
                var_f8_1 += 1
                
                if (not(cond:2_1))
                    break
                
                eax_14 = var_fc_1
        
        var_104_1 += 4
        int32_t temp5_1 = var_f4_1
        var_f4_1 -= 1
        
        if (temp5_1 == 1)
            break

j_sub_4813df(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
