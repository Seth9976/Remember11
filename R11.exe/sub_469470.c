// 函数: sub_469470
// 地址: 0x469470
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a77b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1

if (esi != 0 && *esi == 0)
    void* eax_3 = sub_481fef(0x18)
    arg1 = eax_3
    int32_t var_4 = 0
    struct std::ctype_base::std::ctype<char>::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_469180(eax_3, 0, 0, 0)
    
    *esi = eax_4

fsbase->NtTib.ExceptionList = ExceptionList
return 2
