// 函数: sub_47cd10
// 地址: 0x47cd10
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49af4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEnumPins::CEnumPins::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEnumPins::CEnumPins::VTable** var_10_1 = arg1
*arg1 = &CEnumPins::`vftable'{for `IEnumPins'}
void* eax_3 = arg1[3]
int32_t var_4 = 0
(*(*(eax_3 + 0xc) + 8))(eax_3 + 0xc)
int32_t var_4_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_480720(&arg1[6])
fsbase->NtTib.ExceptionList = ExceptionList
return result
