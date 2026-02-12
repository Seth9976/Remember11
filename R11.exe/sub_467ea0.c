// 函数: sub_467ea0
// 地址: 0x467ea0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a5e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t __saved_edi
int32_t eax_3 = Ordinal_libpng13_8("1.2.16", 0, 0, 0, __security_cookie ^ &__saved_edi)
int32_t var_64 = eax_3

if (eax_3 != 0)
    int32_t eax_4 = Ordinal_libpng13_7(eax_3)
    int32_t var_58 = eax_4
    int32_t* var_80_1
    
    if (eax_4 != 0)
        int32_t eax_6 = Ordinal_libpng13_7(var_64)
        int32_t var_40 = eax_6
        
        if (eax_6 != 0)
            void arg_8
            Ordinal_libpng13_122(var_64, &arg_8, sub_4662e0)
            Ordinal_libpng13_76(var_64, var_58)
            int32_t var_60
            int32_t var_5c
            int32_t var_50
            int32_t var_44
            void var_38
            void var_34
            void var_30
            int32_t ecx_6 = Ordinal_libpng13_17(var_64, var_58, &var_5c, &var_60, &var_50, &var_44, 
                &var_30, &var_34, &var_38)
            int32_t eax_9 = var_44
            int32_t ebp
            void* esi
            
            if (eax_9 == 2)
                ebp = 0x18
                var_50 = 0x18
                esi = nullptr
            else if (eax_9 != 6)
                ebp = var_50
                
                if (ebp == 2)
                    ebp = 4
                else if (ebp == 0x10)
                    ebp -= 8
                
                ecx_6 = ebp
                esi = 1 << ecx_6.b
            else
                ebp = 0x20
                var_50 = 0x20
                esi = nullptr
            
            void* var_18 = nullptr
            int32_t var_14 = 0
            int32_t var_10 = 0
            int32_t var_4 = 0
            void var_1c
            
            if (esi s> 0)
                int32_t var_7c_5 = ecx_6
                var_7c_5.w = 0
                var_7c_5:2.b = 0
                sub_467dc0(&var_1c, esi)
            
            uint32_t ebx_5 = ((ebp * var_5c + 0x1f) u>> 5) * 4
            int128_t* ebx_6 = ebx_5 * var_60
            int128_t* var_3c = ebx_6
            void* eax_13 = j_sub_481fef(ebx_6)
            void* var_28 = nullptr
            int32_t var_24 = 0
            int32_t var_20 = 0
            var_4.b = 1
            void var_2c
            sub_467a80(&var_2c, var_60)
            void* var_48
            
            if (var_60 u> 0)
                void* ebx_7 = eax_13
                
                do
                    var_48 = ebx_7
                    sub_44e9b0(&var_2c, &var_48)
                    ebx_7 += ebx_5
                    edi += 1
                while (edi u< var_60)
                
                ebx_6 = var_3c
            
            int32_t eax_14 = var_50
            
            if (eax_14 == 2)
                Ordinal_libpng13_125(var_64, sub_466260)
            else if (eax_14 == 0x10)
                Ordinal_libpng13_136(var_64)
            
            Ordinal_libpng13_81(var_64, var_58)
            
            if (esi s> 0)
                if (var_44 != 3)
                    int32_t esi_1 = var_50
                    
                    if (esi_1 == 0x10)
                        esi_1 = 8
                    
                    Ordinal_libpng13_1(esi_1, sub_4667d0(&var_1c, 0))
                else
                    Ordinal_libpng13_18(var_64, var_58, &var_3c, &var_48)
                    
                    if (var_48 s> esi)
                        var_48 = esi
                    
                    sub_480cf0(sub_4667d0(&var_1c, 0), 0, esi * 3)
                    sub_480ea0(sub_4667d0(&var_1c, 0), var_3c, var_48 * 3)
            
            void* eax_21 = var_28
            
            if (eax_21 == 0 || (var_24 - eax_21) s>> 2 == 0)
                __invalid_parameter_noinfo()
                eax_21 = var_28
            
            Ordinal_libpng13_75(var_64, eax_21)
            Ordinal_libpng13_74(var_64, var_40)
            Ordinal_libpng13_12(&var_64, &var_58, &var_40)
            
            if (ebp == 0x18)
                int32_t edi_1 = 0
                
                if (var_60 u> 0)
                    void* ebp_1 = eax_13
                    int32_t edx_6 = var_5c
                    
                    do
                        char* eax_25 = *(arg1 + 0x28) * edi_1 + *(arg1 + 0x10)
                        int32_t esi_2 = 0
                        void* ecx_21 = ebp_1
                        
                        if (edx_6 u> 0)
                            do
                                *eax_25 = *(ecx_21 + 2)
                                eax_25[1] = *(ecx_21 + 1)
                                eax_25[2] = *ecx_21
                                eax_25[3] = 0x80
                                edx_6 = var_5c
                                esi_2 += 1
                                ecx_21 += 3
                                eax_25 = &eax_25[4]
                            while (esi_2 u< edx_6)
                        
                        ebp_1 += ebx_5
                        edi_1 += 1
                    while (edi_1 u< var_60)
            else if (ebp == 4)
                int32_t ebp_2 = 0
                
                if (var_60 u> 0)
                    void* esi_3 = eax_13
                    int32_t ecx_22 = var_5c
                    
                    do
                        int32_t edx_12 = *(arg1 + 0x28) * ebp_2 + *(arg1 + 0x10)
                        int32_t eax_26 = 0
                        
                        if (ecx_22 u> 0)
                            do
                                uint32_t ecx_25 = zx.d(*((eax_26 u>> 1) + esi_3))
                                uint32_t ecx_26
                                
                                if ((eax_26.b & 1) != 0)
                                    ecx_26 = ecx_25 u>> 4
                                else
                                    ecx_26 = ecx_25 & 0xf
                                
                                *(edx_12 + (eax_26 << 2)) = *(arg2 + (ecx_26 << 2))
                                ecx_22 = var_5c
                                eax_26 += 1
                            while (eax_26 u< ecx_22)
                        
                        esi_3 += ebx_5
                        ebp_2 += 1
                    while (ebp_2 u< var_60)
            else if (ebp != 8)
                sub_480ea0(*(arg1 + 0x10), eax_13, ebx_6)
            else
                int32_t edi_3 = 0
                
                if (var_60 u> 0)
                    void* esi_4 = eax_13
                    int32_t edx_13 = var_5c
                    
                    do
                        int32_t ecx_30 = *(arg1 + 0x28) * edi_3 + *(arg1 + 0x10)
                        int32_t eax_27 = 0
                        
                        if (edx_13 u> 0)
                            do
                                *(ecx_30 + (eax_27 << 2)) = *(arg2 + (zx.d(*(esi_4 + eax_27)) << 2))
                                edx_13 = var_5c
                                eax_27 += 1
                            while (eax_27 u< edx_13)
                        
                        esi_4 += ebx_5
                        edi_3 += 1
                    while (edi_3 u< var_60)
            
            if (eax_13 != 0)
                j_sub_4813df(eax_13)
            
            if (var_28 != 0)
                j_sub_4813df(var_28)
            
            int32_t var_28_1 = 0
            int32_t var_24_1 = 0
            int32_t var_20_1 = 0
            
            if (var_18 != 0)
                j_sub_4813df(var_18)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        int32_t var_7c_4 = 0
        var_80_1 = &var_58
    else
        int32_t var_7c_2 = 0
        var_80_1 = nullptr
    
    Ordinal_libpng13_12(&var_64, var_80_1, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return 0x80004005
