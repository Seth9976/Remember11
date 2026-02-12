// 函数: sub_452920
// 地址: 0x452920
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499c93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg4[2]
int32_t eax_4 = arg4[4]
int32_t eax_5 = eax_4 & 0xffff
int32_t eax_6 = arg4[5]
int32_t eax_7 = eax_6 & 0xffff
int32_t var_b4 = arg4[3]
uint32_t esi_1 = eax_4 u>> 0x10
uint32_t edi_1 = eax_6 u>> 0x10
int32_t __saved_edi
int32_t var_a8 = (*(*data_c78668 + 0x70))(__security_cookie ^ &__saved_edi)
var_b4:3.b = 0
int32_t var_ac
int32_t var_a4
int32_t var_a0
int32_t esi_8

if (esi_1 == 0 || edi_1 == 0)
    esi_8 = var_a8
else
    int32_t eax_11 = (*(*data_c78668 + 0x38))()
    int32_t ecx_3 = *(eax_11 + 8)
    var_a0 = eax_11
    int32_t eax_25
    
    if (divs.dp.d(sx.q(ecx_3 * var_ac s/ 0x280 * esi_1), eax_5) s>= var_ac)
        eax_25 = var_ac
    else
        eax_25 = divs.dp.d(sx.q(ecx_3 * var_ac s/ 0x280 * esi_1), eax_5)
    
    int32_t edx_16 = *(var_a8 + 0x58)
    
    if (eax_25 u>= edx_16)
        var_a4 = edx_16
    else if (divs.dp.d(sx.q(ecx_3 * var_ac s/ 0x280 * esi_1), eax_5) s>= var_ac)
        var_a4 = var_ac
    else
        var_a4 = divs.dp.d(sx.q(ecx_3 * var_ac s/ 0x280 * esi_1), eax_5)
    
    int32_t ecx_6 = *(var_a0 + 0xc)
    int32_t eax_54
    
    if (divs.dp.d(sx.q(ecx_6 * eax_3 s/ 0x1c0 * edi_1), eax_7) s>= eax_3)
        eax_54 = eax_3
    else
        eax_54 = divs.dp.d(sx.q(ecx_6 * eax_3 s/ 0x1c0 * edi_1), eax_7)
    
    int32_t edx_38 = *(var_a8 + 0x5c)
    
    if (eax_54 u>= edx_38)
        esi_8 = edx_38
        var_a8 = edx_38
    else if (divs.dp.d(sx.q(ecx_6 * eax_3 s/ 0x1c0 * edi_1), eax_7) s>= eax_3)
        esi_8 = eax_3
        var_a8 = esi_8
    else
        esi_8 = divs.dp.d(sx.q(ecx_6 * eax_3 s/ 0x1c0 * edi_1), eax_7)
        var_a8 = esi_8
    
    if (var_ac != var_a4 || eax_3 != esi_8)
        var_b4:3.b = 1

if (var_ac s< 0 || eax_3 s< 0)
    sub_465480(".\texture.cpp", 0x452)

struct CPicture::VTable* var_98
sub_4521b0(&var_98)
int32_t* eax_70 = data_c7866c
__return_addr = nullptr
struct CPicture::VTable* var_9c
int32_t ebp_2
int32_t esi_9

if (var_b4:3.b != 0)
    (*(*eax_70 + 0x5c))(eax_70, var_a4, esi_8, 1, 0, 0x15, 1, arg4)
    ebp_2 = eax_3
    esi_9 = var_b4
    var_a4 = ebp_2
    var_a0 = esi_9
    sub_467850(&var_a4, 0x15, 0)
else
    esi_9 = eax_3
    ebp_2 = var_ac
    (*(*eax_70 + 0x5c))(eax_70, ebp_2, esi_9, 1, 0, 0x15, 1, arg4)
    sub_450bd0(*arg4, &var_9c)

int32_t eax_72 = 8
char const* const ecx_12 = "T2PFILE_"
int32_t* edx_52 = arg4
int32_t eax_76

