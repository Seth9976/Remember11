// 函数: sub_4699d0
// 地址: 0x4699d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t var_98 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_2 = arg1
*(result_2 + 0x18) = 0xf
*(result_2 + 0x14) = 0
void* result = result_2
*(result_2 + 4) = 0
sub_44b8e0(arg1, arg2, nullptr, 0xffffffff)
int32_t var_4 = 0
int32_t var_30 = 0xf
void* var_34 = nullptr
char var_44 = 0
void var_48
sub_44b8e0(&var_48, arg2, nullptr, 0xffffffff)
int32_t eax_5 = var_30
char* edi = var_44.d
var_4.b = 1
void* edx_1
char* esi_1

if (eax_5 u< 0x10)
    esi_1 = &var_44
label_469a6d:
    char* ecx_1 = edi
    
    if (eax_5 u< 0x10)
        ecx_1 = &var_44
    
    if (ecx_1 u> esi_1)
        goto label_469a8e
    
    char* ecx_2 = edi
    
    if (eax_5 u< 0x10)
        ecx_2 = &var_44
    
    edx_1 = var_34
    
    if (esi_1 u> ecx_2 + edx_1)
        goto label_469a8e
else
    esi_1 = edi
    
    if (edi != 0)
        goto label_469a6d
    
label_469a8e:
    __invalid_parameter_noinfo()
    eax_5 = var_30
    edx_1 = var_34
    edi = var_44.d

void* var_78 = &var_48
char* var_74 = esi_1
char* ecx_4 = edi

if (eax_5 u< 0x10)
    ecx_4 = &var_44

char* esi_2 = edx_1 + ecx_4

if (esi_2 == 0)
    __invalid_parameter_noinfo()
else
    char* ecx_5 = edi
    
    if (eax_5 u< 0x10)
        ecx_5 = &var_44
    
    if (ecx_5 u> esi_2)
        __invalid_parameter_noinfo()
    else
        char* eax_6 = edi
        
        if (eax_5 u< 0x10)
            eax_6 = &var_44
        
        if (esi_2 u> edx_1 + eax_6)
            __invalid_parameter_noinfo()

int32_t ecx_6 = data_4cb158
void* var_70 = &var_48
char* var_6c = esi_2
void* result_1 = nullptr
var_84 = nullptr
int32_t var_80 = 0
void var_60
sub_4697f0(&var_60, ecx_6, &var_84)
char* edx_3 = var_44.d
var_4.b = 2
int32_t i_2 = 0xffffffff
char* esi_3

if (var_30 u< 0x10)
    esi_3 = &var_44
label_469b39:
    char* eax_7 = edx_3
    
    if (var_30 u< 0x10)
        eax_7 = &var_44
    
    if (eax_7 u> esi_3)
        __invalid_parameter_noinfo()
    else
        char* eax_8 = edx_3
        
        if (var_30 u< 0x10)
            eax_8 = &var_44
        
        if (esi_3 u> var_34 + eax_8)
            __invalid_parameter_noinfo()
else
    esi_3 = edx_3
    
    if (edx_3 != 0)
        goto label_469b39
    
    __invalid_parameter_noinfo()

void* ebx = &var_48
char* edi_1 = esi_3
var_84 = &var_48
char* var_80_1 = edi_1
void* var_5c
int32_t var_58

