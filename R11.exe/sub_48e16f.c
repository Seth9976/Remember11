// 函数: sub_48e16f
// 地址: 0x48e16f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x4acb20
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acb20 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_2 = &data_48e17b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0xffffffff
int32_t var_24 = 0xffffffff
uint32_t result

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff
else if (arg1 s< 0 || arg1 u>= data_2b6a888)
    *___doserrno() = 0
    *__errno() = 9
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff
else
    int32_t esi_3 = (arg1 & 0x1f) * 0x38
    
    if ((zx.d(*((&data_2b6a8a0)[arg1 s>> 5] + esi_3 + 4)) & 1) != 0)
        int32_t edx_2 = sub_49357b(arg1)
        int32_t var_8_1 = 0
        int32_t eax_7 = (&data_2b6a8a0)[arg1 s>> 5]
        uint32_t result_1
        int32_t var_24_1
        
        if ((*(eax_7 + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            result_1 = 0xffffffff
            var_24_1 = 0xffffffff
        else
            uint32_t result_2
            int32_t edx_3
            result_2, edx_3 = sub_48e0ec(eax_7, edx_2, arg1, arg1, arg2, arg3, arg4)
            result_1 = result_2
            var_24_1 = edx_3
        int32_t var_8_2 = 0xfffffffe
        sub_48e27e(&__saved_ebp)
        result = result_1
    else
        *___doserrno() = 0
        *__errno() = 9
        sub_481d1b(0, 0, 0, 0, 0)
        result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_48e27d
return result
