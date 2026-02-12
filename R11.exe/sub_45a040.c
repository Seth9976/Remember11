// 函数: sub_45a040
// 地址: 0x45a040
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a19b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = data_c78210
void** edx = ecx[1]
void* ebx_2 = arg2 << 0x10 | arg3
void** eax_3 = edx
void** edi = ecx

while (*(eax_3 + 0x15) == 0)
    if (eax_3[3] u>= ebx_2)
        edi = eax_3
        eax_3 = *eax_3
    else
        eax_3 = eax_3[2]

void** eax_4 = edx
void* esi = &data_c7820c
void** ebp = ecx

while (*(eax_4 + 0x15) == 0)
    if (ebx_2 u>= eax_4[3])
        eax_4 = eax_4[2]
    else
        ebp = eax_4
        eax_4 = *eax_4

void* var_20 = &data_c7820c
void** var_1c = edi

while (true)
    if (esi == 0 || esi != &data_c7820c)
        __invalid_parameter_noinfo()
    
    if (edi == ebp)
        int32_t* eax_7 = sub_481fef(0x40)
        var_20 = eax_7
        void** result = nullptr
        int32_t var_4 = 0
        
        if (eax_7 != 0)
            result = sub_459c50(eax_7, arg1, arg2, arg3)
        
        int32_t var_4_1 = 0xffffffff
        var_20 = ebx_2
        void** result_1 = result
        void* var_18
        void** eax_9 = sub_4568d0(&data_c7820c, &var_18, &var_20)
        *result = *eax_9
        result[1] = eax_9[1]
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (esi == 0)
        __invalid_parameter_noinfo()
    
    if (edi == *(esi + 4))
        __invalid_parameter_noinfo()
    
    void* eax_5 = edi[4]
    
    if (*(eax_5 + 0x3c) != *(eax_5 + 0x20) * *(eax_5 + 0x1c))
        break
    
    sub_450e20(&var_20)
    edi = var_1c
    esi = var_20

if (edi == *(esi + 4))
    __invalid_parameter_noinfo()

fsbase->NtTib.ExceptionList = ExceptionList
return edi[4]
