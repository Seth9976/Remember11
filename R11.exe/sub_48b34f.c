// 函数: sub_48b34f
// 地址: 0x48b34f
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x4aca20
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4aca20 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_48b35b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
eax.b = arg1 != 0
uint32_t result

if (eax != 0)
    void* eax_2
    uint32_t result_1
    
    if (data_2b6a9b8 == 3)
        sub_48677d(4)
        int32_t var_8_1 = 0
        eax_2 = sub_4867f6(arg1)
        uint32_t result_2
        
        if (eax_2 == 0)
            result_1 = result_2
        else
            result_1 = *(arg1 - 4) - 9
            uint32_t result_3 = result_1
        int32_t var_8_2 = 0xfffffffe
        sub_48b3e9()
    
    if (data_2b6a9b8 != 3 || eax_2 == 0)
        result_1 = HeapSize(data_c7ada4, HEAP_NONE, arg1)
    
    result = result_1
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_48b3e0
return result
