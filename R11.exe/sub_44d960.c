// 函数: sub_44d960
// 地址: 0x44d960
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg3 + 0x15) != 0)
    int32_t var_38 = 0xf
    int32_t var_3c = 0
    char var_4c = 0
    void var_50
    sub_44b9c0(&var_50, "invalid map/set<T> iterator", 0x1b)
    int32_t var_4 = 0
    struct std::exception::VTable* var_34
    sub_44bb30(&var_34, &var_50)
    var_34 = &std::out_of_range::`vftable'{for `std::logic_error'}
    sub_482059(&var_34, 0x4aa7e8)
    noreturn

void* var_54 = arg3
int32_t arg_8
sub_450e20(&arg_8)
int32_t** eax_4 = *arg3
int32_t** esi
int32_t** edi

if (*(eax_4 + 0x15) == 0)
    if (*(arg3[2] + 0x15) != 0)
        edi = eax_4
        goto label_44da17
    
    edi = arg3[2]
    
    if (arg3 == arg3)
        goto label_44da17
    
    eax_4[1] = arg3
    *arg3 = *arg3
    
    if (arg3 != arg3[2])
        esi = arg3[1]
        
        if (*(edi + 0x15) == 0)
            edi[1] = esi
        
        *esi = edi
        arg3[2] = arg3[2]
        *(arg3[2] + 4) = arg3
    else
        esi = arg3
    
    void* eax_11 = *(arg1 + 4)
    
    if (*(eax_11 + 4) != arg3)
        void** eax_12 = arg3[1]
        
        if (*eax_12 != arg3)
            eax_12[2] = arg3
        else
            *eax_12 = arg3
    else
        *(eax_11 + 4) = arg3
    
    arg3[1] = arg3[1]
    void* edx_2
    edx_2.b = arg3[5].b
    int32_t eax_13
    eax_13.b = arg3[5].b
    arg3[5].b = edx_2.b
    arg3[5].b = eax_13.b
else
    edi = arg3[2]
label_44da17:
    esi = arg3[1]
    
    if (*(edi + 0x15) == 0)
        edi[1] = esi
    
    void* eax_5 = *(arg1 + 4)
    
    if (*(eax_5 + 4) == arg3)
        *(eax_5 + 4) = edi
    else if (*esi != arg3)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* ebx_1 = *(arg1 + 4)
    
    if (*ebx_1 == var_54)
        int32_t* eax_7
        
        if (*(edi + 0x15) == 0)
            eax_7 = sub_44cf40(edi)
        else
            eax_7 = esi
        
        *ebx_1 = eax_7
    
    int32_t* ebx = *(arg1 + 4)
    
    if (ebx[2] == var_54)
        if (*(edi + 0x15) == 0)
            ebx[2] = sub_450d60(edi)
        else
            ebx[2] = esi

if (*(var_54 + 0x14) == 1)
    if (edi != *(*(arg1 + 4) + 4))
        while (edi[5].b == 1)
            int32_t* eax_15 = *esi
            
            if (edi != eax_15)
                if (eax_15[5].b == 0)
                    eax_15[5].b = 1
                    esi[5].b = 0
                    sub_451b80(arg1, esi)
                    eax_15 = *esi
                
                if (*(eax_15 + 0x15) == 0)
                    void* edx_5 = eax_15[2]
                    
                    if (*(edx_5 + 0x14) != 1 || *(*eax_15 + 0x14) != 1)
                        if (*(*eax_15 + 0x14) == 1)
                            *(edx_5 + 0x14) = 1
                            eax_15[5].b = 0
                            sub_451b30(arg1, eax_15)
                            eax_15 = *esi
                        
                        void* ecx_14
                        ecx_14.b = esi[5].b
                        eax_15[5].b = ecx_14.b
                        esi[5].b = 1
                        *(*eax_15 + 0x14) = 1
                        sub_451b80(arg1, esi)
                        break
                    
                    eax_15[5].b = 0
            else
                eax_15 = esi[2]
                
                if (eax_15[5].b == 0)
                    eax_15[5].b = 1
                    esi[5].b = 0
                    sub_451b30(arg1, esi)
                    eax_15 = esi[2]
                
                if (*(eax_15 + 0x15) == 0)
                    void* edx_3 = *eax_15
                    
                    if (*(edx_3 + 0x14) != 1 || *(eax_15[2] + 0x14) != 1)
                        if (*(eax_15[2] + 0x14) == 1)
                            *(edx_3 + 0x14) = 1
                            eax_15[5].b = 0
                            sub_451b80(arg1, eax_15)
                            eax_15 = esi[2]
                        
                        void* ecx_9
                        ecx_9.b = esi[5].b
                        eax_15[5].b = ecx_9.b
                        esi[5].b = 1
                        *(eax_15[2] + 0x14) = 1
                        sub_451b30(arg1, esi)
                        break
                    
                    eax_15[5].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*(arg1 + 4) + 4))
                break
    
    edi[5].b = 1

j_sub_4813df(var_54)
int32_t eax_17 = *(arg1 + 8)

if (eax_17 u> 0)
    *(arg1 + 8) = eax_17 - 1

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
