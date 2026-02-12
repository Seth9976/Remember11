// 函数: sub_472570
// 地址: 0x472570
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49aa98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_471040()
int32_t* ebx = arg2
int32_t var_1c
(*(*eax_3 + 0x20))(eax_3, *ebx, &var_1c)
int32_t eax_5 = *(arg4 + 0x10)
int32_t var_64

if (eax_5 == 1)
    var_64 = *(arg3 + 0xc)
else if (eax_5 != 0)
    int32_t ecx_4 = *(ebx[0x15] + 0x24) & 0x10000
    int32_t eax_12 = *(arg3 + 0xc)
    var_64 = eax_12
    
    if (ecx_4 == 0 && (eax_12.b & 0xc0) != 0)
        eax_12 = (eax_12 & 0xffffff3f) | 0x20
        var_64 = eax_12
    
    if ((eax_12.b & 0xe0) == 0)
        if (ecx_4 == 0)
            var_64 |= 0x20
        else
            var_64 |= 0x40
else
    int32_t eax_7 = *(ebx[0x15] + 0x24) & 0x10000
    int32_t eax_8 = neg.d(eax_7)
    var_64 = (sbb.d(eax_8, eax_8, eax_7 != 0) & 0x20) + 0x20

int32_t eax_14 = *(arg4 + 0x14)
int32_t var_2c
int32_t var_28
int32_t var_14

if (eax_14 != 1)
    int32_t ecx_5
    int32_t edx_3
    
    if (eax_14 == 2 && arg3 != 0)
        ecx_5 = *(arg3 + 0x10)
        edx_3 = *(arg3 + 0x14)
    else if (ebx[4] == 0)
        ecx_5 = var_1c
        int32_t var_18
        edx_3 = var_18
    else
        ecx_5 = 0x280
        edx_3 = 0x1e0
    
    int32_t var_10
    sub_46f0c0(ebx, ecx_5, edx_3, var_14, var_10, &var_2c)
else
    int32_t eax_15 = *(arg3 + 0x14)
    var_2c = *(arg3 + 0x10)
    var_28 = eax_15

int32_t eax_16 = *(arg4 + 0x1c)
int32_t var_58

if (eax_16 == 1)
    var_58 = *(arg3 + 0x1c)
else if (eax_16 != 0)
    int32_t ecx_8 = *(arg3 + 0x1c)
    var_58 = ecx_8
    
    if (ecx_8 u> 3)
        var_58 = 3
    else if (ecx_8 u< 1)
        var_58 = 1
else
    var_58 = 2

int32_t var_60
int32_t var_5c

if (arg3 != 0 && *(arg3 + 0x28) != 1)
    var_60 = 0
    var_5c = 0
else if (eax_16 == 1)
    var_60 = *(arg3 + 0x20)
    var_5c = *(arg3 + 0x24)
else if (eax_16 == 0 || eax_16 != 2)
    var_60 = 0
    var_5c = 0
else
    int32_t eax_18 = ebx[9]
    var_60 = 0
    var_5c = 0
    int32_t var_54_1 = 0
    
    if (eax_18 s> 0)
        int32_t* esi_1 = ebx[0xb]
        int32_t ebp_1 = *(arg3 + 0x20)
        int32_t* ebx_2 = ebx[8] - esi_1
        int32_t* var_40_1 = ebx_2
        
        while (true)
            int32_t ecx_10 = *(ebx_2 + esi_1)
            int32_t eax_21
            int32_t edx_6
            edx_6:eax_21 = sx.q(ecx_10 - ebp_1)
            int32_t eax_24
            int32_t edx_7
            edx_7:eax_24 = sx.q(var_60 - ebp_1)
            
            if ((eax_21 ^ edx_6) - edx_6 s< (eax_24 ^ edx_7) - edx_7)
                var_60 = ecx_10
                int32_t ecx_11 = *(arg3 + 0x24)
                int32_t eax_27 = *esi_1 - 1
                var_5c = eax_27
                
                if (eax_27 u>= ecx_11)
                    var_5c = ecx_11
            
            esi_1 = &esi_1[1]
            bool cond:5_1 = var_54_1 + 1 s< eax_18
            var_54_1 += 1
            
            if (not(cond:5_1))
                break
            
            ebx_2 = var_40_1
        
        ebx = arg2

int32_t eax_31 = *(arg4 + 0x24)
int32_t ecx_12 = 1
int32_t i = 0
int32_t var_54_2

