// 函数: sub_44eb40
// 地址: 0x44eb40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_499998
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_58
void* var_48 = arg1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
void var_34
void* result = sub_44b8e0(&var_34, arg4, nullptr, 0xffffffff)
int32_t ebx = *(arg1 + 4)
int32_t var_8_1 = 0
void* result_1

if (ebx != 0)
    result = (*(arg1 + 0xc) - ebx) s/ 0x1c
    result_1 = result
else
    result_1 = nullptr

if (arg3 != 0)
    int32_t eax_7
    
    if (ebx != 0)
        eax_7 = (*(arg1 + 8) - ebx) s/ 0x1c
    else
        eax_7 = 0
    
    if (0x9249249 - eax_7 u< arg3)
        sub_44d6e0()
        noreturn
    
    int32_t eax_11
    
    if (ebx != 0)
        eax_11 = (*(arg1 + 8) - ebx) s/ 0x1c
    else
        eax_11 = 0
    
    if (result_1 u>= eax_11 + arg3)
        void* ecx_23 = *(arg1 + 8)
        int32_t eax_38 = arg3 << 3
        
        if ((ecx_23 - arg2) s/ 0x1c u>= arg3)
            void* eax_51 = (eax_38 - arg3) * 4
            void* edi_4 = ecx_23 - eax_51
            *(arg1 + 8) = sub_44eae0(edi_4, ecx_23, ecx_23)
            sub_44eb10(arg2, edi_4, ecx_23)
            result = sub_44e130(arg2, eax_51 + arg2, &var_34)
        else
            void* eax_41 = (eax_38 - arg3) * 4
            sub_44eae0(arg2, ecx_23, eax_41 + arg2)
            var_8_1.b = 3
            sub_44eaa0(*(arg1 + 8), arg3 - (*(arg1 + 8) - arg2) s/ 0x1c, &var_34)
            *(arg1 + 8) += eax_41
            int32_t var_8_2 = 0
            result = sub_44e130(arg2, *(arg1 + 8) - eax_41, &var_34)
    else
        uint32_t eax_17 = result_1 u>> 1
        void* var_3c
        
        if (0x9249249 - eax_17 u>= result_1)
            var_3c = result_1 + eax_17
        else
            var_3c = nullptr
        
        int32_t eax_18
        
        if (ebx != 0)
            eax_18 = (*(arg1 + 8) - ebx) s/ 0x1c
        else
            eax_18 = 0
        
        if (var_3c u< eax_18 + arg3)
            var_3c = sub_44cf10(arg1) + arg3
        
        int32_t var_5c_1 = 0
        void* result_2 = sub_44d090(var_3c)
        int32_t var_38
        var_38.b = 0
        int32_t var_64_1 = 0
        int32_t var_68_1 = 0
        void* var_6c_1 = arg1
        void* result_3 = result_2
        var_8_1.b = 1
        void* eax_26 = sub_44e220(*(arg1 + 4), arg2, result_2)
        void* var_40_1 = eax_26
        void* eax_27 = sub_44eaa0(eax_26, arg3, &var_34)
        var_38.b = 0
        int32_t var_5c_3 = 0
        int32_t var_60_3 = 0
        void* var_64_3 = arg1
        void* var_40_2 = eax_27
        sub_44e220(arg2, *(arg1 + 8), eax_27)
        void* ebx_2 = *(arg1 + 4)
        int32_t eax_28
        
        if (ebx_2 != 0)
            eax_28 = (*(arg1 + 8) - ebx_2) s/ 0x1c
        else
            eax_28 = 0
        
        if (ebx_2 != 0)
            int32_t var_5c_4 = var_38
            void* var_60_4 = arg1
            sub_44dc20(ebx_2, *(arg1 + 8))
            j_sub_4813df(*(arg1 + 4))
        
        result = result_2
        *(arg1 + 0xc) = result + var_3c * 0x1c
        *(arg1 + 8) = result + (arg3 + eax_28) * 0x1c
        *(arg1 + 4) = result

if (var_1c u>= 0x10)
    result = j_sub_4813df(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &__saved_ebp)
return result
