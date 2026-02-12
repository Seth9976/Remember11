// 函数: sub_45dd90
// 地址: 0x45dd90
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a3a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
int32_t edx = arg4[1]
int32_t var_28 = *arg4
int32_t var_24 = edx
int32_t* eax_4 = arg4[4]
int32_t var_20 = arg4[2]
int32_t ecx_2 = *(arg1 + 4)
int32_t var_1c = arg4[3]
int32_t* var_18 = eax_4
int32_t ebx

if (ecx_2 != 0)
    int32_t edx_4
    edx_4:eax_4 = muls.dp.d(0x66666667, *(arg1 + 0xc) - ecx_2)
    int32_t edx_5 = edx_4 s>> 3
    ebx = (edx_5 u>> 0x1f) + edx_5
else
    ebx = 0

if (arg3 != 0)
    int32_t eax_5
    
    if (ecx_2 != 0)
        int32_t eax_6
        int32_t edx_8
        edx_8:eax_6 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_2)
        int32_t edx_9 = edx_8 s>> 3
        eax_5 = (edx_9 u>> 0x1f) + edx_9
    else
        eax_5 = 0
    
    if (0xccccccc - eax_5 u< arg3)
        sub_44d6e0()
        noreturn
    
    int32_t eax_9
    
    if (ecx_2 != 0)
        int32_t eax_10
        int32_t edx_13
        edx_13:eax_10 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_2)
        int32_t edx_14 = edx_13 s>> 3
        eax_9 = (edx_14 u>> 0x1f) + edx_14
    else
        eax_9 = 0
    
    if (ebx u< eax_9 + arg3)
        uint32_t eax_15 = ebx u>> 1
        void* ebx_3
        
        if (0xccccccc - eax_15 u>= ebx)
            ebx_3 = ebx + eax_15
        else
            ebx_3 = nullptr
        
        int32_t eax_16
        
        if (ecx_2 != 0)
            int32_t eax_17
            int32_t edx_18
            edx_18:eax_17 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_2)
            int32_t edx_19 = edx_18 s>> 3
            eax_16 = (edx_19 u>> 0x1f) + edx_19
        else
            eax_16 = 0
        
        if (ebx_3 u< eax_16 + arg3)
            ebx_3 = sub_45c530(arg1) + arg3
        
        int32_t var_3c_1 = 0
        void* eax_22 = sub_45d680(ebx_3)
        int32_t var_44_1 = 0
        arg4 = eax_22
        int32_t* var_48_1 = arg4
        void* var_4c_1 = arg1
        int32_t var_8_1 = 0
        void* eax_25 = sub_45d910(sub_45d860(*(arg1 + 4), arg2, eax_22), arg3, &var_28)
        int32_t var_3c_3 = 0
        int32_t* var_40_3 = arg4
        void* var_44_3 = arg1
        sub_45d860(arg2, *(arg1 + 8), eax_25)
        void* ecx_7 = *(arg1 + 4)
        int32_t eax_27
        
        if (ecx_7 != 0)
            int32_t eax_28
            int32_t edx_24
            edx_24:eax_28 = muls.dp.d(0x66666667, *(arg1 + 8) - ecx_7)
            int32_t edx_25 = edx_24 s>> 3
            eax_27 = (edx_25 u>> 0x1f) + edx_25
        else
            eax_27 = 0
        
        if (ecx_7 != 0)
            j_sub_4813df(ecx_7)
        
        *(arg1 + 0xc) = &arg4[ebx_3 * 5]
        *(arg1 + 8) = &arg4[(arg3 + eax_27) * 5]
        *(arg1 + 4) = arg4
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg4
    
    int32_t* ecx_12 = *(arg1 + 8)
    
    if ((ecx_12 - arg2) s/ 0x14 u< arg3)
        int32_t* eax_38 = arg3 * 0x14
        sub_45d950(arg2, ecx_12, eax_38 + arg2)
        int32_t* ecx_14 = *(arg1 + 8)
        int32_t var_8_2 = 2
        sub_45d910(ecx_14, arg3 - (ecx_14 - arg2) s/ 0x14, &var_28)
        *(arg1 + 8) += eax_38
        int32_t* eax_45 = sub_45c580(arg2, *(arg1 + 8) - eax_38, &var_28)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_45
    
    void* edi_5 = arg3 * 0x14
    int32_t* eax_47 = ecx_12 - edi_5
    *(arg1 + 8) = sub_45d950(eax_47, ecx_12, ecx_12)
    sub_45d8a0(arg2, eax_47, ecx_12)
    eax_4 = sub_45c580(arg2, edi_5 + arg2, &var_28)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
