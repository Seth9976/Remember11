// 函数: sub_4882c5
// 地址: 0x4882c5
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

void var_64
int32_t eax_1 = __security_cookie ^ &var_64
char* esi = arg1
void* eax_5 = __getptd() + 0x9c
void* result

if (esi == 0 || arg2 == 0 || arg3 == 0)
    result = nullptr
else if (*esi != 0x43 || esi[1] != 0)
    void* eax_9 = _strlen(esi)
    
    if (eax_9 u>= 0x83)
    label_4883c3:
        void var_98
        
        if (sub_487fc0(&var_98, esi) != 0)
            result = nullptr
        else
            if (sub_4904de(&var_98, eax_5 + 0x20, &var_98) != 0)
                *(eax_5 + 0x28) = zx.d(*(eax_5 + 0x24))
                sub_4880e9(eax_5 + 0xaf, 0x83, &var_98)
                void* eax_15
                
                if (*esi != 0)
                    eax_15 = eax_9
                
                if (*esi == 0 || eax_15 u>= 0x83)
                    eax_15 = nullptr
                    esi = &data_49e15e
                
                if (sub_48ecf8(eax_5 + 0x2c, 0x83, esi, eax_15 + 1) == 0)
                    goto label_488439
                
                int32_t var_d8_1
                __builtin_memset(&var_d8_1, 0, 0x14)
                sub_481c1f()
                noreturn
            
            result = nullptr
    else
        if (sub_48a480(eax_5 + 0xaf, esi) != 0)
            if (sub_48a480(eax_5 + 0x2c, esi) == 0)
                goto label_488439
            
            goto label_4883c3
        
    label_488439:
        
        if (arg4 != 0)
            sub_480ea0(arg4, eax_5 + 0x20, 6)
        
        if (arg5 != 0)
            sub_480ea0(arg5, eax_5 + 0x28, 4)
        
        if (sub_48a315(arg2, arg3, eax_5 + 0xaf) != 0)
            int32_t var_d8_2
            __builtin_memset(&var_d8_2, 0, 0x14)
            sub_481c1f()
            noreturn
        
        result = eax_5 + 0xaf
else
    if (sub_48a315(arg2, arg3, &(*U"XKYMC")[4]) != 0)
        int32_t var_d8
        __builtin_memset(&var_d8, 0, 0x14)
        sub_481c1f()
        noreturn
    
    if (arg4 != 0)
        *arg4 = 0
        arg4[1] = 0
        arg4[2] = 0
    
    if (arg5 != 0)
        *arg5 = 0
    
    result = arg2

sub_480cd2(eax_1 ^ &var_64)
return result
