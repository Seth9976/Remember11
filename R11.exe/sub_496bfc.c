// 函数: sub_496bfc
// 地址: 0x496bfc
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x4acbc0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4acbc0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_496c08
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 != 0xfffffffe)
    int32_t esi_3
    
    if (arg1 s>= 0 && arg1 u< data_2b6a888)
        esi_3 = (arg1 & 0x1f) * 0x38
    
    if (arg1 s< 0 || arg1 u>= data_2b6a888
            || (zx.d(*((&data_2b6a8a0)[arg1 s>> 5] + esi_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        sub_481d1b(0, 0, 0, 0, 0)
        result = 0xffffffff
    else if (sbb.d(0x7fffffff, 0x7fffffff, 0x7fffffff u< arg3) != 0xffffffff)
        sub_49357b(arg1)
        int32_t var_8_1 = 0
        int32_t result_1
        
        if ((*((&data_2b6a8a0)[arg1 s>> 5] + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            result_1 = 0xffffffff
        else
            result_1 = sub_49663b(arg1, arg2, arg3)
        
        int32_t var_8_2 = 0xfffffffe
        sub_496cef(&__saved_ebp)
        result = result_1
    else
        *___doserrno() = 0
        *__errno() = 0x16
        sub_481d1b(0, 0, 0, 0, 0)
        result = 0xffffffff
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_496cee
return result
