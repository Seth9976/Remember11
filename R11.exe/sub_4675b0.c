// 函数: sub_4675b0
// 地址: 0x4675b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_8 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a588
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x20) = arg2
*(arg1 + 0x24) = arg3
*(arg1 + 0x30) = arg4
int32_t eax_4 = sub_4661c0(arg4)
int32_t ecx_1 = *(arg1 + 0x20)
*(arg1 + 0x2c) = eax_4
void* var_14
int32_t* var_10

if (arg4 != 0x32)
    if (arg4 == 0x31545844)
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(ecx_1)
        uint32_t edx_5 = *(arg1 + 0x24) * ecx_1
        *(arg1 + 0x28) = ((eax_7 + (edx_2 & 3)) s>> 2) * 8
        void* eax_13 = j_sub_481fef(edx_5)
        int32_t var_28_4 = 0
        var_14 = eax_13
        sub_451c90(&var_10, eax_13)
        int32_t var_4_1 = 1
        goto label_467693
    
    if (arg4 != 0x35545844)
        int32_t ecx_11 = ecx_1 * eax_4
        uint32_t edx_15 = *(arg1 + 0x24) * ecx_11
        *(arg1 + 0x28) = ecx_11
        void* eax_23 = j_sub_481fef(edx_15)
        int32_t var_28_9 = 0
        var_14 = eax_23
        sub_451c90(&var_10, eax_23)
        int32_t var_4_4 = 3
    else
        int32_t eax_18
        int32_t edx_10
        edx_10:eax_18 = sx.q(ecx_1)
        uint32_t edx_13 = *(arg1 + 0x24) * ecx_1
        *(arg1 + 0x28) = (eax_18 + (edx_10 & 3)) s>> 2 << 4
        void* eax_22 = j_sub_481fef(edx_13)
        int32_t var_28_7 = 0
        var_14 = eax_22
        sub_451c90(&var_10, eax_22)
        int32_t var_4_3 = 2
    
    *(arg1 + 8) = var_14
    sub_4559d0(arg1 + 0xc, &var_10)
    int32_t var_4_5 = 0xffffffff
    sub_451be0(&var_14)
else
    int32_t ecx_2 = ecx_1 * eax_4
    uint32_t edx_1 = *(arg1 + 0x24) * ecx_2
    *(arg1 + 0x28) = ecx_2
    void* eax_5 = j_sub_481fef(edx_1)
    int32_t var_28_2 = 0
    var_14 = eax_5
    sub_451c90(&var_10, eax_5)
    int32_t var_4 = 0
label_467693:
    *(arg1 + 8) = var_14
    sub_4559d0(arg1 + 0xc, &var_10)
    int32_t* edi_1 = var_10
    int32_t var_4_2 = 0xffffffff
    
    if (edi_1 != 0)
        bool cond:2_1 = edi_1[1] != 1
        edi_1[1]
        edi_1[1] -= 1
        
        if (not(cond:2_1))
            (*(*edi_1 + 4))(eax_2)
            bool cond:4_1 = edi_1[2] != 1
            edi_1[2]
            edi_1[2] -= 1
            
            if (not(cond:4_1))
                (*(*edi_1 + 8))()

int32_t* result

if (arg5 == 0)
    result = sub_452080(arg1 + 0x14, 0)
else
    int32_t ecx_15
    ecx_15.b = mulu.dp.d(arg5, 4) u>> 0x20 != 0
    void* eax_26 = j_sub_481fef(neg.d(ecx_15) | (arg5 * 4))
    int32_t var_28_12 = 0
    var_14 = eax_26
    sub_451d20(&var_10, eax_26)
    int32_t var_4_6 = 4
    *(arg1 + 0x14) = var_14
    result = sub_4559d0(arg1 + 0x18, &var_10)
    int32_t* edi_3 = var_10
    int32_t var_4_7 = 0xffffffff
    
    if (edi_3 != 0)
        bool cond:5_1 = edi_3[1] != 1
        edi_3[1]
        edi_3[1] -= 1
        
        if (not(cond:5_1))
            (*(*edi_3 + 4))(eax_2)
            result = &edi_3[2]
            bool cond:6_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:6_1))
                result = (*(*edi_3 + 8))()

*(arg1 + 0x10) = *(arg1 + 8)
*(arg1 + 0x1c) = arg5
fsbase->NtTib.ExceptionList = ExceptionList
return result
