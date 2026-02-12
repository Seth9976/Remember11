// 函数: sub_45d740
// 地址: 0x45d740
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInputManager::InputSpace::CInputManager::VTable** esi = arg1
struct IInputManager::InputSpace::CInputManager::VTable** var_10_1 = esi
*esi = &InputSpace::CInputManager::`vftable'{for `IInputManager'}
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_45d350(arg1)
*esi = &IInputManager::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
