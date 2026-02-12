// 函数: sub_498359
// 地址: 0x498359
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t __saved_ebp_1 = 0
int32_t (* var_c)(void* arg1) = sub_49b4ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
void* const var_24_1 = &data_498365
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1

if (esi != 0 && *esi == 0)
    void* eax = sub_481fef(8)
    arg1 = eax
    int32_t var_8 = 0
    struct std::codecvt_base::std::codecvt<char, char, int32_t>::VTable** eax_1
    
    if (eax == 0)
        eax_1 = nullptr
    else
        eax_1 = sub_4982b4(eax, 0)
    
    *esi = eax_1

int32_t var_24 = 2
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_49839b
return 2
