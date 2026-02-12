// 函数: sub_459c50
// 地址: 0x459c50
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a169
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_74 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_4 = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
var_4.b = 1
void* eax_4 = (*(*data_c78668 + 0x70))(eax_2)
uint32_t eax_7 = divu.dp.d(0:(*(eax_4 + 0x58)), arg3 + 0x10)

if (eax_7 u> 0x10)
    eax_7 = 0x10

arg1[7] = eax_7
uint32_t temp0_1 = divu.dp.d(0:(*(eax_4 + 0x5c)), arg4 + 0x10)
uint32_t ecx_2 = 0x10

if (temp0_1 u<= 0x10)
    ecx_2 = temp0_1

arg1[8] = ecx_2
struct _EXCEPTION_REGISTRATION_RECORD** var_b0
struct _EXCEPTION_REGISTRATION_RECORD*** var_7c = &var_b0
var_b0 = nullptr
int32_t var_a8 = 0
int32_t var_a4 = 0
int32_t var_a0 = 0
sub_459a50(&arg1[0xb], ecx_2, var_b0)
int32_t i = 0
int32_t i_2 = 0
int32_t* var_88

if (arg1[8] s> 0)
    var_88 = nullptr
    
    do
        int32_t eax_10 = arg1[0xc]
        int32_t edx_7
        
        if (eax_10 != 0)
            int32_t eax_11
            int32_t edx_6
            edx_6:eax_11 = muls.dp.d(0x66666667, arg1[0xd] - eax_10)
            edx_7 = edx_6 s>> 3
        
        if (eax_10 == 0 || i u>= (edx_7 u>> 0x1f) + edx_7)
            __invalid_parameter_noinfo()
        
        sub_459050(arg1[0xc] + var_88, arg1[7], 0)
        int32_t j_1 = 0
        
        if (arg1[7] s> 0)
            int32_t j
            
            do
                int32_t eax_16 = arg1[0xc]
                int32_t edx_9
                
                if (eax_16 != 0)
                    int32_t eax_17
                    int32_t edx_8
                    edx_8:eax_17 = muls.dp.d(0x66666667, arg1[0xd] - eax_16)
                    edx_9 = edx_8 s>> 3
                
                if (eax_16 == 0 || i u>= (edx_9 u>> 0x1f) + edx_9)
                    __invalid_parameter_noinfo()
                
                int32_t* edi_3 = arg1[0xc] + var_88
                int32_t* ebx_1 = edi_3[2]
                
                if (ebx_1 u> edi_3[3])
                    __invalid_parameter_noinfo()
                
                if (edi_3 == 0)
                    __invalid_parameter_noinfo()
                
                int32_t var_68_1 = 0
                
                if (edi_3 == 0)
                    __invalid_parameter_noinfo()
                
                int32_t* var_70 = edi_3
                sub_453130(&var_70, j_1)
                int32_t* ebx_2 = var_70
                
                if (ebx_2 == 0)
                    __invalid_parameter_noinfo()
                    __invalid_parameter_noinfo()
                    __invalid_parameter_noinfo()
                else if (ebx_1 == 0)
                    __invalid_parameter_noinfo()
                
                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_12 = ebx_2[2]
                bool cond:7_1 = ecx_12 u<= ebx_2[3]
                var_7c = ecx_12
                
                if (not(cond:7_1))
                    __invalid_parameter_noinfo()
                    ecx_12 = var_7c
                
                if (((ebx_1 - ecx_12) s>> 2 << 5) + var_68_1 u>= *ebx_2)
                    __invalid_parameter_noinfo()
                
                j = j_1 + 1
                j_1 = j
                *ebx_1 &= not.d(1 << var_68_1.b)
                i = i_2
            while (j s< arg1[7])
        
        var_88 = &var_88[5]
        i += 1
        i_2 = i
    while (i s< arg1[8])

void* eax_28 = (*(*data_c78668 + 0x38))()
arg1[3] = arg3
arg1[4] = arg4
int32_t edi_5 = *(eax_28 + 8)
int32_t eax_29 = sub_480df0(float.t(arg3) * fconvert.t(0.899999976f))
int32_t eax_34
int32_t edx_16
edx_16:eax_34 = sx.q(edi_5 * arg3 s/ 0x280)
int32_t eax_43

if ((eax_34 - edx_16) s>> 1 s>= eax_29)
    eax_43 = eax_29
else
    int32_t eax_41
    int32_t edx_19
    edx_19:eax_41 = sx.q(edi_5 * arg3 s/ 0x280)
    eax_43 = (eax_41 - edx_19) s>> 1

int32_t ecx_18 = arg1[8]
int32_t edx_20 = arg1[7]
arg1[5] = eax_43
arg1[6] = eax_43
arg1[9] = edx_20 * (eax_43 + 0x10)
arg1[0xa] = ecx_18 * (eax_43 + 0x10)
var_88 = nullptr
void* ecx_20 = *arg2
int32_t var_a0_3 = 0
int32_t* var_a4_2 = &var_88
int32_t edx_22 = arg1[0xa]
int32_t var_a8_1 = 1
int32_t var_ac = 0x15
var_b0 = nullptr
var_4.b = 2
(*(ecx_20 + 0x5c))(arg2, arg1[9], edx_22, 1, var_b0, var_ac, var_a8_1, var_a4_2, var_a0_3)
int32_t* eax_47 = var_88

if (arg1[2] != eax_47)
    int32_t* edi_7 = eax_47
    
    if (eax_47 != 0)
        (*(*eax_47 + 4))(eax_47)
        eax_47 = var_88
    
    int32_t* ecx_22 = arg1[2]
    
    if (ecx_22 != 0)
        (*(*ecx_22 + 8))(ecx_22)
        eax_47 = var_88
    
    arg1[2] = edi_7

var_4.b = 1

if (eax_47 != 0)
    (*(*eax_47 + 8))(eax_47)

struct CPicture::VTable* var_44
sub_4521b0(&var_44)
struct _EXCEPTION_REGISTRATION_RECORD** edi_8 = arg1[2]
var_4.b = 3
int32_t var_64
(*edi_8)->__offset(0x44).d(edi_8, 0, &var_64)
int32_t eax_51 = (*edi_8)->__offset(0x4c).d
int32_t var_a0_8 = 0
int32_t var_a4_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD**** var_a8_3 = &var_7c
int32_t var_ac_1 = 0
var_b0 = edi_8
eax_51(var_b0, var_ac_1, var_a8_3, var_a4_4, var_a0_8)
struct _EXCEPTION_REGISTRATION_RECORD*** ecx_27 = var_7c
int32_t eax_52 = var_64
struct _EXCEPTION_REGISTRATION_RECORD** var_4c
var_b0 = var_4c
int32_t var_78
int32_t var_48
sub_4674a0(&var_44, var_b0, var_48, eax_52, var_78, ecx_27)
int32_t i_1 = 0

if (arg1[0xa] s> 0)
    do
        int32_t var_34
        int32_t var_1c
        sub_480cf0(var_1c * i_1 + var_34, 0, arg1[9] * 4)
        i_1 += 1
    while (i_1 s< arg1[0xa])

int32_t* eax_56 = arg1[2]
(*(*eax_56 + 0x50))(eax_56, 0)
var_4.b = 1
sub_452260(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