while (true)
    if (*edx_52 != *ecx_12)
    label_452c09:
        uint32_t ebx_2 = zx.d(*ecx_12)
        uint32_t esi_10 = zx.d(*edx_52)
        void* esi_11 = esi_10 - ebx_2
        
        if (esi_10 != ebx_2)
        label_452c5a:
            esi_9 = var_b4
            eax_76 = 1
            
            if (esi_11 s<= 0)
                eax_76 = 0xffffffff
            
            break
        
        ecx_12 = &ecx_12[1]
        
        if (eax_72 == 1)
            esi_9 = var_b4
        else
            uint32_t ebx_3 = zx.d(*ecx_12)
            uint32_t esi_12 = zx.d(*(edx_52 + 1))
            esi_11 = esi_12 - ebx_3
            
            if (esi_12 != ebx_3)
                goto label_452c5a
            
            ecx_12 = &ecx_12[1]
            
            if (eax_72 == 2)
                esi_9 = var_b4
            else
                uint32_t ebx_4 = zx.d(*ecx_12)
                uint32_t esi_13 = zx.d(*(edx_52 + 2))
                esi_11 = esi_13 - ebx_4
                
                if (esi_13 != ebx_4)
                    goto label_452c5a
                
                ecx_12 = &ecx_12[1]
                
                if (eax_72 == 3)
                    esi_9 = var_b4
                else
                    ecx_12 = zx.d(*ecx_12)
                    uint32_t esi_14 = zx.d(*(edx_52 + 3))
                    esi_11 = esi_14 - ecx_12
                    
                    if (esi_14 != ecx_12)
                        goto label_452c5a
                    
                    esi_9 = var_b4
    else
        eax_72 -= 4
        ecx_12 = &ecx_12[4]
        edx_52 = &edx_52[1]
        
        if (eax_72 u>= 4)
            continue
        else if (eax_72 != 0)
            goto label_452c09
    
    eax_76 = 0
    break

