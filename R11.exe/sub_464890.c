// 函数: sub_464890
// 地址: 0x464890
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_499cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg3 + 0x2d) != 0)
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

int32_t* ebp = arg3
int32_t arg_8
sub_4646d0(&arg_8)
int32_t** eax_4 = *ebp
int32_t** esi
int32_t** edi

if (*(eax_4 + 0x2d) == 0)
    if (*(ebp[2] + 0x2d) != 0)
        edi = eax_4
        goto label_464948
    
    edi = arg3[2]
    
    if (arg3 == ebp)
        goto label_464948
    
    eax_4[1] = arg3
    *arg3 = *ebp
    
    if (arg3 != ebp[2])
        esi = arg3[1]
        
        if (*(edi + 0x2d) == 0)
            edi[1] = esi
        
        *esi = edi
        arg3[2] = ebp[2]
        *(ebp[2] + 4) = arg3
    else
        esi = arg3
    
    void* eax_11 = *(arg1 + 4)
    
    if (*(eax_11 + 4) != ebp)
        void** eax_12 = ebp[1]
        
        if (*eax_12 != ebp)
            eax_12[2] = arg3
        else
            *eax_12 = arg3
    else
        *(eax_11 + 4) = arg3
    
    arg3[1] = ebp[1]
    void* edx_2
    edx_2.b = ebp[0xb].b
    int32_t eax_13
    eax_13.b = arg3[0xb].b
    arg3[0xb].b = edx_2.b
    ebp[0xb].b = eax_13.b
else
    edi = ebp[2]
label_464948:
    esi = ebp[1]
    
    if (*(edi + 0x2d) == 0)
        edi[1] = esi
    
    void* eax_5 = *(arg1 + 4)
    
    if (*(eax_5 + 4) == ebp)
        *(eax_5 + 4) = edi
    else if (*esi != ebp)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* ebx_1 = *(arg1 + 4)
    
    if (*ebx_1 == ebp)
        int32_t* eax_6
        
        if (*(edi + 0x2d) == 0)
            eax_6 = sub_4646b0(edi)
        else
            eax_6 = esi
        
        *ebx_1 = eax_6
    
    void* ebx = *(arg1 + 4)
    
    if (*(ebx + 8) == ebp)
        if (*(edi + 0x2d) == 0)
            *(ebx + 8) = sub_464690(edi)
        else
            *(ebx + 8) = esi

if (ebp[0xb].b == 1)
    void* ecx_4 = arg1
    
    if (edi != *(*(ecx_4 + 4) + 4))
        while (edi[0xb].b == 1)
            int32_t* eax_15 = *esi
            
            if (edi != eax_15)
                if (eax_15[0xb].b == 0)
                    eax_15[0xb].b = 1
                    esi[0xb].b = 0
                    sub_464630(ecx_4, esi)
                    eax_15 = *esi
                    ecx_4 = arg1
                
                if (*(eax_15 + 0x2d) == 0)
                    if (*(eax_15[2] + 0x2c) != 1 || *(*eax_15 + 0x2c) != 1)
                        if (*(*eax_15 + 0x2c) == 1)
                            *(eax_15[2] + 0x2c) = 1
                            eax_15[0xb].b = 0
                            sub_464740(ecx_4, eax_15)
                            eax_15 = *esi
                            ecx_4 = arg1
                        
                        void* edx_10
                        edx_10.b = esi[0xb].b
                        eax_15[0xb].b = edx_10.b
                        esi[0xb].b = 1
                        *(*eax_15 + 0x2c) = 1
                        sub_464630(ecx_4, esi)
                        break
                    
                    eax_15[0xb].b = 0
            else
                eax_15 = esi[2]
                
                if (eax_15[0xb].b == 0)
                    eax_15[0xb].b = 1
                    esi[0xb].b = 0
                    sub_464740(ecx_4, esi)
                    eax_15 = esi[2]
                    ecx_4 = arg1
                
                if (*(eax_15 + 0x2d) == 0)
                    if (*(*eax_15 + 0x2c) != 1 || *(eax_15[2] + 0x2c) != 1)
                        if (*(eax_15[2] + 0x2c) == 1)
                            *(*eax_15 + 0x2c) = 1
                            eax_15[0xb].b = 0
                            sub_464630(ecx_4, eax_15)
                            eax_15 = esi[2]
                            ecx_4 = arg1
                        
                        void* edx_6
                        edx_6.b = esi[0xb].b
                        eax_15[0xb].b = edx_6.b
                        esi[0xb].b = 1
                        *(eax_15[2] + 0x2c) = 1
                        sub_464740(ecx_4, esi)
                        break
                    
                    eax_15[0xb].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*(ecx_4 + 4) + 4))
                break
    
    edi[0xb].b = 1

if (ebp[9] u>= 0x10)
    j_sub_4813df(ebp[4])

ebp[9] = 0xf
ebp[8] = 0
ebp[4].b = 0
j_sub_4813df(ebp)
int32_t eax_19 = *(arg1 + 8)

if (eax_19 u> 0)
    *(arg1 + 8) = eax_19 - 1

*arg2 = arg_8
arg2[1] = arg3
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
