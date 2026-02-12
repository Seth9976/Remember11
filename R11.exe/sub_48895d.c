// 函数: sub_48895d
// 地址: 0x48895d
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x4ac7e0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_7 = 0x4ac7e0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_488969
int32_t var_8_8 = 0xfffffffe
int32_t var_c = var_8_7
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_1 = nullptr
void* result

if (arg1 u<= 5)
    void* eax_1 = __getptd()
    void* var_20_1 = eax_1
    sub_487e23()
    *(eax_1 + 0x70) |= 0x10
    int32_t var_8_1 = 0
    void* eax_2 = sub_48b2bc(0xd8, 1)
    void* var_28_1 = eax_2
    
    if (eax_2 != 0)
        int32_t var_8_2 = 1
        sub_487dc1(eax_2, sub_48677d(0xc), *(eax_1 + 0x6c))
        int32_t var_8_3 = 0
        void* result_2 = sub_48878f(sub_488a8b(), eax_2, arg2, arg1)
        result_1 = result_2
        
        if (result_2 == 0)
            sub_487d35(eax_2)
            sub_487b6f(eax_2)
        else
            if (arg2 != 0 && sub_48a480(arg2, U"C") != 0)
                data_c7b238 = 1
            
            sub_48677d(0xc)
            int32_t var_8_4 = 2
            sub_487de5(eax_1 + 0x6c, eax_2)
            sub_487d35(eax_2)
            
            if ((*(eax_1 + 0x70) & 2) == 0 && (data_4cc654.b & 1) == 0)
                sub_487de5(&data_4cc738, *(eax_1 + 0x6c))
                sub_480ea0(0xc7b23c, data_4cc738 + 0xc, 0x18)
                sub_487e99()
            
            int32_t var_8_5 = 0
            sub_488a97()
    
    int32_t var_8_6 = 0xfffffffe
    sub_488ac8(eax_1)
    result = result_1
else
    *__errno() = 0x16
    sub_481d1b(0, 0, 0, 0, 0)
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_488ac4
return result
