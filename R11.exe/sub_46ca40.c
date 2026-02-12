// 函数: sub_46ca40
// 地址: 0x46ca40
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49aa5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 4) == 0)
    result = 0x800401f0
else if (arg2 == 0 || arg11 == 0)
    result = 0x80070057
else
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x24)
    int32_t* var_54 = nullptr
    var_58 = nullptr
    int32_t esi_4 = arg9 * arg10
    int32_t var_30_1 = arg5
    int32_t var_40_1 = arg4 | 0x10100
    int32_t var_2c_1 = arg6
    int32_t var_28_1 = arg7
    int32_t var_24_1 = arg8
    int32_t edx_3 = *(*arg3 + 0x14)
    var_44 = 0x24
    int32_t var_3c_1 = esi_4
    int32_t var_34_1 = edx_3(eax_4)
    int32_t* eax_11 = *(arg1 + 4)
    result = (*(*eax_11 + 0xc))(eax_11, &var_44, &var_54, 0)
    
    if (result s>= 0)
        int32_t* eax_13 = var_54
        result = (**eax_13)(eax_13, 0x4a8424, &var_58)
        
        if (result s>= 0)
            int32_t ecx_3
            ecx_3.b = mulu.dp.d(arg9, 8) u>> 0x20 != 0
            void* eax_17 = j_sub_481fef(neg.d(ecx_3) | (arg9 * 8))
            
            if (eax_17 != 0)
                int32_t eax_18 = 0
                
                if (arg9 u> 0)
                    int32_t ecx_6 = arg10 - 1
                    
                    do
                        *(eax_17 + (eax_18 << 3)) = ecx_6
                        *(eax_17 + (eax_18 << 3) + 4) = arg11
                        eax_18 += 1
                        ecx_6 += arg10
                    while (eax_18 u< arg9)
                
                int32_t* eax_19 = var_58
                int32_t result_1 = (*(*eax_19 + 0xc))(eax_19, arg9, eax_17)
                int32_t* eax_20 = var_58
                
                if (result_1 s>= 0)
                    if (eax_20 != 0)
                        (*(*eax_20 + 8))(eax_20)
                        var_58 = nullptr
                    
                    j_sub_4813df(eax_17)
                    void* eax_21 = sub_481fef(0x48)
                    void* var_48_1 = eax_21
                    int32_t var_4 = 0
                    
                    if (eax_21 == 0)
                        result = 0
                        *arg2 = nullptr
                    else
                        int32_t var_70_8 = arg4
                        *arg2 = sub_46c380(eax_21, var_54, esi_4, arg3, arg10)
                        result = 0
                else
                    if (eax_20 != 0)
                        (*(*eax_20 + 8))(eax_20)
                        var_58 = nullptr
                    
                    j_sub_4813df(eax_17)
                    result = result_1
            else
                result = 0x8007000e

fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_58)
return result
