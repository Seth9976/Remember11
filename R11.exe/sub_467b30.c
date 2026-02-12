// 函数: sub_467b30
// 地址: 0x467b30
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_49a5b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
void* esi = arg1
int16_t* arg_10
int16_t* eax_3 = arg_10
arg1.w = *eax_3
arg_10.w = arg1.w
int32_t ecx = *(esi + 4)
arg_10:2.b = eax_3[1].b
int32_t ebx

if (ecx != 0)
    int32_t edx_3
    edx_3:eax_3 = muls.dp.d(0x55555556, *(esi + 0xc) - ecx)
    ebx = (edx_3 u>> 0x1f) + edx_3
else
    ebx = 0

if (arg3 != 0)
    int32_t eax_4
    
    if (ecx != 0)
        int32_t eax_5
        int32_t edx_6
        edx_6:eax_5 = muls.dp.d(0x55555556, *(esi + 8) - ecx)
        eax_4 = (edx_6 u>> 0x1f) + edx_6
    else
        eax_4 = 0
    
    if (0x55555555 - eax_4 u< arg3)
        sub_44d6e0()
        noreturn
    
    void* eax_8
    
    if (ecx != 0)
        int32_t eax_9
        int32_t edx_10
        edx_10:eax_9 = muls.dp.d(0x55555556, *(esi + 8) - ecx)
        eax_8 = (edx_10 u>> 0x1f) + edx_10
    else
        eax_8 = nullptr
    
    if (ebx u< eax_8 + arg3)
        uint32_t eax_14 = ebx u>> 1
        void* ebx_3
        
        if (0x55555555 - eax_14 u>= ebx)
            ebx_3 = ebx + eax_14
        else
            ebx_3 = nullptr
        
        void* eax_15
        
        if (ecx != 0)
            int32_t eax_16
            int32_t edx_14
            edx_14:eax_16 = muls.dp.d(0x55555556, *(esi + 8) - ecx)
            eax_15 = (edx_14 u>> 0x1f) + edx_14
        else
            eax_15 = nullptr
        
        if (ebx_3 u< eax_15 + arg3)
            ebx_3 = sub_466310(esi) + arg3
        
        int32_t var_2c_1 = 0
        void* eax_21 = sub_466330(ebx_3)
        int32_t var_34_1 = 0
        int16_t* var_38_1 = arg_10
        void* var_3c_1 = esi
        int32_t var_8_1 = 0
        void* eax_24 = sub_467980(sub_466940(*(esi + 4), arg2, eax_21), arg3, &arg_10)
        arg_10.b = 0
        int16_t* var_2c_3 = arg_10
        int16_t* var_30_3 = arg_10
        void* var_34_3 = esi
        sub_466940(arg2, *(esi + 8), eax_24)
        void* ecx_5 = *(esi + 4)
        int32_t eax_26
        
        if (ecx_5 != 0)
            int32_t eax_27
            int32_t edx_20
            edx_20:eax_27 = muls.dp.d(0x55555556, *(esi + 8) - ecx_5)
            eax_26 = (edx_20 u>> 0x1f) + edx_20
        else
            eax_26 = 0
        
        if (ecx_5 != 0)
            j_sub_4813df(ecx_5)
        
        *(esi + 0xc) = ebx_3 * 3 + eax_21
        *(esi + 8) = (arg3 + eax_26) * 3 + eax_21
        *(esi + 4) = eax_21
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
    
    int16_t* ecx_10 = *(esi + 8)
    void* eax_35 = arg3 * 3
    
    if ((ecx_10 - arg2) s/ 3 u< arg3)
        sub_467a50(arg2, ecx_10, eax_35 + arg2)
        int16_t* ecx_12 = *(esi + 8)
        int32_t var_8_2 = 2
        sub_467980(ecx_12, arg3 - (ecx_12 - arg2) s/ 3, &arg_10)
        *(esi + 8) += eax_35
        int16_t* eax_42 = sub_467410(arg2, *(esi + 8) - eax_35, &arg_10)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_42
    
    void* edi_4 = ecx_10 - eax_35
    *(esi + 8) = sub_467a50(edi_4, ecx_10, ecx_10)
    sub_467580(arg2, edi_4, ecx_10)
    eax_3 = sub_467410(arg2, eax_35 + arg2, &arg_10)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
