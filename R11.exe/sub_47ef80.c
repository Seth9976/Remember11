// 函数: sub_47ef80
// 地址: 0x47ef80
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49b1eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_14 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2

if (esi == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

void* eax_4 = sub_481fef(0x30)
arg2 = eax_4
int32_t var_4 = 0
struct IEnumPins::CEnumPins::VTable** eax_5

if (eax_4 == 0)
    eax_5 = nullptr
else
    eax_5 = sub_47e950(eax_4, arg1 - 0xc, nullptr)

*esi = eax_5
int32_t eax_6 = neg.d(eax_5)
fsbase->NtTib.ExceptionList = ExceptionList
return (sbb.d(eax_6, eax_6, eax_5 != 0) & 0x7ff8fff2) - 0x7ff8fff2
