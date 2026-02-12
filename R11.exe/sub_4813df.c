// 函数: sub_4813df
// 地址: 0x4813df
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x4ac5b0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4ac5b0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_4813eb
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    void* lpMem
    
    if (data_2b6a9b8 != 3)
        lpMem = arg1
    label_481447:
        result = HeapFree(data_c7ada4, HEAP_NONE, lpMem)
        
        if (result == 0)
            struct _EXCEPTION_REGISTRATION_RECORD*** eax_1 = __errno()
            result = sub_48502a(GetLastError())
            *eax_1 = result
    else
        sub_48677d(4)
        int32_t var_8_1 = 0
        void* eax = sub_4867f6(arg1)
        
        if (eax != 0)
            sub_486821(eax, arg1)
        
        int32_t var_8_2 = 0xfffffffe
        result = sub_481435()
        
        if (eax == 0)
            lpMem = arg1
            goto label_481447

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_48146c
return result
