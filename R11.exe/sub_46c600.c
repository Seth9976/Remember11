// 函数: sub_46c600
// 地址: 0x46c600
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a9eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CSound::VTable** var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t result

if (*(arg1 + 4) == 0)
    result = 0x800401f0
else if (arg2 == 0 || arg9 u< 1)
    result = 0x80070057
else
    int32_t ecx_2
    ecx_2.b = mulu.dp.d(arg9, 4) u>> 0x20 != 0
    void* eax_8 = j_sub_481fef(neg.d(ecx_2) | (arg9 * 4))
    int32_t result_2
    
    if (eax_8 != 0)
        int32_t eax_11 = (*(*arg3 + 0xc))(eax_4)
        int32_t var_44
        __builtin_memset(&var_44, 0, 0x24)
        int32_t var_40_1 = arg4
        int32_t var_3c_1 = eax_11
        int32_t var_28_1 = arg7
        int32_t var_2c_1 = arg6
        int32_t var_24_1 = arg8
        int32_t eax_14 = *(*arg3 + 0x14)
        var_44 = 0x24
        int32_t var_30_1 = arg5
        int32_t var_34_1 = eax_14()
        int32_t* eax_16 = *(arg1 + 4)
        int32_t result_3 = (*(*eax_16 + 0xc))(eax_16, &var_44, eax_8, 0)
        result_2 = result_3
        
        if (result_2 != 0x878000a)
            if (result_2 s< 0)
                goto label_46c6bb
            
            goto label_46c785
        
        result_1 = result_3
    label_46c785:
        int32_t var_54_1 = 1
        
        if ((arg4 & 0x200) != 0)
            if (arg9 u> 1)
                var_58 = eax_8 + 4
                
                while (true)
                    int32_t* eax_25 = *(arg1 + 4)
                    result_2 = (*(*eax_25 + 0xc))(eax_25, &var_44, var_58, 0)
                    
                    if (result_2 s< 0)
                        break
                    
                    var_58 = &var_58[1]
                    bool cond:3_1 = var_54_1 + 1 u< arg9
                    var_54_1 += 1
                    
                    if (not(cond:3_1))
                        goto label_46c7d3
                
                goto label_46c6bb
        else if (arg9 u> 1)
            var_58 = eax_8 + 4
            
            while (true)
                int32_t* eax_18 = *(arg1 + 4)
                result_2 = (*(*eax_18 + 0x14))(eax_18, *eax_8, var_58)
                
                if (result_2 s< 0)
                    break
                
                var_58 = &var_58[1]
                bool cond:4_1 = var_54_1 + 1 u< arg9
                var_54_1 += 1
                
                if (not(cond:4_1))
                    goto label_46c7d3
            
            goto label_46c6bb
        
    label_46c7d3:
        struct CSound::VTable** eax_22 = sub_481fef(0x3c)
        var_58 = eax_22
        int32_t var_4 = 0
        struct CSound::VTable** eax_23
        
        if (eax_22 == 0)
            eax_23 = nullptr
        else
            eax_23 = sub_46c250(eax_22, eax_8, eax_11, arg9, arg3, arg4, 0)
        
        *arg2 = eax_23
        j_sub_4813df(eax_8)
        result = result_1
    else
        result_2 = 0x8007000e
    label_46c6bb:
        
        if (arg3 != 0)
            (**arg3)(1)
        
        if (eax_8 != 0)
            j_sub_4813df(eax_8)
        
        result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_480cd2(eax_2 ^ &var_58)
return result
