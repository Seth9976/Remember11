// 函数: sub_4578d0
// 地址: 0x4578d0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_FullAliasWait@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
void* var_1c = arg1
int32_t* edi = arg4[1]
int32_t* result = nullptr
int32_t var_2c = *arg4

if (edi != 0)
    edi[1]
    edi[1] += 1

int32_t ecx_2 = *(arg1 + 4)
int32_t var_8_1 = 0
int32_t* ebx

if (ecx_2 != 0)
    ebx = (*(arg1 + 0xc) - ecx_2) s>> 3
else
    ebx = nullptr

if (arg3 != 0)
    if (ecx_2 != 0)
        result = (*(arg1 + 8) - ecx_2) s>> 3
    
    if (0x1fffffff - result u< arg3)
        sub_44d6e0()
        noreturn
    
    int32_t eax_6
    
    if (ecx_2 != 0)
        eax_6 = (*(arg1 + 8) - ecx_2) s>> 3
    else
        eax_6 = 0
    
    if (ebx u>= eax_6 + arg3)
        int32_t* ebx_6 = *(arg1 + 8)
        
        if ((ebx_6 - arg2) s>> 3 u>= arg3)
            int32_t ecx_15 = arg3 << 3
            int32_t* eax_34 = ebx_6 - ecx_15
            *(arg1 + 8) = sub_456ad0(eax_34, ebx_6, ebx_6)
            sub_4566c0(arg2, eax_34, ebx_6)
            result = sub_455de0(arg2, ecx_15 + arg2, &var_2c)
        else
            int32_t* eax_29 = arg3 << 3
            sub_456ad0(arg2, ebx_6, eax_29 + arg2)
            int32_t* eax_31 = *(arg1 + 8)
            var_8_1.b = 3
            sub_4567a0(eax_31, arg3 - ((eax_31 - arg2) s>> 3), &var_2c)
            *(arg1 + 8) += eax_29
            int32_t var_8_3 = 0
            result = sub_455de0(arg2, *(arg1 + 8) - eax_29, &var_2c)
    else
        uint32_t eax_11 = ebx u>> 1
        
        if (0x1fffffff - eax_11 u>= ebx)
            arg4 = ebx + eax_11
        else
            arg4 = nullptr
        
        int32_t eax_12
        
        if (ecx_2 != 0)
            eax_12 = (*(arg1 + 8) - ecx_2) s>> 3
        else
            eax_12 = 0
        
        if (arg4 u< eax_12 + arg3)
            int32_t eax_16
            
            if (ecx_2 != 0)
                eax_16 = (*(arg1 + 8) - ecx_2) s>> 3
            else
                eax_16 = 0
            
            arg4 = eax_16 + arg3
        
        int32_t var_40_1 = 0
        void* eax_20 = sub_44a100(arg4)
        int32_t var_48_1 = 0.d
        int32_t* var_4c_1 = arg3
        void* var_50_1 = arg1
        void* var_24_1 = eax_20
        void* var_18_1 = eax_20
        var_8_1.b = 1
        int32_t* eax_22 = sub_456350(*(arg1 + 4), arg2, eax_20)
        int32_t* var_18_2 = eax_22
        void* eax_23 = sub_4567a0(eax_22, arg3, &var_2c)
        int32_t var_40_3 = 0
        int32_t* var_44_3 = arg3
        void* var_48_3 = arg1
        void* var_18_3 = eax_23
        sub_456350(arg2, *(arg1 + 8), eax_23)
        void* ecx_6 = *(arg1 + 4)
        int32_t var_8_2 = 0
        int32_t eax_24
        
        if (ecx_6 != 0)
            eax_24 = (*(arg1 + 8) - ecx_6) s>> 3
        else
            eax_24 = 0
        
        if (ecx_6 != 0)
            int32_t* var_40_4 = arg3
            void* var_44_4 = arg1
            sub_453200(ecx_6, *(arg1 + 8))
            j_sub_4813df(*(arg1 + 4))
        
        result = arg4
        *(arg1 + 0xc) = eax_20 + (result << 3)
        *(arg1 + 8) = eax_20 + ((arg3 + eax_24) << 3)
        *(arg1 + 4) = eax_20

int32_t var_8_4 = 0xffffffff

if (edi != 0)
    result = &edi[1]
    bool cond:4_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:4_1))
        result = (*(*edi + 4))()
        bool cond:5_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:5_1))
            result = (*(*edi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