if (eax_76 != 0)
    int32_t eax_79 = 8
    int32_t* edx_58 = arg4
    char const* const ecx_14 = "PNGFILE2"
    int32_t eax_84
    
    while (true)
        if (*edx_58 != *ecx_14)
        label_452d38:
            uint32_t esi_15 = zx.d(*edx_58)
            uint32_t ebx_6 = zx.d(*ecx_14)
            uint32_t esi_16 = esi_15 - ebx_6
            
            if (esi_15 != ebx_6)
            label_452d89:
                esi_9 = var_b4
                eax_84 = 1
                
                if (esi_16 s<= 0)
                    eax_84 = 0xffffffff
                
                break
            
            if (eax_79 == 1)
                esi_9 = var_b4
            else
                uint32_t esi_17 = zx.d(*(edx_58 + 1))
                uint32_t ebx_7 = zx.d(ecx_14[1])
                esi_16 = esi_17 - ebx_7
                
                if (esi_17 != ebx_7)
                    goto label_452d89
                
                if (eax_79 == 2)
                    esi_9 = var_b4
                else
                    uint32_t esi_18 = zx.d(*(edx_58 + 2))
                    uint32_t ebx_8 = zx.d(ecx_14[2])
                    esi_16 = esi_18 - ebx_8
                    
                    if (esi_18 != ebx_8)
                        goto label_452d89
                    
                    if (eax_79 == 3)
                        esi_9 = var_b4
                    else
                        uint32_t esi_19 = zx.d(*(edx_58 + 3))
                        uint32_t eax_83 = zx.d(ecx_14[3])
                        esi_16 = esi_19 - eax_83
                        
                        if (esi_19 != eax_83)
                            goto label_452d89
                        
                        esi_9 = var_b4
        else
            eax_79 -= 4
            ecx_14 = &ecx_14[4]
            edx_58 = &edx_58[1]
            
            if (eax_79 u>= 4)
                continue
            else if (eax_79 != 0)
                goto label_452d38
        
        eax_84 = 0
        break
    
    if (eax_84 == 0)
    label_452f10:
        
        if (arg5 == 0)
            sub_452360(ebp_2, esi_9, &var_9c, arg4, arg6)
        else if (arg5 == 1)
            sub_452500(ebp_2, esi_9, &var_9c, arg4, arg6)
        else if (arg5 == 0x13)
            sub_451500(ebp_2, esi_9, &var_9c, arg4, arg6, arg8, arg9, arg7)
        else if (arg5 == 0x14)
            sub_4516c0(ebp_2, esi_9, &var_9c, arg4, arg6, arg8, arg9, arg7)
    else
        int32_t eax_85 = 8
        char const* const ecx_18 = "PNGFILE3"
        int32_t* edx_62 = arg4
        int32_t eax_89
        
        while (true)
            if (*edx_62 != *ecx_18)
            label_452dcb:
                uint32_t ebx_10 = zx.d(*ecx_18)
                uint32_t esi_20 = zx.d(*edx_62)
                uint32_t esi_21 = esi_20 - ebx_10
                
                if (esi_20 != ebx_10)
                label_452e1c:
                    esi_9 = var_b4
                    eax_89 = 1
                    
                    if (esi_21 s<= 0)
                        eax_89 = 0xffffffff
                    
                    break
                
                if (eax_85 == 1)
                    esi_9 = var_b4
                else
                    uint32_t ebx_11 = zx.d(ecx_18[1])
                    uint32_t esi_22 = zx.d(*(edx_62 + 1))
                    esi_21 = esi_22 - ebx_11
                    
                    if (esi_22 != ebx_11)
                        goto label_452e1c
                    
                    if (eax_85 == 2)
                        esi_9 = var_b4
                    else
                        uint32_t ebx_12 = zx.d(ecx_18[2])
                        uint32_t esi_23 = zx.d(*(edx_62 + 2))
                        esi_21 = esi_23 - ebx_12
                        
                        if (esi_23 != ebx_12)
                            goto label_452e1c
                        
                        if (eax_85 == 3)
                            esi_9 = var_b4
                        else
                            uint32_t ecx_22 = zx.d(ecx_18[3])
                            uint32_t esi_24 = zx.d(*(edx_62 + 3))
                            esi_21 = esi_24 - ecx_22
                            
                            if (esi_24 != ecx_22)
                                goto label_452e1c
                            
                            esi_9 = var_b4
            else
                eax_85 -= 4
                ecx_18 = &ecx_18[4]
                edx_62 = &edx_62[1]
                
                if (eax_85 u>= 4)
                    continue
                else if (eax_85 != 0)
                    goto label_452dcb
            
            eax_89 = 0
            break
        
        if (eax_89 == 0)
            goto label_452f10
        
        if (arg5 == 0)
            sub_451320(ebp_2, esi_9, &var_9c, arg4, arg6)
        else if (arg5 == 1)
            void* var_d0_6 = arg6
            int32_t* var_d4_5 = arg4
            sub_450bb0(ebp_2, esi_9, &var_9c)
        else if (arg5 == 0x13)
            sub_451880(arg8, arg9, ebp_2, esi_9, &var_9c, arg4, arg7, arg6, 0, arg2, arg1)
        else if (arg5 != 0x14)
            sub_465480(".\texture.cpp", 0x489)
        else
            sub_451930(arg8, arg9, ebp_2, esi_9, &var_9c, arg4, arg7, arg6)
else if (arg5 == 0)
    sub_4513a0(&var_9c, arg6, ecx_12, ebp_2, esi_9, &var_9c, arg4, arg6)
else if (arg5 == 1)
    sub_4513a0(arg5, &var_9c, arg6, ebp_2, esi_9, &var_9c, arg4, arg6)
else if (arg5 == 0x13)
    sub_465480(".\texture.cpp", 0x465)
else if (arg5 != 0x14)
    sub_465480(".\texture.cpp", 0x46a)
else
    sub_465480(".\texture.cpp", 0x468)

char var_b5

if (var_b5 != 0)
    struct CPicture::VTable* var_44
    sub_4521b0(&var_44)
    int32_t* esi_25 = *arg3
    var_4.b = 1
    int32_t var_64
    (*(*esi_25 + 0x44))(esi_25, 0, &var_64)
    (*(*esi_25 + 0x4c))(esi_25, 0, &var_a4, 0, 0)
    int32_t var_4c
    int32_t var_48
    sub_4674a0(&var_44, var_4c, var_48, var_64, var_a0, var_a4)
    var_a4 = var_a8
    int32_t var_a0_1 = var_ac
    sub_467960(&var_9c, &var_a4, 1)
    int32_t* eax_106 = *arg3
    (*(*eax_106 + 0x50))(eax_106, 0)
    var_4.b = 0
    sub_452260(&var_44)
else
    int32_t* eax_100 = *arg3
    (*(*eax_100 + 0x50))(eax_100, 0)

int32_t var_4_1 = 0xffffffff
void* result = sub_452260(&var_9c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