while (true)
    char* edx_6 = var_44.d
    char* eax_9 = edx_6
    
    if (var_30 u< 0x10)
        eax_9 = &var_44
    
    void* esi_4 = var_34 + eax_9
    
    if (esi_4 == 0)
        __invalid_parameter_noinfo()
    else
        char* eax_10 = edx_6
        
        if (var_30 u< 0x10)
            eax_10 = &var_44
        
        if (eax_10 u> esi_4)
            __invalid_parameter_noinfo()
        else
            char* eax_11 = edx_6
            
            if (var_30 u< 0x10)
                eax_11 = &var_44
            
            if (esi_4 u> var_34 + eax_11)
                __invalid_parameter_noinfo()
    
    if (ebx != 0xfffffffe && (ebx == 0 || ebx != &var_48))
        __invalid_parameter_noinfo()
    
    if (edi_1 == esi_4)
        break
    
    if (ebx != 0xfffffffe)
        if (ebx == 0)
            __invalid_parameter_noinfo()
        
        void* eax_12
        
        if (*(ebx + 0x18) u< 0x10)
            eax_12 = ebx + 4
        else
            eax_12 = *(ebx + 4)
        
        if (edi_1 u>= *(ebx + 0x14) + eax_12)
            __invalid_parameter_noinfo()
    
    void var_2c
    char var_28
    
    if (*edi_1 s>= 0x30)
        if (ebx != 0xfffffffe)
            if (ebx == 0)
                __invalid_parameter_noinfo()
            
            void* eax_13
            
            if (*(ebx + 0x18) u< 0x10)
                eax_13 = ebx + 4
            else
                eax_13 = *(ebx + 4)
            
            if (var_80_1 u>= *(ebx + 0x14) + eax_13)
                __invalid_parameter_noinfo()
        
        if (*var_80_1 s<= 0x39)
            char* edx_9 = var_44.d
            char* eax_15 = edx_9
            
            if (var_30 u< 0x10)
                eax_15 = &var_44
            
            void* esi_5 = eax_15 + var_34
            
            if (esi_5 == 0)
                __invalid_parameter_noinfo()
            else
                char* eax_16 = edx_9
                
                if (var_30 u< 0x10)
                    eax_16 = &var_44
                
                if (eax_16 u> esi_5)
                    __invalid_parameter_noinfo()
                else
                    char* eax_17 = edx_9
                    
                    if (var_30 u< 0x10)
                        eax_17 = &var_44
                    
                    if (esi_5 u> eax_17 + var_34)
                        __invalid_parameter_noinfo()
            
            if (var_78 != 0xfffffffe && (var_78 == 0 || var_78 != &var_48))
                __invalid_parameter_noinfo()
            
            if (var_74 != esi_5)
                void* result_3 = result_1
                int32_t var_14_1 = 0xf
                void* var_18_1 = nullptr
                var_28 = 0
                sub_468d80(&var_2c, var_78, var_74, ebx, var_80_1)
                char* edi_3 = var_44.d
                char* eax_21 = edi_3
                
                if (var_30 u< 0x10)
                    eax_21 = &var_44
                
                char* esi_6 = eax_21 + var_34
                
                if (esi_6 == 0)
                    __invalid_parameter_noinfo()
                else
                    char* eax_22 = edi_3
                    
                    if (var_30 u< 0x10)
                        eax_22 = &var_44
                    
                    if (eax_22 u> esi_6)
                        __invalid_parameter_noinfo()
                    else
                        char* eax_23 = edi_3
                        
                        if (var_30 u< 0x10)
                            eax_23 = &var_44
                        
                        if (esi_6 u> eax_23 + var_34)
                            __invalid_parameter_noinfo()
                
                int32_t i = 0
                var_78 = &var_48
                var_74 = esi_6
                
                if (data_4cb158 s> 0)
                    do
                        int32_t* edi_4 = (&data_4caf7c)[i]
                        char* eax_25 = edi_4
                        int32_t ecx_16
                        
                        do
                            ecx_16.b = *eax_25
                            eax_25 = &eax_25[1]
                        while (ecx_16.b != 0)
                        
                        void* eax_26 = eax_25 - &eax_25[1]
                        void* ecx_17 = var_18_1
                        
                        if (var_18_1 u>= eax_26)
                            ecx_17 = eax_26
                        
                        char* eax_27 = var_28.d
                        
                        if (var_14_1 u< 0x10)
                            eax_27 = &var_28
                        
                        int32_t eax_28
                        eax_28, ecx_16 = sub_451010(eax_27, edi_4, ecx_17)
                        
                        if (eax_28 == 0 && var_18_1 u>= eax_26)
                            eax_28.b = var_18_1 != eax_26
                            
                            if (eax_28 == 0)
                                i_2 = i
                                break
                        
                        i += 1
                    while (i s< data_4cb158)
                    
                    ebx = var_84
                
                var_4.b = 2
                
                if (var_14_1 u>= 0x10)
                    j_sub_4813df(var_28.d)
            
            char* edx_14 = var_44.d
            char* eax_30 = edx_14
            
            if (var_30 u< 0x10)
                eax_30 = &var_44
            
            void* esi_8 = eax_30 + var_34
            
            if (esi_8 == 0)
                __invalid_parameter_noinfo()
            else
                char* eax_31 = edx_14
                
                if (var_30 u< 0x10)
                    eax_31 = &var_44
                
                if (eax_31 u> esi_8)
                    __invalid_parameter_noinfo()
                else
                    char* eax_32 = edx_14
                    
                    if (var_30 u< 0x10)
                        eax_32 = &var_44
                    
                    if (esi_8 u> eax_32 + var_34)
                        __invalid_parameter_noinfo()
            
            if (var_70 != 0xfffffffe && (var_70 == 0 || var_70 != &var_48))
                __invalid_parameter_noinfo()
            
            if (var_6c == esi_8)
                var_70 = ebx
                var_6c = var_80_1
    
    char* edi_6
    
    if (ebx == 0xfffffffe)
        edi_6 = var_80_1
    else
        if (ebx == 0)
            __invalid_parameter_noinfo()
        
        void* eax_35
        
        if (*(ebx + 0x18) u< 0x10)
            eax_35 = ebx + 4
        else
            eax_35 = *(ebx + 4)
        
        edi_6 = var_80_1
        
        if (edi_6 u>= *(ebx + 0x14) + eax_35)
            __invalid_parameter_noinfo()
    
    if (*edi_6 s< 0x30)
        goto label_469f86
    
    if (ebx != 0xfffffffe)
        if (ebx == 0)
            __invalid_parameter_noinfo()
        
        void* eax_36
        
        if (*(ebx + 0x18) u< 0x10)
            eax_36 = ebx + 4
        else
            eax_36 = *(ebx + 4)
        
        if (edi_6 u>= *(ebx + 0x14) + eax_36)
            __invalid_parameter_noinfo()
    
    if (*edi_6 s> 0x39)
        goto label_469f86
    
    char* ecx_21 = var_44.d
    char* eax_37 = ecx_21
    
    if (var_30 u< 0x10)
        eax_37 = &var_44
    
    void* ebp = eax_37 + var_34
    
    if (ebp == 0)
        __invalid_parameter_noinfo()
    else
        char* eax_38 = ecx_21
        
        if (var_30 u< 0x10)
            eax_38 = &var_44
        
        if (eax_38 u> ebp)
            __invalid_parameter_noinfo()
        else
            char* eax_39 = ecx_21
            
            if (var_30 u< 0x10)
                eax_39 = &var_44
            
            if (ebp u> eax_39 + var_34)
                __invalid_parameter_noinfo()
    
    void* edi_7 = ebx
    char* var_4c_1 = var_80_1
    
    if (ebx != 0xfffffffe)
        if (ebx == 0)
            __invalid_parameter_noinfo()
        
        int32_t esi_10 = *(ebx + 0x18)
        void* eax_42 = ebx + 4
        void* ecx_22
        
        if (esi_10 u< 0x10)
            ecx_22 = eax_42
        else
            ecx_22 = *eax_42
        
        if (&var_80_1[1] u<= *(ebx + 0x14) + ecx_22 && esi_10 u>= 0x10)
            eax_42 = *eax_42
        
        if (&var_80_1[1] u> *(ebx + 0x14) + ecx_22 || &var_80_1[1] u< eax_42)
            __invalid_parameter_noinfo()
        
        ebx = var_84
    
    if (edi_7 != 0xfffffffe && (edi_7 == 0 || edi_7 != &var_48))
        __invalid_parameter_noinfo()
    
    if (&var_80_1[1] == ebp)
        edi_6 = var_80_1
    label_469f86:
        char* edx_21 = var_44.d
        char* eax_43 = edx_21
        
        if (var_30 u< 0x10)
            eax_43 = &var_44
        
        void* esi_13 = eax_43 + var_34
        
        if (esi_13 == 0)
            __invalid_parameter_noinfo()
        else
            char* eax_44 = edx_21
            
            if (var_30 u< 0x10)
                eax_44 = &var_44
            
            if (eax_44 u> esi_13)
                __invalid_parameter_noinfo()
            else
                char* eax_45 = edx_21
                
                if (var_30 u< 0x10)
                    eax_45 = &var_44
                
                if (esi_13 u> eax_45 + var_34)
                    __invalid_parameter_noinfo()
        
        if (var_78 != 0xfffffffe && (var_78 == 0 || var_78 != &var_48))
            __invalid_parameter_noinfo()
        
        if (var_74 == esi_13)
            var_78 = ebx
            var_74 = edi_6
        
        char* edx_22 = var_44.d
        char* eax_48 = edx_22
        
        if (var_30 u< 0x10)
            eax_48 = &var_44
        
        void* esi_14 = eax_48 + var_34
        
        if (esi_14 == 0)
            __invalid_parameter_noinfo()
        else
            char* eax_49 = edx_22
            
            if (var_30 u< 0x10)
                eax_49 = &var_44
            
            if (eax_49 u> esi_14)
                __invalid_parameter_noinfo()
            else
                char* eax_50 = edx_22
                
                if (var_30 u< 0x10)
                    eax_50 = &var_44
                
                if (esi_14 u> eax_50 + var_34)
                    __invalid_parameter_noinfo()
        
        if (var_70 != 0xfffffffe && (var_70 == 0 || var_70 != &var_48))
            __invalid_parameter_noinfo()
        
        if (var_6c != esi_14)
            char* ecx_25 = var_44.d
            char* eax_53 = ecx_25
            
            if (var_30 u< 0x10)
                eax_53 = &var_44
            
            void* ebp_2 = var_34 + eax_53
            
            if (ebp_2 == 0)
                __invalid_parameter_noinfo()
            else
                char* eax_54 = ecx_25
                
                if (var_30 u< 0x10)
                    eax_54 = &var_44
                
                if (eax_54 u> ebp_2)
                    __invalid_parameter_noinfo()
                else
                    char* eax_55 = ecx_25
                    
                    if (var_30 u< 0x10)
                        eax_55 = &var_44
                    
                    if (ebp_2 u> var_34 + eax_55)
                        __invalid_parameter_noinfo()
            
            void* edi_9 = ebx
            char* var_4c_2 = var_80_1
            
            if (ebx != 0xfffffffe)
                if (ebx == 0)
                    __invalid_parameter_noinfo()
                
                int32_t esi_17 = *(ebx + 0x18)
                void* eax_56 = ebx + 4
                void* ecx_26
                
                if (esi_17 u< 0x10)
                    ecx_26 = eax_56
                else
                    ecx_26 = *eax_56
                
                if (&var_80_1[1] u<= *(ebx + 0x14) + ecx_26 && esi_17 u>= 0x10)
                    eax_56 = *eax_56
                
                if (&var_80_1[1] u> *(ebx + 0x14) + ecx_26 || &var_80_1[1] u< eax_56)
                    __invalid_parameter_noinfo()
                
                ebx = var_84
            
            if (edi_9 != 0xfffffffe && (edi_9 == 0 || edi_9 != &var_48))
                __invalid_parameter_noinfo()
            
            void* eax_60
            char* ecx_29
            
            if (&var_80_1[1] != ebp_2)
                ecx_29 = var_80_1
                eax_60 = ebx
            else
                char* edx_27 = var_44.d
                char* eax_57 = edx_27
                
                if (var_30 u< 0x10)
                    eax_57 = &var_44
                
                char* esi_20 = var_34 + eax_57
                
                if (esi_20 == 0)
                    __invalid_parameter_noinfo()
                else
                    char* eax_58 = edx_27
                    
                    if (var_30 u< 0x10)
                        eax_58 = &var_44
                    
                    if (eax_58 u> esi_20)
                        __invalid_parameter_noinfo()
                    else
                        char* eax_59 = edx_27
                        
                        if (var_30 u< 0x10)
                            eax_59 = &var_44
                        
                        if (esi_20 u> var_34 + eax_59)
                            __invalid_parameter_noinfo()
                
                eax_60 = &var_48
                ecx_29 = esi_20
            
            void* result_4 = result_1
            int32_t var_14_2 = 0xf
            int32_t var_18_2 = 0
            var_28 = 0
            sub_468d80(&var_2c, var_70, var_6c, eax_60, ecx_29)
            char* eax_62 = var_28.d
            
            if (var_14_2 u< 0x10)
                eax_62 = &var_28
            
            int32_t eax_63 = j_sub_4812c6(eax_62)
            
            if (var_5c == 0 || i_2 u>= (var_58 - var_5c) s>> 3)
                __invalid_parameter_noinfo()
            
            void* result_5 = result_1
            *(var_5c + (i_2 << 3)) = result_5
            *(var_5c + (i_2 << 3) + 4) = eax_63
            char* edx_29 = var_44.d
            result_1 = result_5 + eax_63
            char* eax_68 = edx_29
            
            if (var_30 u< 0x10)
                eax_68 = &var_44
            
            void* esi_22 = var_34 + eax_68
            
            if (esi_22 == 0)
                __invalid_parameter_noinfo()
            else
                char* eax_69 = edx_29
                
                if (var_30 u< 0x10)
                    eax_69 = &var_44
                
                if (eax_69 u> esi_22)
                    __invalid_parameter_noinfo()
                else
                    char* eax_70 = edx_29
                    
                    if (var_30 u< 0x10)
                        eax_70 = &var_44
                    
                    if (esi_22 u> var_34 + eax_70)
                        __invalid_parameter_noinfo()
            
            var_70 = &var_48
            var_6c = esi_22
            
            if (var_14_2 u>= 0x10)
                j_sub_4813df(var_28.d)
    
    if (ebx != 0xfffffffe)
        if (ebx == 0)
            __invalid_parameter_noinfo()
        
        void* eax_71
        
        if (*(ebx + 0x18) u< 0x10)
            eax_71 = ebx + 4
        else
            eax_71 = *(ebx + 4)
        
        if (var_80_1 u>= *(ebx + 0x14) + eax_71)
            __invalid_parameter_noinfo()
    
    var_80_1 = &var_80_1[1]
    result_2 = result
    edi_1 = var_80_1

