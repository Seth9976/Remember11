// 函数: sub_45e3b0
// 地址: 0x45e3b0
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a3c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInputManager2::InputSpace2::CInputManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInputManager2::InputSpace2::CInputManager::VTable** var_10_1 = arg1
int32_t var_4 = 0
*arg1 = &InputSpace2::CInputManager::`vftable'{for `IInputManager2'}
void* eax_3 = sub_452130()
arg1[5] = eax_3
*(eax_3 + 0x15) = 1
void* eax_4 = arg1[5]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[5]
*eax_5 = eax_5
void* eax_6 = arg1[5]
*(eax_6 + 8) = eax_6
arg1[6] = 0
arg1[1] = arg2
arg1[7] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
