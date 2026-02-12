// 函数: sub_4590e0
// 地址: 0x4590e0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_4998f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) u>= 0x1c71c70)
    int32_t var_38 = 0xf
    int32_t var_3c = 0
    char var_4c = 0
    void var_50
    sub_44b9c0(&var_50, "map/set<T> too long", 0x13)
    int32_t var_4 = 0
    struct std::exception::VTable* var_34
    sub_44bb30(&var_34, &var_50)
    var_34 = &std::length_error::`vftable'{for `std::logic_error'}
    sub_482059(&var_34, 0x4aa6a4)
    noreturn

int32_t eax_3 = *(arg1 + 4)
void* eax_4 = sub_458d70(eax_3, arg4, eax_3, arg5, 0)
void* eax_5 = *(arg1 + 4)
*(arg1 + 8) += 1

if (arg4 == eax_5)
    *(eax_5 + 4) = eax_4
    **(arg1 + 4) = eax_4
    *(*(arg1 + 4) + 8) = eax_4
else if (arg3 == 0)
    arg4[2] = eax_4
    void* eax_8 = *(arg1 + 4)
    
    if (arg4 == *(eax_8 + 8))
        *(eax_8 + 8) = eax_4
else
    *arg4 = eax_4
    int32_t* eax_7 = *(arg1 + 4)
    
    if (arg4 == *eax_7)
        *eax_7 = eax_4

void* eax_9 = eax_4 + 4
void* esi_1 = eax_4

if (*(*(eax_4 + 4) + 0xa0) == 0)
    do
        void* ecx_3 = *eax_9
        int32_t* edx_2 = *(ecx_3 + 4)
        int32_t edx_3
        
        if (ecx_3 != *edx_2)
            edx_3 = *edx_2
            
            if (*(edx_3 + 0xa0) != 0)
                if (esi_1 == *ecx_3)
                    esi_1 = ecx_3
                    sub_450dc0(arg1, esi_1)
                
                *(*(esi_1 + 4) + 0xa0) = 1
                *(*(*(esi_1 + 4) + 4) + 0xa0) = 0
                void* eax_14 = *(*(esi_1 + 4) + 4)
                int32_t* ecx_11 = *(eax_14 + 8)
                *(eax_14 + 8) = *ecx_11
                void* edx_9 = *ecx_11
                
                if (*(edx_9 + 0xa1) == 0)
                    *(edx_9 + 4) = eax_14
                
                ecx_11[1] = *(eax_14 + 4)
                void* edx_11 = *(arg1 + 4)
                
                if (eax_14 != *(edx_11 + 4))
                    int32_t** edx_12 = *(eax_14 + 4)
                    
                    if (eax_14 != *edx_12)
                        edx_12[2] = ecx_11
                    else
                        *edx_12 = ecx_11
                else
                    *(edx_11 + 4) = ecx_11
                
                *ecx_11 = eax_14
                *(eax_14 + 4) = ecx_11
            else
            label_459228:
                *(ecx_3 + 0xa0) = 1
                *(edx_3 + 0xa0) = 1
                *(*(*eax_9 + 4) + 0xa0) = 0
                esi_1 = *(*eax_9 + 4)
        else
            edx_3 = edx_2[2]
            
            if (*(edx_3 + 0xa0) == 0)
                goto label_459228
            
            if (esi_1 == *(ecx_3 + 8))
                esi_1 = ecx_3
                sub_451ad0(arg1, esi_1)
            
            *(*(esi_1 + 4) + 0xa0) = 1
            *(*(*(esi_1 + 4) + 4) + 0xa0) = 0
            sub_450dc0(arg1, *(*(esi_1 + 4) + 4))
        eax_9 = esi_1 + 4
    while (*(*(esi_1 + 4) + 0xa0) == 0)

*(*(*(arg1 + 4) + 4) + 0xa0) = 1
arg2[1] = eax_4
*arg2 = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
