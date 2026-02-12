// 函数: sub_48a6fb
// 地址: 0x48a6fb
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x4ac8c8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac8c8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_48a707
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0 && *arg1 == 0xe06d7363)
    result = arg1[7]
    
    if (result != 0)
        result = result[1]
        
        if (result != 0)
            int32_t var_8_1 = 0
            result = sub_4820d3(arg1[6], result)
            int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_48a73d
return result
