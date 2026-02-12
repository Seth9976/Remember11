// 函数: sub_497ddb
// 地址: 0x497ddb
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x48
int32_t (* var_c)(void* arg1) = sub_49b3fa
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_17 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_17
void* const var_6c_7 = &data_497de7
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[0xf] == 0 || *(arg1 + 0x41) == 0)
    result.b = 1
else if ((*(*arg1 + 4))(0xffffffff) != 0xffffffff)
    void var_30
    sub_497db5(&var_30, 8, 0)
    int32_t var_8 = 0
    int32_t ebx_1
    
    while (true)
        void var_58
        int32_t eax_2 = sub_468570(sub_468940(&var_30, &var_58))
        void var_40
        int32_t var_34
        int32_t var_1c
        int32_t eax_6 = (*(*arg1[0xf] + 0x18))(&arg1[0x11], 
            sub_468570(sub_468940(&var_30, &var_40)), var_1c + eax_2, &var_34)
        
        if (eax_6 == 0)
            *(arg1 + 0x41) = 0
        label_497e93:
            void var_50
            int32_t eax_12 = sub_468570(sub_468940(&var_30, &var_50))
            int32_t edi_3 = var_34
            uint32_t edi_4 = edi_3 - eax_12
            uint32_t eax_15
            void var_48
            
            if (edi_3 != eax_12)
                eax_15 = sub_498fdb(sub_468570(sub_468940(&var_30, &var_48)), 1, edi_4, arg1[0x13])
            
            if (edi_3 != eax_12 && edi_4 != eax_15)
                ebx_1.b = 0
                break
            
            if (*(arg1 + 0x41) != 0)
                if (edi_4 != 0)
                    continue
                else
                    sub_468ba0(&var_30, 8, edi_4.b)
                    continue
        else
            if (eax_6 == 1)
                goto label_497e93
            
            if (eax_6 != 3)
                ebx_1.b = 0
                break
        
        ebx_1.b = 1
        break
    
    sub_44aa80(&var_30, 1, nullptr)
    result.b = ebx_1.b
else
    result.b = 0

sub_480cd2(eax_17 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_497eee
return result