if (eax_31 == 1)
    var_54_2 = *(arg3 + 0x28)
else if (eax_31 == 0)
    var_54_2 = ecx_12
else
    int32_t eax_32 = *(arg3 + 0x28)
    var_54_2 = eax_32
    
    if (eax_32 != 1 && eax_32 != 2 && eax_32 != 3)
        var_54_2 = ecx_12

struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_4 = 0
sub_477bd0(&result_1, ebx[6])
int32_t eax_34 = sub_477a40(ebx[3])
arg2 = nullptr

if (arg3 != 0)
    arg2 = sub_477ac0(*(arg3 + 0x38))

struct _EXCEPTION_REGISTRATION_RECORD** result_2

if (ebx[6] s<= 0)
    result_2 = result_1
else
    do
        int32_t eax_38 = sub_477ac0(*(ebx[5] + (i << 2)))
        int32_t ecx_15 = *(arg4 + 0x28)
        int32_t esi_3
        
        if (ecx_15 != 1)
            void* eax_43
            
            if (ecx_15 != 0)
                eax_43 = eax_38 - arg2
            else
                eax_43 = eax_38 - (eax_34 << 2)
            
            int32_t eax_44
            int32_t edx_12
            edx_12:eax_44 = sx.q(eax_43)
            esi_3 = (eax_44 ^ edx_12) - edx_12
        else
            void* eax_39 = eax_38 - arg2
            int32_t eax_40 = neg.d(eax_39)
            esi_3 = sbb.d(eax_40, eax_40, eax_39 != 0) & 0x2710
        
        bool cond:8_1 = sub_477bd0(&result_1, var_34 + 1) s< 0
        result_2 = result_1
        
        if (not(cond:8_1))
            result_2[var_34] = esi_3
            var_34 += 1
        
        i += 1
    while (i s< ebx[6])

int32_t i_1 = 0
arg2 = nullptr

if (arg3 != 0)
    arg2 = sub_477b20(*(arg3 + 0x38))

if (ebx[6] s> 0)
    do
        int32_t edi_2 = result_2[i_1]
        int32_t eax_53 = sub_477b20(*(ebx[5] + (i_1 << 2)))
        int32_t ecx_20 = *(arg4 + 0x2c)
        
        if (ecx_20 != 1)
            if (ecx_20 != 0)
                int32_t eax_55
                int32_t edx_14
                edx_14:eax_55 = sx.q(eax_53 - arg2)
                eax_53 = (eax_55 ^ edx_14) - edx_14
            
            edi_2 += eax_53
        else if (eax_53 != arg2)
            edi_2 += 0x2710
        
        if (i_1 s>= 0 && i_1 s< var_34)
            result_2[i_1] = edi_2
        
        i_1 += 1
    while (i_1 s< ebx[6])

int32_t edi_3 = ebx[6]
int32_t esi_6 = 0xffffffff
int32_t eax_57 = 0
int32_t edx_15 = 0x186a0

if (edi_3 s> 0)
    do
        int32_t ecx_21 = result_2[eax_57]
        
        if (ecx_21 s< edx_15)
            edx_15 = ecx_21
            esi_6 = eax_57
        
        eax_57 += 1
    while (eax_57 s< edi_3)

int32_t var_40_3
int32_t ecx_22

if (edi_3 s<= 0 || esi_6 s< 0)
    ecx_22 = 0
    var_40_3 = 0
else
    var_40_3 = *(ebx[5] + (esi_6 << 2))
    ecx_22 = 1

int32_t* eax_59 = *(arg4 + 0x30)

if (eax_59 == 1)
    arg2 = *(arg3 + 0x3c)
else if (eax_59 != 0)
    arg2 = *(arg3 + 0x3c)
    
    if (ecx_22 != 0)
        arg2 |= 2
else
    arg2 = eax_59
    
    if (ecx_22 != 0)
        arg2 = 2

int32_t ebp_2 = ebx[4]
int32_t var_24

