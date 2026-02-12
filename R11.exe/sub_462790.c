// 函数: sub_462790
// 地址: 0x462790
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_dc = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_dc
void var_cc
__builtin_memcpy(&var_cc, arg4, 0xb8)
int32_t ecx = *(arg1 + 4)
int32_t esi_1

if (ecx != 0)
    int32_t esi_3 = *(arg1 + 0xc) - ecx
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0xb21642c9, esi_3)
    esi_1 = esi_3 s/ 0xb8
else
    esi_1 = 0

if (arg3 != 0)
    int32_t eax_4
    
    if (ecx != 0)
        eax_4 = (*(arg1 + 8) - *(arg1 + 4)) s/ 0xb8
    else
        eax_4 = 0
    
    if (0x1642c85 - eax_4 u< arg3)
        sub_44d6e0()
        noreturn
    
    int32_t eax_8
    
    if (*(arg1 + 4) != 0)
        eax_8 = (*(arg1 + 8) - *(arg1 + 4)) s/ 0xb8
    else
        eax_8 = 0
    
    if (esi_1 u< eax_8 + arg3)
        uint32_t eax_14 = esi_1 u>> 1
        int32_t esi_6
        
        if (0x1642c85 - eax_14 u>= esi_1)
            esi_6 = esi_1 + eax_14
        else
            esi_6 = 0
        
        int32_t eax_15
        
        if (*(arg1 + 4) != 0)
            eax_15 = (*(arg1 + 8) - *(arg1 + 4)) s/ 0xb8
        else
            eax_15 = 0
        
        if (esi_6 u< eax_15 + arg3)
            esi_6 = sub_461910(arg1) + arg3
        
        int32_t var_e0_1 = 0
        void* eax_21 = sub_4601d0(esi_6)
        int32_t var_e8_1 = 0
        void* var_ec_1 = eax_21
        void* var_f0_1 = arg1
        int32_t var_8_1 = 0
        int32_t eax_24 = sub_462530(sub_462420(*(arg1 + 4), arg2, eax_21), arg3, &var_cc)
        int32_t var_e0_3 = 0
        void* var_e4_3 = eax_21
        void* var_e8_3 = arg1
        sub_462420(arg2, *(arg1 + 8), eax_24)
        int32_t eax_26 = *(arg1 + 4)
        
        if (eax_26 != 0)
            eax_26 = (*(arg1 + 8) - eax_26) s/ 0xb8
        
        void* eax_30 = *(arg1 + 4)
        
        if (eax_30 != 0)
            j_sub_4813df(eax_30)
        
        *(arg1 + 0xc) = esi_6 * 0xb8 + eax_21
        *(arg1 + 8) = (arg3 + eax_26) * 0xb8 + eax_21
        *(arg1 + 4) = eax_21
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
    
    int32_t ecx_16 = *(arg1 + 8)
    
    if ((ecx_16 - arg2) s/ 0xb8 u< arg3)
        void* eax_37 = arg3 * 0xb8
        sub_462570(arg2, ecx_16, eax_37 + arg2)
        int32_t var_8_2 = 2
        sub_462530(*(arg1 + 8), arg3 - (*(arg1 + 8) - arg2) s/ 0xb8, &var_cc)
        *(arg1 + 8) += eax_37
        int32_t eax_45 = sub_4623f0(arg2, *(arg1 + 8) - eax_37, &var_cc)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_45
    
    int32_t edi_5 = arg3 * 0xb8
    void* eax_47 = ecx_16 - edi_5
    *(arg1 + 8) = sub_462570(eax_47, ecx_16, ecx_16)
    sub_462460(arg2, eax_47, ecx_16)
    eax_3 = sub_4623f0(arg2, edi_5 + arg2, &var_cc)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
