// 函数: sub_497c14
// 地址: 0x497c14
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x58
int32_t (* var_c)(void* arg1) = sub_49b3cd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_24 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_24
void* const var_7c_11 = &data_497c20
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3

if (**(arg1 + 0x20) != 0)
    eax_3 = **(arg1 + 0x20)

uint32_t result

if (**(arg1 + 0x20) == 0 || eax_3 u>= **(arg1 + 0x30) + eax_3)
    int32_t* eax_6 = *(arg1 + 0x4c)
    
    if (eax_6 == 0)
        result = 0xffffffff
    else
        char result_1
        
        if (*(arg1 + 0x3c) != 0)
            int32_t var_18_1 = 0xf
            void var_30
            sub_44a160(&var_30, 0)
            int32_t var_8 = 0
            uint32_t result_2
            
            while (true)
                uint32_t eax_18 = sub_498b08(*(arg1 + 0x4c))
                
                if (eax_18 != 0xffffffff)
                    sub_468ba0(&var_30, 1, eax_18.b)
                    void var_48
                    int32_t eax_9 = sub_468570(sub_468940(&var_30, &var_48))
                    void var_68
                    int32_t var_40
                    int32_t var_38
                    int32_t var_1c
                    int32_t eax_13 = (*(**(arg1 + 0x3c) + 0x10))(arg1 + 0x44, 
                        sub_468570(sub_468940(&var_30, &var_68)), var_1c + eax_9, &var_38, 
                        &result_1, &var_30, &var_40)
                    
                    if (eax_13 s>= 0)
                        if (eax_13 s<= 1)
                            void* ecx_14 = &var_30
                            
                            if (var_40 != &result_1)
                                void var_58
                                int32_t eax_20 = sub_468570(sub_468940(ecx_14, &var_58))
                                void* i = var_1c - var_38 + eax_20
                                
                                while (i s> 0)
                                    i -= 1
                                    sub_49387b(sx.d(*(i + var_38)), *(arg1 + 0x4c))
                            else
                                void var_60
                                int32_t eax_17 = sub_468570(sub_468940(ecx_14, &var_60))
                                sub_44aad0(&var_30, nullptr, var_38 - eax_17)
                                continue
                            
                            result_2 = zx.d(result_1)
                            break
                        
                        if (eax_13 == 3)
                            void var_50
                            
                            if (var_1c u< 1)
                                continue
                            else
                                sub_481d4f(&result_1, 1, sub_468570(sub_468940(&var_30, &var_50)), 
                                    1)
                            result_2 = zx.d(result_1)
                            break
                
                result_2 = 0xffffffff
                break
            
            sub_44aa80(&var_30, 1, nullptr)
            result = result_2
        else if (sub_497a42(&result_1, eax_6) == 0)
            result = 0xffffffff
        else
            result = zx.d(result_1)
else
    int32_t* eax_4 = *(arg1 + 0x30)
    *eax_4 -= 1
    int32_t* esi_1 = *(arg1 + 0x20)
    char* eax_5 = *esi_1
    *esi_1 = &eax_5[1]
    result = zx.d(*eax_5)

sub_480cd2(eax_24 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_497c54
return result
