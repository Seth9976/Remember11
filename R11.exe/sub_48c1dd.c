// 函数: sub_48c1dd
// 地址: 0x48c1dd
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x4aca80
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_4851d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4aca80 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_4 = &data_48c1e9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t (__stdcall* esi)(CRITICAL_SECTION* arg1) = sub_488bb0(data_c7b3b0)

if (esi == 0)
    if (sub_482ae8(&var_20) != 0)
        int32_t var_4c
        __builtin_memset(&var_4c, 0, 0x14)
        sub_481c1f()
        noreturn
    
    if (var_20 == 1)
        esi = sub_48c1cd
    else
        HMODULE hModule = GetModuleHandleA("kernel32.dll")
        
        if (hModule == 0)
            esi = sub_48c1cd
        else
            esi = GetProcAddress(hModule, "InitializeCriticalSectionAndSpinCount")
            
            if (esi == 0)
                esi = sub_48c1cd
    
    data_c7b3b0 = sub_488b39(esi)

int32_t var_8_1 = 0
int32_t result = esi(arg1, arg2)
int32_t var_8_2 = 0xfffffffe
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_48c2a1
return result
