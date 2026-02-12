// 函数: sub_46c8a0
// 地址: 0x46c8a0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49aa2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t result

if (*(arg1 + 4) == 0)
    result = 0x800401f0
else if (arg2 == 0 || arg5 u< 1)
    result = 0x80070057
else
    int32_t ecx
    ecx.b = mulu.dp.d(arg5, 4) u>> 0x20 != 0
    void* eax_6 = j_sub_481fef(neg.d(ecx) | (arg5 * 4))
    
    if (eax_6 != 0)
        int32_t eax_8 = (*(*arg3 + 0x3c))(eax_2)
        int32_t* esi_3 = **(arg1 + 4) + 0x14
        int32_t eax_11 = (*(*arg3 + 0x14))(0, eax_6)
        int32_t result_3 = (*esi_3)(*(arg1 + 4), eax_11)
        int32_t result_2 = result_3
        
        if (result_2 != 0x878000a)
            if (result_2 s>= 0)
                goto label_46c979
            
        label_46c9f7:
            j_sub_4813df(eax_6)
            result = result_2
        else
            result_1 = result_3
        label_46c979:
            
            if ((arg4 & 0x200) == 0)
                int32_t var_1c_1 = 1
                
                if (arg5 u> 1)
                    void* var_20_1 = eax_6 + 4
                    bool cond:3_1
                    
                    do
                        int32_t* eax_13 = *(arg1 + 4)
                        result_2 = (*(*eax_13 + 0x14))(eax_13, *eax_6, var_20_1)
                        
                        if (result_2 s< 0)
                            goto label_46c9f7
                        
                        var_20_1 += 4
                        cond:3_1 = var_1c_1 + 1 u< arg5
                        var_1c_1 += 1
                    while (cond:3_1)
            
            void* eax_18 = sub_481fef(0x3c)
            void* var_1c_2 = eax_18
            int32_t var_4 = 0
            struct CSound::VTable** eax_19
            
            if (eax_18 == 0)
                eax_19 = nullptr
            else
                eax_19 = sub_46c250(eax_18, eax_6, eax_8, arg5, 0, arg4, arg3)
            
            *arg2 = eax_19
            j_sub_4813df(eax_6)
            result = result_1
    else
        result = 0x8007000e

fsbase->NtTib.ExceptionList = ExceptionList
return result
