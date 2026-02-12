// 函数: sub_498b08
// 地址: 0x498b08
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x4ace20
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ace20 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_8 = &data_498b14
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_1 = 0
int32_t eax
eax.b = arg1 != 0
uint32_t result

if (eax != 0)
    sub_48395e(arg1)
    int32_t var_8_1 = 0
    
    if ((arg1[3].b & 0x40) == 0)
        int32_t eax_2 = sub_48d847(arg1)
        int32_t eax_3
        
        if (eax_2 != 0xffffffff)
            eax_3 = sub_48d847(arg1)
        
        void* eax_9
        
        if (eax_2 == 0xffffffff || eax_3 == 0xfffffffe)
            eax_9 = &data_4cc7d8
        else
            void* edi_1 = &(&data_2b6a8a0)[sub_48d847(arg1) s>> 5]
            eax_9 = (sub_48d847(arg1) & 0x1f) * 0x38 + *edi_1
        
        void* eax_17
        
        if ((*(eax_9 + 0x24) & 0x7f) == 0)
            int32_t eax_10 = sub_48d847(arg1)
            int32_t eax_11
            
            if (eax_10 != 0xffffffff)
                eax_11 = sub_48d847(arg1)
            
            if (eax_10 == 0xffffffff || eax_11 == 0xfffffffe)
                eax_17 = &data_4cc7d8
            else
                void* edi_2 = &(&data_2b6a8a0)[sub_48d847(arg1) s>> 5]
                eax_17 = (sub_48d847(arg1) & 0x1f) * 0x38 + *edi_2
        
        if ((*(eax_9 + 0x24) & 0x7f) != 0 || (*(eax_17 + 0x24) & 0x80) != 0)
            *__errno() = 0x16
            sub_481d1b(0, 0, 0, 0, 0)
            result_1 = 0xffffffff
    
    if (result_1 == 0)
        int32_t temp0_1 = arg1[1]
        arg1[1] -= 1
        uint32_t result_2
        
        if (temp0_1 - 1 s< 0)
            result_2 = sub_49363d(arg1)
        else
            char* ecx_8 = *arg1
            result_2 = zx.d(*ecx_8)
            *arg1 = &ecx_8[1]
        
        result_1 = result_2
    
    int32_t var_8_2 = 0xfffffffe
    sub_498c37(arg1)
    result = result_1
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_498c33
return result
