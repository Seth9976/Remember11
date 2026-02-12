// 函数: sub_468890
// 地址: 0x468890
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a60b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::streambuf::VTable** var_10 = arg1
*arg1 = &std::streambuf::`vftable'
sub_49782c(&arg1[1])
int32_t var_4 = 0
void* esi = sub_481fef(4)

if (esi == 0)
    esi = nullptr
else
    *esi = sub_497652()
    void* eax_5 = sub_497486()
    void var_14
    sub_4973f8(&var_14, 0)
    int32_t eax_6 = *(eax_5 + 4)
    
    if (eax_6 u< 0xffffffff)
        *(eax_5 + 4) = eax_6 + 1
    
    sub_497419(&var_14)

arg1[0xe] = esi
sub_468610(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