if (ebp_2 == 0)
    int32_t eax_62 = *(arg4 + 0x34)
    
    if (eax_62 != 1)
        int32_t eax_64
        
        if (eax_62 != 2)
            eax_64 = var_14
        else
            eax_64 = *(arg3 + 0x40)
        
        var_24 = 0
        
        if (eax_64 != 0)
            void* eax_65 = ebx[0x14]
            int32_t ecx_25 = *(eax_65 + 0x654)
            int32_t edi_4 = 0x186a0
            int32_t var_4c_1 = 0
            
            if (ecx_25 s> 0)
                int32_t* ecx_26 = *(eax_65 + 0x650)
                bool cond:15_1
                
                do
                    int32_t esi_7 = ecx_26[2]
                    
                    if (ecx_26[3] == ebx[2] && ecx_26[1] == var_28 && *ecx_26 == var_2c)
                        int32_t eax_70
                        int32_t edx_22
                        edx_22:eax_70 = sx.q(esi_7 - eax_64)
                        int32_t eax_72 = (eax_70 ^ edx_22) - edx_22
                        
                        if (eax_72 s< edi_4)
                            var_24 = esi_7
                            edi_4 = eax_72
                            
                            if (eax_72 == 0)
                                break
                    
                    ecx_26 = &ecx_26[4]
                    cond:15_1 = var_4c_1 + 1 s< ecx_25
                    var_4c_1 += 1
                while (cond:15_1)
                ebp_2 = ebx[4]
    else
        var_24 = *(arg3 + 0x40)
else
    var_24 = 0

int32_t eax_76 = *(arg4 + 0x38)
int32_t i_3

if (eax_76 == 1)
    i_3 = *(arg3 + 0x44)
else if (eax_76 != 0)
    int32_t eax_77 = ebx[0xf]
    int32_t eax_78
    int32_t i_2
    
    if (eax_77 s> 0 && eax_77 s> 0 && eax_77 s<= eax_77)
        i_2 = *(arg3 + 0x44)
        int32_t* ecx_29 = ebx[0xe]
        eax_78 = 0
        
        while (i_2 != *ecx_29)
            eax_78 += 1
            ecx_29 = &ecx_29[1]
            
            if (eax_78 s>= eax_77)
                goto label_472b19
    
    if (eax_77 s<= 0 || eax_77 s<= 0 || eax_77 s> eax_77 || eax_78 == 0xffffffff)
    label_472b19:
        int32_t ebp_6 = neg.d(ebp_2)
        i_3 = sbb.d(ebp_6, ebp_6, ebp_2 != 0) & 0x80000000
    else
        i_3 = i_2
else
    int32_t ebp_4 = neg.d(ebp_2)
    i_3 = sbb.d(ebp_4, ebp_4, ebp_2 != 0) & 0x80000000

sub_480cf0(arg1, 0, 0x48)
*arg1 = *ebx
arg1[1] = ebx[1]
int32_t eax_80 = var_2c
arg1[2] = ebx[2]
arg1[4] = eax_80
arg1[3] = var_64
arg1[5] = var_28
arg1[6] = ebx[3]
arg1[7] = var_58
arg1[8] = var_60
arg1[9] = var_5c
arg1[0xa] = var_54_2
int32_t edi_5

if (ebx[4] == 0)
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_480cf0(&data_c79d90, 0, 0xbd0)
        class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b = 1
        InitializeCriticalSection(&data_c79d54)
        data_c79fd4 = 0xffffffff
        data_c79fd8 = 0xffffffff
        data_c79fcc = 0xffffffff
        data_c79fa9 = 1
        data_c79f9d = 1
        data_c79f71 = 1
        data_c79fba = 1
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    edi_5 = data_c79ef4
else
    if ((data_c7a960 & 1) == 0)
        data_c7a960.d |= 1
        sub_480cf0(&data_c79d90, 0, 0xbd0)
        class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b = 1
        InitializeCriticalSection(&data_c79d54)
        data_c79fd4 = 0xffffffff
        data_c79fd8 = 0xffffffff
        data_c79fcc = 0xffffffff
        data_c79fa9 = 1
        data_c79f9d = 1
        data_c79f71 = 1
        data_c79fba = 1
        sub_48258e(sub_49cb00)
    
    if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
        EnterCriticalSection(&data_c79d54)
    
    edi_5 = data_c79ef8

if (class CStreamingSound `RTTI Type Descriptor'.__offset(0x1e).b != 0)
    LeaveCriticalSection(&data_c79d54)

arg1[0xb] = edi_5
int32_t ecx_33 = ebx[4]
arg1[0xe] = var_40_3
struct _EXCEPTION_REGISTRATION_RECORD** result = result_1
arg1[0xc] = ecx_33
arg1[0xd] = ecx_22
arg1[0xf] = arg2
arg1[0x10] = var_24
arg1[0x11] = i_3

if (result != 0)
    result = sub_4813df(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
