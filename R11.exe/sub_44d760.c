// 函数: sub_44d760
// 地址: 0x44d760
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_4998f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) u>= 0x1ffffffe)
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
void* eax_4 = sub_44d510(eax_3, arg4, eax_3, arg5, 0)
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

if (*(*(eax_4 + 4) + 0x14) == 0)
    do
        void* ecx_3 = *eax_9
        int32_t* edx_2 = *(ecx_3 + 4)
        
        if (ecx_3 != *edx_2)
            int32_t edx_7 = *edx_2
            
            if (*(edx_7 + 0x14) != 0)
                if (esi_1 == *ecx_3)
                    esi_1 = ecx_3
                    sub_451b80(arg1, esi_1)
                
                *(*(esi_1 + 4) + 0x14) = 1
                *(*(*(esi_1 + 4) + 4) + 0x14) = 0
                void* eax_14 = *(*(esi_1 + 4) + 4)
                int32_t* ecx_12 = *(eax_14 + 8)
                *(eax_14 + 8) = *ecx_12
                void* edx_12 = *ecx_12
                
                if (*(edx_12 + 0x15) == 0)
                    *(edx_12 + 4) = eax_14
                
                ecx_12[1] = *(eax_14 + 4)
                void* edx_14 = *(arg1 + 4)
                
                if (eax_14 != *(edx_14 + 4))
                    int32_t** edx_15 = *(eax_14 + 4)
                    
                    if (eax_14 != *edx_15)
                        edx_15[2] = ecx_12
                    else
                        *edx_15 = ecx_12
                else
                    *(edx_14 + 4) = ecx_12
                
                *ecx_12 = eax_14
                *(eax_14 + 4) = ecx_12
            else
                *(ecx_3 + 0x14) = 1
                *(edx_7 + 0x14) = 1
                *(*(*eax_9 + 4) + 0x14) = 0
                esi_1 = *(*eax_9 + 4)
        else
            void* edx_3 = edx_2[2]
            
            if (*(edx_3 + 0x14) != 0)
                if (esi_1 == *(ecx_3 + 8))
                    esi_1 = ecx_3
                    sub_451b30(arg1, esi_1)
                
                *(*(esi_1 + 4) + 0x14) = 1
                *(*(*(esi_1 + 4) + 4) + 0x14) = 0
                sub_451b80(arg1, *(*(esi_1 + 4) + 4))
            else
                *(ecx_3 + 0x14) = 1
                *(edx_3 + 0x14) = 1
                *(*(*eax_9 + 4) + 0x14) = 0
                esi_1 = *(*eax_9 + 4)
        
        eax_9 = esi_1 + 4
    while (*(*(esi_1 + 4) + 0x14) == 0)

*(*(*(arg1 + 4) + 4) + 0x14) = 1
arg2[1] = eax_4
*arg2 = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
