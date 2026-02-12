// 函数: sub_45c900
// 地址: 0x45c900
// 来自: E:/torrent/Apollo/R11/R11.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_49a308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInputManager::InputSpace::CInputManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInputManager::InputSpace::CInputManager::VTable** var_10_1 = arg1
int32_t var_4 = 0
arg1[2] = 0
*arg1 = &InputSpace::CInputManager::`vftable'{for `IInputManager'}
sub_480cf0(&arg1[0x96], 0, 0x2c)
long double x87_r7 = float.t(0)
arg1[0xa1] = fconvert.s(x87_r7)
arg1[0xa2] = fconvert.s(x87_r7)
arg1[1] = arg2
sub_45c7b0(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