int32_t i_1 = 0
bool cond:12 = data_4cb158 s<= 0
*(result_2 + 0x1c) = result_1

if (not(cond:12))
    void* edi_15 = result + 0x20
    
    do
        if (var_5c == 0 || i_1 u>= (var_58 - var_5c) s>> 3)
            __invalid_parameter_noinfo()
        
        char ebp_4 = (*(var_5c + (i_1 << 3))).b
        
        if (var_5c == 0 || i_1 u>= (var_58 - var_5c) s>> 3)
            __invalid_parameter_noinfo()
        
        int32_t ecx_36 = *(var_5c + (i_1 << 3) + 4)
        
        if (ecx_36 == 0)
            *edi_15 = 0
            *(edi_15 + 4) = 0
        else
            char ebx_10 = (*(result + 0x1c)).b - ecx_36.b - ebp_4
            int32_t eax_79
            int32_t edx_32
            eax_79, edx_32 = __allshl(1, 0, ecx_36.b)
            int32_t eax_81
            int32_t edx_34
            eax_81, edx_34 = __allshl(eax_79 - 1, adc.d(edx_32, 0xffffffff, eax_79 u>= 1), ebx_10)
            *edi_15 = eax_81
            *(edi_15 + 4) = edx_34
        
        i_1 += 1
        edi_15 += 8
    while (i_1 s< data_4cb158)

void* eax_82 = data_c79aa4
int32_t edx_35 = *(eax_82 + 4)
result_1 = result
void* eax_83 = sub_468ae0(eax_82, edx_35, &result_1)
sub_468f90(0xc79aa0, 1)
*(eax_82 + 4) = eax_83
**(eax_83 + 4) = eax_83

if (var_5c != 0)
    j_sub_4813df(var_5c)

if (var_30 u>= 0x10)
    j_sub_4813df(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_84)
return result
